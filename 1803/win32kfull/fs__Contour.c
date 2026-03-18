/*
 * XREFs of fs__Contour @ 0x1C02B207C
 * Callers:
 *     bGetGlyphOutline @ 0x1C021E60C (bGetGlyphOutline.c)
 *     fs_NewContourGridFit @ 0x1C021F19C (fs_NewContourGridFit.c)
 * Callees:
 *     fs_SetUpKey @ 0x1C02B1F84 (fs_SetUpKey.c)
 *     CompDiv @ 0x1C02B2EE4 (CompDiv.c)
 *     InvokeGlobalGSScale @ 0x1C02B3B48 (InvokeGlobalGSScale.c)
 *     scl_CalcDevAdvanceWidth @ 0x1C02B404C (scl_CalcDevAdvanceWidth.c)
 *     scl_CalcDevHorMetrics @ 0x1C02B40A8 (scl_CalcDevHorMetrics.c)
 *     scl_ScaleUpToSubPixelOverscale @ 0x1C02B5948 (scl_ScaleUpToSubPixelOverscale.c)
 *     sbit_CalcDevHorMetrics @ 0x1C02B8BB8 (sbit_CalcDevHorMetrics.c)
 *     sbit_GetDevAdvanceHeight @ 0x1C02BA1D0 (sbit_GetDevAdvanceHeight.c)
 *     sbit_GetDevAdvanceWidth @ 0x1C02BA310 (sbit_GetDevAdvanceWidth.c)
 *     fsg_GetContourData @ 0x1C02BD7DC (fsg_GetContourData.c)
 *     fsg_GridFit @ 0x1C02BD8F4 (fsg_GridFit.c)
 *     fsg_QueryTwilightElement @ 0x1C02BE280 (fsg_QueryTwilightElement.c)
 *     fsg_QueryTwilightElementSubPixel @ 0x1C02BE2EC (fsg_QueryTwilightElementSubPixel.c)
 *     fsg_RunPreProgram @ 0x1C02BE34C (fsg_RunPreProgram.c)
 *     fsg_UpdatePrivateSpaceAddresses @ 0x1C02BE6C4 (fsg_UpdatePrivateSpaceAddresses.c)
 *     fsg_UpdateWorkSpaceElement @ 0x1C02BE848 (fsg_UpdateWorkSpaceElement.c)
 */

