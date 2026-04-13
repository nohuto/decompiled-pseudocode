/*
 * XREFs of _Stoldx @ 0x1800AB7E4
 * Callers:
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEAO@Z @ 0x180030620 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_180030620.c)
 *     ?do_get@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHAEAO@Z @ 0x18008F7A0 (-do_get@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEB_ea_18008F7A0.c)
 *     ?do_get@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHAEAO@Z @ 0x1800B00D0 (-do_get@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_1800B00D0.c)
 *     ?do_get@?$money_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0_NAEAVios_base@2@AEAHAEAO@Z @ 0x1800BCBC0 (-do_get@-$money_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-AV-$istreamb.c)
 *     ?do_get@?$money_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0_NAEAVios_base@2@AEAHAEAO@Z @ 0x1800BCE20 (-do_get@-$money_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEBA-AV-$istre.c)
 *     ?do_get@?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0_NAEAVios_base@2@AEAHAEAO@Z @ 0x1800C3E40 (-do_get@-$money_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$istreamb.c)
 * Callees:
 *     _Stopfx @ 0x1800B1560 (_Stopfx.c)
 *     _Stoflt @ 0x1800B169C (_Stoflt.c)
 *     _Stoxflt @ 0x1800B1938 (_Stoxflt.c)
 *     _LDscale @ 0x1800B36AC (_LDscale.c)
 *     _LXp_addx @ 0x1800B3A10 (_LXp_addx.c)
 *     _LXp_mulx @ 0x1800B3C7C (_LXp_mulx.c)
 *     _LXp_setn @ 0x1800B3D8C (_LXp_setn.c)
 *     _LXp_setw @ 0x1800B3DB4 (_LXp_setw.c)
 *     _LDtento @ 0x1800B3ECC (_LDtento.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 */

__m128 __fastcall Stoldx(__int64 a1, int a2, __int64 a3, _DWORD *a4)
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
  __int64 v20; // [rsp+30h] [rbp-89h] BYREF
  double v21; // [rsp+38h] [rbp-81h] BYREF
  unsigned int v22; // [rsp+40h] [rbp-79h] BYREF
  unsigned int v23; // [rsp+44h] [rbp-75h]
  long double v24[3]; // [rsp+50h] [rbp-69h] BYREF
  _BYTE v25[24]; // [rsp+68h] [rbp-51h] BYREF
  _BYTE v26[24]; // [rsp+80h] [rbp-39h] BYREF
  _BYTE Src[48]; // [rsp+98h] [rbp-21h] BYREF

  v5 = a1;
  v20 = a1;
  v8 = Stopfx(&v20);
  v9 = v8 & 8;
  if ( a4 )
    *a4 = 0;
  v10 = v8 & 0xFFFFFFF7;
  switch ( v10 )
  {
    case 1u:
      *(double *)result.m128_u64 = Stoflt(v5, v20, a2, (unsigned int)&v22, 2);
      v12 = v11;
      LXp_setw(v25, 3LL);
      if ( (_DWORD)v12 )
      {
        LXp_setn(v24, 3LL, v23);
        v13 = v12;
        if ( v12 > 1 )
        {
          v14 = 1LL;
          do
          {
            LXp_mulx(v24, Src);
            ++v14;
            LXp_setn(v26, 3LL, *(&v22 + v14));
            LXp_addx(v24);
          }
          while ( v14 < v13 );
        }
      }
      else
      {
        LXp_setw(v24, 3LL);
      }
      LDtento(v24);
      break;
    case 2u:
      v15 = Stoxflt(v5, v20, a2, (unsigned int)&v22, 2);
      v17 = v16;
      LXp_setw(v26, 3LL);
      if ( (_DWORD)v17 )
      {
        LXp_setn(v24, 3LL, v23);
        v18 = v17;
        if ( v17 > 1 )
        {
          v19 = 1LL;
          do
          {
            LXp_mulx(v24, Src);
            ++v19;
            LXp_setn(v25, 3LL, *(&v22 + v19));
            LXp_addx(v24);
          }
          while ( v19 < v18 );
        }
      }
      else
      {
        LXp_setw(v24, 3LL);
      }
      LDtento(v24);
      v21 = v15;
      LDscale(&v21, v22);
      result = (__m128)*(unsigned __int64 *)&v21;
      break;
    case 3u:
      result = (__m128)*(unsigned __int64 *)&LInf._Double;
      break;
    case 4u:
      result = (__m128)*(unsigned __int64 *)&LNan._Double;
      break;
    default:
      result = 0LL;
      break;
  }
  if ( v9 )
    return _mm_xor_ps(result, (__m128)_xmm);
  return result;
}
