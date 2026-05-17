/*
 * XREFs of RtlCheckHeldCriticalSections @ 0x180081990
 * Callers:
 *     RtlCheckForOrphanedCriticalSections @ 0x180081970 (RtlCheckForOrphanedCriticalSections.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180009E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180009F00 (RtlAcquireSRWLockShared.c)
 *     RtlpGetStackTraceAddressEx @ 0x18005C7A0 (RtlpGetStackTraceAddressEx.c)
 *     ZwQueryInformationThread @ 0x1800A0780 (ZwQueryInformationThread.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     RtlApplicationVerifierStop @ 0x1800DD360 (RtlApplicationVerifierStop.c)
 */

struct _PEB *__fastcall RtlCheckHeldCriticalSections(__int64 a1, __int64 *a2)
{
  struct _PEB *result; // rax
  char *v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  void *UniqueThread; // r12
  _UNKNOWN **i; // r14
  _UNKNOWN **v9; // rsi
  __int64 v10; // r15
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // [rsp+30h] [rbp-118h]
  __int64 StackTraceAddress; // [rsp+40h] [rbp-108h]
  int *v16; // [rsp+80h] [rbp-C8h] BYREF
  int v17; // [rsp+88h] [rbp-C0h]
  int v18; // [rsp+8Ch] [rbp-BCh]
  _QWORD v19[11]; // [rsp+90h] [rbp-B8h] BYREF
  _BYTE v20[24]; // [rsp+E8h] [rbp-60h] BYREF
  void *v21; // [rsp+100h] [rbp-48h]
  int v23; // [rsp+160h] [rbp+18h] BYREF
  void *v24; // [rsp+168h] [rbp+20h]

  memset(&v19[5], 0, 0x30uLL);
  result = (struct _PEB *)memset(v19, 0, 0x28uLL);
  v23 = 0;
  if ( RtlpCriticalSectionVerifier )
  {
    if ( !RtlpCsVerifyDoNotBreak )
    {
      result = NtCurrentPeb();
      if ( !result->Ldr->ShutdownInProgress )
      {
        if ( a1 == -2 )
        {
          result = (struct _PEB *)NtCurrentTeb();
          if ( !HIDWORD(result->ApiSetMap) )
            return result;
          UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
        }
        else
        {
          v16 = &v23;
          v18 = 4;
          v17 = 108;
          result = (struct _PEB *)ZwQueryInformationThread(a1, 26LL, &v16);
          if ( (int)result < 0 )
            return result;
          if ( !v23 )
            return result;
          result = (struct _PEB *)ZwQueryInformationThread(a1, 0LL, v20);
          if ( (int)result < 0 )
            return result;
          UniqueThread = v21;
        }
        v24 = UniqueThread;
        RtlAcquireSRWLockShared(&RtlCriticalSectionLock, v4, v5, v6);
        for ( i = (_UNKNOWN **)RtlCriticalSectionList; i != &RtlCriticalSectionList; i = (_UNKNOWN **)*i )
        {
          v9 = i - 2;
          v10 = (__int64)*(i - 1);
          v11 = a2;
          if ( a2 )
          {
            while ( 1 )
            {
              v12 = *v11;
              if ( !*v11 )
                break;
              if ( v10 == v12 )
              {
                if ( v12 )
                  goto LABEL_23;
                break;
              }
              ++v11;
            }
          }
          *(_OWORD *)v19 = *(_OWORD *)v10;
          *(_OWORD *)&v19[2] = *(_OWORD *)(v10 + 16);
          v19[4] = *(_QWORD *)(v10 + 32);
          if ( (_UNKNOWN **)v19[0] == v9 )
          {
            if ( (void *)v19[2] == UniqueThread )
            {
              StackTraceAddress = RtlpGetStackTraceAddressEx(*((_WORD *)v9 + 1), *((_WORD *)v9 + 22));
              RtlApplicationVerifierStop(
                512,
                (unsigned int)"Thread is in a state in which it cannot own a critical section",
                (_DWORD)UniqueThread,
                (unsigned int)"Thread identifier",
                v10,
                (__int64)"Critical section address",
                (__int64)(i - 2),
                (__int64)"Critical section debug info address",
                StackTraceAddress,
                (__int64)"Initialization stack trace. Use dps to dump it if non-NULL.");
            }
          }
          else
          {
            *(_OWORD *)&v19[5] = *(_OWORD *)v19[0];
            *(_OWORD *)&v19[7] = *(_OWORD *)(v19[0] + 16LL);
            *(_OWORD *)&v19[9] = *(_OWORD *)(v19[0] + 32LL);
            v13 = RtlpGetStackTraceAddressEx(WORD1(v19[5]), WORD2(v19[10]));
            v14 = RtlpGetStackTraceAddressEx(*((_WORD *)i - 7), *((_WORD *)i + 14));
            RtlApplicationVerifierStop(
              515,
              (unsigned int)"double initialized or corrupted critical section",
              v10,
              (unsigned int)"Critical section address.",
              (__int64)(i - 2),
              (__int64)"Address of the debug info found in the active list.",
              v14,
              (__int64)"First initialization stack trace. Use dps to dump it if non-NULL.",
              v13,
              (__int64)"Second initialization stack trace. Use dps to dump it if non-NULL.");
          }
LABEL_23:
          ;
        }
        return (struct _PEB *)RtlReleaseSRWLockShared(&RtlCriticalSectionLock);
      }
    }
  }
  return result;
}
