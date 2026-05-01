/*
 * XREFs of ?s_WndProc@FocusHoldingTank@@CA_JPEAUHWND__@@I_K_J@Z @ 0x1802FFE70
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800300F0 (-Stop@-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?Destroy@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800302C4 (-Destroy@-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802F15DC (--0-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ??1?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1802F1C48 (--1-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?StartActivity@ActivateHoldingTankWindow@StartWindowTelemetry@@QEAAXXZ @ 0x1802FEB48 (-StartActivity@ActivateHoldingTankWindow@StartWindowTelemetry@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
LRESULT __fastcall FocusHoldingTank::s_WndProc(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  LONG_PTR WindowLongPtrW; // rax
  __int64 v9; // rcx
  _QWORD v11[40]; // [rsp+30h] [rbp-178h] BYREF

  if ( Msg == 6 && (_WORD)wParam == 1 )
  {
    wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v11,
      (__int64)"ActivateHoldingTankWindow");
    v11[0] = &StartWindowTelemetry::ActivateHoldingTankWindow::`vftable';
    StartWindowTelemetry::ActivateHoldingTankWindow::StartActivity((StartWindowTelemetry::ActivateHoldingTankWindow *)v11);
    WindowLongPtrW = GetWindowLongPtrW(hWnd, Msg - 27);
    if ( WindowLongPtrW )
    {
      v9 = *(_QWORD *)(WindowLongPtrW + 16);
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 104LL))(v9);
    }
    wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v11);
    v11[0] = &StartWindowTelemetry::ActivateHoldingTankWindow::`vftable';
    wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v11);
    wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v11);
  }
  return DefWindowProcW(hWnd, Msg, wParam, lParam);
}
