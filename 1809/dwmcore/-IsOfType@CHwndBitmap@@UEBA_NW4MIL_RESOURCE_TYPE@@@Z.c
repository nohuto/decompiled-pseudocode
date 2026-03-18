/*
 * XREFs of ?IsOfType@CHwndBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18006AB00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CHwndBitmap::IsOfType(__int64 a1, int a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rcx
  bool result; // al

  v2 = (unsigned int)(a2 - 40);
  result = (unsigned int)v2 <= 0x26 && (v3 = 0x4800000001LL, _bittest64(&v3, v2)) || a2 == 11;
  return result;
}
