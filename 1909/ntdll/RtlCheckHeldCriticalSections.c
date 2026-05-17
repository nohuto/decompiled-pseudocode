/*
 * XREFs of RtlCheckHeldCriticalSections @ 0x18007DC10
 * Callers:
 *     RtlCheckForOrphanedCriticalSections @ 0x18007DBE0 (RtlCheckForOrphanedCriticalSections.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     RtlpGetStackTraceAddressEx @ 0x180032D40 (RtlpGetStackTraceAddressEx.c)
 *     ZwQueryInformationThread @ 0x18009D330 (ZwQueryInformationThread.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 *     RtlApplicationVerifierStop @ 0x1800DB270 (RtlApplicationVerifierStop.c)
 */

struct _PEB *__fastcall RtlCheckHeldCriticalSections(__int64 a1, __int64 *a2)
{
  struct _PEB *result; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r9
  void *UniqueThread; // r14
  _UNKNOWN **i; // r12
  _UNKNOWN **v10; // rsi
  __int64 v11; // r15
  __int64 *j; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // [rsp+30h] [rbp-118h]
  __int64 StackTraceAddress; // [rsp+40h] [rbp-108h]
  int *v17; // [rsp+78h] [rbp-D0h] BYREF
  int v18; // [rsp+80h] [rbp-C8h]
  int v19; // [rsp+84h] [rbp-C4h]
  _QWORD v20[11]; // [rsp+88h] [rbp-C0h] BYREF
  _BYTE v21[24]; // [rsp+E0h] [rbp-68h] BYREF
  void *v22; // [rsp+F8h] [rbp-50h]
  int v23; // [rsp+160h] [rbp+18h] BYREF
  void *v24; // [rsp+168h] [rbp+20h]

  memset(&v20[5], 0, 0x30uLL);
  result = (struct _PEB *)memset(v20, 0, 0x28uLL);
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
          v17 = &v23;
          v19 = 4;
          v18 = 108;
          result = (struct _PEB *)ZwQueryInformationThread(a1, 26LL, &v17, 16LL, 0LL);
          if ( (int)result < 0 )
            return result;
          if ( !v23 )
            return result;
          result = (struct _PEB *)ZwQueryInformationThread(a1, 0LL, v21, 48LL, 0LL);
          if ( (int)result < 0 )
            return result;
          UniqueThread = v22;
        }
        v24 = UniqueThread;
        RtlAcquireSRWLockShared(&RtlCriticalSectionLock, v5, v6, v7);
        for ( i = (_UNKNOWN **)RtlCriticalSectionList; i != &RtlCriticalSectionList; i = (_UNKNOWN **)*i )
        {
          v10 = i - 2;
          v11 = (__int64)*(i - 1);
          if ( a2 )
          {
            for ( j = a2; ; ++j )
            {
              v13 = *j;
              if ( !*j )
                break;
              if ( v11 == v13 )
              {
                if ( v13 )
                  goto LABEL_24;
                break;
              }
            }
          }
          *(_OWORD *)v20 = *(_OWORD *)v11;
          *(_OWORD *)&v20[2] = *(_OWORD *)(v11 + 16);
          v20[4] = *(_QWORD *)(v11 + 32);
          if ( (_UNKNOWN **)v20[0] == v10 )
          {
            if ( (void *)v20[2] == UniqueThread )
            {
              StackTraceAddress = RtlpGetStackTraceAddressEx(*((_WORD *)v10 + 1), *((_WORD *)v10 + 22));
              RtlApplicationVerifierStop(
                512,
                (unsigned int)"Thread is in a state in which it cannot own a critical section",
                (_DWORD)UniqueThread,
                (unsigned int)"Thread identifier",
                v11,
                (__int64)"Critical section address",
                (__int64)(i - 2),
                (__int64)"Critical section debug info address",
                StackTraceAddress,
                (__int64)"Initialization stack trace. Use dps to dump it if non-NULL.");
            }
          }
          else
          {
            *(_OWORD *)&v20[5] = *(_OWORD *)v20[0];
            *(_OWORD *)&v20[7] = *(_OWORD *)(v20[0] + 16LL);
            *(_OWORD *)&v20[9] = *(_OWORD *)(v20[0] + 32LL);
            v14 = RtlpGetStackTraceAddressEx(WORD1(v20[5]), WORD2(v20[10]));
            v15 = RtlpGetStackTraceAddressEx(*((_WORD *)v10 + 1), *((_WORD *)v10 + 22));
            RtlApplicationVerifierStop(
              515,
              (unsigned int)"double initialized or corrupted critical section",
              v11,
              (unsigned int)"Critical section address.",
              (__int64)(i - 2),
              (__int64)"Address of the debug info found in the active list.",
              v15,
              (__int64)"First initialization stack trace. Use dps to dump it if non-NULL.",
              v14,
              (__int64)"Second initialization stack trace. Use dps to dump it if non-NULL.");
          }
LABEL_24:
          ;
        }
        return (struct _PEB *)RtlReleaseSRWLockShared(&RtlCriticalSectionLock);
      }
    }
  }
  return result;
}
