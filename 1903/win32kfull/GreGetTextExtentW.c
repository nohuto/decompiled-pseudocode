/*
 * XREFs of GreGetTextExtentW @ 0x1C011DC04
 * Callers:
 *     FinalUserInit @ 0x1C00E0598 (FinalUserInit.c)
 *     xxxSetNCFonts @ 0x1C00E4B34 (xxxSetNCFonts.c)
 *     ValidateExternalLogFont @ 0x1C00E59CC (ValidateExternalLogFont.c)
 *     GetCharDimensions @ 0x1C0142018 (GetCharDimensions.c)
 *     xxxDrawCaptionTemp @ 0x1C0157378 (xxxDrawCaptionTemp.c)
 *     CreateScaledFont @ 0x1C01CCA70 (CreateScaledFont.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C02119D4 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C023FD10 (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C0246684 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C0249C44 (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     xxxPSMTextOut @ 0x1C0252D68 (xxxPSMTextOut.c)
 *     ?DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z @ 0x1C025AC7C (-DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z.c)
 *     ?NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z @ 0x1C025B018 (-NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z.c)
 *     xxxPSMGetTextExtent @ 0x1C025CF40 (xxxPSMGetTextExtent.c)
 *     NtGdiGetTextExtent @ 0x1C02A8330 (NtGdiGetTextExtent.c)
 *     GreGetCharacterPlacementW @ 0x1C02B4894 (GreGetCharacterPlacementW.c)
 * Callees:
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z @ 0x1C004A514 (-vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0052D74 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00676B0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0068D50 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?vAbs@EFLOAT@@QEAAXXZ @ 0x1C00738B8 (-vAbs@EFLOAT@@QEAAXXZ.c)
 *     ?bToPOINTL@EPOINTFL@@QEAAHAEAU_POINTL@@@Z @ 0x1C0076AF8 (-bToPOINTL@EPOINTFL@@QEAAHAEAU_POINTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0102880 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z @ 0x1C0118DC0 (--0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z.c)
 *     ?bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1C011DD7C (-bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z.c)
 *     ?bUseMetaPtoD@DC@@QEBAHXZ @ 0x1C01285B8 (-bUseMetaPtoD@DC@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ??1ESTROBJ@@QEAA@XZ @ 0x1C0165220 (--1ESTROBJ@@QEAA@XZ.c)
 *     ?bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z @ 0x1C0165C68 (-bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall GreGetTextExtentW(HDC a1, unsigned __int16 *a2, unsigned int a3, struct tagSIZE *a4, char a5)
{
  unsigned int v8; // ebx
  _DWORD *v9; // r11
  int v10; // esi
  float cy; // xmm1_4
  __m128i v13; // xmm0
  __int64 v14; // [rsp+98h] [rbp-80h] BYREF
  float cx; // [rsp+A0h] [rbp-78h] BYREF
  float v16; // [rsp+A4h] [rbp-74h] BYREF
  DC *v17[2]; // [rsp+A8h] [rbp-70h] BYREF
  float *v18[2]; // [rsp+B8h] [rbp-60h] BYREF
  _DWORD v19[12]; // [rsp+C8h] [rbp-50h] BYREF
  _BYTE v20[320]; // [rsp+F8h] [rbp-20h] BYREF

  v8 = 0;
  if ( a3 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v17, a1);
    if ( v17[0] )
    {
      v14 = 0LL;
      if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v14, (struct XDCOBJ *)v17, 0, (a5 & 2) != 0 ? 4 : 2) )
        GreAcquireSemaphore(*(_QWORD *)(v14 + 504));
      v9 = (_DWORD *)v14;
      if ( v14 )
      {
        if ( (*(_DWORD *)(v14 + 84) & 4) != 0 )
          RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v14, a2, a3);
        v10 = *((_DWORD *)v17[0] + 435);
        if ( v10 == v9[98] || v9[52] == 1 && (v9[179] & 4) == 0 )
        {
          v8 = RFONTOBJ::bTextExtent(
                 (RFONTOBJ *)&v14,
                 (struct XDCOBJ *)v17,
                 a2,
                 a3,
                 v10,
                 *(_DWORD *)(*((_QWORD *)v17[0] + 122) + 280LL),
                 *(_DWORD *)(*((_QWORD *)v17[0] + 122) + 284LL),
                 *(_DWORD *)(*((_QWORD *)v17[0] + 122) + 288LL),
                 a5,
                 a4);
          if ( v8
            && v10
            && *(_DWORD *)(*((_QWORD *)v17[0] + 122) + 208LL) == 1
            && !(unsigned int)DC::bUseMetaPtoD(v17[0])
            && (*(_DWORD *)(v14 + 716) & 4) != 0 )
          {
            cy = (float)a4->cy;
            cx = (float)a4->cx;
            v13 = (__m128i)COERCE_UNSIGNED_INT((float)v10);
            v16 = cy;
            *(float *)v13.m128i_i32 = *(float *)v13.m128i_i32 / 10.0;
            memset(v19, 0, 0x24uLL);
            v19[0] = efCos((unsigned int)_mm_cvtsi128_si32(v13));
            EFLOAT::vAbs((EFLOAT *)v19);
            v19[3] = v19[0];
            v19[1] = efSin((unsigned int)_mm_cvtsi128_si32(v13));
            EFLOAT::vAbs((EFLOAT *)&v19[1]);
            v19[4] = 0;
            v19[5] = 0;
            v19[2] = v19[1];
            EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v18, (struct MATRIX *)v19, 33);
            v8 = 1;
            if ( ((_DWORD)v18[0][8] & 2) == 0 )
              v8 = EXFORMOBJ::bXform((EXFORMOBJ *)v18, (struct VECTORFL *)&cx, (struct VECTORFL *)&cx, 1uLL);
            if ( v8 )
            {
              EFLOAT::vAbs((EFLOAT *)&cx);
              EFLOAT::vAbs((EFLOAT *)&v16);
              v8 = EPOINTFL::bToPOINTL((EPOINTFL *)&cx, (struct _POINTL *)a4);
            }
          }
        }
        else
        {
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v18, (struct XDCOBJ *)v17, 516);
          ESTROBJ::vInit(
            (ESTROBJ *)v20,
            a2,
            a3,
            (struct XDCOBJ *)v17,
            (struct RFONTOBJ *)&v14,
            v18,
            0LL,
            0,
            v10,
            *(_DWORD *)(*((_QWORD *)v17[0] + 122) + 280LL),
            *(_DWORD *)(*((_QWORD *)v17[0] + 122) + 284LL),
            *(_DWORD *)(*((_QWORD *)v17[0] + 122) + 288LL),
            0,
            0,
            0,
            0LL,
            0LL,
            0);
          if ( (v20[232] & 4) != 0 )
            v8 = ESTROBJ::bTextExtent((ESTROBJ *)v20, (struct RFONTOBJ *)&v14, v10, a4);
          ESTROBJ::~ESTROBJ((ESTROBJ *)v20);
        }
      }
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v14);
      if ( v17[0] )
        XDCOBJ::vUnlockFast((XDCOBJ *)v17);
    }
  }
  else
  {
    *a4 = 0LL;
    return 1;
  }
  return v8;
}
