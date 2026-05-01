/*
 * XREFs of ?HideCortana@XamlLauncherState@@UEAAXXZ @ 0x18031A3E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$HideCortanaInternal@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180317DB4 (--$HideCortanaInternal@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXA.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall XamlLauncherState::HideCortana(XamlLauncherState *this)
{
  int *v1; // rbx
  int v2; // [rsp+28h] [rbp-20h] BYREF
  char *v3; // [rsp+30h] [rbp-18h]
  char v4; // [rsp+38h] [rbp-10h]

  v2 = *((_DWORD *)this + 10);
  v1 = (int *)((char *)this - 24);
  v3 = (char *)this - 24;
  v4 = 1;
  if ( v2 == 7 )
  {
    *((_DWORD *)this + 10) = 8;
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 88LL))(*((_QWORD *)this + 8));
  }
  v4 = 0;
  StartWindowTelemetry::HideCortanaInternal<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v2,
    v1 + 16);
}
