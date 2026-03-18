/*
 * XREFs of MiFlushDeferredRetpolineImageLoadEvents @ 0x14074EA6C
 * Callers:
 *     MiInitSystem @ 0x1409F0E88 (MiInitSystem.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MmReleaseLoadLock @ 0x1406A6280 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406A62E0 (MmAcquireLoadLock.c)
 *     MiLogNonRetpolineImageLoadEvent @ 0x140746BFC (MiLogNonRetpolineImageLoadEvent.c)
 */

_QWORD *MiFlushDeferredRetpolineImageLoadEvents()
{
  struct _KTHREAD *Lock; // rdi
  int *v1; // rbx
  __int64 v2; // rax

  Lock = MmAcquireLoadLock();
  while ( 1 )
  {
    v1 = (int *)qword_140464878;
    if ( qword_140464878 == &qword_140464878 )
      break;
    if ( *((PVOID **)qword_140464878 + 1) != &qword_140464878
      || (v2 = *(_QWORD *)qword_140464878, *(PVOID *)(*(_QWORD *)qword_140464878 + 8LL) != qword_140464878) )
    {
      __fastfail(3u);
    }
    qword_140464878 = *(PVOID *)qword_140464878;
    *(_QWORD *)(v2 + 8) = &qword_140464878;
    MiLogNonRetpolineImageLoadEvent((__int64)(v1 + 4), v1[8]);
    ExFreePoolWithTag(v1, 0);
  }
  return MmReleaseLoadLock((__int64)Lock);
}
