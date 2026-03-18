/*
 * XREFs of EngMulDiv @ 0x1C0039AE0
 * Callers:
 *     NtUserGetDpiForMonitor @ 0x1C0013A20 (NtUserGetDpiForMonitor.c)
 *     PhysicalToLogicalDPIPoint @ 0x1C0039790 (PhysicalToLogicalDPIPoint.c)
 *     ScaleDPIRect @ 0x1C00398E0 (ScaleDPIRect.c)
 *     GetMonitorRectForDpi @ 0x1C00399C0 (GetMonitorRectForDpi.c)
 *     ExpandMonitorSpaceVertex @ 0x1C003B404 (ExpandMonitorSpaceVertex.c)
 *     InitLoadResources @ 0x1C003BB24 (InitLoadResources.c)
 *     RIMUpdatePointerDeviceScalingInfo @ 0x1C003BDCC (RIMUpdatePointerDeviceScalingInfo.c)
 *     ?GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z @ 0x1C00AADE4 (-GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1C00FC860 (-vMakeIso@DC@@QEAAXXZ.c)
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C0112364 (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInpu.c)
 *     ?ConvertDipsToScreenSpaceUnits@CPalmRejectZoneInfo@@AEAAJUtagPOINT@@J@Z @ 0x1C014F790 (-ConvertDipsToScreenSpaceUnits@CPalmRejectZoneInfo@@AEAAJUtagPOINT@@J@Z.c)
 *     GetNormalizedMouseSensitivityFactor @ 0x1C01511A4 (GetNormalizedMouseSensitivityFactor.c)
 * Callees:
 *     <none>
 */

INT __stdcall EngMulDiv(INT a, INT b, INT c)
{
  signed int v3; // r10d
  int v4; // r11d
  signed int v5; // r9d
  unsigned __int64 v6; // rax
  bool v7; // cc

  v3 = -(((a >> 31) & 0xFFFFFFFE) + 1);
  if ( b >= 0 )
    v3 = ((a >> 31) & 0xFFFFFFFE) + 1;
  if ( c )
  {
    v4 = -v3;
    v5 = abs32(c);
    if ( c >= 0 )
      v4 = v3;
    v6 = ((int)abs32(b) * (__int64)(int)abs32(a) + v5 / 2) / v5;
    if ( v6 <= 0x7FFFFFFF )
    {
      if ( v4 <= 0 )
        LODWORD(v6) = -(int)v6;
      return v6;
    }
    v7 = v4 <= 0;
  }
  else
  {
    v7 = v3 <= 0;
  }
  LODWORD(v6) = 0x7FFFFFFF;
  if ( v7 )
    LODWORD(v6) = 0x80000000;
  return v6;
}
