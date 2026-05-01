/*
 * XREFs of ?Hide@XamlLauncherState@@UEAAJXZ @ 0x1802FAE90
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ @ 0x18004B010 (-IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$HideCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x1802F87E0 (--$HideCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4Inte.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::Hide(XamlLauncherState *this)
{
  int *v1; // rdi
  __int64 v2; // rdx
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // [rsp+28h] [rbp-20h] BYREF
  int *v7; // [rsp+30h] [rbp-18h]
  char v8; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v1 = (int *)((char *)this - 32);
  if ( XamlLauncherState::IsCortanaNotInstalledOrDisabledByPolicy((XamlLauncherState *)((char *)this - 32)) )
    return 2147942487LL;
  v6 = *(_DWORD *)(v2 + 32);
  v7 = v1;
  v8 = 1;
  if ( v6 == 7
    && (*(_DWORD *)(v2 + 32) = 8,
        v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 56) + 88LL))(*(_QWORD *)(v2 + 56)),
        v5 = v4,
        v4 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A3,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v4);
  }
  else
  {
    v5 = 0;
  }
  v8 = 0;
  StartWindowTelemetry::HideCortana<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v6,
    v1 + 16);
  return v5;
}
