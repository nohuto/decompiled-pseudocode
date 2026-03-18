/*
 * XREFs of ?DrawDiagonalLine@@YAKPEAUHDC__@@PEAUtagRECT@@HHI@Z @ 0x1C02414B4
 * Callers:
 *     ?DrawDiagonal@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@2I@Z @ 0x1C02413EC (-DrawDiagonal@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@2I@Z.c)
 *     ?FillTriangle@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@I@Z @ 0x1C0241720 (-FillTriangle@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@I@Z.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C007AA94 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     GrePolyPatBlt @ 0x1C007B620 (GrePolyPatBlt.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall DrawDiagonalLine(HDC a1, struct tagRECT *a2, int a3, __int64 a4, __int16 a5)
{
  __m128i *v7; // rdx
  int v8; // r11d
  int v10; // r9d
  int v11; // r8d
  int v12; // r13d
  int v13; // r10d
  int v14; // r12d
  int v15; // eax
  int v16; // r15d
  int v17; // r15d
  int *v18; // rcx
  __int8 *v19; // rbx
  int v20; // esi
  int v21; // r13d
  int v22; // edi
  int v23; // eax
  HDC v24; // r13
  __int64 v25; // r8
  __int64 v26; // rdx
  int v27; // ecx
  LONG top; // eax
  int v29; // eax
  int v30; // eax
  LONG left; // ecx
  int v32; // [rsp+30h] [rbp-D0h] BYREF
  int v33; // [rsp+34h] [rbp-CCh] BYREF
  int v34; // [rsp+38h] [rbp-C8h]
  HDC v35; // [rsp+40h] [rbp-C0h]
  __m128i v36; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v37[48]; // [rsp+60h] [rbp-A0h] BYREF

  v35 = a1;
  v34 = a3;
  if ( IsRectEmptyInl(a2) )
    return 0LL;
  v10 = _mm_cvtsi128_si32(*v7);
  v11 = _mm_srli_si128(*v7, 8).m128i_i32[1] - HIDWORD(v7->m128i_i64[0]);
  v12 = _mm_cvtsi128_si32(_mm_srli_si128(*v7, 8));
  v36 = *v7;
  v36.m128i_i32[0] = v10;
  v13 = v12 - v10;
  if ( v11 < v12 - v10 )
  {
    v16 = 1;
    v33 = 1;
    v15 = v13 / v11;
    v14 = v13 / v11;
    v32 = v13 / v11;
  }
  else
  {
    v14 = 1;
    v32 = 1;
    v15 = v11 / v13;
    v16 = v11 / v13;
    v33 = v11 / v13;
  }
  v17 = a3 * v16;
  v18 = &v32;
  v19 = &v36.m128i_i8[12];
  if ( v11 >= v13 )
    v18 = &v33;
  *v18 = v15;
  v20 = v32;
  v21 = v12 - v32;
  v22 = v33;
  v23 = v36.m128i_i32[3] - v33;
  v36.m128i_i32[2] = v21;
  if ( v34 < 0 )
    v19 = &v36.m128i_i8[4];
  v36.m128i_i32[3] -= v33;
  if ( v10 <= v21 )
  {
    v24 = v35;
    v25 = 0LL;
    while ( 1 )
    {
      if ( v36.m128i_i32[1] > v23 )
      {
LABEL_28:
        if ( v8 )
          GrePolyPatBlt(v24, 0xF00021u, (struct _POLYPATBLT *)v37, v8);
        return (unsigned __int16)v20 | ((unsigned __int16)v22 << 16);
      }
      v26 = 3 * v25;
      ++v8;
      ++v25;
      if ( (a5 & 0x800) == 0 )
        break;
      if ( v22 <= 1 )
      {
        v37[2 * v26 + 1] = *(_DWORD *)v19;
        if ( (a5 & 2) != 0 )
        {
          v30 = a2->right - v10;
          v37[2 * v26] = v10;
        }
        else
        {
          left = a2->left;
          v37[2 * v26] = a2->left;
          v30 = v20 + v10 - left;
        }
        v37[2 * v26 + 2] = v30;
        goto LABEL_23;
      }
      v27 = *(_DWORD *)v19;
      v37[2 * v26] = v10;
      v37[2 * v26 + 2] = v20;
      *(_QWORD *)&v37[2 * v26 + 4] = 0LL;
      if ( (a5 & 1) != 0 )
      {
        top = a2->top;
        v37[2 * v26 + 1] = top;
        v37[2 * v26 + 3] = v22 + v27 - top;
      }
      else
      {
        v29 = a2->bottom - v27;
        v37[2 * v26 + 1] = v27;
        v37[2 * v26 + 3] = v29;
      }
LABEL_24:
      v36.m128i_i32[0] = v14 + v10;
      *(_DWORD *)v19 -= v17;
      if ( v25 == 8 )
      {
        GrePolyPatBlt(v24, 0xF00021u, (struct _POLYPATBLT *)v37, 8);
        v8 = 0;
        v25 = 0LL;
      }
      v10 = v36.m128i_i32[0];
      if ( v36.m128i_i32[0] > v36.m128i_i32[2] )
        goto LABEL_28;
      v23 = v36.m128i_i32[3];
    }
    v37[2 * v26 + 1] = *(_DWORD *)v19;
    v37[2 * v26] = v10;
    v37[2 * v26 + 2] = v20;
LABEL_23:
    *(_QWORD *)&v37[2 * v26 + 4] = 0LL;
    v37[2 * v26 + 3] = v22;
    goto LABEL_24;
  }
  return (unsigned __int16)v20 | ((unsigned __int16)v22 << 16);
}
