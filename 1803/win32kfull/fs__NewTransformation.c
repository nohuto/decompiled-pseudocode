/*
 * XREFs of fs__NewTransformation @ 0x1C02B27B0
 * Callers:
 *     bSetXform @ 0x1C0222A4C (bSetXform.c)
 *     bChangeXform @ 0x1C0223C20 (bChangeXform.c)
 * Callees:
 *     fs_SetUpKey @ 0x1C02B1F84 (fs_SetUpKey.c)
 *     sbit_NewTransform @ 0x1C02BAA80 (sbit_NewTransform.c)
 *     fsg_CopyFontProgramResults @ 0x1C02BC974 (fsg_CopyFontProgramResults.c)
 *     fsg_InitInterpreterTrans @ 0x1C02BDA78 (fsg_InitInterpreterTrans.c)
 *     fsg_QueryPPEMXY @ 0x1C02BE1E8 (fsg_QueryPPEMXY.c)
 *     fsg_QueryTwilightElement @ 0x1C02BE280 (fsg_QueryTwilightElement.c)
 *     fsg_QueryTwilightElementSubPixel @ 0x1C02BE2EC (fsg_QueryTwilightElementSubPixel.c)
 *     fsg_RunPreProgram @ 0x1C02BE34C (fsg_RunPreProgram.c)
 *     fsg_UpdatePrivateSpaceAddresses @ 0x1C02BE6C4 (fsg_UpdatePrivateSpaceAddresses.c)
 *     fsg_UpdateWorkSpaceElement @ 0x1C02BE848 (fsg_UpdateWorkSpaceElement.c)
 *     sfac_CopyFontAndPrePrograms @ 0x1C02BF548 (sfac_CopyFontAndPrePrograms.c)
 *     itrp_ExecuteFontPgm @ 0x1C02C73BC (itrp_ExecuteFontPgm.c)
 */

