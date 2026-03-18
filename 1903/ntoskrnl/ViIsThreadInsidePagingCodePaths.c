/*
 * XREFs of ViIsThreadInsidePagingCodePaths @ 0x14097D288
 * Callers:
 *     VfDeadlockAcquireResource @ 0x14097A93C (VfDeadlockAcquireResource.c)
 *     VfDeadlockReleaseResource @ 0x14097B688 (VfDeadlockReleaseResource.c)
 * Callees:
 *     ViLowerIrql @ 0x1403291C4 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x140329220 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockDetectionLock @ 0x14097C5F8 (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x14097C630 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockSearchThread @ 0x14097D120 (ViDeadlockSearchThread.c)
 */

_BOOL8 ViIsThreadInsidePagingCodePaths()
{
  struct _KTHREAD *CurrentThread; // rbx
  BOOL v1; // edi
  unsigned __int8 v2; // si
  _QWORD *v3; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = 0;
  v2 = ViRaiseIrqlToDpcLevel();
  ViDeadlockDetectionLock(0);
  v3 = ViDeadlockSearchThread((unsigned __int64)CurrentThread);
  if ( v3 )
    v1 = *((_DWORD *)v3 + 11) != 0;
  ViDeadlockDetectionUnlock(0);
  ViLowerIrql(v2);
  return v1;
}
