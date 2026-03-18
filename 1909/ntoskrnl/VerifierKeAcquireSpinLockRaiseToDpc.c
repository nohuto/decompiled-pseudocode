/*
 * XREFs of VerifierKeAcquireSpinLockRaiseToDpc @ 0x140977EB0
 * Callers:
 *     <none>
 * Callees:
 *     ViKeAcquireSpinLockRaiseToDpcCommon @ 0x1409793A4 (ViKeAcquireSpinLockRaiseToDpcCommon.c)
 *     VfDeadlockAcquireResource @ 0x14097A93C (VfDeadlockAcquireResource.c)
 */

char __fastcall VerifierKeAcquireSpinLockRaiseToDpc(int a1)
{
  char v2; // bl
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v2 = ViKeAcquireSpinLockRaiseToDpcCommon();
  VfDeadlockAcquireResource(a1, retaddr);
  return v2;
}
