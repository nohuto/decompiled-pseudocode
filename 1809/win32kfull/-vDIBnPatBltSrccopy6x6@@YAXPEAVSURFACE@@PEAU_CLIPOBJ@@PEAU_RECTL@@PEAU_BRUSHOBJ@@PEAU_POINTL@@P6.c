/*
 * XREFs of ?vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x1C02A7B48
 * Callers:
 *     EngBitBlt @ 0x1C00890E0 (EngBitBlt.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C008B104 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00F22E4 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?vPatCpyRect1_6x6@@YAXPEAU_PATBLTFRAME@@H@Z @ 0x1C02A7E18 (-vPatCpyRect1_6x6@@YAXPEAU_PATBLTFRAME@@H@Z.c)
 */

void __fastcall vDIBnPatBltSrccopy6x6(
        struct SURFACE *a1,
        struct _CLIPOBJ *a2,
        struct _RECTL *a3,
        struct _BRUSHOBJ *a4,
        struct _POINTL *a5)
{
  LONG x; // r8d
  LONG y; // ecx
  int v9; // esi
  unsigned int v10; // edx
  LONG *v11; // rcx
  LONG v12; // eax
  LONG v13; // eax
  LONG v14; // eax
  LONG left; // edx
  LONG right; // ecx
  LONG top; // r8d
  LONG bottom; // r9d
  _QWORD v19[2]; // [rsp+38h] [rbp-1C0h] BYREF
  int v20; // [rsp+48h] [rbp-1B0h]
  __m128i *p_rclBounds; // [rsp+50h] [rbp-1A8h]
  int v22; // [rsp+58h] [rbp-1A0h]
  int v23; // [rsp+5Ch] [rbp-19Ch]
  struct _CLIPOBJ *v24; // [rsp+70h] [rbp-188h]
  struct _RECTL *v25; // [rsp+78h] [rbp-180h]
  int v26; // [rsp+80h] [rbp-178h] BYREF
  __m128i rclBounds; // [rsp+84h] [rbp-174h] BYREF

  v24 = a2;
  v25 = a3;
  v19[0] = *((_QWORD *)a1 + 10);
  v20 = *((_DWORD *)a1 + 22);
  v19[1] = *((_QWORD *)a4[1].pvRbrush + 4);
  x = a5->x;
  if ( a5->x < 0 )
    v22 = 5 - ~x % 6;
  else
    v22 = x % 6;
  y = a5->y;
  if ( y < 0 )
    v23 = 5 - ~y % 6;
  else
    v23 = y % 6;
  if ( a2 && a2->iDComplexity )
  {
    if ( a2->iDComplexity == 1 )
    {
      rclBounds = (__m128i)a2->rclBounds;
      left = _mm_cvtsi128_si32(rclBounds);
      if ( left <= a3->left )
        left = a3->left;
      rclBounds.m128i_i32[0] = left;
      right = rclBounds.m128i_i32[2];
      if ( rclBounds.m128i_i32[2] >= a3->right )
        right = a3->right;
      rclBounds.m128i_i32[2] = right;
      top = rclBounds.m128i_i32[1];
      if ( rclBounds.m128i_i32[1] <= a3->top )
        top = a3->top;
      rclBounds.m128i_i32[1] = top;
      bottom = rclBounds.m128i_i32[3];
      if ( rclBounds.m128i_i32[3] >= a3->bottom )
        bottom = a3->bottom;
      rclBounds.m128i_i32[3] = bottom;
      if ( left < right && top < bottom )
      {
        p_rclBounds = &rclBounds;
        vPatCpyRect1_6x6((struct _PATBLTFRAME *)v19, 1);
      }
    }
    else if ( a2->iDComplexity == 3 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a2, 0, 0, 4u, 0x14u);
      do
      {
        v9 = XCLIPOBJ::bEnum((XCLIPOBJ *)a2, 0x144u, (char *)&v26, 0LL);
        if ( (unsigned int)(v26 - 1) <= 0x13 )
        {
          v10 = 0;
          v11 = &rclBounds.m128i_i32[1];
          while ( v10 < v26 )
          {
            if ( *(v11 - 1) < a3->left )
              *(v11 - 1) = a3->left;
            v12 = a3->right;
            if ( v11[1] > v12 )
              v11[1] = v12;
            v13 = a3->top;
            if ( *v11 < v13 )
              *v11 = v13;
            v14 = a3->bottom;
            if ( v11[2] > v14 )
              v11[2] = v14;
            ++v10;
            v11 += 4;
          }
          p_rclBounds = &rclBounds;
          vPatCpyRect1_6x6((struct _PATBLTFRAME *)v19, v26);
        }
      }
      while ( v9 );
    }
  }
  else
  {
    p_rclBounds = (__m128i *)a3;
    vPatCpyRect1_6x6((struct _PATBLTFRAME *)v19, 1);
  }
}
