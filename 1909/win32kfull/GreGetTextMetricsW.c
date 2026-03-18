/*
 * XREFs of GreGetTextMetricsW @ 0x1C0107E3C
 * Callers:
 *     NtGdiGetTextMetricsW @ 0x1C0095400 (NtGdiGetTextMetricsW.c)
 *     _GetTextMetricsW @ 0x1C0107DCC (_GetTextMetricsW.c)
 *     xxxDrawCaptionTemp @ 0x1C0158138 (xxxDrawCaptionTemp.c)
 *     xxxPSMTextOut @ 0x1C0252628 (xxxPSMTextOut.c)
 *     ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x1C025A6F4 (-DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009C5D4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AB2B4 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00B1A70 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vGetTextMetrics@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_TMW_INTERNAL@@@Z @ 0x1C0107E80 (-vGetTextMetrics@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_TMW_INTERNAL@@@Z.c)
 */

__int64 __fastcall GreGetTextMetricsW(HDC a1, struct _TMW_INTERNAL *a2)
{
  unsigned int v3; // edi
  int v5; // eax
  __int64 v6; // rbx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  if ( v7[0] )
  {
    v8 = 0LL;
    v5 = RFONTOBJ::bInit((RFONTOBJ *)&v8, (struct XDCOBJ *)v7, 0, 2u);
    v6 = v8;
    if ( v5 )
      GreAcquireSemaphore(*(_QWORD *)(v8 + 504));
    if ( v6 )
    {
      vGetTextMetrics((struct RFONTOBJ *)&v8, (struct DCOBJ *)v7, a2);
      v3 = 1;
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v8);
    if ( v7[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v7);
  }
  return v3;
}
