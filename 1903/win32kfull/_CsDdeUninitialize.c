/*
 * XREFs of _CsDdeUninitialize @ 0x1C0220120
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C00B4C50 (HMValidateHandleNoRip.c)
 *     xxxDestroyThreadDDEObject @ 0x1C013FEF0 (xxxDestroyThreadDDEObject.c)
 */

__int64 __fastcall CsDdeUninitialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax

  LOBYTE(a2) = 9;
  v4 = HMValidateHandleNoRip(a1, a2, a3, a4);
  if ( v4 )
    xxxDestroyThreadDDEObject(gptiCurrent, v4);
  return 1LL;
}