__int64 __fastcall fs__NewTransformation(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  __int64 *v4; // r9
  int *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // r11d
  __int64 v11; // rbx
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 *v14; // r10
  __int64 v15; // rcx
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rax
  __int16 v19; // ax
  __int16 v20; // ax
  int v21; // r9d
  __int16 v22; // dx
  __int16 v23; // r8
  __int16 v24; // cx
  __int16 v25; // r10
  __int64 v26; // rcx
  __int64 TwilightElementSubPixel; // rax
  int v28; // ecx
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  unsigned __int16 v32; // dx
  unsigned __int16 v33; // r8
  BOOL v34; // eax
  unsigned int inited; // eax
  __int16 v36; // dx
  unsigned int v37; // ecx
  int v38; // eax
  int v39; // r9d
  int v40; // edx
  __int64 v41; // r9
  __int64 v42; // rcx
  __int16 v43; // [rsp+60h] [rbp-20h] BYREF
  __int64 v44; // [rsp+68h] [rbp-18h]
  __int64 v45; // [rsp+70h] [rbp-10h] BYREF
  __int64 v46; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v47; // [rsp+C8h] [rbp+48h]
  __int64 TwilightElement; // [rsp+D8h] [rbp+58h] BYREF

  v47 = a2;
  LODWORD(v46) = 0;
  v3 = 0LL;
  v44 = 0LL;
  if ( !*(_QWORD *)(a1 + 8) )
    return 4099LL;
  v4 = (__int64 *)(a1 + 32);
  if ( !*(_QWORD *)(a1 + 32) || !*(_QWORD *)(a1 + 40) )
    return 4099LL;
  v5 = (int *)(a2 + 12);
  v6 = 2LL;
  do
  {
    v7 = *v5++;
    v8 = *v4++;
    *(_DWORD *)(v7 + v8 - 4) = 1936092788;
    --v6;
  }
  while ( v6 );
  v9 = fs_SetUpKey(a1, 2, &v46);
  v11 = v9;
  if ( !v9 )
    return (unsigned int)v46;
  *(_DWORD *)(v9 + 1064) = v10;
  v13 = *(_QWORD *)(*(_QWORD *)(v9 + 232) + 24LL);
  *(_QWORD *)(v9 + 432) = v13 + *(unsigned int *)(v9 + 480);
  *(_QWORD *)(v9 + 440) = v13 + *(unsigned int *)(v9 + 484);
  *(_QWORD *)(v9 + 448) = v13 + *(unsigned int *)(v9 + 488);
  *(_QWORD *)(v9 + 456) = v13 + *(unsigned int *)(v9 + 492);
  *(_QWORD *)(v9 + 464) = v13 + *(unsigned int *)(v9 + 496);
  *(_QWORD *)(v9 + 472) = v13 + *(unsigned int *)(v9 + 548);
  fsg_UpdateWorkSpaceElement(v9 + 480, v9 + 432);
  result = fsg_UpdatePrivateSpaceAddresses(
             v11,
             (int)v11 + 388,
             *(_QWORD *)(*(_QWORD *)(v11 + 232) + 32LL),
             (int)v11 + 568,
             *v14,
             (__int64)&v45,
             (__int64)&v46);
  if ( !(_DWORD)result )
  {
    v15 = *(_QWORD *)(*(_QWORD *)(v11 + 232) + 32LL);
    v16 = v15 + *(unsigned int *)(v11 + 584);
    TwilightElement = fsg_QueryTwilightElement(v15, v11 + 568);
    v17 = *(_QWORD *)(v11 + 232);
    *(_OWORD *)(v11 + 240) = *(_OWORD *)v17;
    *(_OWORD *)(v11 + 256) = *(_OWORD *)(v17 + 16);
    *(_OWORD *)(v11 + 272) = *(_OWORD *)(v17 + 32);
    *(_OWORD *)(v11 + 288) = *(_OWORD *)(v17 + 48);
    *(_QWORD *)(v11 + 304) = *(_QWORD *)(v17 + 64);
    *(_DWORD *)(v11 + 424) = *(_QWORD *)(a1 + 128) == 0LL;
    if ( *(_DWORD *)(v11 + 1064) )
    {
      if ( *(_DWORD *)(v11 + 428) )
      {
        result = sfac_CopyFontAndPrePrograms(v11, v45, v46);
        if ( (_DWORD)result )
          return result;
      }
    }
    else
    {
      *(_QWORD *)(v11 + 424) = 1LL;
    }
    v18 = *(_QWORD *)(a1 + 120);
    *(_OWORD *)(v11 + 320) = *(_OWORD *)v18;
    *(_OWORD *)(v11 + 336) = *(_OWORD *)(v18 + 16);
    *(_DWORD *)(v11 + 352) = *(_DWORD *)(v18 + 32);
    *(_DWORD *)(v11 + 368) = *(_DWORD *)(a1 + 112);
    *(_WORD *)(v11 + 832) = *(_WORD *)(a1 + 136);
    if ( *(_DWORD *)(a1 + 164) )
    {
      if ( *(_WORD *)(a1 + 136) != 4
        || !*(_DWORD *)(a1 + 148)
        || (*(_BYTE *)(a1 + 152) & 1) != 0
        || *(_DWORD *)(a1 + 160) )
      {
        return 6913LL;
      }
      *(_WORD *)(v11 + 832) = 0;
      v19 = *(_WORD *)(a1 + 136);
    }
    else
    {
      v19 = 0;
    }
    *(_WORD *)(v11 + 1156) = v19;
    *(_DWORD *)(v11 + 1152) = *(_DWORD *)(a1 + 164);
    v20 = 0;
    v21 = *(unsigned __int16 *)(a1 + 108);
    *(_WORD *)(v11 + 1076) = 0;
    v22 = *(_WORD *)(a1 + 152);
    LOWORD(v46) = v21;
    if ( (v22 & 1) != 0 )
    {
      *(_WORD *)(v11 + 1076) = 1;
      v20 = 1;
      v22 = *(_WORD *)(a1 + 152);
    }
    v23 = v20;
    if ( (v22 & 2) != 0 && !*(_DWORD *)(v11 + 324) )
    {
      v23 = v20 | 2;
      *(_WORD *)(v11 + 1076) = v20 | 2;
      v22 = *(_WORD *)(a1 + 152);
    }
    if ( (v22 & 4) != 0 )
    {
      v23 |= 4u;
      *(_WORD *)(v11 + 1076) = v23;
      v22 = *(_WORD *)(a1 + 152);
    }
    v24 = v23;
    if ( (v22 & 0x11) == 1 && !*(_DWORD *)(v11 + 320) )
    {
      v24 = v23 ^ 4;
      *(_WORD *)(v11 + 1076) = v23 ^ 4;
      v22 = *(_WORD *)(a1 + 152);
    }
    if ( (v22 & 8) != 0 )
    {
      v24 |= 8u;
      *(_WORD *)(v11 + 1076) = v24;
      v22 = *(_WORD *)(a1 + 152);
    }
    if ( (v22 & 0x10) != 0 )
    {
      v24 |= 0x10u;
      *(_WORD *)(v11 + 1076) = v24;
    }
    v25 = 0;
    if ( (v24 & 1) != 0 && *(_WORD *)(v11 + 832) )
      return 5889LL;
    if ( (v24 & 0xE) != 0 )
    {
      if ( (v24 & 1) == 0 )
        return 5889LL;
    }
    else if ( (v24 & 1) == 0 )
    {
      goto LABEL_44;
    }
    if ( (v24 & 2) != 0 )
    {
      v26 = *(_QWORD *)(*(_QWORD *)(v11 + 232) + 32LL);
      v3 = v26 + *(unsigned int *)(v11 + 668);
      TwilightElementSubPixel = fsg_QueryTwilightElementSubPixel(v26, v11 + 568);
      v28 = *(_DWORD *)(v11 + 380);
      v29 = *(_OWORD *)(v11 + 332);
      v21 = (unsigned __int16)v46;
      *(_OWORD *)(v11 + 1080) = *(_OWORD *)(v11 + 316);
      v44 = TwilightElementSubPixel;
      v30 = *(_OWORD *)(v11 + 348);
      *(_OWORD *)(v11 + 1096) = v29;
      v31 = *(_OWORD *)(v11 + 364);
      *(_OWORD *)(v11 + 1112) = v30;
      *(_OWORD *)(v11 + 1128) = v31;
      *(_DWORD *)(v11 + 1144) = v28;
    }
    else
    {
      v25 = v24;
    }
LABEL_44:
    v32 = *(_WORD *)(v11 + 832);
    if ( v32 && ((1 << (v32 - 1)) & 0x8B) == 0 )
      return 5889LL;
    if ( v32 > 0x1Fu )
      return 5889LL;
    if ( *(_DWORD *)(a1 + 164) )
    {
      v33 = *(_WORD *)(v11 + 1156);
      if ( ((1 << (v33 - 1)) & 0x8B) == 0 || v33 > 0x1Fu )
        return 5889LL;
    }
    v34 = v32 != 0;
    *(_DWORD *)(v11 + 836) = v34;
    *(_DWORD *)(v16 + 392) = v34;
    *(_WORD *)(v16 + 452) = v25;
    inited = fsg_InitInterpreterTrans(
               (int)v11 + 316,
               v16,
               *(_DWORD *)(a1 + 104),
               v21,
               *(_WORD *)(a1 + 110),
               *(_DWORD *)(a1 + 156),
               *(_WORD *)(a1 + 138),
               *(_WORD *)(a1 + 140),
               *(_WORD *)(v11 + 228),
               *(_DWORD *)(a1 + 144),
               v11 + 1072,
               v11 + 1074);
    v36 = *(_WORD *)(v11 + 1076);
    v37 = inited;
    if ( (v36 & 2) != 0 )
    {
      v38 = *(_DWORD *)(v11 + 836);
      v39 = (unsigned __int16)v46;
      *(_WORD *)(v3 + 452) = v36;
      *(_DWORD *)(v3 + 392) = v38;
      v37 = fsg_InitInterpreterTrans(
              (int)v11 + 1080,
              v3,
              *(_DWORD *)(a1 + 104),
              v39,
              *(_WORD *)(a1 + 110),
              *(_DWORD *)(a1 + 156),
              *(_WORD *)(a1 + 138),
              *(_WORD *)(a1 + 140),
              *(_WORD *)(v11 + 228),
              *(_DWORD *)(a1 + 144),
              v11 + 1072,
              v11 + 1074);
    }
    *(_DWORD *)(v11 + 1068) = *(_DWORD *)(a1 + 148);
    v40 = *(_DWORD *)(a1 + 160);
    if ( v40 && ((*(_BYTE *)(a1 + 152) & 1) == 0 || !*(_DWORD *)(a1 + 148)) )
      return 6914LL;
    *(_DWORD *)(v11 + 1148) = v40;
    if ( v37 )
      return v37;
    if ( *(_DWORD *)(v11 + 428) )
    {
      v41 = *(_QWORD *)(a1 + 128);
      v42 = TwilightElement;
      *(_DWORD *)(v16 + 408) = 10000000;
      result = itrp_ExecuteFontPgm(v42, *(_QWORD *)(v11 + 448), v16, v41);
      if ( (_DWORD)result )
        return result;
      *(_DWORD *)(v11 + 428) = 0;
    }
    if ( (*(_BYTE *)(v11 + 1076) & 2) != 0 )
      fsg_CopyFontProgramResults(v16, v3);
    if ( !*(_DWORD *)(v11 + 424)
      && ((result = fsg_RunPreProgram(
                      v11,
                      (int)v11 + 388,
                      (int)v11 + 316,
                      v16,
                      v11 + 432,
                      TwilightElement,
                      *(_QWORD *)(a1 + 128)),
           (_DWORD)result)
       || (*(_BYTE *)(v11 + 1076) & 2) != 0
       && (result = fsg_RunPreProgram(v11, (int)v11 + 388, (int)v11 + 1080, v3, v11 + 432, v44, *(_QWORD *)(a1 + 128)),
           (_DWORD)result)) )
    {
      *(_DWORD *)(v11 + 1064) = 0;
    }
    else
    {
      *(_QWORD *)(v47 + 160) = *(_QWORD *)(*(_QWORD *)(v11 + 232) + 32LL) + *(unsigned int *)(v11 + 580);
      fsg_QueryPPEMXY(v16, v11 + 316, (unsigned int)&v43, (unsigned int)&TwilightElement, (__int64)&v46);
      result = sbit_NewTransform(
                 (int)v11 + 964,
                 *(unsigned __int16 *)(v11 + 316),
                 *(unsigned __int16 *)(v11 + 1072),
                 *(unsigned __int16 *)(v11 + 1074),
                 v43,
                 TwilightElement,
                 v46);
      if ( !(_DWORD)result )
        *(_DWORD *)(v11 + 420) = 6;
    }
  }
  return result;
}
