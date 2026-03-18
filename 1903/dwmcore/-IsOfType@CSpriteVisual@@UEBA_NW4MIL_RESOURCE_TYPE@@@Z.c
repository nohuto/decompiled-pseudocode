/*
 * XREFs of ?IsOfType@CSpriteVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800A24A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSpriteVisual::IsOfType(__int64 a1, int a2)
{
  __int64 v2; // rcx
  bool result; // al

  result = (unsigned int)(a2 - 131) <= 0x3A && (v2 = 0x400100000000001LL, _bittest64(&v2, a2 - 131)) || a2 == 109;
  return result;
}
