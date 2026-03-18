/*
 * XREFs of CmpQueryKeySecurity @ 0x140662610
 * Callers:
 *     CmpSecurityMethod @ 0x140662420 (CmpSecurityMethod.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     CmSiFreeMemory @ 0x14008CFE0 (CmSiFreeMemory.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmpUnlockRegistry @ 0x1405F6EA0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F6EE0 (CmpLockRegistry.c)
 *     CmpLockKcbStackShared @ 0x1405F93E0 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x1405F9440 (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405FE5B0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x140635968 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140636374 (CmpTransSearchAddTransFromKeyBody.c)
 *     SeQuerySecurityDescriptorInfo @ 0x140661F50 (SeQuerySecurityDescriptorInfo.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140663450 (CmpPerformKeyBodyDeletionCheck.c)
 */

__int64 __fastcall CmpQueryKeySecurity(_QWORD *a1, DWORD *a2, void *a3, ULONG *a4, __int64 a5)
{
  char v5; // si
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v11; // r14
  __int64 v12; // r8
  struct _LOOKASIDE_LIST_EX *v13; // r9
  int started; // ebx
  __int64 v15; // rbp
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+20h] [rbp-58h] BYREF
  PPRIVILEGE_SET v18[5]; // [rsp+28h] [rbp-50h] BYREF

  v5 = 0;
  a5 = 0LL;
  memset(v18, 0, 0x20uLL);
  WORD1(v18[0]) = -1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( v11 )
  {
    CmpLockRegistry();
    v5 = 1;
    started = CmpStartKcbStackForTopLayerKcb((__int64)v18, a1[1], v12, v13);
    if ( started < 0 )
      goto LABEL_10;
    CmpLockKcbStackShared((__int64)v18);
    started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
    if ( started < 0 )
      goto LABEL_9;
    if ( a1[7] || a1[8] )
    {
      started = CmpTransSearchAddTransFromKeyBody(a1, &a5);
      if ( started < 0 || (v15 = a5, started = CmpPerformKeyBodyDeletionCheck(a1, a5), started < 0) )
      {
LABEL_9:
        CmpUnlockKcbStack((__int64)v18);
        goto LABEL_10;
      }
    }
    else
    {
      v15 = a5;
    }
    ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)(CmpGetSecurityCacheEntryForKcbStack((__int64)v18, v15) + 32);
    started = SeQuerySecurityDescriptorInfo(a2, a3, a4, &ObjectsSecurityDescriptor);
    if ( started >= 0 )
      started = 0;
    goto LABEL_9;
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  started = -1073741431;
LABEL_10:
  if ( v18[3] )
    CmSiFreeMemory(v18[3]);
  if ( v5 )
    CmpUnlockRegistry();
  if ( v11 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return (unsigned int)started;
}
