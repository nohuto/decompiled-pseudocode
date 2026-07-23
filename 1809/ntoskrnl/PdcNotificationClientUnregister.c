/*
 * XREFs of PdcNotificationClientUnregister @ 0x14089BD48
 * Callers:
 *     PopInitializeDirectedDrips @ 0x1409DD6E0 (PopInitializeDirectedDrips.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExWaitForRundownProtectionRelease @ 0x140089880 (ExWaitForRundownProtectionRelease.c)
 *     ExfReleasePushLock @ 0x1400913C0 (ExfReleasePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PdcpPortReleaseResources @ 0x14089B8CC (PdcpPortReleaseResources.c)
 *     PdcAcquireRwLockExclusive @ 0x14089C12C (PdcAcquireRwLockExclusive.c)
 */

__int64 __fastcall PdcNotificationClientUnregister(struct _KTHREAD **P)
{
  unsigned int v2; // edi
  signed __int64 *v3; // rbx
  signed __int64 v4; // rax
  signed __int64 v5; // rdx
  signed __int64 v6; // rtt
  signed __int64 v8; // rax
  signed __int64 v9; // rdx
  signed __int64 v10; // rtt
  struct _EX_RUNDOWN_REF *v11; // rdi
  LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  if ( !P || *(_DWORD *)P != 1315136592 )
    return (unsigned int)-1073741585;
  v3 = (signed __int64 *)(P + 1);
  PdcAcquireRwLockExclusive(P + 1);
  if ( P[14] == KeGetCurrentThread() )
  {
    v2 = -1073741823;
LABEL_8:
    v3[1] = 0LL;
    _m_prefetchw(v3);
    v4 = *v3;
    v5 = *v3 - 16;
    if ( (*v3 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v5 = 0LL;
    if ( (v4 & 2) != 0 || (v6 = *v3, v6 != _InterlockedCompareExchange64(v3, v5, v4)) )
      ExfReleasePushLock(v3);
    KeAbPostRelease((ULONG_PTR)v3);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return v2;
  }
  if ( !*((_BYTE *)P + 88) )
  {
    v2 = -1073741431;
    goto LABEL_8;
  }
  *((_BYTE *)P + 88) = 0;
  v3[1] = 0LL;
  _m_prefetchw(v3);
  v8 = *v3;
  v9 = *v3 - 16;
  if ( (*v3 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v9 = 0LL;
  if ( (v8 & 2) != 0 || (v10 = *v3, v10 != _InterlockedCompareExchange64(v3, v9, v8)) )
    ExfReleasePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  while ( *((_DWORD *)P + 24) )
  {
    Interval.QuadPart = -300000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  v11 = (struct _EX_RUNDOWN_REF *)P[5];
  ExWaitForRundownProtectionRelease(v11 + 1);
  _InterlockedExchange64((volatile __int64 *)&v11[1], 1LL);
  PdcpPortReleaseResources(v11);
  P[5] = 0LL;
  *(_DWORD *)P = 0;
  ExFreePoolWithTag(P, 0);
  return 0LL;
}
