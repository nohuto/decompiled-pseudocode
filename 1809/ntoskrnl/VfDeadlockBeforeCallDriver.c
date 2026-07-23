/*
 * XREFs of VfDeadlockBeforeCallDriver @ 0x14093CC58
 * Callers:
 *     VfBeforeCallDriver @ 0x1409310A4 (VfBeforeCallDriver.c)
 * Callees:
 *     ViDeadlockDetectionTryConvertSharedToExclusive @ 0x14030B43C (ViDeadlockDetectionTryConvertSharedToExclusive.c)
 *     ViLowerIrql @ 0x14030B6FC (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x14030B758 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockAddThread @ 0x14093D98C (ViDeadlockAddThread.c)
 *     ViDeadlockAllocate @ 0x14093DA4C (ViDeadlockAllocate.c)
 *     ViDeadlockDetectionLock @ 0x14093E1AC (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x14093E1E4 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockFree @ 0x14093E4A8 (ViDeadlockFree.c)
 *     ViDeadlockSearchThread @ 0x14093ECD8 (ViDeadlockSearchThread.c)
 */

__int64 __fastcall VfDeadlockBeforeCallDriver(__int64 a1)
{
  unsigned int v1; // esi
  void *v2; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v4; // edi
  unsigned __int8 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax

  v1 = 0;
  v2 = 0LL;
  if ( (*(_DWORD *)(a1 + 16) & 2) == 0 )
    return 0LL;
  if ( (unsigned int)KeNumberProcessors_0 > 4 )
    return 0LL;
  if ( !ViDeadlockGlobals )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( ViDeadlockDetectionEnabled )
  {
    v2 = (void *)ViDeadlockAllocate(3LL);
    if ( !v2 )
      return 0LL;
  }
  v4 = 0;
  v5 = ViRaiseIrqlToDpcLevel();
  while ( 1 )
  {
    ViDeadlockDetectionLock(v4);
    v8 = ViDeadlockSearchThread(CurrentThread, v6, v7);
    if ( v8 )
      break;
    if ( !ViDeadlockDetectionEnabled )
      goto LABEL_14;
    if ( v4 || (v4 = 1, ViDeadlockDetectionTryConvertSharedToExclusive()) )
    {
      v8 = ViDeadlockAddThread(CurrentThread, v2);
      v2 = 0LL;
      break;
    }
    ViDeadlockDetectionUnlock(0LL);
  }
  _InterlockedIncrement((volatile signed __int32 *)(v8 + 44));
  v1 = 1;
LABEL_14:
  ViDeadlockDetectionUnlock(v4);
  ViLowerIrql(v5);
  if ( v2 )
    ViDeadlockFree(v2);
  return v1;
}
