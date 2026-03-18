/*
 * XREFs of GreGetTextExtentW @ 0x1C00FAEAC
 * Callers:
 *     ?GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z @ 0x1C00FABFC (-GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C0132880 (xxxDrawCaptionTemp.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C01D614C (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C01FF05C (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C0204DDC (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C0207DFC (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     xxxPSMTextOut @ 0x1C0210A28 (xxxPSMTextOut.c)
 *     ?DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z @ 0x1C022BF58 (-DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z.c)
 *     ?NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z @ 0x1C022C2E8 (-NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z.c)
 *     xxxPSMGetTextExtent @ 0x1C022E17C (xxxPSMGetTextExtent.c)
 *     NtGdiGetTextExtent @ 0x1C027F690 (NtGdiGetTextExtent.c)
 *     GreGetCharacterPlacementW @ 0x1C028A030 (GreGetCharacterPlacementW.c)
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1C0084544 (-bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z @ 0x1C00870A4 (-vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00877F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bUseMetaPtoD@DC@@QEBAHXZ @ 0x1C008AC68 (-bUseMetaPtoD@DC@@QEBAHXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0094D40 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?vAbs@EFLOAT@@QEAAXXZ @ 0x1C0096D7C (-vAbs@EFLOAT@@QEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C009C134 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bToPOINTL@EPOINTFL@@QEAAHAEAU_POINTL@@@Z @ 0x1C01144A0 (-bToPOINTL@EPOINTFL@@QEAAHAEAU_POINTL@@@Z.c)
 *     ??0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z @ 0x1C01198A0 (--0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z.c)
 *     ?bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z @ 0x1C0139050 (-bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z.c)
 *     ??1ESTROBJ@@QEAA@XZ @ 0x1C013917C (--1ESTROBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall GreGetTextExtentW(HDC a1, unsigned __int16 *a2, unsigned int a3, struct tagSIZE *a4, char a5)
{
  unsigned int v8; // ebx
  _DWORD *v9; // r11
  int v10; // esi
  float cy; // xmm1_4
  __m128i v13; // xmm0
  float cx; // [rsp+98h] [rbp-80h] BYREF
  float v15; // [rsp+9Ch] [rbp-7Ch] BYREF
  __int64 v16; // [rsp+A0h] [rbp-78h] BYREF
  int v17; // [rsp+A8h] [rbp-70h]
  DC *v18[2]; // [rsp+B0h] [rbp-68h] BYREF
  unsigned int *v19[2]; // [rsp+C0h] [rbp-58h] BYREF
  int v20; // [rsp+D0h] [rbp-48h] BYREF
  _DWORD v21[9]; // [rsp+D4h] [rbp-44h] BYREF
  _BYTE v22[320]; // [rsp+F8h] [rbp-20h] BYREF

  v8 = 0;
  if ( a3 )
  {
    MDCOBJ::MDCOBJ((MDCOBJ *)v18, a1);
    if ( v18[0] )
    {
      v17 = 0;
      v16 = 0LL;
      if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v16, (struct XDCOBJ *)v18, 0, (a5 & 2) != 0 ? 4 : 2) )
        GreAcquireSemaphore(*(_QWORD *)(v16 + 496));
      v9 = (_DWORD *)v16;
      if ( v16 )
      {
        if ( (*(_DWORD *)(v16 + 68) & 4) != 0 )
          RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v16, a2, a3);
        v10 = *((_DWORD *)v18[0] + 537);
        if ( v10 == v9[95] || v9[48] == 1 && (v9[115] & 4) == 0 )
        {
          v8 = RFONTOBJ::bTextExtent(
                 (RFONTOBJ *)&v16,
                 (struct XDCOBJ *)v18,
                 a2,
                 a3,
                 v10,
                 *(_DWORD *)(*((_QWORD *)v18[0] + 10) + 160LL),
                 *(_DWORD *)(*((_QWORD *)v18[0] + 10) + 168LL),
                 *(_DWORD *)(*((_QWORD *)v18[0] + 10) + 172LL),
                 a5,
                 a4);
          if ( v8
            && v10
            && *(_DWORD *)(*((_QWORD *)v18[0] + 10) + 68LL) == 1
            && !(unsigned int)DC::bUseMetaPtoD(v18[0])
            && (*(_DWORD *)(v16 + 460) & 4) != 0 )
          {
            cy = (float)a4->cy;
            cx = (float)a4->cx;
            v13 = (__m128i)COERCE_UNSIGNED_INT((float)v10);
            v15 = cy;
            *(float *)v13.m128i_i32 = *(float *)v13.m128i_i32 / 10.0;
            v20 = efCos((unsigned int)_mm_cvtsi128_si32(v13));
            EFLOAT::vAbs((EFLOAT *)&v20);
            v21[2] = v20;
            v21[0] = efSin((unsigned int)_mm_cvtsi128_si32(v13));
            EFLOAT::vAbs((EFLOAT *)v21);
            v21[3] = 0;
            v21[4] = 0;
            v21[1] = v21[0];
            EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v19, (struct MATRIX *)&v20, 0x21u);
            v8 = 1;
            if ( (v19[0][8] & 2) == 0 )
              v8 = EXFORMOBJ::bXform((EXFORMOBJ *)v19, (struct VECTORFL *)&cx, (struct VECTORFL *)&cx, 1uLL);
            if ( v8 )
            {
              EFLOAT::vAbs((EFLOAT *)&cx);
              EFLOAT::vAbs((EFLOAT *)&v15);
              v8 = EPOINTFL::bToPOINTL((EPOINTFL *)&cx, (struct _POINTL *)a4);
            }
          }
        }
        else
        {
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v19, (struct XDCOBJ *)v18, 516);
          ESTROBJ::vInit(
            (ESTROBJ *)v22,
            a2,
            a3,
            (struct XDCOBJ *)v18,
            (struct RFONTOBJ *)&v16,
            v19,
            0LL,
            0,
            v10,
            *(_DWORD *)(*((_QWORD *)v18[0] + 10) + 160LL),
            *(_DWORD *)(*((_QWORD *)v18[0] + 10) + 168LL),
            *(_DWORD *)(*((_QWORD *)v18[0] + 10) + 172LL),
            0,
            0,
            0,
            0LL,
            0LL,
            0);
          if ( (v22[232] & 4) != 0 )
            v8 = ESTROBJ::bTextExtent((ESTROBJ *)v22, (struct RFONTOBJ *)&v16, v10, a4);
          ESTROBJ::~ESTROBJ((ESTROBJ *)v22);
        }
      }
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v16);
      if ( v18[0] )
        XDCOBJ::vUnlockFast((XDCOBJ *)v18);
    }
  }
  else
  {
    *a4 = 0LL;
    return 1;
  }
  return v8;
}
