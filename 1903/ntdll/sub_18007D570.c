/*
 * XREFs of sub_18007D570 @ 0x18007D570
 * Callers:
 *     RtlCheckForOrphanedCriticalSections @ 0x18007D540 (RtlCheckForOrphanedCriticalSections.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     sub_180032D40 @ 0x180032D40 (sub_180032D40.c)
 *     ZwQueryInformationThread @ 0x18009CB80 (ZwQueryInformationThread.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     RtlApplicationVerifierStop @ 0x1800DB1B0 (RtlApplicationVerifierStop.c)
 */

void __fastcall sub_18007D570(HANDLE ThreadHandle, __int64 *a2)
{
  HANDLE UniqueThread; // r14
  _UNKNOWN **i; // r12
  _UNKNOWN **v6; // rsi
  __int64 v7; // r15
  __int64 *j; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // [rsp+30h] [rbp-118h]
  __int64 v12; // [rsp+40h] [rbp-108h]
  int *ThreadInformation; // [rsp+78h] [rbp-D0h] BYREF
  int v14; // [rsp+80h] [rbp-C8h]
  int v15; // [rsp+84h] [rbp-C4h]
  _BYTE v16[88]; // [rsp+88h] [rbp-C0h] BYREF
  _BYTE v17[24]; // [rsp+E0h] [rbp-68h] BYREF
  void *v18; // [rsp+F8h] [rbp-50h]
  int v19; // [rsp+160h] [rbp+18h] BYREF
  HANDLE v20; // [rsp+168h] [rbp+20h]

  memset(v16, 0, sizeof(v16));
  v19 = 0;
  if ( byte_180166551 && !byte_180166958 && !NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( ThreadHandle == (HANDLE)-2LL )
    {
      if ( !NtCurrentTeb()->CountOfOwnedCriticalSections )
        return;
      UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    }
    else
    {
      ThreadInformation = &v19;
      v15 = 4;
      v14 = 108;
      if ( ZwQueryInformationThread(ThreadHandle, ThreadTebInformation, &ThreadInformation, 0x10u, 0LL) < 0
        || !v19
        || ZwQueryInformationThread(ThreadHandle, ThreadBasicInformation, v17, 0x30u, 0LL) < 0 )
      {
        return;
      }
      UniqueThread = v18;
    }
    v20 = UniqueThread;
    RtlAcquireSRWLockShared(&stru_1801662F8);
    for ( i = (_UNKNOWN **)off_18015F570; i != &off_18015F570; i = (_UNKNOWN **)*i )
    {
      v6 = i - 2;
      v7 = (__int64)*(i - 1);
      if ( a2 )
      {
        for ( j = a2; ; ++j )
        {
          v9 = *j;
          if ( !*j )
            break;
          if ( v7 == v9 )
          {
            if ( v9 )
              goto LABEL_24;
            break;
          }
        }
      }
      *(_OWORD *)v16 = *(_OWORD *)v7;
      *(_OWORD *)&v16[16] = *(_OWORD *)(v7 + 16);
      *(_QWORD *)&v16[32] = *(_QWORD *)(v7 + 32);
      if ( *(_UNKNOWN ***)v16 == v6 )
      {
        if ( *(HANDLE *)&v16[16] == UniqueThread )
        {
          v12 = sub_180032D40(*((_WORD *)v6 + 1), *((_WORD *)v6 + 22));
          RtlApplicationVerifierStop(
            512,
            (unsigned int)"Thread is in a state in which it cannot own a critical section",
            (_DWORD)UniqueThread,
            (unsigned int)"Thread identifier",
            v7,
            (__int64)"Critical section address",
            (__int64)(i - 2),
            (__int64)"Critical section debug info address",
            v12,
            (__int64)"Initialization stack trace. Use dps to dump it if non-NULL.");
        }
      }
      else
      {
        *(_OWORD *)&v16[40] = **(_OWORD **)v16;
        *(_OWORD *)&v16[56] = *(_OWORD *)(*(_QWORD *)v16 + 16LL);
        *(_OWORD *)&v16[72] = *(_OWORD *)(*(_QWORD *)v16 + 32LL);
        v10 = sub_180032D40(*(unsigned __int16 *)&v16[42], *(unsigned __int16 *)&v16[84]);
        v11 = sub_180032D40(*((_WORD *)v6 + 1), *((_WORD *)v6 + 22));
        RtlApplicationVerifierStop(
          515,
          (unsigned int)"double initialized or corrupted critical section",
          v7,
          (unsigned int)"Critical section address.",
          (__int64)(i - 2),
          (__int64)"Address of the debug info found in the active list.",
          v11,
          (__int64)"First initialization stack trace. Use dps to dump it if non-NULL.",
          v10,
          (__int64)"Second initialization stack trace. Use dps to dump it if non-NULL.");
      }
LABEL_24:
      ;
    }
    RtlReleaseSRWLockShared(&stru_1801662F8);
  }
}
