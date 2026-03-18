/*
 * XREFs of ?IsOfType@CClipGroupMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C01A3790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CClipGroupMarshaler::IsOfType(__int64 a1, int a2)
{
  __int64 v2; // rcx
  bool result; // al

  result = (unsigned int)(a2 - 62) <= 0x2F && (v2 = 0x800000000009LL, _bittest64(&v2, a2 - 62)) || a2 == 131;
  return result;
}
