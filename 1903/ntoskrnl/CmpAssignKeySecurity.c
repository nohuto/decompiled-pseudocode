/*
 * XREFs of CmpAssignKeySecurity @ 0x140784110
 * Callers:
 *     CmpSecurityMethod @ 0x14064F260 (CmpSecurityMethod.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     CmSiFreeMemory @ 0x14008BCE0 (CmSiFreeMemory.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     CmpUnlockRegistry @ 0x1405F5E50 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F5E90 (CmpLockRegistry.c)
 *     CmpUnlockKcbStack @ 0x1405F83F0 (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405FD520 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpLockKcbStackExclusive @ 0x140638B38 (CmpLockKcbStackExclusive.c)
 *     CmpGetSecurityDescriptorNode @ 0x14063D1F0 (CmpGetSecurityDescriptorNode.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140650290 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpAssignSecurityToKcb @ 0x140656884 (CmpAssignSecurityToKcb.c)
 *     CmpGetKeyNodeForKcb @ 0x140656ACC (CmpGetKeyNodeForKcb.c)
 */

__int64 __fastcall CmpAssignKeySecurity(__int64 a1, void *a2)
{
  char v4; // r15
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v6; // di
  ULONG_PTR v7; // rdi
  __int64 v8; // rbp
  __int64 v9; // r8
  struct _LOOKASIDE_LIST_EX *v10; // r9
  int started; // ebx
  signed __int64 *v12; // rsi
  __int64 KeyNodeForKcb; // rax
  __int64 v14; // r12
  unsigned int *v15; // rbp
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-68h]
  PPRIVILEGE_SET v18[12]; // [rsp+38h] [rbp-60h] BYREF
  BOOLEAN v19; // [rsp+B0h] [rbp+18h]
  __int64 v20; // [rsp+B8h] [rbp+20h] BYREF

  v20 = 0xFFFFFFFFLL;
  v4 = 0;
  memset(v18, 0, 0x20uLL);
  CurrentThread = KeGetCurrentThread();
  WORD1(v18[0]) = -1;
  --CurrentThread->KernelApcDisable;
  v19 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  v6 = v19;
  if ( v19 )
  {
    CmpLockRegistry();
    v7 = *(_QWORD *)(a1 + 8);
    v4 = 1;
    v8 = *(_QWORD *)(v7 + 32);
    started = CmpStartKcbStackForTopLayerKcb((__int64)v18, v7, v9, v10);
    if ( started >= 0 )
    {
      CmpLockKcbStackExclusive((__int64)v18);
      started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
      if ( started >= 0 )
      {
        v12 = (signed __int64 *)(v8 + 72);
        ExAcquirePushLockSharedEx(v8 + 72, 0LL);
        BugCheckParameter2 = v8 + 1776;
        ExAcquirePushLockExclusiveEx(v8 + 1776, 0LL);
        KeyNodeForKcb = CmpGetKeyNodeForKcb(v7, (__int64)&v20, 1);
        *(_QWORD *)(a1 - 8) = 0LL;
        v14 = KeyNodeForKcb;
        if ( !KeGetCurrentThread()->PreviousMode && (*(_DWORD *)(v8 + 4152) & 0x20) != 0 && *(_DWORD *)(v8 + 1864) )
          a2 = (void *)(*(_QWORD *)(*(_QWORD *)(v8 + 1880) + 8LL) + 32LL);
        v15 = (unsigned int *)(KeyNodeForKcb + 44);
        started = CmpGetSecurityDescriptorNode(
                    *(_QWORD *)(v7 + 32),
                    *(unsigned int *)(v7 + 40),
                    KeyNodeForKcb,
                    a2,
                    0,
                    (unsigned int *)(KeyNodeForKcb + 44));
        if ( started >= 0 )
        {
          CmpAssignSecurityToKcb(v7, *v15, 0LL, 1, 0);
          started = 0;
        }
        if ( v14 )
          (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v7 + 32) + 16LL))(*(_QWORD *)(v7 + 32), &v20);
        ExReleasePushLockEx(BugCheckParameter2, 0LL);
        if ( _InterlockedCompareExchange64(v12, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v12);
        KeAbPostRelease((ULONG_PTR)v12);
      }
      CmpUnlockKcbStack((__int64)v18);
    }
    v6 = v19;
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    started = -1073741431;
  }
  if ( v18[3] )
    CmSiFreeMemory(v18[3]);
  if ( v4 )
    CmpUnlockRegistry();
  if ( v6 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return (unsigned int)started;
}
