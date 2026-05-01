/*
 * XREFs of ?InitializeConfig@MultitaskingViewGestureHandler@@AEAAXXZ @ 0x1802E4800
 * Callers:
 *     ?RuntimeClassInitialize@MultitaskingViewGestureHandler@@QEAAJPEAUIMultitaskingViewTaskScheduler@@PEAUIMultitaskingViewVisibilityService@@@Z @ 0x1802E4E90 (-RuntimeClassInitialize@MultitaskingViewGestureHandler@@QEAAJPEAUIMultitaskingViewTaskScheduler@.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800107DC (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 */

void __fastcall MultitaskingViewGestureHandler::InitializeConfig(MultitaskingViewGestureHandler *this)
{
  unsigned int v2; // [rsp+38h] [rbp+10h] BYREF
  unsigned int v3; // [rsp+40h] [rbp+18h] BYREF
  unsigned int v4; // [rsp+48h] [rbp+20h] BYREF

  if ( SHRegGetDWORD(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\MultitaskingView\\",
         L"HorizontalThresholdPercentage",
         &v2) >= 0 )
    *((double *)this + 12) = (double)(int)v2 / 100.0;
  if ( SHRegGetDWORD(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\MultitaskingView\\",
         L"VerticalThresholdPercentage",
         &v3) >= 0 )
    *((double *)this + 11) = (double)(int)v3 / 100.0;
  if ( SHRegGetDWORD(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\MultitaskingView\\",
         L"StartGestureTimeout",
         &v4) >= 0 )
    *((_QWORD *)this + 17) = v4;
}
