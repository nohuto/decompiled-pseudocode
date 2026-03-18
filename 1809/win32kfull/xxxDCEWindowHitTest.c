/*
 * XREFs of xxxDCEWindowHitTest @ 0x1C0069DCC
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0034C00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxWindowFromPoint @ 0x1C0067DF0 (xxxWindowFromPoint.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01EE9F4 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     ?xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHKPEBUtagPOINTEREVENTINT@@PEAU4@@Z @ 0x1C01EF8FC (-xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@.c)
 * Callees:
 *     xxxDCEWindowHitTestIndirect @ 0x1C002B5A0 (xxxDCEWindowHitTestIndirect.c)
 */

HWND __fastcall xxxDCEWindowHitTest(
        struct tagWND *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        struct tagPOINT a5,
        __int64 a6,
        int a7)
{
  int v8; // [rsp+20h] [rbp-48h] BYREF
  __int64 v9; // [rsp+28h] [rbp-40h]
  __int64 v10; // [rsp+30h] [rbp-38h]
  __int64 v11; // [rsp+38h] [rbp-30h]
  int v12; // [rsp+40h] [rbp-28h]
  int v13; // [rsp+44h] [rbp-24h]
  __int64 v14; // [rsp+48h] [rbp-20h]
  int v15; // [rsp+50h] [rbp-18h]
  __int64 v16; // [rsp+58h] [rbp-10h]

  v8 = a2;
  v11 = a6;
  v9 = a3;
  v10 = a4;
  v12 = a7;
  v13 = 0;
  v14 = 0LL;
  v15 = 0;
  v16 = 0LL;
  return xxxDCEWindowHitTestIndirect(a1, a5, (__int64)&v8);
}
