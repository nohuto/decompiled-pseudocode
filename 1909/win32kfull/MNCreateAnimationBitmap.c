/*
 * XREFs of MNCreateAnimationBitmap @ 0x1C0210310
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0226F00 (xxxMenuWindowProc.c)
 * Callees:
 *     GreCreateCompatibleBitmapInternal @ 0x1C00BDE20 (GreCreateCompatibleBitmapInternal.c)
 */

__int64 __fastcall MNCreateAnimationBitmap(HDC a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v5; // rbx

  result = GreCreateCompatibleBitmapInternal(*(HDC *)(gpDispInfo + 56LL), a2, a3, 0, 0LL, 0LL);
  v5 = result;
  if ( result )
  {
    if ( a1 == gMenuState[0] )
      GreSetBitmapOwner(result, 0LL);
    GreSelectBitmap(*((_QWORD *)a1 + 17), v5);
    result = 1LL;
    *((_QWORD *)a1 + 16) = v5;
  }
  return result;
}
