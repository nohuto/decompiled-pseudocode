/*
 * XREFs of _CsDdeUninitialize @ 0x1C0208770
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C00B6440 (HMValidateHandleNoRip.c)
 *     xxxDestroyThreadDDEObject @ 0x1C0134B60 (xxxDestroyThreadDDEObject.c)
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
