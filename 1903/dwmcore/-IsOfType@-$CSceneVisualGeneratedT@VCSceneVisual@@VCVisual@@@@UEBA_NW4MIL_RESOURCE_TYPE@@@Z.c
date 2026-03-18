/*
 * XREFs of ?IsOfType@?$CSceneVisualGeneratedT@VCSceneVisual@@VCVisual@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801C6EE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSceneVisualGeneratedT<CSceneVisual,CVisual>::IsOfType(__int64 a1, int a2)
{
  __int64 v2; // rcx
  bool result; // al

  result = (unsigned int)(a2 - 109) <= 0x36 && (v2 = 0x40000000400001LL, _bittest64(&v2, a2 - 109)) || a2 == 189;
  return result;
}
