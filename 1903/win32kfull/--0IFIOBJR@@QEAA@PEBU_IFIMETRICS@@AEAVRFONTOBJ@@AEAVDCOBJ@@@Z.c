/*
 * XREFs of ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C00547E0
 * Callers:
 *     cjIFIMetricsToOTMW @ 0x1C0050F78 (cjIFIMetricsToOTMW.c)
 *     ?vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS@@@Z @ 0x1C0053EC0 (-vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0104A14 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C0105858 (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     GreFontIsLinked @ 0x1C011E134 (GreFontIsLinked.c)
 *     ?vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z @ 0x1C0158208 (-vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02A0B54 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

IFIOBJR *__fastcall IFIOBJR::IFIOBJR(
        IFIOBJR *this,
        const struct _IFIMETRICS *a2,
        struct RFONTOBJ *a3,
        struct DCOBJ *a4)
{
  int *v6; // rcx
  int v7; // r10d
  int v8; // r11d
  int v9; // ebx
  __int16 v10; // cx
  int v11; // r9d
  int v12; // r10d
  _DWORD *v13; // rbx
  char CurrentThreadDpiAwarenessContext; // al
  int v15; // esi
  bool v16; // cc
  int v17; // eax
  char v18; // al
  __int64 v20; // rax
  int v21; // ecx
  int v22; // eax
  __int64 v23; // rax

  *(_QWORD *)this = a2;
  v6 = (int *)((char *)a2 + a2->dpFontSim);
  v7 = *(_DWORD *)(*(_QWORD *)a3 + 12LL) & 0x6000;
  switch ( v7 )
  {
    case 0:
      *((_BYTE *)this + 19) = a2->panose.bWeight;
      *((_WORD *)this + 10) = a2->usWinWeight;
      *((_WORD *)this + 11) = a2->fsSelection;
      *((_WORD *)this + 12) = a2->fwdAveCharWidth;
      *((_WORD *)this + 13) = a2->fwdMaxCharInc;
      *(POINTL *)((char *)this + 28) = a2->ptlCaret;
      break;
    case 8192:
      if ( (a2->fsSelection & 1) == 0 )
      {
        v23 = *v6;
LABEL_22:
        *((_OWORD *)this + 1) = *(_OWORD *)((char *)v6 + v23);
        *((_DWORD *)this + 8) = *(int *)((char *)v6 + v23 + 16);
        break;
      }
      goto LABEL_26;
    case 16384:
      if ( (a2->fsSelection & 0x20) == 0 )
      {
        v23 = v6[1];
        goto LABEL_22;
      }
LABEL_26:
      v23 = v6[2];
      goto LABEL_22;
    case 24576:
      goto LABEL_26;
  }
  v8 = *((__int16 *)this + 12);
  v9 = *((__int16 *)this + 13);
  *((_DWORD *)this + 10) = v8;
  *((_DWORD *)this + 9) = v9;
  v10 = a2->fwdMacAscender + a2->fwdMacLineGap - a2->fwdMacDescender - a2->fwdWinDescender - a2->fwdWinAscender;
  if ( v10 <= 0 )
    v10 = 0;
  v11 = v10;
  *((_DWORD *)this + 12) = v10;
  v12 = (__int16)(a2->fwdWinAscender + a2->fwdWinDescender - a2->fwdUnitsPerEm);
  *((_DWORD *)this + 11) = v12;
  if ( (a2->flInfo & 0x3000010) == 0 )
  {
    v20 = *(_QWORD *)a3;
    v21 = *(_DWORD *)(*(_QWORD *)a3 + 648LL);
    if ( v21 > 1 )
    {
      *((_DWORD *)this + 10) = v21 * v8;
      *((_DWORD *)this + 9) = v21 * v9;
      v20 = *(_QWORD *)a3;
    }
    v22 = *(_DWORD *)(v20 + 652);
    if ( v22 > 1 )
    {
      *((_DWORD *)this + 12) = v22 * v11;
      *((_DWORD *)this + 11) = v22 * v12;
    }
  }
  if ( (a2->flInfo & 1) != 0 )
  {
    v13 = *(_DWORD **)(*(_QWORD *)a4 + 48LL);
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    v15 = 96;
    if ( (v13[10] & 1) == 0 || (v16 = (CurrentThreadDpiAwarenessContext & 0xFu) - 1 <= 1, v17 = 96, v16) )
      v17 = v13[545];
    *((_DWORD *)this + 13) = v17;
    v18 = W32GetCurrentThreadDpiAwarenessContext();
    if ( (v13[10] & 1) == 0 || (v18 & 0xFu) - 1 <= 1 )
      v15 = v13[544];
  }
  else
  {
    *((_DWORD *)this + 13) = a2->ptlAspect.y * *(_DWORD *)(*(_QWORD *)a3 + 652LL);
    v15 = a2->ptlAspect.x * *(_DWORD *)(*(_QWORD *)a3 + 648LL);
  }
  *((_DWORD *)this + 14) = v15;
  return this;
}
