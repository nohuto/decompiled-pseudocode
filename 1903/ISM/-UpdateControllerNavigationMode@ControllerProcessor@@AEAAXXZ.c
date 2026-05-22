/*
 * XREFs of ?UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ @ 0x180078810
 * Callers:
 *     _lambda_8fe8561a384bff2ea72bcff2a21bcb93_::_lambda_invoker_cdecl_ @ 0x1800743F0 (_lambda_8fe8561a384bff2ea72bcff2a21bcb93_--_lambda_invoker_cdecl_.c)
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x18007615C (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 * Callees:
 *     ?GetCursorPosition@ControllerProcessor@@AEAA?AUtagPOINT@@XZ @ 0x180075FC4 (-GetCursorPosition@ControllerProcessor@@AEAA-AUtagPOINT@@XZ.c)
 *     ?NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_N2@Z @ 0x1800767BC (-NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_N2@Z.c)
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180078AFC (-UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 */

void __fastcall ControllerProcessor::UpdateControllerNavigationMode(ControllerProcessor *this)
{
  LSTATUS ValueW; // eax
  int v3; // ecx
  struct tagRECT v4; // [rsp+40h] [rbp-10h] BYREF
  struct tagPOINT v5; // [rsp+68h] [rbp+18h] BYREF
  int v6; // [rsp+70h] [rbp+20h] BYREF

  v5.x = 4;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\PointerModeOnDesktop",
             L"Enabled",
             0x10u,
             0LL,
             &v6,
             (LPDWORD)&v5);
  v3 = v6;
  if ( ValueW )
    v3 = 1;
  if ( v3 )
  {
    ControllerProcessor::GetCursorPosition(this, &v5);
    v4.left = 0;
    v4.top = 0;
    v4.right = GetSystemMetrics(78);
    v4.bottom = GetSystemMetrics(79);
    ControllerProcessor::NavigationEnable(this, 225, &v4, v5);
  }
  else if ( *((_DWORD *)this + 544) != 2 )
  {
    ControllerProcessor::UpdateNavigationState(this, 2LL, 0LL);
  }
}
