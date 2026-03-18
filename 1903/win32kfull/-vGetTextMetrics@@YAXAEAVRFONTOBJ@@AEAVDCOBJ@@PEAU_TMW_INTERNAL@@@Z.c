/*
 * XREFs of ?vGetTextMetrics@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_TMW_INTERNAL@@@Z @ 0x1C003E15C
 * Callers:
 *     GreGetTextMetricsW @ 0x1C003E118 (GreGetTextMetricsW.c)
 * Callees:
 *     ?vIFIMetricsToTextMetricW@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_TMW_INTERNAL@@PEAU_IFIMETRICS@@@Z @ 0x1C0076BC0 (-vIFIMetricsToTextMetricW@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_TMW_INTERNAL@@PEAU_IFIMETRICS@@@Z.c)
 */

void __fastcall vGetTextMetrics(struct RFONTOBJ *a1, struct DCOBJ *a2, struct _TMW_INTERNAL *a3)
{
  __int64 v4; // rax
  int v5; // edx

  v4 = *(_QWORD *)(*(_QWORD *)a1 + 688LL);
  if ( v4 )
  {
    *(_OWORD *)a3 = *(_OWORD *)v4;
    *((_OWORD *)a3 + 1) = *(_OWORD *)(v4 + 16);
    *((_OWORD *)a3 + 2) = *(_OWORD *)(v4 + 32);
    *((_OWORD *)a3 + 3) = *(_OWORD *)(v4 + 48);
    *((_DWORD *)a3 + 16) = *(_DWORD *)(v4 + 64);
    v5 = *(_DWORD *)(*(_QWORD *)a2 + 1736LL);
    *((_BYTE *)a3 + 53) = -((v5 & 0x20) != 0);
    *((_BYTE *)a3 + 54) = -((v5 & 0x80u) != 0);
    *((_BYTE *)a3 + 56) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 6LL);
  }
  else
  {
    vIFIMetricsToTextMetricW(a1, a2, a3, *(struct _IFIMETRICS **)(*(_QWORD *)(*(_QWORD *)a1 + 120LL) + 32LL));
  }
}
