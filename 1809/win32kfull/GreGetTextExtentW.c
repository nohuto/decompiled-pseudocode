/*
 * XREFs of GreGetTextExtentW @ 0x1C0111340
 * Callers:
 *     ?GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z @ 0x1C0111088 (-GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C0150E88 (xxxDrawCaptionTemp.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C01513D0 (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C01FAD90 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C022DECC (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C0231004 (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     xxxPSMTextOut @ 0x1C023A0D8 (xxxPSMTextOut.c)
 *     ?DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z @ 0x1C0241E84 (-DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z.c)
 *     ?NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z @ 0x1C0242220 (-NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z.c)
 *     xxxPSMGetTextExtent @ 0x1C02440EC (xxxPSMGetTextExtent.c)
 *     NtGdiGetTextExtent @ 0x1C0292760 (NtGdiGetTextExtent.c)
 *     GreGetCharacterPlacementW @ 0x1C029DD44 (GreGetCharacterPlacementW.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C005B6A0 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C005FD30 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z @ 0x1C007D5D8 (-vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vAbs@EFLOAT@@QEAAXXZ @ 0x1C0086660 (-vAbs@EFLOAT@@QEAAXXZ.c)
 *     ?bUseMetaPtoD@DC@@QEBAHXZ @ 0x1C0098AD0 (-bUseMetaPtoD@DC@@QEBAHXZ.c)
 *     ?bToPOINTL@EPOINTFL@@QEAAHAEAU_POINTL@@@Z @ 0x1C0099C08 (-bToPOINTL@EPOINTFL@@QEAAHAEAU_POINTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FAE64 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1C01116CC (-bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z.c)
 *     ??0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z @ 0x1C0144470 (--0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 *     ??1ESTROBJ@@QEAA@XZ @ 0x1C016014C (--1ESTROBJ@@QEAA@XZ.c)
 *     ?bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z @ 0x1C0162998 (-bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z.c)
 */

__int64 __fastcall GreGetTextExtentW(HDC a1, unsigned __int16 *a2, unsigned int a3, struct tagSIZE *a4, char a5)
{
  unsigned int v8; // ebx
  _DWORD *v9; // r11
  int v10; // esi
  float cy; // xmm1_4
  __m128i v12; // xmm0
  float cx; // [rsp+98h] [rbp-80h] BYREF
  float v15; // [rsp+9Ch] [rbp-7Ch] BYREF
  __int64 v16; // [rsp+A0h] [rbp-78h] BYREF
  int v17; // [rsp+A8h] [rbp-70h]
  int *v18[2]; // [rsp+B0h] [rbp-68h] BYREF
  DC *v19[2]; // [rsp+C0h] [rbp-58h] BYREF
  _BYTE v20[32]; // [rsp+D0h] [rbp-48h] BYREF
  int v21; // [rsp+F0h] [rbp-28h] BYREF
  _DWORD v22[9]; // [rsp+F4h] [rbp-24h] BYREF
  _BYTE v23[320]; // [rsp+118h] [rbp+0h] BYREF

  v8 = 0;
  if ( a3 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v19, a1);
    if ( v19[0] )
    {
      v17 = 0;
      v16 = 0LL;
      if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v16, (struct XDCOBJ *)v19, 0, (a5 & 2) != 0 ? 4 : 2) )
        GreAcquireSemaphore(*(_QWORD *)(v16 + 504));
      v9 = (_DWORD *)v16;
      if ( v16 )
      {
        if ( (*(_DWORD *)(v16 + 84) & 4) != 0 )
          RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v16, a2, a3);
        v10 = *((_DWORD *)v19[0] + 441);
        if ( v10 == v9[98] || v9[52] == 1 && (v9[179] & 4) == 0 )
        {
          v8 = RFONTOBJ::bTextExtent(
                 (RFONTOBJ *)&v16,
                 (struct XDCOBJ *)v19,
                 a2,
                 a3,
                 v10,
                 *(_DWORD *)(*((_QWORD *)v19[0] + 122) + 280LL),
                 *(_DWORD *)(*((_QWORD *)v19[0] + 122) + 284LL),
                 *(_DWORD *)(*((_QWORD *)v19[0] + 122) + 288LL),
                 a5,
                 a4);
          if ( v8
            && v10
            && *(_DWORD *)(*((_QWORD *)v19[0] + 122) + 208LL) == 1
            && !(unsigned int)DC::bUseMetaPtoD(v19[0])
            && (*(_DWORD *)(v16 + 716) & 4) != 0 )
          {
            cy = (float)a4->cy;
            cx = (float)a4->cx;
            v12 = (__m128i)COERCE_UNSIGNED_INT((float)v10);
            v15 = cy;
            *(float *)v12.m128i_i32 = *(float *)v12.m128i_i32 / 10.0;
            v21 = efCos((unsigned int)_mm_cvtsi128_si32(v12));
            EFLOAT::vAbs((EFLOAT *)&v21);
            v22[2] = v21;
            v22[0] = efSin((unsigned int)_mm_cvtsi128_si32(v12));
            EFLOAT::vAbs((EFLOAT *)v22);
            v22[3] = 0;
            v22[4] = 0;
            v22[1] = v22[0];
            EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v18, (struct MATRIX *)&v21, 0x21u);
            v8 = 1;
            if ( (v18[0][8] & 2) == 0 )
              v8 = EXFORMOBJ::bXform((EXFORMOBJ *)v18, (struct VECTORFL *)&cx, (struct VECTORFL *)&cx, 1uLL);
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
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v18, (struct XDCOBJ *)v19, 516);
          ESTROBJ::vInit(
            (ESTROBJ *)v23,
            a2,
            a3,
            (struct XDCOBJ *)v19,
            (struct RFONTOBJ *)&v16,
            v18,
            0LL,
            0,
            v10,
            *(_DWORD *)(*((_QWORD *)v19[0] + 122) + 280LL),
            *(_DWORD *)(*((_QWORD *)v19[0] + 122) + 284LL),
            *(_DWORD *)(*((_QWORD *)v19[0] + 122) + 288LL),
            0,
            0,
            0,
            0LL,
            0LL,
            0);
          if ( (v23[232] & 4) != 0 )
            v8 = ESTROBJ::bTextExtent((ESTROBJ *)v23, (struct RFONTOBJ *)&v16, v10, a4);
          ESTROBJ::~ESTROBJ((ESTROBJ *)v23);
        }
      }
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v16);
    }
    MDCOBJ::~MDCOBJ((MDCOBJ *)v19);
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v20);
  }
  else
  {
    *a4 = 0LL;
    return 1;
  }
  return v8;
}
