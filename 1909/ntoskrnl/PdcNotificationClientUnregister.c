/*
 * XREFs of PdcNotificationClientUnregister @ 0x1408D8F08
 * Callers:
 *     PopDirectedDripsInitializePhase3 @ 0x140A0937C (PopDirectedDripsInitializePhase3.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14003AEC0 (KeDelayExecutionThread.c)
 *     ExWaitForRundownProtectionRelease @ 0x140082C50 (ExWaitForRundownProtectionRelease.c)
 *     RtlpSysVolFree @ 0x1406E51F0 (RtlpSysVolFree.c)
 *     PdcpPortReleaseResources @ 0x1408D8AFC (PdcpPortReleaseResources.c)
 *     PdcAcquireRwLockExclusive @ 0x1408D925C (PdcAcquireRwLockExclusive.c)
 *     PdcReleaseRwLockExclusive @ 0x1408D92E0 (PdcReleaseRwLockExclusive.c)
 */

__int64 __fastcall PdcNotificationClientUnregister(char *a1)
{
  unsigned int v2; // ebx
  ULONG_PTR v3; // rdi
  struct _EX_RUNDOWN_REF *v5; // rdi
  LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || *(_DWORD *)a1 != 1315136592 )
    return (unsigned int)-1073741585;
  v3 = (ULONG_PTR)(a1 + 8);
  PdcAcquireRwLockExclusive(a1 + 8);
  if ( *((struct _KTHREAD **)a1 + 14) == KeGetCurrentThread() )
  {
    v2 = -1073741823;
LABEL_8:
    PdcReleaseRwLockExclusive(v3);
    return v2;
  }
  if ( !a1[88] )
  {
    v2 = -1073741431;
    goto LABEL_8;
  }
  a1[88] = 0;
  PdcReleaseRwLockExclusive(v3);
  if ( *((_DWORD *)a1 + 24) )
  {
    Interval.QuadPart = -300000LL;
    do
      KeDelayExecutionThread(0, 0, &Interval);
    while ( *((_DWORD *)a1 + 24) );
  }
  v5 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)a1 + 5);
  ExWaitForRundownProtectionRelease(v5 + 1);
  _InterlockedExchange64((volatile __int64 *)&v5[1], 1LL);
  PdcpPortReleaseResources(v5);
  *((_QWORD *)a1 + 5) = 0LL;
  *(_DWORD *)a1 = 0;
  RtlpSysVolFree(a1);
  return 0LL;
}
