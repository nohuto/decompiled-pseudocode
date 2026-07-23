/*
 * XREFs of CmpQueryKeySecurity @ 0x1405CC550
 * Callers:
 *     CmpSecurityMethod @ 0x1405CC2E0 (CmpSecurityMethod.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     SeQuerySecurityDescriptorInfo @ 0x1405CC720 (SeQuerySecurityDescriptorInfo.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405CCDE0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405D78BC (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1405D9920 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpLockKcbStackShared @ 0x140645050 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x1406450E0 (CmpUnlockKcbStack.c)
 *     CmpLockRegistry @ 0x140646120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140695010 (CmpTransSearchAddTransFromKeyBody.c)
 */

__int64 __fastcall CmpQueryKeySecurity(_QWORD *a1, DWORD *a2, void *a3, ULONG *a4, __int64 a5)
{
  char v5; // si
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rcx
  BOOLEAN v12; // r14
  NTSTATUS started; // ebx
  __int64 v14; // rbp
  PPRIVILEGE_SET v15; // rcx
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+20h] [rbp-58h] BYREF
  PPRIVILEGE_SET v18[5]; // [rsp+28h] [rbp-50h] BYREF

  v5 = 0;
  a5 = 0LL;
  memset(v18, 0, 0x20uLL);
  WORD1(v18[0]) = -1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( v12 )
  {
    CmpLockRegistry(v11);
    v5 = 1;
    started = CmpStartKcbStackForTopLayerKcb(v18, a1[1]);
    if ( started < 0 )
      goto LABEL_10;
    CmpLockKcbStackShared(v18);
    started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
    if ( started < 0 )
      goto LABEL_9;
    if ( a1[7] || a1[8] )
    {
      started = CmpTransSearchAddTransFromKeyBody(a1, &a5);
      if ( started < 0 || (v14 = a5, started = CmpPerformKeyBodyDeletionCheck(a1, a5), started < 0) )
      {
LABEL_9:
        CmpUnlockKcbStack(v18);
        goto LABEL_10;
      }
    }
    else
    {
      v14 = a5;
    }
    ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)(CmpGetSecurityCacheEntryForKcbStack(v18, v14, 0LL) + 32);
    started = SeQuerySecurityDescriptorInfo(a2, a3, a4, &ObjectsSecurityDescriptor);
    if ( started >= 0 )
      started = 0;
    goto LABEL_9;
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  started = -1073741431;
LABEL_10:
  v15 = v18[3];
  if ( v18[3] )
    CmSiFreeMemory(v18[3]);
  if ( v5 )
    CmpUnlockRegistry(v15);
  if ( v12 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return (unsigned int)started;
}
