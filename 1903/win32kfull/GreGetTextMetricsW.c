/*
 * XREFs of GreGetTextMetricsW @ 0x1C003E118
 * Callers:
 *     _GetTextMetricsW @ 0x1C003E0A8 (_GetTextMetricsW.c)
 *     NtGdiGetTextMetricsW @ 0x1C0063730 (NtGdiGetTextMetricsW.c)
 *     xxxDrawCaptionTemp @ 0x1C0157378 (xxxDrawCaptionTemp.c)
 *     xxxPSMTextOut @ 0x1C0252D68 (xxxPSMTextOut.c)
 *     ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x1C025AE34 (-DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z.c)
 * Callees:
 *     ?vGetTextMetrics@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_TMW_INTERNAL@@@Z @ 0x1C003E15C (-vGetTextMetrics@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_TMW_INTERNAL@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0052D74 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00676B0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
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
