/*
 * XREFs of W32kCddDisableGdiHwAcceleration @ 0x1C010C8B0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     GetAppCompatFlags2QuadWord @ 0x1C010C8F0 (GetAppCompatFlags2QuadWord.c)
 */

__int64 __fastcall W32kCddDisableGdiHwAcceleration(__int64 a1, __int64 a2)
{
  unsigned __int64 AppCompatFlags2QuadWord; // rbx

  AppCompatFlags2QuadWord = 0LL;
  if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2) )
    AppCompatFlags2QuadWord = GetAppCompatFlags2QuadWord(0LL);
  return (AppCompatFlags2QuadWord >> 34) & 1;
}
