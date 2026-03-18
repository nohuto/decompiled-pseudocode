/*
 * XREFs of ?IsOfType@CShapeVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801A1040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CShapeVisual::IsOfType(__int64 a1, int a2)
{
  __int64 v2; // rcx
  bool result; // al

  result = (unsigned int)(a2 - 109) <= 0x39 && (v2 = 0x200000000400001LL, _bittest64(&v2, a2 - 109)) || a2 == 189;
  return result;
}
