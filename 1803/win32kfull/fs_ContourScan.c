/*
 * XREFs of fs_ContourScan @ 0x1C02B013C
 * Callers:
 *     lGGOBitmap @ 0x1C021F1E4 (lGGOBitmap.c)
 *     lGetGlyphBitmap @ 0x1C021F444 (lGetGlyphBitmap.c)
 * Callees:
 *     fs_ConvertGrayLevels @ 0x1C02B0A0C (fs_ConvertGrayLevels.c)
 *     fs_SetUpKey @ 0x1C02B1F84 (fs_SetUpKey.c)
 *     fsc_CalcGrayMap @ 0x1C02B613C (fsc_CalcGrayMap.c)
 *     fsc_FillGlyph @ 0x1C02B6618 (fsc_FillGlyph.c)
 *     sbit_Embolden @ 0x1C02B8D68 (sbit_Embolden.c)
 *     sbit_EmboldenGray @ 0x1C02B9280 (sbit_EmboldenGray.c)
 *     sbit_EmboldenGrayFromMono @ 0x1C02B95EC (sbit_EmboldenGrayFromMono.c)
 *     sbit_EmboldenSubPixel @ 0x1C02B9810 (sbit_EmboldenSubPixel.c)
 *     sbit_ExpandGrayFromMono @ 0x1C02B9C14 (sbit_ExpandGrayFromMono.c)
 *     sbit_GetBitmap @ 0x1C02B9DC0 (sbit_GetBitmap.c)
 *     fsg_GetContourData @ 0x1C02BD7DC (fsg_GetContourData.c)
 *     fsg_UpdateWorkSpaceElement @ 0x1C02BE848 (fsg_UpdateWorkSpaceElement.c)
 *     fsc_OverscaleToBold @ 0x1C02C1EB0 (fsc_OverscaleToBold.c)
 *     fsc_OverscaleToSubPixel @ 0x1C02C23D8 (fsc_OverscaleToSubPixel.c)
 */

