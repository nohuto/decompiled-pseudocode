/*
 * XREFs of WdipSemAllocatePool @ 0x140778828
 * Callers:
 *     WdipSemFastAllocate @ 0x140716A60 (WdipSemFastAllocate.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall WdipSemAllocatePool(int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v2; // edi
  __int64 v3; // rbx
  int v4; // ecx
  _QWORD *PoolWithTag; // rax
  _QWORD *v7; // rcx

  CurrentThread = KeGetCurrentThread();
  v2 = (a1 + 15) & 0xFFFFFFF0;
  v3 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14046B7A0, 0LL);
  v4 = dword_14046B790;
  if ( v2 > dword_14046B790 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x73494457u);
    if ( !PoolWithTag )
      goto LABEL_3;
    v7 = (_QWORD *)qword_14046B788;
    if ( *(PVOID **)qword_14046B788 != &WdipSemPool )
      __fastfail(3u);
    PoolWithTag[1] = qword_14046B788;
    *PoolWithTag = &WdipSemPool;
    *v7 = PoolWithTag;
    v4 = 4080;
    qword_14046B788 = (__int64)PoolWithTag;
    qword_14046B798 = (__int64)(PoolWithTag + 2);
  }
  v3 = qword_14046B798;
  qword_14046B798 += v2;
  dword_14046B790 = v4 - v2;
LABEL_3:
  ExReleasePushLockEx((ULONG_PTR)&qword_14046B7A0, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v3;
}
