/*
 * XREFs of ?IsOfType@CEffectGroupMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C007B460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CEffectGroupMarshaler::IsOfType(__int64 a1, int a2)
{
  __int64 v2; // rcx
  bool result; // al

  result = (unsigned int)(a2 - 51) <= 0x3A && (v2 = 0x400000000000005LL, _bittest64(&v2, a2 - 51)) || a2 == 131;
  return result;
}
