/*
 * XREFs of ?bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z @ 0x1C0099808
 * Callers:
 *     NtGdiCreateRoundRectRgn @ 0x1C0098C60 (NtGdiCreateRoundRectRgn.c)
 *     NtGdiRoundRect @ 0x1C0251040 (NtGdiRoundRect.c)
 * Callees:
 *     ?vAbs@EFLOAT@@QEAAXXZ @ 0x1C0086660 (-vAbs@EFLOAT@@QEAAXXZ.c)
 *     ?bToPOINTL@EPOINTFL@@QEAAHAEAU_POINTL@@@Z @ 0x1C0099C08 (-bToPOINTL@EPOINTFL@@QEAAHAEAU_POINTL@@@Z.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C009A850 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ?efHalfDiff@@YA?AVEFLOAT@@JJ@Z @ 0x1C009B7F4 (-efHalfDiff@@YA-AVEFLOAT@@JJ@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall bRoundRect(struct EPATHOBJ *a1, struct EBOX *a2, __int64 a3)
{
  LONG v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // r14d
  int v11; // r9d
  int v12; // r10d
  float v13; // xmm3_4
  float v14; // xmm2_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  __m128i v18; // xmm0
  float v19; // xmm1_4
  LONG x; // edi
  LONG v21; // ebx
  __int64 v22; // r12
  __int64 v23; // r13
  __int64 v24; // kr00_8
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // kr08_8
  struct _POINTL v29; // [rsp+20h] [rbp-58h] BYREF
  struct _POINTL v30; // [rsp+28h] [rbp-50h] BYREF
  __int64 v31; // [rsp+30h] [rbp-48h] BYREF
  __int64 v32; // [rsp+38h] [rbp-40h] BYREF
  struct _POINTL v33; // [rsp+40h] [rbp-38h] BYREF
  struct _POINTL v34; // [rsp+48h] [rbp-30h] BYREF
  int v35; // [rsp+50h] [rbp-28h]
  int v36; // [rsp+54h] [rbp-24h]
  int v37; // [rsp+58h] [rbp-20h]
  int v38; // [rsp+5Ch] [rbp-1Ch]

  v5 = efHalfDiff(*((unsigned int *)a2 + 16), *((unsigned int *)a2 + 18), a3, (unsigned int)a3);
  v6 = *((unsigned int *)a2 + 19);
  v7 = *((unsigned int *)a2 + 17);
  v30.x = v5;
  v29.x = efHalfDiff(v7, v6, v8, v9);
  v10 = 0;
  if ( (unsigned int)EFLOAT::bIsZero((EFLOAT *)&v30) || (unsigned int)EFLOAT::bIsZero((EFLOAT *)&v29) )
  {
    v13 = FP_0_0;
    v14 = FP_0_0;
  }
  else
  {
    EFLOAT::vAbs((EFLOAT *)&v30);
    EFLOAT::vAbs((EFLOAT *)&v29);
    v13 = (float)(int)abs32(v11) / *(float *)&v30.x;
    v14 = (float)(int)abs32(v12) / *(float *)&v29.x;
  }
  if ( v13 > FP_2_0 )
    v15 = FP_1_0;
  else
    v15 = v13 * 0.5;
  if ( v14 > FP_2_0 )
    v16 = FP_1_0;
  else
    v16 = v14 * 0.5;
  v17 = (float)*((int *)a2 + 13);
  *(float *)&v32 = (float)*((int *)a2 + 12) * v15;
  v18 = _mm_cvtsi32_si128(*((_DWORD *)a2 + 14));
  *((float *)&v32 + 1) = v17 * v15;
  v19 = (float)*((int *)a2 + 15) * v16;
  *(float *)&v31 = _mm_cvtepi32_ps(v18).m128_f32[0] * v16;
  *((float *)&v31 + 1) = v19;
  EPOINTFL::bToPOINTL((EPOINTFL *)&v32, &v30);
  EPOINTFL::bToPOINTL((EPOINTFL *)&v31, &v33);
  x = v33.x;
  v21 = v30.x;
  v22 = (1922922357LL * v30.x) >> 32;
  v31 = (1922922357LL * v33.x) >> 32;
  v23 = (1922922357LL * v30.y) >> 32;
  v32 = (1922922357LL * v33.y) >> 32;
  v29.x = *((_DWORD *)a2 + 2) - v33.x;
  v29.y = *((_DWORD *)a2 + 3) - v33.y;
  if ( EPATHOBJ::bMoveTo(a1, 0LL, &v29) )
  {
    v24 = *((_QWORD *)a2 + 1);
    v34.x = v24 - v31;
    v34.y = HIDWORD(v24) - v32;
    v36 = HIDWORD(v24) - v23;
    v35 = v24 - v22;
    v38 = HIDWORD(v24) - v30.y;
    v37 = v24 - v21;
    if ( EPATHOBJ::bPolyBezierTo(a1, 0LL, &v34, 3u) )
    {
      v29.x = v21 + *((_DWORD *)a2 + 4);
      v29.y = *((_DWORD *)a2 + 5) + v30.y;
      if ( EPATHOBJ::bPolyLineTo(a1, 0LL, &v29, 1u) )
      {
        v25 = *((_QWORD *)a2 + 2);
        v34.y = v23 + HIDWORD(v25);
        v34.x = v25 + v22;
        v35 = v25 - v31;
        v36 = HIDWORD(v25) - v32;
        v38 = HIDWORD(v25) - v33.y;
        v37 = v25 - x;
        if ( EPATHOBJ::bPolyBezierTo(a1, 0LL, &v34, 3u) )
        {
          v29.x = x + *((_DWORD *)a2 + 6);
          v29.y = *((_DWORD *)a2 + 7) + v33.y;
          if ( EPATHOBJ::bPolyLineTo(a1, 0LL, &v29, 1u) )
          {
            v26 = *((_QWORD *)a2 + 3);
            v34.x = v26 + v31;
            v34.y = v32 + HIDWORD(v26);
            v36 = v23 + HIDWORD(v26);
            v35 = v26 + v22;
            v37 = v26 + v21;
            v38 = v30.y + HIDWORD(v26);
            if ( EPATHOBJ::bPolyBezierTo(a1, 0LL, &v34, 3u) )
            {
              v29.x = *((_DWORD *)a2 + 8) - v21;
              v29.y = *((_DWORD *)a2 + 9) - v30.y;
              if ( EPATHOBJ::bPolyLineTo(a1, 0LL, &v29, 1u) )
              {
                v27 = *((_QWORD *)a2 + 4);
                v34.y = HIDWORD(v27) - v23;
                v34.x = v27 - v22;
                v35 = v27 + v31;
                v36 = v32 + HIDWORD(v27);
                v37 = v27 + x;
                v38 = v33.y + HIDWORD(v27);
                if ( EPATHOBJ::bPolyBezierTo(a1, 0LL, &v34, 3u) )
                  return (unsigned int)EPATHOBJ::bCloseFigure(a1);
              }
            }
          }
        }
      }
    }
  }
  return v10;
}
