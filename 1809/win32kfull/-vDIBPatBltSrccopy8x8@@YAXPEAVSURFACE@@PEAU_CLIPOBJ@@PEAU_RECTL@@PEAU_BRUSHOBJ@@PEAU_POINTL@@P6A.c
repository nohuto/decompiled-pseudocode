/*
 * XREFs of ?vDIBPatBltSrccopy8x8@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x1C02A7884
 * Callers:
 *     EngBitBlt @ 0x1C00890E0 (EngBitBlt.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C008B104 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00F22E4 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vDIBPatBltSrccopy8x8(
        struct SURFACE *a1,
        struct _CLIPOBJ *a2,
        __m128i *a3,
        struct _BRUSHOBJ *a4,
        struct _POINTL *a5,
        void (*a6)(struct _PATBLTFRAME *, int))
{
  _QWORD *pvRbrush; // rcx
  int v9; // r14d
  int v10; // r11d
  __int64 *v11; // rcx
  LONG v12; // eax
  LONG v13; // edx
  LONG v14; // r8d
  LONG v15; // r9d
  LONG v16; // r10d
  LONG v17; // r9d
  LONG v18; // edx
  LONG v19; // ecx
  LONG v20; // eax
  __int32 v21; // r8d
  LONG v22; // r9d
  _QWORD v23[2]; // [rsp+50h] [rbp-1C8h] BYREF
  int v24; // [rsp+60h] [rbp-1B8h]
  int v25; // [rsp+64h] [rbp-1B4h]
  __m128i *p_rclBounds; // [rsp+68h] [rbp-1B0h]
  int v27; // [rsp+70h] [rbp-1A8h]
  int v28; // [rsp+74h] [rbp-1A4h]
  unsigned int v29; // [rsp+90h] [rbp-188h] BYREF
  __m128i rclBounds; // [rsp+94h] [rbp-184h] BYREF

  v23[0] = *((_QWORD *)a1 + 10);
  v24 = *((_DWORD *)a1 + 22);
  pvRbrush = a4[1].pvRbrush;
  v23[1] = pvRbrush[4];
  v25 = *((_DWORD *)pvRbrush + 7);
  v27 = a5->x & 7;
  v28 = a5->y & 7;
  if ( a2 && a2->iDComplexity )
  {
    if ( a2->iDComplexity == 1 )
    {
      rclBounds = (__m128i)a2->rclBounds;
      v18 = _mm_cvtsi128_si32(rclBounds);
      if ( v18 <= a3->m128i_i32[0] )
        v18 = a3->m128i_i32[0];
      rclBounds.m128i_i32[0] = v18;
      v19 = rclBounds.m128i_i32[2];
      if ( rclBounds.m128i_i32[2] >= a3->m128i_i32[2] )
        v19 = a3->m128i_i32[2];
      rclBounds.m128i_i32[2] = v19;
      v20 = a3->m128i_i32[1];
      v21 = rclBounds.m128i_i32[1];
      if ( rclBounds.m128i_i32[1] <= v20 )
        v21 = v20;
      rclBounds.m128i_i32[1] = v21;
      v22 = rclBounds.m128i_i32[3];
      if ( rclBounds.m128i_i32[3] >= a3->m128i_i32[3] )
        v22 = a3->m128i_i32[3];
      rclBounds.m128i_i32[3] = v22;
      if ( v18 < v19 && v21 < v22 )
      {
        p_rclBounds = &rclBounds;
        ((void (__fastcall *)(_QWORD *, __int64))a6)(v23, 1LL);
      }
    }
    else if ( a2->iDComplexity == 3 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a2, 0, 0, 4u, 0x14u);
      do
      {
        v9 = XCLIPOBJ::bEnum((XCLIPOBJ *)a2, 0x144u, (char *)&v29, 0LL);
        if ( v29 - 1 <= 0x13 )
        {
          v10 = 0;
          v11 = &rclBounds.m128i_i64[1];
          while ( v10 < (int)v29 )
          {
            v12 = a3->m128i_i32[0];
            if ( *((_DWORD *)v11 - 2) >= a3->m128i_i32[0] )
              v12 = *((_DWORD *)v11 - 2);
            else
              *((_DWORD *)v11 - 2) = v12;
            v13 = a3->m128i_i32[2];
            if ( *(_DWORD *)v11 <= v13 )
              v13 = *(_DWORD *)v11;
            else
              *(_DWORD *)v11 = v13;
            v14 = *((_DWORD *)v11 - 1);
            v15 = a3->m128i_i32[1];
            if ( v14 < v15 )
            {
              *((_DWORD *)v11 - 1) = v15;
              v14 = v15;
            }
            v16 = *((_DWORD *)v11 + 1);
            v17 = a3->m128i_i32[3];
            if ( v16 > v17 )
            {
              *((_DWORD *)v11 + 1) = v17;
              v16 = v17;
            }
            if ( v13 < v12 )
              *(_DWORD *)v11 = v12;
            if ( v16 < v14 )
              *((_DWORD *)v11 + 1) = v14;
            ++v10;
            v11 += 2;
          }
          p_rclBounds = &rclBounds;
          ((void (__fastcall *)(_QWORD *, _QWORD))a6)(v23, v29);
        }
      }
      while ( v9 );
    }
  }
  else
  {
    p_rclBounds = a3;
    ((void (__fastcall *)(_QWORD *, __int64))a6)(v23, 1LL);
  }
}
