/*
 * XREFs of ?IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180057A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CEffectGroup::IsOfType(__int64 a1, int a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rcx
  bool result; // al

  v2 = (unsigned int)(a2 - 49);
  result = (unsigned int)v2 <= 0x35 && (v3 = 0x20000000000005LL, _bittest64(&v3, v2)) || a2 == 115;
  return result;
}
