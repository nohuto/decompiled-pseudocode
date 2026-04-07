/*
 * XREFs of ?MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z @ 0x180045C74
 * Callers:
 *     ?GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z @ 0x180045C10 (-GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z.c)
 *     ?Start@CRippleEffect@@QEAAJPEBUtagPOINT@@M@Z @ 0x18009024C (-Start@CRippleEffect@@QEAAJPEBUtagPOINT@@M@Z.c)
 *     ?Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z @ 0x180099D70 (-Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z.c)
 *     ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x18009A2A4 (-Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z.c)
 *     ?Initialize@CPressTapVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18009AD50 (-Initialize@CPressTapVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopManager::MonitorDpiFromPoint(POINT a1)
{
  HMONITOR v1; // rax
  unsigned int v2; // ecx
  int DpiForMonitorInternal; // eax
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF
  char v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = 96;
  v1 = MonitorFromPoint(a1, 0);
  if ( v1 )
  {
    DpiForMonitorInternal = GetDpiForMonitorInternal(v1, 0LL, &v6, &v5);
    v2 = v5;
    if ( !DpiForMonitorInternal )
      return 96;
  }
  else
  {
    return v5;
  }
  return v2;
}
