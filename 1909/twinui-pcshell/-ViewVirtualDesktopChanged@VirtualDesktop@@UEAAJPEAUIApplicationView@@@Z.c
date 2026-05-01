/*
 * XREFs of ?ViewVirtualDesktopChanged@VirtualDesktop@@UEAAJPEAUIApplicationView@@@Z @ 0x1800722A0
 * Callers:
 *     <none>
 * Callees:
 *     Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop___enum_Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty__Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_9b3004d460c15bf124f8e61a2a27ce1e___ @ 0x1800722EC (Microsoft--WRL--EventSource_Windows--Foundation--ITypedEventHandler_Windows--Internal--Composabl.c)
 */

__int64 __fastcall VirtualDesktop::ViewVirtualDesktopChanged(VirtualDesktop *this, struct IApplicationView *a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+40h] [rbp+8h] BYREF
  char *v5; // [rsp+50h] [rbp+18h] BYREF

  v4 = 3;
  v5 = (char *)this - 16;
  v3[0] = &v5;
  v3[1] = &v4;
  Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop___enum_Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty__Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_9b3004d460c15bf124f8e61a2a27ce1e___(
    (char *)this + 64,
    v3);
  return 0LL;
}
