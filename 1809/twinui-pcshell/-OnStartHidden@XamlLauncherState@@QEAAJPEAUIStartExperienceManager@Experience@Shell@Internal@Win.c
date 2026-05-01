/*
 * XREFs of ?OnStartHidden@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180011CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?LauncherClosed@CommonStartTelemetry@@SAXXZ @ 0x180012ECC (-LauncherClosed@CommonStartTelemetry@@SAXXZ.c)
 *     ??$OnStartHidden@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180013150 (--$OnStartHidden@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4In.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnStartHidden(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::IStartExperienceManager *a2,
        struct IInspectable *a3)
{
  _DWORD *v3; // rbx
  int v5; // [rsp+28h] [rbp-20h] BYREF
  XamlLauncherState *v6; // [rsp+30h] [rbp-18h]
  char v7; // [rsp+38h] [rbp-10h]

  v3 = (_DWORD *)((char *)this + 64);
  v5 = *((_DWORD *)this + 16);
  v6 = this;
  v7 = 1;
  (*(void (__fastcall **)(_QWORD, struct Windows::Internal::Shell::Experience::IStartExperienceManager *, struct IInspectable *))(**((_QWORD **)this + 16) + 32LL))(
    *((_QWORD *)this + 16),
    a2,
    a3);
  switch ( *v3 )
  {
    case 9:
      *v3 = 10;
      break;
    case 0xE:
      *v3 = 7;
      break;
    case 0xB:
    case 0x11:
      *v3 = 0;
      break;
  }
  CommonStartTelemetry::LauncherClosed();
  v7 = 0;
  StartWindowTelemetry::OnStartHidden<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v5,
    v3);
  return 0LL;
}
