/*
 * XREFs of GetMouseKeyFlags @ 0x1C006343C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     xxxProcessEventMessage @ 0x1C003C798 (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxSystemTimerProc @ 0x1C0062FE0 (xxxSystemTimerProc.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C00F3360 (EditionHandleAndPostKeyEvent.c)
 *     ?GetPointerFlagsFromMouse@@YAKPEAII_KPEAKPEAW4tagPOINTER_BUTTON_CHANGE_TYPE@@@Z @ 0x1C01AAF08 (-GetPointerFlagsFromMouse@@YAKPEAII_KPEAKPEAW4tagPOINTER_BUTTON_CHANGE_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetMouseKeyFlags(unsigned __int8 *a1)
{
  unsigned __int8 v2; // r9
  int v3; // r8d
  int v4; // edx
  int v5; // ecx
  int v6; // edx
  unsigned int v7; // ecx
  __int64 result; // rax

  v2 = a1[229];
  v3 = (a1[228] >> 2) & 1 | 2;
  if ( (a1[228] & 0x10) == 0 )
    v3 = (a1[228] >> 2) & 1;
  v4 = v3 | 0x10;
  if ( (a1[229] & 1) == 0 )
    v4 = v3;
  v5 = v4 | 0x20;
  if ( (v2 & 4) == 0 )
    v5 = v4;
  v6 = v5 | 0x40;
  if ( (v2 & 0x10) == 0 )
    v6 = v5;
  v7 = v6 | 4;
  if ( (a1[232] & 1) == 0 )
    v7 = v6;
  result = v7 | 8;
  if ( (a1[232] & 4) == 0 )
    return v7;
  return result;
}
