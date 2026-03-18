/*
 * XREFs of NtGdiGetETM @ 0x1C0143A60
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C005FD30 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?flFontType@PFEOBJ@@QEAAKXZ @ 0x1C008674C (-flFontType@PFEOBJ@@QEAAKXZ.c)
 *     ?pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C00890CC (-pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ.c)
 *     ?vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z @ 0x1C0143CCC (-vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z.c)
 *     ?GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z @ 0x1C01445B0 (-GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C02A40D4 (-FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 */

__int64 __fastcall NtGdiGetETM(HDC a1, _BYTE *a2)
{
  unsigned int v3; // edi
  SIZE sizLogResPpi; // rbx
  __int64 v5; // r8
  struct _SURFOBJ *v6; // rdx
  struct _FONTOBJ *v7; // r8
  __int64 v8; // r9
  _BYTE *v9; // r9
  struct _FONTOBJ *v11; // [rsp+50h] [rbp-378h] BYREF
  int v12; // [rsp+58h] [rbp-370h]
  int v13; // [rsp+60h] [rbp-368h]
  _QWORD v14[2]; // [rsp+68h] [rbp-360h] BYREF
  __int64 v15; // [rsp+78h] [rbp-350h] BYREF
  _QWORD v16[6]; // [rsp+88h] [rbp-340h] BYREF
  _BYTE Src[56]; // [rsp+B8h] [rbp-310h] BYREF
  _BYTE v18[704]; // [rsp+F0h] [rbp-2D8h] BYREF

  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v16, a1);
  if ( a2 && v16[0] )
  {
    v12 = 0;
    v11 = 0LL;
    if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v11, (struct XDCOBJ *)v16, 0, 2u) )
      GreAcquireSemaphore(v11[7].pvProducer);
    if ( v11 )
    {
      sizLogResPpi = v11[1].sizLogResPpi;
      v14[1] = sizLogResPpi;
      if ( *(_QWORD *)(*(_QWORD *)&sizLogResPpi + 3064LL) )
      {
        v13 = 256;
        v5 = 0LL;
        if ( (*(_DWORD *)(*(_QWORD *)&sizLogResPpi + 40LL) & 0x8000) != 0 )
          v5 = *(_QWORD *)(*(_QWORD *)&sizLogResPpi + 1800LL);
        if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))GetETMFontManagement)(
                             &v11,
                             sizLogResPpi,
                             v5) )
        {
          v6 = SURFACE::pSurfobj(*(SURFACE **)(*(_QWORD *)&sizLogResPpi + 2552LL));
          if ( !v6 )
          {
            memset(v18, 0, 0x2B8uLL);
            v6 = SURFACE::pSurfobj((SURFACE *)v18);
            v7 = v11;
            v6->dhpdev = (DHPDEV)v11[1].pvConsumer;
            v6->hdev = *(HDEV *)&v7[1].ulStyleSize;
            v6->iType = 1;
          }
          v15 = *(_QWORD *)&v11[2].iUniq;
          v3 = PFFOBJ::FontManagement((PFFOBJ *)&v15, v6, v11, 0x100u, 0, 0LL, 0x34u, Src);
        }
      }
      if ( !v3 )
      {
        v14[0] = v11[1].pvProducer;
        if ( v14[0] )
        {
          if ( (PFEOBJ::flFontType((PFEOBJ *)v14) & 4) != 0 )
          {
            vIFIMetricsToETM(
              (struct _EXTTEXTMETRIC *)Src,
              (struct RFONTOBJ *)&v11,
              (struct DCOBJ *)v16,
              *(struct _IFIMETRICS **)(v8 + 32));
            v3 = 1;
          }
        }
      }
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v11);
  }
  if ( v3 )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v9 = (_BYTE *)MmUserProbeAddress;
    *v9 = *v9;
    v9[51] = v9[51];
    memmove(a2, Src, 0x34uLL);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v16);
  return v3;
}
