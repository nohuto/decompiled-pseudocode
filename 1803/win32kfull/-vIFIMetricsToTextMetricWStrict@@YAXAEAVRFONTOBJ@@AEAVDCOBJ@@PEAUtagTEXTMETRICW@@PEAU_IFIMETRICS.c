/*
 * XREFs of ?vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS@@@Z @ 0x1C00CB0D0
 * Callers:
 *     ?vIFIMetricsToTextMetricW@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_TMW_INTERNAL@@PEAU_IFIMETRICS@@@Z @ 0x1C00CA52C (-vIFIMetricsToTextMetricW@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_TMW_INTERNAL@@PEAU_IFIMETRICS@@@Z.c)
 *     cjIFIMetricsToOTMW @ 0x1C00CFEA8 (cjIFIMetricsToOTMW.c)
 * Callees:
 *     ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1C0087520 (-lOverhang@RFONTOBJ@@QEAAJXZ.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C00CB7B4 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     bFToL @ 0x1C00DDEAC (bFToL.c)
 *     GetAppCompatFlags @ 0x1C00F8F30 (GetAppCompatFlags.c)
 */

void __fastcall vIFIMetricsToTextMetricWStrict(
        struct RFONTOBJ *a1,
        struct DCOBJ *a2,
        struct tagTEXTMETRICW *a3,
        struct _IFIMETRICS *a4)
{
  char v8; // si
  char v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  LONG v15; // r8d
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  LONG v21; // ecx
  char v22; // al
  __int64 v23; // rdx
  __int64 v24; // rax
  BYTE v25; // r8
  int v26; // r14d
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  int AppCompatFlags; // eax
  __int64 v33; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int16 v34; // [rsp+34h] [rbp-2Ch]
  char v35; // [rsp+36h] [rbp-2Ah]
  LONG v36; // [rsp+44h] [rbp-1Ch]
  LONG v37; // [rsp+48h] [rbp-18h]
  LONG v38; // [rsp+4Ch] [rbp-14h]
  LONG v39; // [rsp+50h] [rbp-10h]
  LONG v40; // [rsp+54h] [rbp-Ch]
  LONG v41; // [rsp+58h] [rbp-8h]
  LONG v42; // [rsp+A8h] [rbp+48h] BYREF
  int v43; // [rsp+B0h] [rbp+50h]

