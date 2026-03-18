/*
 * XREFs of MiFlushDeferredRetpolineImageLoadEvents @ 0x14074F4FC
 * Callers:
 *     MiInitSystem @ 0x1409F0D98 (MiInitSystem.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MmReleaseLoadLock @ 0x1406A5B10 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406A5B70 (MmAcquireLoadLock.c)
 *     MiLogNonRetpolineImageLoadEvent @ 0x140748AFC (MiLogNonRetpolineImageLoadEvent.c)
 */

_QWORD *MiFlushDeferredRetpolineImageLoadEvents()
{
  struct _KTHREAD *Lock; // rdi
  int *v1; // rbx
  __int64 v2; // rax

  Lock = MmAcquireLoadLock();
  while ( 1 )
  {
    v1 = (int *)qword_140464578;
    if ( qword_140464578 == &qword_140464578 )
      break;
    if ( *((PVOID **)qword_140464578 + 1) != &qword_140464578
      || (v2 = *(_QWORD *)qword_140464578, *(PVOID *)(*(_QWORD *)qword_140464578 + 8LL) != qword_140464578) )
    {
      __fastfail(3u);
    }
    qword_140464578 = *(PVOID *)qword_140464578;
    *(_QWORD *)(v2 + 8) = &qword_140464578;
    MiLogNonRetpolineImageLoadEvent((__int64)(v1 + 4), v1[8]);
    ExFreePoolWithTag(v1, 0);
  }
  return MmReleaseLoadLock((__int64)Lock);
}
