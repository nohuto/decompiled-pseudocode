/*
 * XREFs of VfDeadlockAfterCallDriver @ 0x14093BBEC
 * Callers:
 *     VfAfterCallDriver @ 0x14092FEB4 (VfAfterCallDriver.c)
 * Callees:
 *     ViLowerIrql @ 0x14030B40C (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x14030B468 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockDetectionLock @ 0x14093D1AC (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x14093D1E4 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockSearchThread @ 0x14093DCD8 (ViDeadlockSearchThread.c)
 */

void __fastcall VfDeadlockAfterCallDriver(int a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 v2; // di
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rax

  if ( a1 && ViDeadlockDetectionEnabled && (unsigned int)KeNumberProcessors_0 <= 4 )
  {
    CurrentThread = KeGetCurrentThread();
    v2 = ViRaiseIrqlToDpcLevel();
    ViDeadlockDetectionLock(0LL);
    v5 = ViDeadlockSearchThread(CurrentThread, v3, v4);
    if ( v5 )
      _InterlockedDecrement((volatile signed __int32 *)(v5 + 44));
    ViDeadlockDetectionUnlock(0LL);
    ViLowerIrql(v2);
  }
}
