/*
 * XREFs of GetFontResourceInfoInternalW @ 0x1C02AB8E8
 * Callers:
 *     NtGdiGetFontResourceInfoInternalW @ 0x1C027F310 (NtGdiGetFontResourceInfoInternalW.c)
 * Callees:
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C003E388 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z @ 0x1C00CEE64 (-QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z.c)
 *     vIFIMetricsToLogFontW @ 0x1C0277258 (vIFIMetricsToLogFontW.c)
 */

__int64 __fastcall GetFontResourceInfoInternalW(
        unsigned __int16 *a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        __int64 *a5,
        unsigned int *a6,
        int a7)
{
  unsigned __int64 v8; // rsi
  __int64 v11; // rbx
  struct PFF *v12; // rbp
  struct PDEV *v13; // rcx
  __int64 v14; // rdx
  unsigned int v15; // esi
  __int64 v16; // rdx
  unsigned int FontFile; // eax
  struct _FONTHASH **v19; // [rsp+40h] [rbp-28h] BYREF
  __int64 v20; // [rsp+48h] [rbp-20h] BYREF

  v8 = a4;
  v11 = 0LL;
  v20 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v19 = gpPFTPrivate;
  if ( !gpPFTPrivate || (v12 = PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)&v19, a1, a2, a3, 0LL, 0, 0LL, 0)) == 0LL )
  {
    v19 = gpPFTPublic;
    v12 = PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)&v19, a1, a2, a3, 0LL, 0, 0LL, 0);
    if ( !v12 )
    {
      if ( a7 != 5 )
        goto LABEL_47;
      if ( (_DWORD)v8 )
      {
        if ( !a6 || (unsigned int)v8 < 4 )
          goto LABEL_47;
        *a6 = 1;
      }
LABEL_45:
      LODWORD(v11) = 1;
      goto LABEL_46;
    }
  }
  switch ( a7 )
  {
    case 0:
      if ( (_DWORD)v8 )
      {
        if ( (unsigned int)v8 < 4 )
          goto LABEL_47;
        *a6 = *((_DWORD *)v12 + 52);
      }
      goto LABEL_39;
    case 1:
      v16 = *((_QWORD *)v12 + 10);
      v19 = (struct _FONTHASH **)*((_QWORD *)v12 + 11);
      FontFile = PDEVOBJ::QueryFontFile((PDEVOBJ *)&v19, v16, 1u, 0, 0LL);
      if ( FontFile == -1 )
        goto LABEL_47;
      if ( (_DWORD)v8 )
      {
        if ( FontFile > (unsigned int)v8 )
          FontFile = -1;
        else
          FontFile = PDEVOBJ::QueryFontFile((PDEVOBJ *)&v19, *((_QWORD *)v12 + 10), 1u, v8, a6);
      }
      if ( FontFile == -1 )
        goto LABEL_47;
      *a5 = FontFile;
LABEL_35:
      LODWORD(v11) = 1;
      goto LABEL_47;
    case 2:
      v14 = *((unsigned int *)v12 + 52);
      if ( (_DWORD)v8 )
      {
        if ( v8 < 92 * v14 )
          goto LABEL_47;
        v15 = 0;
        if ( (_DWORD)v14 )
        {
          do
          {
            vIFIMetricsToLogFontW((__int64)a6 + v11, *(_QWORD *)(*((_QWORD *)v12 + v15 + 28) + 32LL));
            v11 += 92LL;
            ++v15;
          }
          while ( v15 < *((_DWORD *)v12 + 52) );
        }
      }
      else
      {
        v11 = 92 * v14;
      }
      *a5 = v11;
      goto LABEL_35;
    case 3:
      if ( (_DWORD)v8 )
      {
        if ( !a6 || (unsigned int)v8 < 4 )
          goto LABEL_47;
        v13 = (struct PDEV *)*((_QWORD *)v12 + 11);
        if ( v13 == gppdevTrueType || v13 == qword_1C032FD38 && !*(_DWORD *)(*((_QWORD *)v12 + 10) + 8LL) )
          LODWORD(v11) = 1;
        *a6 = v11;
      }
      goto LABEL_45;
  }
  if ( a7 != 5 )
  {
    EngSetLastError(0x57u);
    goto LABEL_47;
  }
  if ( !(_DWORD)v8 )
    goto LABEL_39;
  if ( a6 && (unsigned int)v8 >= 4 )
  {
    *a6 = 0;
LABEL_39:
    LODWORD(v11) = 1;
LABEL_46:
    *a5 = 4LL;
  }
LABEL_47:
  SEMOBJ::vUnlock((SEMOBJ *)&v20);
  return (unsigned int)v11;
}
