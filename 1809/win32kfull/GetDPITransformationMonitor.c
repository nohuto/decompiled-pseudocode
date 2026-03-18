/*
 * XREFs of GetDPITransformationMonitor @ 0x1C01D2240
 * Callers:
 *     ?MakePointerMessageWorker@@YAHPEBUtagPOINTER_INFO@@UtagPOINT@@HHHIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01DC3E4 (-MakePointerMessageWorker@@YAHPEBUtagPOINTER_INFO@@UtagPOINT@@HHHIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAP.c)
 *     ?xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z @ 0x1C01DCF38 (-xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z.c)
 *     EditionDoPointerDPITransforms @ 0x1C01DD220 (EditionDoPointerDPITransforms.c)
 *     PointerInfoCopyOutHelperInternal @ 0x1C01DD6A0 (PointerInfoCopyOutHelperInternal.c)
 *     ?GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1C023594C (-GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z.c)
 * Callees:
 *     PtInRect @ 0x1C006EFD8 (PtInRect.c)
 *     _GetTopLevelWindow @ 0x1C0071310 (_GetTopLevelWindow.c)
 *     _MonitorFromPoint @ 0x1C007AE20 (_MonitorFromPoint.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     GetWindowFrameRect @ 0x1C01EFBAC (GetWindowFrameRect.c)
 */

__int64 __fastcall GetDPITransformationMonitor(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 TopLevelWindow; // rsi
  __int64 v6; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v7; // [rsp+28h] [rbp-30h] BYREF
  unsigned __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  _DWORD v9[4]; // [rsp+38h] [rbp-20h] BYREF

  v2 = a1;
  v7 = a1;
  TopLevelWindow = GetTopLevelWindow(a2);
  if ( TopLevelWindow )
  {
    GetWindowFrameRect(a2, v9);
    v6 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(TopLevelWindow + 40) + 256LL));
    if ( v6 )
    {
      PhysicalToLogicalDPIPoint(&v8, &v7, *(unsigned int *)(*(_QWORD *)(a2 + 40) + 288LL), &v6);
      if ( PtInRect(v9, v8) )
        return v6;
    }
    v2 = v7;
  }
  return MonitorFromPoint(v2, 2LL, 0x12u);
}
