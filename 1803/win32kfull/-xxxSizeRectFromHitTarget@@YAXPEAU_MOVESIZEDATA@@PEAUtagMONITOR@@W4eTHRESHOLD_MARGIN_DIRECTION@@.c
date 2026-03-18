/*
 * XREFs of ?xxxSizeRectFromHitTarget@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01C4C44
 * Callers:
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01C4330 (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C0035A78 (GetMonitorWorkRectForWindow.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x1C01C31E0 (-xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@P.c)
 */

__int64 __fastcall xxxSizeRectFromHitTarget(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __m128i v7; // xmm1
  int v8; // edi
  int v9; // edi
  int v10; // ecx
  int v11; // eax
  int v12; // r8d
  int v13; // edx
  __int32 v14; // r9d
  int v15; // r8d
  __int32 v16; // edx
  __int32 v17; // ecx
  __int32 v18; // edx
  __int32 v19; // ecx
  __int32 v20; // eax
  __int32 v21; // edx
  __int32 v22; // eax
  __int32 v23; // ecx
  __int32 v24; // eax
  int v25; // eax
  int v26; // edx
  int v27; // ecx
  int v28; // eax
  int v29; // eax
  int v30; // ecx
  int v31; // edx
  int v32; // edx
  __int128 v33; // [rsp+20h] [rbp-30h] BYREF
  __m128i v34; // [rsp+30h] [rbp-20h] BYREF

  result = xxxGetSizeRectFromShell(a1, a2, a3, v34.m128i_i32);
  if ( (_DWORD)result )
    goto LABEL_40;
  result = (__int64)GetMonitorWorkRectForWindow(&v33, a2, *(const struct tagWND **)(a1 + 16));
  v7 = *(__m128i *)result;
  v34 = *(__m128i *)result;
  if ( a3 )
  {
    v8 = a3 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 == 1 )
        {
          v10 = *(_DWORD *)(a1 + 104);
          v11 = _mm_cvtsi128_si32(v7);
          v12 = _mm_cvtsi128_si32(_mm_srli_si128(v7, 8)) - v11;
          if ( v12 < v10 )
            v34.m128i_i32[2] = v10 + v11;
          v13 = *(_DWORD *)(a1 + 116);
          if ( v12 < v13 )
          {
            result = v34.m128i_u32[1];
          }
          else
          {
            result = (unsigned int)(v34.m128i_i32[3] - v13);
            v34.m128i_i32[1] = v34.m128i_i32[3] - v13;
          }
          v14 = *(_DWORD *)(a1 + 108);
          v15 = v34.m128i_i32[3] - result;
          if ( v34.m128i_i32[3] - (int)result < v14 )
          {
            result = (unsigned int)(v34.m128i_i32[3] - v14);
            v34.m128i_i32[1] = v34.m128i_i32[3] - v14;
          }
          if ( v15 >= v13 )
            v34.m128i_i32[1] = v34.m128i_i32[3] - v13;
        }
        goto LABEL_40;
      }
      v16 = (v34.m128i_i32[2] - v34.m128i_i32[0]) / 2;
      v34.m128i_i32[0] = v34.m128i_i32[2] - v16;
      v17 = *(_DWORD *)(a1 + 104);
      if ( v16 < v17 )
        v34.m128i_i32[0] = v34.m128i_i32[2] - v17;
      result = *(unsigned int *)(a1 + 112);
      if ( v16 >= (int)result )
        v34.m128i_i32[0] = v34.m128i_i32[2] - result;
      v18 = v34.m128i_i32[3] - v34.m128i_i32[1];
      v19 = *(_DWORD *)(a1 + 116);
      if ( v34.m128i_i32[3] - v34.m128i_i32[1] < *(_DWORD *)(a1 + 108) )
      {
        result = (unsigned int)(v19 + v34.m128i_i32[1]);
        v34.m128i_i32[3] = v19 + v34.m128i_i32[1];
      }
      if ( v18 >= v19 )
      {
        result = (unsigned int)(v19 + v34.m128i_i32[1]);
LABEL_39:
        v34.m128i_i32[3] = result;
      }
    }
    else
    {
      v20 = *(_DWORD *)(a1 + 104);
      v34.m128i_i32[2] = (v34.m128i_i32[2] - v34.m128i_i32[0]) / 2 + v34.m128i_i32[0];
      v21 = v34.m128i_i32[2] - v34.m128i_i32[0];
      if ( v34.m128i_i32[2] - v34.m128i_i32[0] < v20 )
        v34.m128i_i32[2] = v34.m128i_i32[0] + v20;
      v22 = *(_DWORD *)(a1 + 112);
      if ( v21 >= v22 )
        v34.m128i_i32[2] = v34.m128i_i32[0] + v22;
      v23 = v34.m128i_i32[3] - v34.m128i_i32[1];
      v24 = *(_DWORD *)(a1 + 108);
      if ( v34.m128i_i32[3] - v34.m128i_i32[1] < v24 )
        v34.m128i_i32[3] = v34.m128i_i32[1] + v24;
      result = *(unsigned int *)(a1 + 116);
      if ( v23 >= (int)result )
      {
        result = (unsigned int)(v34.m128i_i32[1] + result);
        goto LABEL_39;
      }
    }
  }
  else
  {
    v25 = *(_DWORD *)(a1 + 104);
    v26 = _mm_cvtsi128_si32(v34);
    v27 = _mm_cvtsi128_si32(_mm_srli_si128(v34, 8)) - v26;
    if ( v27 < v25 )
      v34.m128i_i32[2] = v26 + v25;
    v28 = *(_DWORD *)(a1 + 112);
    if ( v27 >= v28 )
      v34.m128i_i32[2] = v26 + v28;
    v29 = *(_DWORD *)(a1 + 108);
    v30 = _mm_cvtsi128_si32(_mm_srli_si128(v34, 4));
    v31 = _mm_cvtsi128_si32(_mm_srli_si128(v34, 12));
    v34.m128i_i32[1] = v30;
    v32 = v31 - v30;
    if ( v32 < v29 )
      v34.m128i_i32[3] = v30 + v29;
    result = *(unsigned int *)(a1 + 116);
    if ( v32 >= (int)result )
    {
      result = (unsigned int)(v30 + result);
      goto LABEL_39;
    }
  }
LABEL_40:
  if ( (*(_DWORD *)(a1 + 196) & 0x2000000) != 0 )
    *(__m128i *)(a1 + 72) = v34;
  else
    *(__m128i *)(a1 + 40) = v34;
  return result;
}
