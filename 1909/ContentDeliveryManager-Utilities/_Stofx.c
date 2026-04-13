/*
 * XREFs of _Stofx @ 0x1800AE7C0
 * Callers:
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEAM@Z @ 0x1800316D0 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_1800316D0.c)
 *     ?do_get@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHAEAM@Z @ 0x180091960 (-do_get@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEB_ea_180091960.c)
 *     ?do_get@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHAEAM@Z @ 0x1800B4010 (-do_get@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_1800B4010.c)
 * Callees:
 *     _Stopfx @ 0x1800B568C (_Stopfx.c)
 *     _Stoflt @ 0x1800B57C8 (_Stoflt.c)
 *     _Stoxflt @ 0x1800B5A64 (_Stoxflt.c)
 *     _FDscale @ 0x1800B5D74 (_FDscale.c)
 *     _FXp_addx @ 0x1800B6290 (_FXp_addx.c)
 *     _FXp_mulx @ 0x1800B65A4 (_FXp_mulx.c)
 *     _FXp_setn @ 0x1800B66AC (_FXp_setn.c)
 *     _FXp_setw @ 0x1800B6734 (_FXp_setw.c)
 *     _FDtento @ 0x1800B67E8 (_FDtento.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 */

__m128 __fastcall Stofx(__int64 a1, int a2, __int64 a3, _DWORD *a4)
{
  __m128 result; // xmm0
  int v5; // ebx
  int v8; // eax
  int v9; // r12d
  unsigned int v10; // eax
  int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // r14
  __int64 v14; // rsi
  double v15; // xmm0_8
  int v16; // eax
  __int64 v17; // rsi
  __int64 v18; // r14
  __int64 v19; // rsi
  unsigned int v20; // [rsp+30h] [rbp-59h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-51h] BYREF
  __int64 v22; // [rsp+40h] [rbp-49h] BYREF
  float v23[4]; // [rsp+48h] [rbp-41h] BYREF
  float v24[4]; // [rsp+58h] [rbp-31h] BYREF
  float v25[4]; // [rsp+68h] [rbp-21h] BYREF
  _BYTE Src[24]; // [rsp+78h] [rbp-11h] BYREF

  v5 = a1;
  v22 = a1;
  v8 = Stopfx(&v22);
  v9 = v8 & 8;
  if ( a4 )
    *a4 = 0;
  v10 = v8 & 0xFFFFFFF7;
  switch ( v10 )
  {
    case 1u:
      *(double *)result.m128_u64 = Stoflt(v5, v22, a2, (unsigned int)&v20, 1);
      v12 = v11;
      FXp_setw(v24, 3LL);
      if ( (_DWORD)v12 )
      {
        FXp_setn(v23);
        v13 = v12;
        if ( v12 > 1 )
        {
          v14 = 1LL;
          do
          {
            FXp_mulx(v23, Src);
            ++v14;
            FXp_setn(v25);
            FXp_addx(v23);
          }
          while ( v14 < v13 );
        }
      }
      else
      {
        FXp_setw(v23, 3LL);
      }
      FDtento(v23);
      break;
    case 2u:
      v15 = Stoxflt(v5, v22, a2, (unsigned int)&v20, 1);
      v17 = v16;
      FXp_setw(v25, 3LL);
      if ( (_DWORD)v17 )
      {
        FXp_setn(v23);
        v18 = v17;
        if ( v17 > 1 )
        {
          v19 = 1LL;
          do
          {
            FXp_mulx(v23, Src);
            ++v19;
            FXp_setn(v24);
            FXp_addx(v23);
          }
          while ( v19 < v18 );
        }
      }
      else
      {
        FXp_setw(v23, 3LL);
      }
      FDtento(v23);
      v21 = LODWORD(v15);
      FDscale(&v21, v20);
      result = (__m128)v21;
      break;
    case 3u:
      result = (__m128)LODWORD(FInf._Float);
      break;
    case 4u:
      result = (__m128)LODWORD(FNan._Float);
      break;
    default:
      result = 0LL;
      break;
  }
  if ( v9 )
    return _mm_xor_ps(result, (__m128)_xmm);
  return result;
}
