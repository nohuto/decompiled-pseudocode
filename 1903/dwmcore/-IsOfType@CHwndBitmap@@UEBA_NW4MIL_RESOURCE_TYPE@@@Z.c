/*
 * XREFs of ?IsOfType@CHwndBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C8D40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CHwndBitmap::IsOfType(__int64 a1, int a2)
{
  __int64 v2; // rcx
  bool result; // al

  result = (unsigned int)(a2 - 43) <= 0x27 && (v2 = 0x9000000001LL, _bittest64(&v2, a2 - 43)) || a2 == 11;
  return result;
}
