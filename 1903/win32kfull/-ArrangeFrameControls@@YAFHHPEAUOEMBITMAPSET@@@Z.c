/*
 * XREFs of ?ArrangeFrameControls@@YAFHHPEAUOEMBITMAPSET@@@Z @ 0x1C000BCA4
 * Callers:
 *     ?EnsureOemBitmapInfoForDpiSlot@@YAXPEAUOEMBITMAPSET@@I@Z @ 0x1C000BB28 (-EnsureOemBitmapInfoForDpiSlot@@YAXPEAUOEMBITMAPSET@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ArrangeFrameControls(int a1, int a2, struct OEMBITMAPSET *a3)
{
  int v4; // r10d
  __int16 v5; // r11
  int v6; // r9d
  _WORD *v7; // r8
  __int64 v8; // rdi
  __int16 v9; // bx
  int v10; // edx
  unsigned __int16 v11; // ax
  __int16 v12; // ax
  __int16 v13; // r11
  __int16 v14; // ax

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = (_WORD *)((char *)a3 + 16);
  v8 = 93LL;
  do
  {
    v9 = v7[2];
    if ( v9 )
    {
      v10 = v5 + v9;
      v11 = v4 + v6;
      if ( v10 <= a1 )
        v11 = v6;
      v6 = v11;
      v12 = 0;
      if ( v10 <= a1 )
        v12 = v5;
      v13 = v12;
      v14 = 0;
      if ( v10 <= a1 )
        v14 = v4;
      v4 = (unsigned __int16)v14;
      if ( a2 )
      {
        *v7 = v13;
        v7[1] = v6;
      }
      if ( v14 < (__int16)v7[3] )
        LOWORD(v4) = v7[3];
      v5 = v9 + v13;
    }
    v7 += 4;
    --v8;
  }
  while ( v8 );
  return (unsigned int)(v4 + v6);
}
