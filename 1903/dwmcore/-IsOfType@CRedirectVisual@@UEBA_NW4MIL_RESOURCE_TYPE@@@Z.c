/*
 * XREFs of ?IsOfType@CRedirectVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801A0F90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CRedirectVisual::IsOfType(__int64 a1, int a2)
{
  int v2; // ecx
  bool result; // al

  result = (unsigned int)(a2 - 109) <= 0x1E && (v2 = 1077936129, _bittest(&v2, a2 - 109)) || a2 == 189;
  return result;
}
