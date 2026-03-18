/*
 * XREFs of xxxDefPointerProc @ 0x1C01FF9A4
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     SetMiPPromotion @ 0x1C01ABFDC (SetMiPPromotion.c)
 *     xxxPromotePointerToMouse @ 0x1C01B8BB0 (xxxPromotePointerToMouse.c)
 */

__int64 __fastcall xxxDefPointerProc(__int64 a1, int a2, unsigned __int16 a3, unsigned __int64 a4)
{
  if ( a3 == 1 )
  {
    SetMiPPromotion(gptiCurrent, a2);
  }
  else if ( a4 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    xxxPromotePointerToMouse(a3);
  }
  else
  {
    CTouchProcessor::PromotePointerDataToMouse(gpTouchProcessor, a4, 0x10000000u);
  }
  return 0LL;
}
