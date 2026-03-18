/*
 * XREFs of ?DrawDiagonalLine@@YAKPEAUHDC__@@PEAUtagRECT@@HHI@Z @ 0x1C0259B04
 * Callers:
 *     ?DrawDiagonal@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@2I@Z @ 0x1C0259A3C (-DrawDiagonal@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@2I@Z.c)
 *     ?FillTriangle@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@I@Z @ 0x1C0259D74 (-FillTriangle@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@I@Z.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0014980 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     GrePolyPatBlt @ 0x1C012BFB4 (GrePolyPatBlt.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall DrawDiagonalLine(HDC a1, struct tagRECT *a2, int a3, __int64 a4, unsigned int a5)
{
  __m128i *v7; // rdx
  int v8; // r11d
  int v10; // r9d
  int v11; // r8d
  int v12; // r15d
  int v13; // r10d
  int v14; // r13d
  int v15; // eax
  int v16; // esi
  int v17; // esi
  int *v18; // rcx
  __int8 *v19; // rbx
  int v20; // r14d
  int v21; // r15d
  int v22; // edi
  int v23; // eax
  HDC v24; // r15
  __int64 v25; // r8
  char v26; // al
  __int64 v27; // rdx
  LONG v28; // eax
  LONG top; // ecx
  int v30; // eax
  int v31; // eax
  LONG left; // ecx
  int v33; // [rsp+30h] [rbp-D0h] BYREF
  int v34; // [rsp+34h] [rbp-CCh] BYREF
  int v35; // [rsp+38h] [rbp-C8h]
  unsigned int v36; // [rsp+3Ch] [rbp-C4h]
  HDC v37; // [rsp+40h] [rbp-C0h]
  __m128i v38; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v39[48]; // [rsp+60h] [rbp-A0h] BYREF

  v37 = a1;
  v35 = a3;
  if ( IsRectEmptyInl(a2) )
    return 0LL;
  v10 = _mm_cvtsi128_si32(*v7);
  v11 = _mm_srli_si128(*v7, 8).m128i_i32[1] - HIDWORD(v7->m128i_i64[0]);
  v12 = _mm_cvtsi128_si32(_mm_srli_si128(*v7, 8));
  v38 = *v7;
  v38.m128i_i32[0] = v10;
  v36 = a5;
  v13 = v12 - v10;
  if ( v11 < v12 - v10 )
  {
    v16 = 1;
    v34 = 1;
    v15 = v13 / v11;
    v14 = v13 / v11;
    v33 = v13 / v11;
  }
  else
  {
    v14 = 1;
    v33 = 1;
    v15 = v11 / v13;
    v16 = v11 / v13;
    v34 = v11 / v13;
  }
  v17 = a3 * v16;
  v18 = &v33;
  v19 = &v38.m128i_i8[12];
  if ( v11 >= v13 )
    v18 = &v34;
  *v18 = v15;
  v20 = v33;
  v21 = v12 - v33;
  v22 = v34;
  v23 = v38.m128i_i32[3] - v34;
  v38.m128i_i32[2] = v21;
  if ( v35 < v8 )
    v19 = &v38.m128i_i8[4];
  v38.m128i_i32[3] -= v34;
  if ( v10 <= v21 )
  {
    v24 = v37;
    v25 = 0LL;
    while ( 1 )
    {
      if ( v38.m128i_i32[1] > v23 )
      {
LABEL_29:
        if ( v8 )
          GrePolyPatBlt(v24, 15728673, (struct _POLYPATBLT *)v39, v8);
        return (unsigned __int16)v20 | ((unsigned __int16)v22 << 16);
      }
      v26 = v36;
      v27 = 3 * v25;
      ++v8;
      ++v25;
      if ( (v36 & 0x800) != 0 )
      {
        if ( v22 > 1 )
        {
          v39[2 * v27] = v10;
          v39[2 * v27 + 2] = v20;
          if ( (v26 & 1) != 0 )
          {
            top = a2->top;
            v30 = *(_DWORD *)v19 + v22 - top;
          }
          else
          {
            top = *(_DWORD *)v19;
            v30 = a2->bottom - *(_DWORD *)v19;
          }
          v39[2 * v27 + 1] = top;
          v39[2 * v27 + 3] = v30;
          *(_QWORD *)&v39[2 * v27 + 4] = 0LL;
          goto LABEL_25;
        }
        *(_QWORD *)&v39[2 * v27 + 4] = 0LL;
        v39[2 * v27 + 1] = *(_DWORD *)v19;
        if ( (v26 & 2) != 0 )
        {
          v31 = a2->right - v10;
          v39[2 * v27] = v10;
        }
        else
        {
          left = a2->left;
          v39[2 * v27] = a2->left;
          v31 = v20 + v10 - left;
        }
        v39[2 * v27 + 2] = v31;
      }
      else
      {
        v28 = *(_DWORD *)v19;
        *(_QWORD *)&v39[2 * v27 + 4] = 0LL;
        v39[2 * v27 + 1] = v28;
        v39[2 * v27] = v10;
        v39[2 * v27 + 2] = v20;
      }
      v39[2 * v27 + 3] = v22;
LABEL_25:
      v38.m128i_i32[0] = v14 + v10;
      *(_DWORD *)v19 -= v17;
      if ( v25 == 8 )
      {
        GrePolyPatBlt(v24, 15728673, (struct _POLYPATBLT *)v39, 8);
        v8 = 0;
        v25 = 0LL;
      }
      v10 = v38.m128i_i32[0];
      if ( v38.m128i_i32[0] > v38.m128i_i32[2] )
        goto LABEL_29;
      v23 = v38.m128i_i32[3];
    }
  }
  return (unsigned __int16)v20 | ((unsigned __int16)v22 << 16);
}
