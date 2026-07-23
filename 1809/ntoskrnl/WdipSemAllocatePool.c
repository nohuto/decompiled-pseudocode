/*
 * XREFs of WdipSemAllocatePool @ 0x140752E6C
 * Callers:
 *     WdipSemFastAllocate @ 0x140717DFC (WdipSemFastAllocate.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
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
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140440A20, 0LL);
  v4 = dword_140440A10;
  if ( v2 > dword_140440A10 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x73494457u);
    if ( !PoolWithTag )
      goto LABEL_3;
    v7 = (_QWORD *)qword_140440A08;
    if ( *(PVOID **)qword_140440A08 != &WdipSemPool )
      __fastfail(3u);
    PoolWithTag[1] = qword_140440A08;
    *PoolWithTag = &WdipSemPool;
    *v7 = PoolWithTag;
    v4 = 4080;
    qword_140440A08 = (__int64)PoolWithTag;
    qword_140440A18 = (__int64)(PoolWithTag + 2);
  }
  v3 = qword_140440A18;
  qword_140440A18 += v2;
  dword_140440A10 = v4 - v2;
LABEL_3:
  ExReleasePushLockEx((ULONG_PTR)&qword_140440A20, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v3;
}
