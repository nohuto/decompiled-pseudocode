/*
 * XREFs of ?PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z @ 0x1C013FE14
 * Callers:
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C01374A8 (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C0139C04 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C0147E7C (WPP_RECORDER_SF_L.c)
 */

__int64 __fastcall CTouchProcessor::PointerFlagsToMessage(CTouchProcessor *this, int a2)
{
  char v3; // [rsp+28h] [rbp-10h]

  if ( (a2 & 0x10000) != 0 )
    return 582LL;
  if ( (a2 & 0x40000) != 0 )
    return 583LL;
  if ( (a2 & 0x20000) != 0 )
    return 581LL;
  v3 = a2;
  LOBYTE(a2) = 2;
  WPP_RECORDER_SF_L(*((_QWORD *)this + 1), a2, 11, 290, (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids, v3);
  return 0LL;
}