__int64 __fastcall fs_ContourScan(__int64 a1, __int64 a2)
{
  __int16 v3; // di
  __int16 v4; // r15
  __int64 v5; // rax
  int v6; // r11d
  __int64 v7; // rbx
  __int64 result; // rax
  __int16 v9; // r14
  __int16 v10; // ax
  __int16 v11; // cx
  _QWORD *v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r12
  __int64 v17; // r13
  __int64 v18; // rax
  __int16 v19; // ax
  __int16 v20; // cx
  _DWORD *v21; // rdi
  __int64 v22; // rax
  _DWORD *v23; // rdi
  __int16 *v24; // rdi
  __int64 v25; // r11
  __int64 v26; // r9
  unsigned __int16 v27; // cx
  __int64 v28; // rax
  bool v29; // zf
  __int64 v30; // rax
  __int16 v31; // cx
  __int16 v32; // dx
  __int16 v33; // r10
  __int16 v34; // r8
  unsigned __int16 v35; // r15
  int v36; // r11d
  int v37; // r9d
  bool v38; // cc
  unsigned __int16 *v39; // rdi
  __int16 v40; // r9
  __int16 v41; // cx
  __int16 v42; // r9
  __int16 v43; // cx
  int v44; // r15d
  __int16 v45; // ax
  __int16 v46; // ax
  __int16 v47; // cx
  __int64 v48; // rdx
  __int16 v49; // [rsp+50h] [rbp-49h] BYREF
  __int16 *v50; // [rsp+58h] [rbp-41h] BYREF
  __int64 v51; // [rsp+60h] [rbp-39h] BYREF
  __int64 v52; // [rsp+68h] [rbp-31h] BYREF
  __int64 v53; // [rsp+70h] [rbp-29h] BYREF
  __int64 v54; // [rsp+78h] [rbp-21h] BYREF
  _QWORD v55[14]; // [rsp+80h] [rbp-19h] BYREF
  __int64 v57; // [rsp+110h] [rbp+77h] BYREF
  __int64 v58; // [rsp+118h] [rbp+7Fh]

  v3 = 0;
  v4 = 0;
  v5 = fs_SetUpKey(a1, 62LL, &v57);
  v7 = v5;
  if ( !v5 )
    return (unsigned int)v57;
  v9 = v6;
  if ( *(_DWORD *)(v5 + 1152) != v6 )
  {
    v9 = 1;
    if ( *(_WORD *)(v5 + 1072) != 1 || *(_WORD *)(v5 + 1074) != (_WORD)v6 )
      v9 = -1;
    if ( *(_DWORD *)(v5 + 844) != v6 && *(_WORD *)(v5 + 1002) != (_WORD)v6 )
      v9 = -1;
    v10 = *(_WORD *)(a1 + 106);
    v11 = *(_WORD *)(a1 + 104);
    if ( v10 > v11 && (v10 < *(__int16 *)(v7 + 694) || v11 > *(__int16 *)(v7 + 698)) )
      v9 = -1;
  }
  if ( *(_DWORD *)(v7 + 948) == v6 )
  {
    v12 = *(_QWORD **)(v7 + 232);
    v13 = v12[3];
    if ( *(_QWORD *)(v7 + 264) != v13 )
    {
      *(_QWORD *)(v7 + 432) = v13 + *(unsigned int *)(v7 + 480);
      *(_QWORD *)(v7 + 440) = v13 + *(unsigned int *)(v7 + 484);
      *(_QWORD *)(v7 + 448) = v13 + *(unsigned int *)(v7 + 488);
      *(_QWORD *)(v7 + 456) = v13 + *(unsigned int *)(v7 + 492);
      *(_QWORD *)(v7 + 464) = v13 + *(unsigned int *)(v7 + 496);
      *(_QWORD *)(v7 + 472) = v13 + *(unsigned int *)(v7 + 548);
      fsg_UpdateWorkSpaceElement();
      *(_QWORD *)(v7 + 264) = *(_QWORD *)(*(_QWORD *)(v7 + 232) + 24LL);
      v12 = *(_QWORD **)(v7 + 232);
    }
    v14 = *(unsigned int *)(v7 + 552);
    v15 = v12[3];
    v16 = v12[7];
    v58 = v16;
    v17 = v15 + v14;
    if ( !(_DWORD)v14 )
      v17 = v12[6];
    v18 = *(unsigned int *)(v7 + 556);
    v57 = v17;
    if ( (_DWORD)v18 )
    {
      v16 = v15 + v18;
      v58 = v15 + v18;
    }
    if ( *(_DWORD *)(v7 + 844) != v6 && (*(_BYTE *)(v7 + 1076) & 1) == 0 )
    {
      v19 = *(_WORD *)(a1 + 106);
      v20 = *(_WORD *)(a1 + 104);
      if ( v19 > v20 && (v19 < *(__int16 *)(v7 + 694) || v20 > *(__int16 *)(v7 + 698)) )
        return 6147LL;
      if ( v9 == 1 )
      {
        v3 = *(_WORD *)(v7 + 1060);
        v4 = *(_WORD *)(v7 + 1062);
        *(_DWORD *)(v7 + 1060) = v6;
      }
      result = sbit_GetBitmap(v7 + 964, v7, *(_QWORD *)(a1 + 48), v17);
      if ( !(_DWORD)result )
      {
        if ( v9 == 1 )
        {
          *(_WORD *)(v7 + 1060) = v3;
          *(_WORD *)(v7 + 1062) = v4;
        }
        if ( v9 )
          sbit_ExpandGrayFromMono(
            *(_QWORD *)(a1 + 48),
            *(_QWORD *)(a1 + 48),
            (unsigned __int16)(*(_WORD *)(v7 + 700) - *(_WORD *)(v7 + 696)),
            (unsigned __int16)(*(_WORD *)(v7 + 694) - *(_WORD *)(v7 + 698)),
            *(_WORD *)(v7 + 1156));
        if ( v9 == 1 && *(_WORD *)(v7 + 992) != 3 )
          sbit_EmboldenGrayFromMono(
            *(_QWORD *)(a1 + 48),
            (unsigned __int16)(*(_WORD *)(v7 + 700) - *(_WORD *)(v7 + 696)),
            (unsigned __int16)(*(_WORD *)(v7 + 694) - *(_WORD *)(v7 + 698)));
        *(_QWORD *)(a2 + 88) = *(_QWORD *)(*(_QWORD *)(v7 + 232) + 40LL);
        if ( !*(_DWORD *)(v7 + 836) )
          return 0LL;
        result = fs_ConvertGrayLevels(a2, *(unsigned __int16 *)(v7 + 832), *(unsigned __int16 *)(v7 + 1058));
        if ( !(_DWORD)result )
          return 0LL;
      }
      return result;
    }
    *(_QWORD *)(v7 + 760) = v15 + *(unsigned int *)(v7 + 548);
    fsg_GetContourData(
      v7 + 432,
      0,
      0,
      (unsigned int)&v52,
      (__int64)&v53,
      (__int64)&v50,
      (__int64)&v51,
      (__int64)&v54,
      (__int64)v55,
      (__int64)&v49);
  }
  else
  {
    v21 = *(_DWORD **)(a1 + 112);
    if ( *v21 != 755809197 )
      return 5632LL;
    v22 = *(int *)(v7 + 736);
    v23 = v21 + 72;
    *(_QWORD *)(v7 + 760) = v23;
    v24 = (__int16 *)((char *)v23 + v22);
    v25 = *v24;
    v50 = v24 + 1;
    v49 = v25;
    v26 = (__int64)&v24[v25 + 1];
    v51 = v26;
    v27 = *(_WORD *)(v26 + 2LL * ((int)v25 - 1)) + 1;
    v52 = v26 + 2 * v25;
    v28 = 4LL * v27;
    v53 = v28 + v52;
    v54 = v28 + v28 + v52;
    v29 = *(_DWORD *)(v27 + v54) == 165;
    v55[0] = v55[5];
    if ( !v29 )
      return 5632LL;
    v30 = *(_QWORD *)(v7 + 232);
    v17 = *(_QWORD *)(v30 + 48);
    v16 = *(_QWORD *)(v30 + 56);
    v57 = v17;
    v58 = v16;
  }
  if ( !v16 )
    *(_WORD *)(v7 + 312) = 2;
  *(_QWORD *)(v7 + 728) = *(_QWORD *)(a1 + 48);
  v31 = *(_WORD *)(a1 + 106);
  *(_WORD *)(v7 + 690) = v31;
  v32 = *(_WORD *)(a1 + 104);
  *(_WORD *)(v7 + 692) = v32;
  if ( v31 > v32 )
  {
    v33 = *(_WORD *)(v7 + 694);
    v34 = *(_WORD *)(v7 + 698);
  }
  else
  {
    v31 = *(_WORD *)(v7 + 694);
    v32 = *(_WORD *)(v7 + 698);
    v33 = v31;
    *(_WORD *)(v7 + 690) = v31;
    v34 = v32;
    *(_WORD *)(v7 + 692) = v32;
  }
  if ( v31 > v33 )
  {
    *(_WORD *)(v7 + 690) = v33;
    v31 = v33;
  }
  if ( v32 < v34 )
  {
    *(_WORD *)(v7 + 692) = v34;
    v32 = v34;
  }
  v35 = *(_WORD *)(v7 + 680);
  if ( v35 == 3 )
  {
    if ( *(_QWORD *)(v7 + 288) == v17 )
    {
      v35 = 3;
      if ( *(_QWORD *)(v7 + 296) == v16 )
        goto LABEL_71;
    }
    *(_WORD *)(v7 + 680) = 2;
    v35 = 2;
  }
  if ( v35 )
  {
    if ( v35 == 1 )
    {
      v36 = *(__int16 *)(v7 + 682);
      v37 = v31 - v32;
      if ( *(_DWORD *)(v7 + 836) )
        v38 = v37 * *(unsigned __int16 *)(v7 + 832) <= v36;
      else
        v38 = v37 <= v36;
      if ( !v38 )
        return 4107LL;
      *(_WORD *)(v7 + 312) = 2;
    }
  }
  else if ( v31 != v33 || v32 != v34 )
  {
    if ( *(_DWORD *)(v7 + 836) )
      return 5891LL;
    *(_WORD *)(v7 + 312) = 2;
  }
LABEL_71:
  v39 = (unsigned __int16 *)(v7 + 688);
  if ( *(_DWORD *)(v7 + 836) )
  {
    v40 = *(_WORD *)(v7 + 790);
    v39 = (unsigned __int16 *)(v7 + 784);
    if ( v31 == v33 )
    {
      *(_WORD *)(v7 + 786) = v40;
    }
    else
    {
      v41 = v31 * *(_WORD *)(v7 + 832);
      if ( v41 > v40 )
        v41 = *(_WORD *)(v7 + 790);
      *(_WORD *)(v7 + 786) = v41;
    }
    v42 = *(_WORD *)(v7 + 794);
    if ( v32 == v34 )
    {
      *(_WORD *)(v7 + 788) = v42;
    }
    else
    {
      v43 = v32 * *(_WORD *)(v7 + 832);
      if ( v43 < v42 )
        v43 = *(_WORD *)(v7 + 794);
      *(_WORD *)(v7 + 788) = v43;
    }
    *(_QWORD *)(v7 + 824) = *(_QWORD *)(a1 + 72);
  }
  if ( (*(_BYTE *)(v7 + 1076) & 1) != 0 )
  {
    v39 = (unsigned __int16 *)(v7 + 784);
    *(_QWORD *)(v7 + 824) = *(_QWORD *)(a1 + 72);
    *(_WORD *)(v7 + 786) = *(_WORD *)(v7 + 790);
    *(_WORD *)(v7 + 788) = *(_WORD *)(v7 + 794);
  }
  *(_QWORD *)(v7 + 768) = v57;
  *(_QWORD *)(v7 + 776) = v58;
  result = fsc_FillGlyph((unsigned int)&v49, (_DWORD)v39, (int)v7 + 736, v35, *(_WORD *)(v7 + 312));
  if ( !(_DWORD)result )
  {
    if ( !*(_DWORD *)(v7 + 836)
      || (result = fsc_CalcGrayMap(v7 + 784, v7 + 688, *(unsigned __int16 *)(v7 + 832)), !(_DWORD)result) )
    {
      v44 = *(_DWORD *)(v7 + 1148);
      if ( v44 )
      {
        if ( !*(_DWORD *)(v7 + 1068)
          || (v45 = *(_WORD *)(v7 + 1076), (v45 & 1) == 0)
          || *(_DWORD *)(v7 + 844)
          || *(_WORD *)(v7 + 1072) != 1
          || *(_WORD *)(v7 + 1074)
          || (v45 & 8) != 0 )
        {
          v44 = 0;
        }
        v46 = *(_WORD *)(a1 + 106);
        v47 = *(_WORD *)(a1 + 104);
        if ( v46 > v47 && (v46 < *(__int16 *)(v7 + 694) || v47 > *(__int16 *)(v7 + 698)) )
          v44 = 0;
      }
      if ( (*(_BYTE *)(v7 + 1076) & 1) != 0 && !v44 )
        fsc_OverscaleToSubPixel(v7 + 784, 0LL, v7 + 688);
      if ( *(_DWORD *)(v7 + 1068) )
      {
        if ( *(_DWORD *)(v7 + 836) )
        {
          sbit_EmboldenGray(
            *(void **)(v7 + 728),
            *(_WORD *)(v7 + 832) * *(_WORD *)(v7 + 832) + 1,
            *(_WORD *)(v7 + 1072),
            *(_WORD *)(v7 + 1074));
        }
        else if ( (*(_BYTE *)(v7 + 1076) & 1) != 0 )
        {
          if ( v44 )
          {
            fsc_OverscaleToBold(*(unsigned __int16 *)(v7 + 996), v7 + 784, v7 + 688);
            fsc_OverscaleToSubPixel(v7 + 784, v48, v7 + 688);
          }
          else
          {
            sbit_EmboldenSubPixel(*(void **)(v7 + 728), *(_WORD *)(v7 + 1072), *(_WORD *)(v7 + 1074));
          }
        }
        else
        {
          if ( v9 != 1 )
            sbit_Embolden(
              *((_QWORD *)v39 + 5),
              (unsigned __int16)(v39[6] - v39[4]),
              (unsigned __int16)(v39[1] - v39[2]),
              *v39,
              *(_WORD *)(v7 + 1072),
              *(_WORD *)(v7 + 1074));
          if ( v9 )
            sbit_ExpandGrayFromMono(
              *((_QWORD *)v39 + 5),
              *((_QWORD *)v39 + 5),
              (unsigned __int16)(v39[6] - v39[4]),
              (unsigned __int16)(v39[1] - v39[2]),
              *(_WORD *)(v7 + 1156));
          if ( v9 == 1 )
            sbit_EmboldenGrayFromMono(
              *((_QWORD *)v39 + 5),
              (unsigned __int16)(v39[6] - v39[4]),
              (unsigned __int16)(v39[1] - v39[2]));
        }
      }
      if ( *(_WORD *)(v7 + 680) == 2 )
      {
        *(_WORD *)(v7 + 680) = 3;
        *(_QWORD *)(v7 + 288) = v57;
        *(_QWORD *)(v7 + 296) = v58;
      }
      *(_QWORD *)(a2 + 88) = *(_QWORD *)(*(_QWORD *)(v7 + 232) + 40LL);
      return 0LL;
    }
  }
  return result;
}
