/*
 * XREFs of NtGdiGetETM @ 0x1C0158E00
 * Callers:
 *     <none>
 * Callees:
 *     ?flFontType@PFEOBJ@@QEAAKXZ @ 0x1C0098260 (-flFontType@PFEOBJ@@QEAAKXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009C5D4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C00A0330 (-pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AB2B4 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00AD630 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00B1A70 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z @ 0x1C0159074 (-vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z.c)
 *     ?GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z @ 0x1C01592D8 (-GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C02BA870 (-FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 */

__int64 __fastcall NtGdiGetETM(HDC a1, _BYTE *a2)
{
  unsigned int v4; // edi
  SIZE sizLogResPpi; // rbx
  __int64 v6; // r8
  struct _SURFOBJ *v7; // rdx
  struct _FONTOBJ *v8; // r8
  __int64 v9; // r9
  _BYTE *v10; // r9
  struct _FONTOBJ *v12; // [rsp+50h] [rbp-358h] BYREF
  int v13; // [rsp+58h] [rbp-350h]
  _QWORD v14[2]; // [rsp+60h] [rbp-348h] BYREF
  _QWORD v15[2]; // [rsp+70h] [rbp-338h] BYREF
  __int64 v16; // [rsp+80h] [rbp-328h] BYREF
  _BYTE Src[64]; // [rsp+90h] [rbp-318h] BYREF
  _BYTE v18[704]; // [rsp+D0h] [rbp-2D8h] BYREF

  memset(Src, 0, 0x34uLL);
  v4 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v14, a1);
  if ( a2 && v14[0] )
  {
    v12 = 0LL;
    if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v12, (struct XDCOBJ *)v14, 0, 2u) )
      GreAcquireSemaphore(v12[7].pvProducer);
    if ( v12 )
    {
      sizLogResPpi = v12[1].sizLogResPpi;
      v15[1] = sizLogResPpi;
      if ( *(_QWORD *)(*(_QWORD *)&sizLogResPpi + 3064LL) )
      {
        v13 = 256;
        v6 = 0LL;
        if ( (*(_DWORD *)(*(_QWORD *)&sizLogResPpi + 40LL) & 0x8000) != 0 )
          v6 = *(_QWORD *)(*(_QWORD *)&sizLogResPpi + 1800LL);
        if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))GetETMFontManagement)(
                             &v12,
                             sizLogResPpi,
                             v6) )
        {
          v7 = SURFACE::pSurfobj(*(SURFACE **)(*(_QWORD *)&sizLogResPpi + 2552LL));
          if ( !v7 )
          {
            memset(v18, 0, 0x2B8uLL);
            v7 = SURFACE::pSurfobj((SURFACE *)v18);
            v8 = v12;
            v7->dhpdev = (DHPDEV)v12[1].pvConsumer;
            v7->hdev = *(HDEV *)&v8[1].ulStyleSize;
            v7->iType = 1;
          }
          v16 = *(_QWORD *)&v12[2].iUniq;
          v4 = PFFOBJ::FontManagement((PFFOBJ *)&v16, v7, v12, 0x100u, 0, 0LL, 0x34u, Src);
        }
      }
      if ( !v4 )
      {
        v15[0] = v12[1].pvProducer;
        if ( v15[0] )
        {
          if ( (PFEOBJ::flFontType((PFEOBJ *)v15) & 4) != 0 )
          {
            vIFIMetricsToETM(
              (struct _EXTTEXTMETRIC *)Src,
              (struct RFONTOBJ *)&v12,
              (struct DCOBJ *)v14,
              *(struct _IFIMETRICS **)(v9 + 32));
            v4 = 1;
          }
        }
      }
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v12);
  }
  if ( v4 )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v10 = (_BYTE *)MmUserProbeAddress;
    *v10 = *v10;
    v10[51] = v10[51];
    memmove(a2, Src, 0x34uLL);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v14);
  return v4;
}
