/*
 * XREFs of LoadEtwStackLocation @ 0x1C0004DD8
 * Callers:
 *     DpiDispatchInternalIoctl @ 0x1C00C2D40 (DpiDispatchInternalIoctl.c)
 *     DpiDispatchPnp @ 0x1C0134620 (DpiDispatchPnp.c)
 *     DpiDispatchPower @ 0x1C0143790 (DpiDispatchPower.c)
 *     DpiDispatchIoctl @ 0x1C01453B0 (DpiDispatchIoctl.c)
 *     DpiDispatchSystemControl @ 0x1C026E4B0 (DpiDispatchSystemControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LoadEtwStackLocation(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __m128i v3; // xmm1
  __m128i v4; // xmm2
  __m128i v5; // xmm3
  char v6; // dl
  __int64 v7; // xmm0_8
  __int128 v9; // [rsp+10h] [rbp-40h]

  v2 = *(_QWORD *)(a2 + 184);
  v3 = *(__m128i *)v2;
  v4 = *(__m128i *)(v2 + 32);
  v5 = *(__m128i *)(v2 + 48);
  v6 = _mm_cvtsi128_si32(*(__m128i *)v2);
  v9 = *(_OWORD *)(v2 + 16);
  v7 = *(_QWORD *)(v2 + 64);
  *(_BYTE *)a1 = v6;
  *(_BYTE *)(a1 + 2) = v3.m128i_i8[2];
  *(_QWORD *)(a1 + 48) = v5.m128i_i64[0];
  *(_QWORD *)(a1 + 64) = v7;
  *(_BYTE *)(a1 + 1) = v3.m128i_i8[1];
  *(_BYTE *)(a1 + 3) = v3.m128i_i8[3];
  *(_QWORD *)(a1 + 56) = _mm_srli_si128(v5, 8).m128i_u64[0];
  *(_QWORD *)(a1 + 40) = _mm_srli_si128(v4, 8).m128i_u64[0];
  if ( v6 != 27 )
    return a1;
  if ( v3.m128i_u8[1] > 0xCu )
  {
    if ( v3.m128i_u8[1] < 0xFu )
      return a1;
    if ( v3.m128i_u8[1] <= 0x10u )
    {
      *(_DWORD *)(a1 + 8) = v3.m128i_i32[2];
      *(_QWORD *)(a1 + 16) = v9;
      *(_DWORD *)(a1 + 24) = DWORD2(v9);
      *(_DWORD *)(a1 + 28) = v4.m128i_i32[0];
      return a1;
    }
    if ( v3.m128i_u8[1] == 19 )
      goto LABEL_10;
    if ( v3.m128i_u8[1] == 18 )
    {
      *(_BYTE *)(a1 + 8) = v3.m128i_i8[8];
      return a1;
    }
    if ( v3.m128i_u8[1] != 22 )
      return a1;
    *(_BYTE *)(a1 + 8) = v3.m128i_i8[8];
LABEL_22:
    *(_DWORD *)(a1 + 12) = v9;
    return a1;
  }
  if ( v3.m128i_u8[1] == 12 )
  {
    *(_DWORD *)(a1 + 8) = v3.m128i_i32[2];
    goto LABEL_22;
  }
  if ( !v3.m128i_i8[1] )
  {
LABEL_10:
    *(_DWORD *)(a1 + 8) = v3.m128i_i32[2];
    return a1;
  }
  if ( v3.m128i_u8[1] == 1 )
  {
    *(_QWORD *)(a1 + 8) = v3.m128i_i64[1];
    return a1;
  }
  if ( v3.m128i_u8[1] > 1u )
  {
    if ( v3.m128i_u8[1] <= 3u )
    {
      *(_DWORD *)(a1 + 8) = v3.m128i_i32[2];
      *(_DWORD *)(a1 + 12) = v9;
      *(_DWORD *)(a1 + 16) = DWORD2(v9);
      *(_DWORD *)(a1 + 20) = DWORD2(v9);
      *(_DWORD *)(a1 + 24) = v4.m128i_i32[0];
      return a1;
    }
    if ( v3.m128i_u8[1] == 7 )
      goto LABEL_10;
    if ( v3.m128i_u8[1] == 8 )
    {
      *(_QWORD *)(a1 + 8) = v3.m128i_i64[1];
      *(_DWORD *)(a1 + 16) = v9;
      *(_QWORD *)(a1 + 24) = *((_QWORD *)&v9 + 1);
      *(_QWORD *)(a1 + 32) = v4.m128i_i64[0];
    }
  }
  return a1;
}
