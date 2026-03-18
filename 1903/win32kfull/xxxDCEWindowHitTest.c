/*
 * XREFs of xxxDCEWindowHitTest @ 0x1C010AC5C
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D0F00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxWindowFromPoint @ 0x1C010AB1C (xxxWindowFromPoint.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C0204D90 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     ?xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHKPEBUtagPOINTEREVENTINT@@PEAU4@@Z @ 0x1C0205CFC (-xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@.c)
 * Callees:
 *     xxxDCEWindowHitTestIndirect @ 0x1C00C8310 (xxxDCEWindowHitTestIndirect.c)
 */

HWND __fastcall xxxDCEWindowHitTest(
        ULONG_PTR a1,
        int a2,
        __int64 a3,
        __int64 a4,
        struct tagPOINT a5,
        __int64 a6,
        int a7)
{
  _DWORD v8[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v9; // [rsp+28h] [rbp-38h]
  __int64 v10; // [rsp+30h] [rbp-30h]
  __int64 v11; // [rsp+38h] [rbp-28h]
  int v12; // [rsp+40h] [rbp-20h]
  int v13; // [rsp+44h] [rbp-1Ch]
  __int64 v14; // [rsp+48h] [rbp-18h]
  __int64 v15; // [rsp+50h] [rbp-10h]
  __int64 v16; // [rsp+58h] [rbp-8h]

  v8[0] = a2;
  v8[1] = 0;
  v11 = a6;
  v12 = a7;
  v9 = a3;
  v13 = 0;
  v14 = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  v10 = a4;
  return xxxDCEWindowHitTestIndirect(a1, a5, (__int64)v8, a4);
}
