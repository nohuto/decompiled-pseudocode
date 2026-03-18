/*
 * XREFs of EngMulDiv @ 0x1C0057F90
 * Callers:
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C00390C8 (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 *     ?GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1C00391F0 (-GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouse.c)
 *     InitLoadResources @ 0x1C0054BBC (InitLoadResources.c)
 *     ExpandMonitorSpaceVertex @ 0x1C00579E4 (ExpandMonitorSpaceVertex.c)
 *     ScaleDPIPt @ 0x1C0057D18 (ScaleDPIPt.c)
 *     ScaleDPIRect @ 0x1C0057D98 (ScaleDPIRect.c)
 *     GetMonitorRectForDpi @ 0x1C0057E78 (GetMonitorRectForDpi.c)
 *     NtUserGetDpiForMonitor @ 0x1C0059620 (NtUserGetDpiForMonitor.c)
 *     ?GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z @ 0x1C00767F4 (-GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1C00C8624 (-vMakeIso@DC@@QEAAXXZ.c)
 *     ?ConvertDipsToScreenSpaceUnits@CPalmRejectZoneInfo@@AEAAJUtagPOINT@@J@Z @ 0x1C012C458 (-ConvertDipsToScreenSpaceUnits@CPalmRejectZoneInfo@@AEAAJUtagPOINT@@J@Z.c)
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
  LODWORD(v6) = 0x80000000;
  if ( !v7 )
    LODWORD(v6) = 0x7FFFFFFF;
  return v6;
}
