/*
 * XREFs of ?OnCortanaHidden@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18007F820
 * Callers:
 *     <none>
 * Callees:
 *     ??$OnCortanaHidden@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18007E108 (--$OnCortanaHidden@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4.c)
 */

__int64 __fastcall XamlLauncherState::OnCortanaHidden(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2,
        struct IInspectable *a3)
{
  int *v3; // rbx
  HWND WindowW; // rax
  int v6; // [rsp+20h] [rbp-28h] BYREF
  XamlLauncherState *v7; // [rsp+28h] [rbp-20h]
  char v8; // [rsp+30h] [rbp-18h]

  *((_QWORD *)this + 122) = 0LL;
  v3 = (int *)((char *)this + 64);
  v6 = *((_DWORD *)this + 16);
  WindowW = hWnd;
  v7 = this;
  if ( !hWnd )
  {
    WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
    hWnd = WindowW;
  }
  PostMessageW(WindowW, 0x5CBu, 0LL, 0LL);
  switch ( *v3 )
  {
    case 8:
      goto LABEL_6;
    case 9:
      *v3 = 11;
      break;
    case 10:
LABEL_6:
      *v3 = 0;
      break;
  }
  v8 = 0;
  StartWindowTelemetry::OnCortanaHidden<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v6,
    v3);
  return 0LL;
}
