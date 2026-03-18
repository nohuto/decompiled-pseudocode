/*
 * XREFs of ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C00853D0
 * Callers:
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C00074D0 (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     cjIFIMetricsToOTMW @ 0x1C0081D4C (cjIFIMetricsToOTMW.c)
 *     ?vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS@@@Z @ 0x1C0084A00 (-vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00C3E78 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     GreFontIsLinked @ 0x1C01103C4 (GreFontIsLinked.c)
 *     ?vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z @ 0x1C0143CCC (-vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C028AB48 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
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
  __int64 fwdWinDescender; // rcx
  int v13; // r10d
  unsigned int *v14; // rbx
  char CurrentThreadDpiAwarenessContext; // al
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // esi
  bool v19; // cc
  int v20; // eax
  char v21; // al
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rax

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
        v25 = *v6;
LABEL_22:
        *((_OWORD *)this + 1) = *(_OWORD *)((char *)v6 + v25);
        *((_DWORD *)this + 8) = *(int *)((char *)v6 + v25 + 16);
        break;
      }
      goto LABEL_26;
    case 16384:
      if ( (a2->fsSelection & 0x20) == 0 )
      {
        v25 = v6[1];
        goto LABEL_22;
      }
LABEL_26:
      v25 = v6[2];
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
  fwdWinDescender = (unsigned __int16)a2->fwdWinDescender;
  LOWORD(fwdWinDescender) = a2->fwdWinAscender + fwdWinDescender - a2->fwdUnitsPerEm;
  v13 = (__int16)fwdWinDescender;
  *((_DWORD *)this + 11) = (__int16)fwdWinDescender;
  if ( (a2->flInfo & 0x3000010) == 0 )
  {
    v23 = *(_QWORD *)a3;
    fwdWinDescender = *(unsigned int *)(*(_QWORD *)a3 + 648LL);
    if ( (int)fwdWinDescender > 1 )
    {
      *((_DWORD *)this + 10) = fwdWinDescender * v8;
      *((_DWORD *)this + 9) = fwdWinDescender * v9;
      v23 = *(_QWORD *)a3;
    }
    v24 = *(_DWORD *)(v23 + 652);
    if ( v24 > 1 )
    {
      *((_DWORD *)this + 12) = v24 * v11;
      *((_DWORD *)this + 11) = v24 * v13;
    }
  }
  if ( (a2->flInfo & 1) != 0 )
  {
    v14 = *(unsigned int **)(*(_QWORD *)a4 + 48LL);
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(fwdWinDescender, (__int64)a2);
    v17 = v14[10];
    v18 = 96;
    if ( (v17 & 1) == 0 || (v19 = (CurrentThreadDpiAwarenessContext & 0xFu) - 1 <= 1, v20 = 96, v19) )
      v20 = v14[545];
    *((_DWORD *)this + 13) = v20;
    v21 = W32GetCurrentThreadDpiAwarenessContext(v17, v16);
    if ( (v14[10] & 1) == 0 || (v21 & 0xFu) - 1 <= 1 )
      v18 = v14[544];
  }
  else
  {
    *((_DWORD *)this + 13) = a2->ptlAspect.y * *(_DWORD *)(*(_QWORD *)a3 + 652LL);
    v18 = a2->ptlAspect.x * *(_DWORD *)(*(_QWORD *)a3 + 648LL);
  }
  *((_DWORD *)this + 14) = v18;
  return this;
}
