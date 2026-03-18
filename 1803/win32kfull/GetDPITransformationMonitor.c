/*
 * XREFs of GetDPITransformationMonitor @ 0x1C01AF3F0
 * Callers:
 *     ?MakePointerMessageWorker@@YAHPEBUtagPOINTER_INFO@@UtagPOINT@@HHHIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01B96C8 (-MakePointerMessageWorker@@YAHPEBUtagPOINTER_INFO@@UtagPOINT@@HHHIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAP.c)
 *     ?xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z @ 0x1C01BA1F4 (-xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z.c)
 *     EditionDoPointerDPITransforms @ 0x1C01BA4A0 (EditionDoPointerDPITransforms.c)
 *     PointerInfoCopyOutHelperInternal @ 0x1C01BA900 (PointerInfoCopyOutHelperInternal.c)
 *     ?GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1C020C598 (-GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0030730 (_GetTopLevelWindow.c)
 *     _MonitorFromPoint @ 0x1C00723A0 (_MonitorFromPoint.c)
 *     PtInRect @ 0x1C00749C4 (PtInRect.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     GetWindowFrameRect @ 0x1C01CB7F8 (GetWindowFrameRect.c)
 */

__int64 __fastcall GetDPITransformationMonitor(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 TopLevelWindow; // rsi
  __int64 v5; // r9
  __int64 v7; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+28h] [rbp-30h] BYREF
  unsigned __int64 v9; // [rsp+30h] [rbp-28h] BYREF
  _DWORD v10[4]; // [rsp+38h] [rbp-20h] BYREF

  v2 = a1;
  v8 = a1;
  TopLevelWindow = GetTopLevelWindow(a2);
  if ( TopLevelWindow )
  {
    GetWindowFrameRect(a2, v10);
    v7 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(TopLevelWindow + 40) + 256LL));
    if ( v7 )
    {
      PhysicalToLogicalDPIPoint(&v9, &v8, *(unsigned int *)(*(_QWORD *)(a2 + 40) + 288LL), &v7);
      if ( PtInRect(v10, v9) )
        return v7;
    }
    v2 = v8;
  }
  return MonitorFromPoint(v2, 2LL, 18LL, v5);
}
