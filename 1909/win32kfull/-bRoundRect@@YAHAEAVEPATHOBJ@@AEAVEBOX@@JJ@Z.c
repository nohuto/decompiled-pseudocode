/*
 * XREFs of ?bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z @ 0x1C0095584
 * Callers:
 *     NtGdiCreateRoundRectRgn @ 0x1C00F05B0 (NtGdiCreateRoundRectRgn.c)
 *     NtGdiRoundRect @ 0x1C0157F40 (NtGdiRoundRect.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C004B1FC (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ?efHalfDiff@@YA?AVEFLOAT@@JJ@Z @ 0x1C0095540 (-efHalfDiff@@YA-AVEFLOAT@@JJ@Z.c)
 *     ?bToPOINTL@EPOINTFL@@QEAAHAEAU_POINTL@@@Z @ 0x1C009596C (-bToPOINTL@EPOINTFL@@QEAAHAEAU_POINTL@@@Z.c)
 *     ?vAbs@EFLOAT@@QEAAXXZ @ 0x1C0098BD0 (-vAbs@EFLOAT@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall bRoundRect(struct EPATHOBJ *a1, struct EBOX *a2)
{
  LONG v4; // eax
  int v5; // edx
  int v6; // ecx
  unsigned int v7; // r14d
  int v8; // r9d
  int v9; // r10d
  float v10; // xmm3_4
  float v11; // xmm2_4
  float v12; // xmm3_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  __m128i v15; // xmm0
  float v16; // xmm1_4
  LONG x; // edi
  LONG v18; // ebx
  __int64 v19; // r12
  __int64 v20; // r13
  struct _POINTL v21; // rax
  __int64 v22; // rax
  struct _POINTL v23; // rax
  __int64 v24; // rax
  struct _POINTL v26; // [rsp+20h] [rbp-58h] BYREF
  struct _POINTL v27; // [rsp+28h] [rbp-50h] BYREF
  __int64 v28; // [rsp+30h] [rbp-48h] BYREF
  __int64 v29; // [rsp+38h] [rbp-40h] BYREF
  struct _POINTL v30; // [rsp+40h] [rbp-38h] BYREF
  struct _POINTL v31; // [rsp+48h] [rbp-30h] BYREF
  __int64 v32; // [rsp+50h] [rbp-28h]
  int v33; // [rsp+58h] [rbp-20h]
  int v34; // [rsp+5Ch] [rbp-1Ch]

  v4 = efHalfDiff(*((_DWORD *)a2 + 16), *((_DWORD *)a2 + 18));
  v5 = *((_DWORD *)a2 + 19);
  v6 = *((_DWORD *)a2 + 17);
  v27.x = v4;
  v26.x = efHalfDiff(v6, v5);
  v7 = 0;
  if ( EFLOAT::bIsZero((EFLOAT *)&v27) || EFLOAT::bIsZero((EFLOAT *)&v26) )
  {
    v10 = FP_0_0;
    v11 = FP_0_0;
  }
  else
  {
    EFLOAT::vAbs((EFLOAT *)&v27);
    EFLOAT::vAbs((EFLOAT *)&v26);
    v10 = (float)(int)abs32(v8) / *(float *)&v27.x;
    v11 = (float)(int)abs32(v9) / *(float *)&v26.x;
  }
  if ( v10 > FP_2_0 )
    v12 = FP_1_0;
  else
    v12 = v10 * 0.5;
  if ( v11 > FP_2_0 )
    v13 = FP_1_0;
  else
    v13 = v11 * 0.5;
  v14 = (float)*((int *)a2 + 13);
  *(float *)&v29 = (float)*((int *)a2 + 12) * v12;
  v15 = _mm_cvtsi32_si128(*((_DWORD *)a2 + 14));
  *((float *)&v29 + 1) = v14 * v12;
  v16 = (float)*((int *)a2 + 15) * v13;
  *(float *)&v28 = _mm_cvtepi32_ps(v15).m128_f32[0] * v13;
  *((float *)&v28 + 1) = v16;
  EPOINTFL::bToPOINTL((EPOINTFL *)&v29, &v27);
  EPOINTFL::bToPOINTL((EPOINTFL *)&v28, &v30);
  x = v30.x;
  v18 = v27.x;
  v19 = (1922922357LL * v27.x) >> 32;
  v28 = (1922922357LL * v30.x) >> 32;
  v20 = (1922922357LL * v27.y) >> 32;
  v29 = (1922922357LL * v30.y) >> 32;
  v26.x = *((_DWORD *)a2 + 2) - v30.x;
  v26.y = *((_DWORD *)a2 + 3) - v30.y;
  if ( EPATHOBJ::bMoveTo(a1, 0LL, &v26) )
  {
    v31 = (struct _POINTL)*((_QWORD *)a2 + 1);
    v21 = v31;
    v31.x -= v28;
    v31.y -= v29;
    LODWORD(v32) = v21.x - v19;
    HIDWORD(v32) = v21.y - v20;
    v33 = v21.x - v18;
    v34 = v21.y - v27.y;
    if ( EPATHOBJ::bPolyBezierTo(a1, 0LL, &v31, 3u) )
    {
      v26.x = v18 + *((_DWORD *)a2 + 4);
      v26.y = *((_DWORD *)a2 + 5) + v27.y;
      if ( EPATHOBJ::bPolyLineTo(a1, 0LL, &v26, 1u) )
      {
        v32 = *((_QWORD *)a2 + 2);
        v22 = v32;
        LODWORD(v32) = v32 - v28;
        HIDWORD(v32) -= v29;
        v31.x = v19 + v22;
        v31.y = v20 + HIDWORD(v22);
        v33 = v22 - x;
        v34 = HIDWORD(v22) - v30.y;
        if ( EPATHOBJ::bPolyBezierTo(a1, 0LL, &v31, 3u) )
        {
          v26.x = x + *((_DWORD *)a2 + 6);
          v26.y = *((_DWORD *)a2 + 7) + v30.y;
          if ( EPATHOBJ::bPolyLineTo(a1, 0LL, &v26, 1u) )
          {
            v31 = (struct _POINTL)*((_QWORD *)a2 + 3);
            v23 = v31;
            v31.x += v28;
            v31.y += v29;
            LODWORD(v32) = v19 + v23.x;
            HIDWORD(v32) = v20 + v23.y;
            v33 = v18 + v23.x;
            v34 = v27.y + v23.y;
            if ( EPATHOBJ::bPolyBezierTo(a1, 0LL, &v31, 3u) )
            {
              v26.x = *((_DWORD *)a2 + 8) - v18;
              v26.y = *((_DWORD *)a2 + 9) - v27.y;
              if ( EPATHOBJ::bPolyLineTo(a1, 0LL, &v26, 1u) )
              {
                v32 = *((_QWORD *)a2 + 4);
                v24 = v32;
                LODWORD(v32) = v28 + v32;
                HIDWORD(v32) += v29;
                v31.x = v24 - v19;
                v31.y = HIDWORD(v24) - v20;
                v33 = x + v24;
                v34 = v30.y + HIDWORD(v24);
                if ( EPATHOBJ::bPolyBezierTo(a1, 0LL, &v31, 3u) )
                  return (unsigned int)EPATHOBJ::bCloseFigure(a1);
              }
            }
          }
        }
      }
    }
  }
  return v7;
}
