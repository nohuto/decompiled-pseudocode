/*
 * XREFs of VerifierKeTryToAcquireSpinLockAtDpcLevel @ 0x140978CA0
 * Callers:
 *     <none>
 * Callees:
 *     ViKeTryToAcquireSpinLockAtDpcLevelCommon @ 0x1409797E0 (ViKeTryToAcquireSpinLockAtDpcLevelCommon.c)
 *     VfDeadlockAcquireResource @ 0x14097A93C (VfDeadlockAcquireResource.c)
 */

char __fastcall VerifierKeTryToAcquireSpinLockAtDpcLevel(ULONG_PTR a1)
{
  int v1; // edi
  char v2; // bl
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v1 = a1;
  v2 = ViKeTryToAcquireSpinLockAtDpcLevelCommon(a1);
  if ( v2 )
    VfDeadlockAcquireResource(v1, retaddr);
  return v2;
}
