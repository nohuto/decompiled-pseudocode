/*
 * XREFs of CmpAssignKeySecurity @ 0x14075CB4C
 * Callers:
 *     CmpSecurityMethod @ 0x1405CC2E0 (CmpSecurityMethod.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x140581AB8 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpGetKeyNodeForKcb @ 0x1405AB400 (CmpGetKeyNodeForKcb.c)
 *     CmpLockKcbStackExclusive @ 0x1405AB5D8 (CmpLockKcbStackExclusive.c)
 *     CmpAssignSecurityToKcb @ 0x1405ADAE4 (CmpAssignSecurityToKcb.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405CCDE0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405D78BC (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpUnlockKcbStack @ 0x1406450E0 (CmpUnlockKcbStack.c)
 *     CmpLockRegistry @ 0x140646120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpAssignKeySecurity(__int64 a1, void *a2)
{
  char v4; // r15
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v6; // di
  int started; // ebx
  ULONG_PTR v8; // rdi
  __int64 v9; // rbp
  signed __int64 *v10; // rsi
  __int64 KeyNodeForKcb; // rax
  __int64 v12; // r12
  unsigned int *v13; // rbp
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-68h]
  PPRIVILEGE_SET v16[12]; // [rsp+48h] [rbp-60h] BYREF
  BOOLEAN v17; // [rsp+C0h] [rbp+18h]
  __int64 v18; // [rsp+C8h] [rbp+20h] BYREF

  v18 = 0xFFFFFFFFLL;
  v4 = 0;
  memset(v16, 0, 0x20uLL);
  CurrentThread = KeGetCurrentThread();
  WORD1(v16[0]) = -1;
  --CurrentThread->KernelApcDisable;
  v17 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  v6 = v17;
  if ( v17 )
  {
    CmpLockRegistry();
    v8 = *(_QWORD *)(a1 + 8);
    v4 = 1;
    v9 = *(_QWORD *)(v8 + 24);
    started = CmpStartKcbStackForTopLayerKcb((__int64)v16, v8);
    if ( started >= 0 )
    {
      CmpLockKcbStackExclusive((__int64)v16);
      started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
      if ( started >= 0 )
      {
        v10 = (signed __int64 *)(v9 + 72);
        ExAcquirePushLockSharedEx(v9 + 72, 0LL);
        BugCheckParameter2 = v9 + 1776;
        ExAcquirePushLockExclusiveEx(v9 + 1776, 0LL);
        KeyNodeForKcb = CmpGetKeyNodeForKcb(v8, (__int64)&v18, 1);
        *(_QWORD *)(a1 - 8) = 0LL;
        v12 = KeyNodeForKcb;
        if ( !KeGetCurrentThread()->PreviousMode && (*(_DWORD *)(v9 + 4152) & 0x20) != 0 && *(_DWORD *)(v9 + 1864) )
          a2 = (void *)(*(_QWORD *)(*(_QWORD *)(v9 + 1880) + 8LL) + 32LL);
        v13 = (unsigned int *)(KeyNodeForKcb + 44);
        started = CmpGetSecurityDescriptorNodeEx(
                    *(_QWORD *)(v8 + 24),
                    *(unsigned int *)(v8 + 32),
                    KeyNodeForKcb,
                    *(_DWORD *)(v8 + 32) >> 31,
                    a2,
                    0,
                    (unsigned int *)(KeyNodeForKcb + 44));
        if ( started >= 0 )
        {
          CmpAssignSecurityToKcb(v8, *v13, 0LL, 1, 0);
          started = 0;
        }
        if ( v12 )
          (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v8 + 24) + 16LL))(*(_QWORD *)(v8 + 24), &v18);
        ExReleasePushLockEx(BugCheckParameter2, 0LL);
        if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v10);
        KeAbPostRelease((ULONG_PTR)v10);
      }
      CmpUnlockKcbStack((__int64)v16);
    }
    v6 = v17;
  }
  else
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    started = -1073741431;
  }
  if ( v16[3] )
    CmSiFreeMemory(v16[3]);
  if ( v4 )
    CmpUnlockRegistry();
  if ( v6 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return (unsigned int)started;
}
