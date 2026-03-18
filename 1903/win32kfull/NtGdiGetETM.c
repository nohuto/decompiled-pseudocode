/*
 * XREFs of NtGdiGetETM @ 0x1C0158040
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0052D74 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00676B0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?flFontType@PFEOBJ@@QEAAKXZ @ 0x1C00746D4 (-flFontType@PFEOBJ@@QEAAKXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0079AE0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z @ 0x1C0158208 (-vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z.c)
 *     ?GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z @ 0x1C015846C (-GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C02BAD20 (-FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 */

__int64 __fastcall NtGdiGetETM(HDC a1, _BYTE *a2)
{
  unsigned int v4; // edi
  SIZE sizLogResPpi; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  _BYTE *v8; // r9
  struct _SURFOBJ *v10; // rdx
  struct _FONTOBJ *v11; // [rsp+50h] [rbp-D8h] BYREF
  int v12; // [rsp+58h] [rbp-D0h]
  _QWORD v13[2]; // [rsp+60h] [rbp-C8h] BYREF
  _QWORD v14[2]; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+80h] [rbp-A8h] BYREF
  struct _SURFOBJ v16; // [rsp+90h] [rbp-98h] BYREF
  _BYTE Src[56]; // [rsp+E0h] [rbp-48h] BYREF

  memset(Src, 0, 0x34uLL);
  v4 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  if ( a2 && v13[0] )
  {
    v11 = 0LL;
    if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v11, (struct XDCOBJ *)v13, 0, 2u) )
      GreAcquireSemaphore(v11[7].pvProducer);
    if ( v11 )
    {
      sizLogResPpi = v11[1].sizLogResPpi;
      v14[1] = sizLogResPpi;
      if ( *(_QWORD *)(*(_QWORD *)&sizLogResPpi + 3064LL) )
      {
        v12 = 256;
        v6 = 0LL;
        if ( (*(_DWORD *)(*(_QWORD *)&sizLogResPpi + 40LL) & 0x8000) != 0 )
          v6 = *(_QWORD *)(*(_QWORD *)&sizLogResPpi + 1800LL);
        if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))GetETMFontManagement)(
                             &v11,
                             sizLogResPpi,
                             v6) )
        {
          memset(&v16, 0, sizeof(v16));
          v10 = (struct _SURFOBJ *)((*(_QWORD *)(*(_QWORD *)&sizLogResPpi + 2552LL) + 24LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(*(_QWORD *)&sizLogResPpi + 2552LL) >> 64));
          if ( !v10 )
          {
            v16.dhpdev = (DHPDEV)v11[1].pvConsumer;
            v16.hdev = *(HDEV *)&v11[1].ulStyleSize;
            v16.iType = 1;
            v10 = &v16;
          }
          v15 = *(_QWORD *)&v11[2].iUniq;
          v4 = PFFOBJ::FontManagement((PFFOBJ *)&v15, v10, v11, 0x100u, 0, 0LL, 0x34u, Src);
        }
      }
      if ( !v4 )
      {
        v14[0] = v11[1].pvProducer;
        if ( v14[0] )
        {
          if ( (PFEOBJ::flFontType((PFEOBJ *)v14) & 4) != 0 )
          {
            vIFIMetricsToETM(
              (struct _EXTTEXTMETRIC *)Src,
              (struct RFONTOBJ *)&v11,
              (struct DCOBJ *)v13,
              *(struct _IFIMETRICS **)(v7 + 32));
            v4 = 1;
          }
        }
      }
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v11);
  }
  if ( v4 )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v8 = (_BYTE *)MmUserProbeAddress;
    *v8 = *v8;
    v8[51] = v8[51];
    memmove(a2, Src, 0x34uLL);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v13);
  return v4;
}
