/*
 * XREFs of ?IsProtectedContent@CHwndBitmap@@UEBA_NXZ @ 0x180214E80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CHwndBitmap::IsProtectedContent(CHwndBitmap *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 15);
  result = 0;
  if ( v1 )
    return *(_BYTE *)(v1 + 381) == 1;
  return result;
}
