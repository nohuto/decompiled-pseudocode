/*
 * XREFs of GetFontResourceInfoInternalW @ 0x1C02BDB48
 * Callers:
 *     NtGdiGetFontResourceInfoInternalW @ 0x1C0292420 (NtGdiGetFontResourceInfoInternalW.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C007F36C (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ?QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z @ 0x1C0125000 (-QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z.c)
 *     vIFIMetricsToLogFontW @ 0x1C028A728 (vIFIMetricsToLogFontW.c)
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
  __int64 v13; // rdx
  unsigned int v14; // esi
  __int64 v15; // rdx
  unsigned int FontFile; // eax
  struct _FONTHASH **v18; // [rsp+40h] [rbp-28h] BYREF
  __int64 v19; // [rsp+48h] [rbp-20h] BYREF

  v8 = a4;
  v11 = 0LL;
  v19 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v18 = gpPFTPrivate;
  if ( !gpPFTPrivate || (v12 = PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)&v18, a1, a2, a3, 0LL, 0, 0LL, 0)) == 0LL )
  {
    v18 = gpPFTPublic;
    v12 = PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)&v18, a1, a2, a3, 0LL, 0, 0LL, 0);
    if ( !v12 )
    {
      if ( a7 != 5 )
        goto LABEL_46;
      if ( (_DWORD)v8 )
      {
        if ( !a6 || (unsigned int)v8 < 4 )
          goto LABEL_46;
        *a6 = 1;
      }
LABEL_44:
      LODWORD(v11) = 1;
      goto LABEL_45;
    }
  }
  switch ( a7 )
  {
    case 0:
      if ( (_DWORD)v8 )
      {
        if ( (unsigned int)v8 < 4 )
          goto LABEL_46;
        *a6 = *((_DWORD *)v12 + 52);
      }
      goto LABEL_38;
    case 1:
      v15 = *((_QWORD *)v12 + 10);
      v18 = (struct _FONTHASH **)*((_QWORD *)v12 + 11);
      FontFile = PDEVOBJ::QueryFontFile((PDEVOBJ *)&v18, v15, 1u, 0, 0LL);
      if ( FontFile == -1 )
        goto LABEL_46;
      if ( (_DWORD)v8 )
      {
        if ( FontFile > (unsigned int)v8 )
          FontFile = -1;
        else
          FontFile = PDEVOBJ::QueryFontFile((PDEVOBJ *)&v18, *((_QWORD *)v12 + 10), 1u, v8, a6);
      }
      if ( FontFile == -1 )
        goto LABEL_46;
      *a5 = FontFile;
LABEL_34:
      LODWORD(v11) = 1;
      goto LABEL_46;
    case 2:
      v13 = *((unsigned int *)v12 + 52);
      if ( (_DWORD)v8 )
      {
        if ( v8 < 92 * v13 )
          goto LABEL_46;
        v14 = 0;
        if ( (_DWORD)v13 )
        {
          do
          {
            vIFIMetricsToLogFontW((__int64)a6 + v11, *(_QWORD *)(*((_QWORD *)v12 + v14 + 28) + 32LL));
            v11 += 92LL;
            ++v14;
          }
          while ( v14 < *((_DWORD *)v12 + 52) );
        }
      }
      else
      {
        v11 = 92 * v13;
      }
      *a5 = v11;
      goto LABEL_34;
    case 3:
      if ( (_DWORD)v8 )
      {
        if ( !a6 || (unsigned int)v8 < 4 )
          goto LABEL_46;
        if ( *((struct PDEV **)v12 + 11) == qword_1C031DE98 && !*(_DWORD *)(*((_QWORD *)v12 + 10) + 8LL) )
          LODWORD(v11) = 1;
        *a6 = v11;
      }
      goto LABEL_44;
  }
  if ( a7 != 5 )
  {
    EngSetLastError(0x57u);
    goto LABEL_46;
  }
  if ( !(_DWORD)v8 )
    goto LABEL_38;
  if ( a6 && (unsigned int)v8 >= 4 )
  {
    *a6 = 0;
LABEL_38:
    LODWORD(v11) = 1;
LABEL_45:
    *a5 = 4LL;
  }
LABEL_46:
  SEMOBJ::vUnlock((SEMOBJ *)&v19);
  return (unsigned int)v11;
}
