/*
 * XREFs of VerifierKeAcquireSpinLockAtDpcLevel @ 0x140977E40
 * Callers:
 *     <none>
 * Callees:
 *     ViKeAcquireSpinLockAtDpcLevelCommon @ 0x140979310 (ViKeAcquireSpinLockAtDpcLevelCommon.c)
 *     VfDeadlockAcquireResource @ 0x14097A93C (VfDeadlockAcquireResource.c)
 */

__int64 __fastcall VerifierKeAcquireSpinLockAtDpcLevel(ULONG_PTR a1)
{
  int v1; // ebx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v1 = a1;
  ViKeAcquireSpinLockAtDpcLevelCommon(a1);
  return VfDeadlockAcquireResource(v1, retaddr);
}
