/*
 * XREFs of GreGetTextMetricsW @ 0x1C01111FC
 * Callers:
 *     NtGdiGetTextMetricsW @ 0x1C0061180 (NtGdiGetTextMetricsW.c)
 *     ?GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z @ 0x1C0111088 (-GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C0150E88 (xxxDrawCaptionTemp.c)
 *     xxxPSMTextOut @ 0x1C023A0D8 (xxxPSMTextOut.c)
 *     ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x1C024203C (-DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C005FD30 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vGetTextMetrics@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_TMW_INTERNAL@@@Z @ 0x1C01112B4 (-vGetTextMetrics@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_TMW_INTERNAL@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetTextMetricsW(HDC a1, struct _TMW_INTERNAL *a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // rdi
  __int64 v7; // [rsp+20h] [rbp-40h] BYREF
  int v8; // [rsp+28h] [rbp-38h]
  _QWORD v9[2]; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v10[32]; // [rsp+40h] [rbp-20h] BYREF

  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  if ( v9[0] )
  {
    v8 = 0;
    v7 = 0LL;
    v4 = RFONTOBJ::bInit((RFONTOBJ *)&v7, (struct XDCOBJ *)v9, 0, 2u);
    v5 = v7;
    if ( v4 )
      GreAcquireSemaphore(*(_QWORD *)(v7 + 504));
    if ( v5 )
    {
      vGetTextMetrics((struct RFONTOBJ *)&v7, (struct DCOBJ *)v9, a2);
      v3 = 1;
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v7);
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v9);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v10);
  return v3;
}
