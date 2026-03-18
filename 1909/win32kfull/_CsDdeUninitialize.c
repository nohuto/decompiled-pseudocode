/*
 * XREFs of _CsDdeUninitialize @ 0x1C021FBE0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C00559FC (HMValidateHandleNoRip.c)
 *     xxxDestroyThreadDDEObject @ 0x1C011A3D0 (xxxDestroyThreadDDEObject.c)
 */

__int64 __fastcall CsDdeUninitialize(__int64 a1)
{
  __int64 v1; // rax

  v1 = HMValidateHandleNoRip(a1, 9);
  if ( v1 )
    xxxDestroyThreadDDEObject(gptiCurrent, v1);
  return 1LL;
}