  IFIOBJR::IFIOBJR((IFIOBJR *)&v33, a4, a1, a2);
  v8 = 0;
  v9 = 8;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 352LL) & 0x802) == 0x802 )
  {
    a3->tmHeight = (*(_DWORD *)(*(_QWORD *)a1 + 308LL) + 8) >> 4;
    a3->tmAscent = (*(_DWORD *)(*(_QWORD *)a1 + 300LL) + 8) >> 4;
    a3->tmOverhang = RFONTOBJ::lOverhang(a1);
  }
  else
  {
    v42 = 0;
    bFToL(2050LL, &v42, 0LL);
    a3->tmHeight = v42;
    v42 = 0;
    bFToL(v27, &v42, 0LL);
    a3->tmAscent = v42;
    RFONTOBJ::lOverhang(a1);
    v42 = 0;
    bFToL(v28, &v42, 0LL);
    a3->tmOverhang = v42;
  }
  v11 = v33;
  if ( (*(_DWORD *)(v33 + 48) & 0x3000010) != 0 )
  {
    v12 = *(_QWORD *)a1;
    v42 = 0;
    v13 = *(unsigned int *)(v12 + 368);
    if ( (_DWORD)v13 == 0x80000000 )
    {
      v43 = *(_DWORD *)(v12 + 200);
      bFToL(v13, &v42, 0LL);
      v15 = a3->tmHeight - v42;
    }
    else
    {
      bFToL(v13, &v42, 0LL);
      v15 = v42;
    }
    a3->tmInternalLeading = v15;
    v16 = *(_QWORD *)a1;
    v42 = 0;
    if ( *(_DWORD *)(v16 + 364) == 0x80000000 )
    {
      v14 = *(unsigned __int16 *)(v11 + 68);
      LOWORD(v14) = *(_WORD *)(v11 + 64) + v14 - *(_WORD *)(v11 + 66) - *(_WORD *)(v11 + 62) - *(_WORD *)(v11 + 60);
      v43 = *(_DWORD *)(v16 + 200);
      if ( (__int16)v14 <= 0 )
        LOWORD(v14) = 0;
    }
    bFToL(v14, &v42, 0LL);
    a3->tmExternalLeading = v42;
    v17 = *(_QWORD *)a1;
    v42 = 0;
    v18 = *(unsigned int *)(v17 + 372);
    if ( (_DWORD)v18 == 0x80000000 )
      v43 = *(_DWORD *)(v17 + 196);
    bFToL(v18, &v42, 0LL);
    a3->tmMaxCharWidth = v42;
    v19 = *(_QWORD *)a1;
    v42 = 0;
    v20 = *(unsigned int *)(v19 + 376);
    if ( (_DWORD)v20 == 0x80000000 )
      v43 = *(_DWORD *)(v19 + 196);
    bFToL(v20, &v42, 0LL);
    a3->tmAveCharWidth = v42;
  }
  else if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 352LL) & 0x802) == 0x802 )
  {
    a3->tmMaxCharWidth = v36;
    a3->tmAveCharWidth = v37;
    a3->tmInternalLeading = v38;
    a3->tmExternalLeading = v39;
  }
  else
  {
    v42 = 0;
    bFToL(2050LL, &v42, 0LL);
    a3->tmMaxCharWidth = v42;
    v42 = 0;
    bFToL(v29, &v42, 0LL);
    a3->tmAveCharWidth = v42;
    v42 = 0;
    bFToL(v30, &v42, 0LL);
    a3->tmInternalLeading = v42;
    v42 = 0;
    bFToL(v31, &v42, 0LL);
    a3->tmExternalLeading = v42;
  }
  LOBYTE(v10) = -1;
  v21 = a3->tmHeight - a3->tmAscent;
  a3->tmWeight = v34;
  v22 = v35 & 1;
  a3->tmDescent = v21;
  a3->tmItalic = -(v22 != 0);
  a3->tmUnderlined = *(_BYTE *)(v11 + 52) & 2;
  a3->tmStruckOut = *(_BYTE *)(v11 + 52) & 0x10;
  LOBYTE(v21) = *(_DWORD *)(*(_QWORD *)a2 + 2144LL) & 0x80;
  a3->tmUnderlined = -((*(_DWORD *)(*(_QWORD *)a2 + 2144LL) & 0x20) != 0);
  a3->tmStruckOut = -((_BYTE)v21 != 0);
  a3->tmFirstChar = *(_WORD *)(v11 + 112);
  a3->tmLastChar = *(_WORD *)(v11 + 114);
  a3->tmDefaultChar = *(_WORD *)(v11 + 116);
  a3->tmBreakChar = *(_WORD *)(v11 + 118);
  a3->tmCharSet = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 66LL);
  if ( (*(_DWORD *)(v11 + 48) & 1) != 0 )
  {
    v23 = *(_QWORD *)a2;
    v24 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
    if ( (*(_DWORD *)(v24 + 40) & 1) != 0
      || (*(_DWORD *)(v24 + 2176) & 0x2000) != 0
      || *(_DWORD *)(*(_QWORD *)(v23 + 80) + 68LL) != 1
      || gbDBCSCodePage && (AppCompatFlags = GetAppCompatFlags(0LL, v23), AppCompatFlags < 0) )
    {
      v9 = 0;
    }
    v25 = v9 | *(_BYTE *)(v11 + 45) & 0xF0 | (*(_DWORD *)(v11 + 48) >> 1) & 2 | ((*(_DWORD *)(v11 + 48) & 1) != 0 ? 6 : 0) | ((*(_DWORD *)(v11 + 48) & 0x401000) == 0);
  }
  else
  {
    v26 = *(_DWORD *)(*(_QWORD *)a1 + 76LL);
    if ( (a4->flInfo & 8) != 0 && (!gbDBCSCodePage || (int)GetAppCompatFlags(0LL, v10) >= 0) )
      v8 = 10;
    v25 = v8 | *(_BYTE *)(v11 + 45) & 0xF0 | (v26 != 0 ? 8 : 0) | (*(_DWORD *)(v11 + 48) >> 1) & 2 | ((*(_DWORD *)(v11 + 48) & 1) != 0 ? 6 : 0) | ((*(_DWORD *)(v11 + 48) & 0x401000) == 0);
  }
  a3->tmPitchAndFamily = v25;
  a3->tmDigitizedAspectX = v40;
  a3->tmDigitizedAspectY = v41;
}