__int64 __fastcall fs__Contour(__int64 a1, __int64 a2, int a3)
{
  int v3; // ebx
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r13
  __int64 v12; // rsi
  __int64 v13; // r12
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r10
  __int16 v17; // dx
  __int64 v18; // rcx
  __int64 TwilightElementSubPixel; // rax
  __int64 TwilightElement; // rax
  int v21; // r11d
  __int64 v22; // r12
  int v23; // edx
  int v24; // r8d
  int v25; // r10d
  int v26; // r9d
  __int64 v27; // rdx
  __int16 v28; // ax
  unsigned int v29; // r12d
  int v30; // esi
  unsigned __int16 v31; // ax
  unsigned int v32; // eax
  int v33; // eax
  int v34; // r9d
  __int64 v35; // r8
  __int16 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rbx
  unsigned __int16 v39; // dx
  unsigned __int16 v40; // ax
  int v41; // ecx
  int v42; // r9d
  int v43; // r10d
  int v44; // r8d
  int v45; // [rsp+58h] [rbp-11h]
  int v46; // [rsp+60h] [rbp-9h]
  int v47; // [rsp+68h] [rbp-1h]
  int v48; // [rsp+70h] [rbp+7h] BYREF
  __int64 v49; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v50; // [rsp+80h] [rbp+17h]
  __int64 v51; // [rsp+88h] [rbp+1Fh]
  __int64 v52; // [rsp+D0h] [rbp+67h] BYREF
  int v53; // [rsp+E0h] [rbp+77h]
  int v54; // [rsp+E8h] [rbp+7Fh] BYREF
  int v55; // [rsp+ECh] [rbp+83h]

  v53 = a3;
  v3 = 0;
  LODWORD(v52) = 0;
  v50 = 0LL;
  v51 = 0LL;
  v48 = 0;
  v54 = 0;
  if ( !*(_QWORD *)(a1 + 8) || !*(_QWORD *)(a1 + 32) || !*(_QWORD *)(a1 + 40) )
    return 4099LL;
  v6 = fs_SetUpKey(a1, 14, &v52);
  v7 = v6;
  if ( !v6 )
    return (unsigned int)v52;
  v9 = *(_QWORD *)(v6 + 232);
  v10 = *(_QWORD *)(v9 + 24);
  if ( *(_QWORD *)(v7 + 264) == v10 && *(_QWORD *)(v7 + 272) == *(_QWORD *)(v9 + 32) )
  {
    v11 = v7 + 432;
    v12 = v7 + 480;
    v13 = v7 + 568;
  }
  else
  {
    v12 = v7 + 480;
    v11 = v7 + 432;
    v14 = v10 + *(unsigned int *)(v7 + 480);
    v13 = v7 + 568;
    *(_QWORD *)(v7 + 432) = v14;
    *(_QWORD *)(v7 + 440) = v10 + *(unsigned int *)(v7 + 484);
    *(_QWORD *)(v7 + 448) = v10 + *(unsigned int *)(v7 + 488);
    *(_QWORD *)(v7 + 456) = v10 + *(unsigned int *)(v7 + 492);
    *(_QWORD *)(v7 + 464) = v10 + *(unsigned int *)(v7 + 496);
    *(_QWORD *)(v7 + 472) = v10 + *(unsigned int *)(v7 + 548);
    result = fsg_UpdatePrivateSpaceAddresses(
               v7,
               (int)v7 + 388,
               *(_QWORD *)(*(_QWORD *)(v7 + 232) + 32LL),
               (int)v7 + 568,
               v14,
               (__int64)&v49,
               (__int64)&v52);
    if ( (_DWORD)result )
      return result;
    v15 = *(_QWORD *)(v7 + 232);
    *(_OWORD *)(v7 + 240) = *(_OWORD *)v15;
    *(_OWORD *)(v7 + 256) = *(_OWORD *)(v15 + 16);
    *(_OWORD *)(v7 + 272) = *(_OWORD *)(v15 + 32);
    *(_OWORD *)(v7 + 288) = *(_OWORD *)(v15 + 48);
    *(_QWORD *)(v7 + 304) = *(_QWORD *)(v15 + 64);
  }
  fsg_UpdateWorkSpaceElement(v12, v11);
  v16 = *(_QWORD *)(v7 + 232);
  v17 = *(_WORD *)(v7 + 1076);
  v18 = *(_QWORD *)(v16 + 32);
  v49 = v18 + *(unsigned int *)(v7 + 584);
  if ( (v17 & 2) != 0 )
  {
    v50 = v18 + *(unsigned int *)(v7 + 668);
    TwilightElementSubPixel = fsg_QueryTwilightElementSubPixel(v18, v13);
    v17 = *(_WORD *)(v7 + 1076);
    v16 = *(_QWORD *)(v7 + 232);
    v51 = TwilightElementSubPixel;
  }
  if ( (v17 & 3) == 1 )
  {
    v48 = 1;
    if ( (v17 & 0x10) != 0 )
      v54 = 1;
  }
  TwilightElement = fsg_QueryTwilightElement(*(_QWORD *)(v16 + 32), v13);
  v22 = TwilightElement;
  if ( *(_DWORD *)(v7 + 1064) )
  {
    if ( *(_DWORD *)(v7 + 424) )
    {
      *(_DWORD *)(v7 + 424) = 0;
      result = fsg_RunPreProgram(v7, (int)v7 + 388, (int)v7 + 316, v21, v11, TwilightElement, 0LL);
      if ( (_DWORD)result
        || (*(_BYTE *)(v7 + 1076) & 2) != 0
        && (result = fsg_RunPreProgram(v7, (int)v7 + 388, (int)v7 + 1080, v50, v11, v51, 0LL), (_DWORD)result) )
      {
        *(_DWORD *)(v7 + 1064) = 0;
        return result;
      }
    }
    v23 = v53;
  }
  else
  {
    *(_DWORD *)(v7 + 424) = 0;
    v23 = 0;
    v53 = 0;
  }
  if ( *(_DWORD *)(a1 + 120) && *(_DWORD *)(v7 + 844) && (*(_BYTE *)(v7 + 1076) & 1) == 0 )
  {
    *(_DWORD *)(v7 + 956) = 1;
    result = sbit_GetDevAdvanceWidth(v7 + 964, v7, &v52);
    if ( (_DWORD)result )
      return result;
    result = sbit_GetDevAdvanceHeight(v7 + 964, v7, &v54);
    if ( (_DWORD)result )
      return result;
    v24 = v55;
    v25 = v54;
    goto LABEL_50;
  }
  v47 = v54;
  v46 = v48;
  v45 = *(_DWORD *)(v7 + 1068);
  v26 = v49;
  *(_DWORD *)(v7 + 956) = 0;
  result = fsg_GridFit(
             v7,
             (int)v7 + 388,
             (int)v7 + 316,
             v26,
             v11,
             v22,
             *(_QWORD *)(a1 + 112),
             v23,
             v7 + 312,
             v7 + 952,
             v7 + 384,
             v45,
             v46,
             v47);
  if ( (_DWORD)result )
    return result;
  v28 = *(_WORD *)(v7 + 1076);
  if ( (v28 & 1) == 0 )
  {
LABEL_49:
    fsg_GetContourData(
      v11,
      *(_WORD *)(v7 + 1076) & 1,
      *(_WORD *)(v7 + 1076) & 0x10,
      a2 + 120,
      a2 + 128,
      a2 + 136,
      a2 + 144,
      a2 + 152,
      a2 + 224,
      a2 + 118);
    v38 = *(_QWORD *)(v7 + 448);
    scl_CalcDevAdvanceWidth(v38, &v52);
    v39 = *(_WORD *)(*(_QWORD *)(v38 + 64) + 2LL * (*(__int16 *)(v38 + 80) - 1));
    v40 = v39 + 4;
    v39 += 3;
    v25 = *(_DWORD *)(*(_QWORD *)v38 + 4LL * v39) - *(_DWORD *)(*(_QWORD *)v38 + 4LL * v40);
    v24 = *(_DWORD *)(*(_QWORD *)(v38 + 8) + 4LL * v39) - *(_DWORD *)(*(_QWORD *)(v38 + 8) + 4LL * v40);
LABEL_50:
    v41 = (_DWORD)v52 << 10;
    v42 = HIDWORD(v52) << 10;
    v43 = v25 << 10;
    v44 = v24 << 10;
    *(_DWORD *)(a2 + 72) = (_DWORD)v52 << 10;
    *(_DWORD *)(a2 + 76) = v42;
    *(_DWORD *)(a2 + 204) = v43;
    *(_DWORD *)(a2 + 208) = v44;
    if ( (*(_BYTE *)(v7 + 1076) & 1) != 0 )
    {
      *(_DWORD *)(a2 + 72) = (v41 + 3) / 6;
      *(_DWORD *)(a2 + 204) = (v43 + 3) / 6;
      if ( (*(_BYTE *)(v7 + 1076) & 0x10) != 0 )
      {
        *(_DWORD *)(a2 + 76) = (v42 + 2) / 5;
        *(_DWORD *)(a2 + 208) = (v44 + 2) / 5;
      }
    }
    *(_WORD *)(a2 + 116) = *(_WORD *)(v7 + 952);
    *(_QWORD *)(a2 + 160) = *(_QWORD *)(*(_QWORD *)(v7 + 232) + 32LL) + *(unsigned int *)(v7 + 580);
    result = 0LL;
    *(_DWORD *)(v7 + 420) = 30;
    return result;
  }
  LODWORD(v52) = 0;
  v48 = 0;
  v54 = 0;
  v29 = (v28 & 0x10 | 4) << 14;
  v30 = 0;
  if ( (v28 & 2) == 0 )
    goto LABEL_43;
  if ( *(_DWORD *)(v7 + 844) )
  {
    result = sbit_CalcDevHorMetrics((int)v7 + 964, v7, (unsigned int)&v52, (unsigned int)&v48, (__int64)&v54);
    if ( (_DWORD)result )
      return result;
  }
  else
  {
    scl_CalcDevHorMetrics(*(_QWORD *)(v7 + 448), &v52, &v48, &v54);
  }
  v31 = *(_WORD *)(v7 + 384);
  v30 = v52;
  if ( v31 && (_DWORD)v52 )
  {
    v32 = InvokeGlobalGSScale(*(unsigned int *)(v49 + 184), v49 + 264, v31);
    v52 = (__int64)v30 << 16;
    v33 = CompDiv(v32, v52);
    if ( v33 < 0 )
      v33 = -v33;
  }
  else
  {
    v33 = 0x10000;
  }
  v34 = v50;
  *(_DWORD *)(v50 + 468) = v33;
  result = fsg_GridFit(
             v7,
             (int)v7 + 388,
             (int)v7 + 1080,
             v34,
             v11,
             v51,
             *(_QWORD *)(a1 + 112),
             v53,
             v7 + 312,
             v7 + 952,
             v7 + 384,
             *(_DWORD *)(v7 + 1068),
             *(_WORD *)(v7 + 1076) & 1,
             *(_WORD *)(v7 + 1076) & 0x10);
  if ( !(_DWORD)result )
  {
LABEL_43:
    scl_ScaleUpToSubPixelOverscale(*(_QWORD *)(v7 + 448), v27, v29);
    if ( v53 && (*(_BYTE *)(v7 + 1076) & 2) != 0 )
    {
      v35 = *(_QWORD *)(v7 + 448);
      v36 = *(_WORD *)(*(_QWORD *)(v35 + 64) + 2LL * (*(__int16 *)(v35 + 80) - 1));
      if ( v36 != -1 )
      {
        v37 = 0LL;
        do
        {
          ++v3;
          v37 += 4LL;
        }
        while ( v3 < (unsigned __int16)(v36 + 1) );
      }
      *(_DWORD *)(*(_QWORD *)v35 + 4LL * (unsigned __int16)(v36 + 2)) = 6 * v30
                                                                      + *(_DWORD *)(*(_QWORD *)v35
                                                                                  + 4LL * (unsigned __int16)(v36 + 1));
    }
    goto LABEL_49;
  }
  return result;
}
