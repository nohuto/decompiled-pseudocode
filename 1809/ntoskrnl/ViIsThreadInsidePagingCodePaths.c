/*
 * XREFs of ViIsThreadInsidePagingCodePaths @ 0x14093EE44
 * Callers:
 *     VfDeadlockAcquireResource @ 0x14093C514 (VfDeadlockAcquireResource.c)
 *     VfDeadlockReleaseResource @ 0x14093D260 (VfDeadlockReleaseResource.c)
 * Callees:
 *     ViLowerIrql @ 0x14030B6FC (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x14030B758 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockDetectionLock @ 0x14093E1AC (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x14093E1E4 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockSearchThread @ 0x14093ECD8 (ViDeadlockSearchThread.c)
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
