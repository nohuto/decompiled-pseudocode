/*
 * XREFs of _CsDdeUninitialize @ 0x1C01E2900
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C006CF60 (HMValidateHandleNoRip.c)
 *     xxxDestroyThreadDDEObject @ 0x1C0111A40 (xxxDestroyThreadDDEObject.c)
 */

__int64 __fastcall CsDdeUninitialize(__int64 a1, __int64 a2)
{
  int *v2; // rax

  LOBYTE(a2) = 9;
  v2 = (int *)HMValidateHandleNoRip(a1, a2);
  if ( v2 )
    xxxDestroyThreadDDEObject(gptiCurrent, v2);
  return 1LL;
}
