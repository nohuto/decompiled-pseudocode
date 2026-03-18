/*
 * XREFs of ?IsOfType@CLayerVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18005E530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CLayerVisual::IsOfType(__int64 a1, int a2)
{
  int v2; // ecx
  bool result; // al

  result = (unsigned int)(a2 - 86) <= 0x1D && (v2 = 536936449, _bittest(&v2, a2 - 86)) || a2 == 157;
  return result;
}
