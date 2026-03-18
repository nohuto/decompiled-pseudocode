/*
 * XREFs of ?IsOfType@CEllipseGeometryMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C01A5BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CEllipseGeometryMarshaler::IsOfType(__int64 a1, int a2)
{
  __int64 v2; // rcx
  bool result; // al

  result = (unsigned int)(a2 - 54) <= 0x37 && (v2 = 0x80000000000101LL, _bittest64(&v2, a2 - 54)) || a2 == 131;
  return result;
}
