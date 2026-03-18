/*
 * XREFs of NtGdiGetETM @ 0x1C0118830
 * Callers:
 *     <none>
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0078C80 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00877F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?flFontType@PFEOBJ@@QEAAKXZ @ 0x1C00CCEF4 (-flFontType@PFEOBJ@@QEAAKXZ.c)
 *     ?vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z @ 0x1C01189E0 (-vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z.c)
 *     ?GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z @ 0x1C0119CDC (-GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C0290480 (-FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 */

__int64 __fastcall NtGdiGetETM(HDC a1, _BYTE *a2)
{
  unsigned int v3; // edi
  ULONG_PTR iTTUniq; // rbx
  __int64 v5; // r8
  __int64 v6; // r10
  _BYTE *v7; // r9
  struct _SURFOBJ *v9; // rdx
  struct _FONTOBJ *v10; // [rsp+50h] [rbp-E8h] BYREF
  int v11; // [rsp+58h] [rbp-E0h]
  int v12; // [rsp+60h] [rbp-D8h]
  _QWORD v13[2]; // [rsp+68h] [rbp-D0h] BYREF
  _QWORD v14[2]; // [rsp+78h] [rbp-C0h] BYREF
  PVOID v15[3]; // [rsp+88h] [rbp-B0h] BYREF
  _QWORD v16[10]; // [rsp+A0h] [rbp-98h] BYREF
  _BYTE Src[56]; // [rsp+F0h] [rbp-48h] BYREF

  v3 = 0;
  MDCOBJ::MDCOBJ((MDCOBJ *)v13, a1);
  if ( a2 && v13[0] )
  {
    v11 = 0;
    v10 = 0LL;
    if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v10, (struct XDCOBJ *)v13, 0, 2u) )
      GreAcquireSemaphore(v10[7].pvConsumer);
    if ( v10 )
    {
      iTTUniq = v10[1].iTTUniq;
      v14[1] = iTTUniq;
      if ( *(_QWORD *)(iTTUniq + 3056) )
      {
        v12 = 256;
        v5 = 0LL;
        if ( (*(_DWORD *)(iTTUniq + 40) & 0x8000) != 0 )
          v5 = *(_QWORD *)(iTTUniq + 1792);
        if ( (unsigned int)GetETMFontManagement(&v10, iTTUniq, v5) )
        {
          v9 = (struct _SURFOBJ *)((*(_QWORD *)(iTTUniq + 2544) + 24LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(iTTUniq + 2544) >> 64));
          if ( !v9 )
          {
            memset(v16, 0, sizeof(v16));
            v16[2] = v10[1].sizLogResPpi;
            v16[3] = v10[1].iFile;
            WORD2(v16[9]) = 1;
            v9 = (struct _SURFOBJ *)v16;
          }
          v15[0] = v10[1].pvConsumer;
          v3 = PFFOBJ::FontManagement((PFFOBJ *)v15, v9, v10, 0x100u, 0, 0LL, 0x34u, Src);
        }
      }
      if ( !v3 )
      {
        v14[0] = *(_QWORD *)&v10[1].ulStyleSize;
        if ( v14[0] )
        {
          if ( (PFEOBJ::flFontType((PFEOBJ *)v14) & 4) != 0 )
          {
            vIFIMetricsToETM(
              (struct _EXTTEXTMETRIC *)Src,
              (struct RFONTOBJ *)&v10,
              (struct DCOBJ *)v13,
              *(struct _IFIMETRICS **)(v6 + 32));
            v3 = 1;
          }
        }
      }
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v10);
  }
  if ( v3 )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v7 = (_BYTE *)MmUserProbeAddress;
    *v7 = *v7;
    v7[51] = v7[51];
    memmove(a2, Src, 0x34uLL);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v13);
  return v3;
}
