/*
 * XREFs of ?Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x1802FD7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x180013C14 (-IsPPIEdition@@YA_NXZ.c)
 *     ?IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ @ 0x18004B010 (-IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ.c)
 *     ?ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x180051A18 (-ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?ShowSearchOrCortana@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x180051BC4 (-ShowSearchOrCortana@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     CortanaHelpers::AllowCortanaAboveLock @ 0x1801BBE74 (CortanaHelpers--AllowCortanaAboveLock.c)
 *     ??$ShowCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x1802F9A44 (--$ShowCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4Inte.c)
 *     ?BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x1802FAAA4 (-BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::Show(XamlLauncherState *this, HSTRING a2)
{
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // [rsp+28h] [rbp-20h] BYREF
  char *v9; // [rsp+30h] [rbp-18h]
  char v10; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *((_BYTE *)this + 944) && !IsPPIEdition() && !CortanaHelpers::AllowCortanaAboveLock() )
    return 0LL;
  if ( XamlLauncherState::IsCortanaNotInstalledOrDisabledByPolicy((XamlLauncherState *)((char *)this - 32)) )
    return 2147942487LL;
  *(_WORD *)((char *)this + 939) = 0;
  v8 = *((_DWORD *)this + 8);
  v9 = (char *)this - 32;
  v10 = 1;
  if ( !v8 )
  {
    XamlLauncherState::BeginCortanaTelemetryTimeout((char *)this - 32);
    *((_BYTE *)this + 941) = 0;
    goto LABEL_16;
  }
  if ( v8 == 5 )
  {
    v7 = XamlLauncherState::ShowCortanaFromOpenStart((XamlLauncherState *)((char *)this - 32), a2);
LABEL_18:
    v6 = v7;
    if ( v7 < 0 )
      goto LABEL_20;
LABEL_19:
    v6 = 0;
    goto LABEL_20;
  }
  if ( v8 <= 5 )
    goto LABEL_19;
  if ( v8 <= 7 )
    goto LABEL_17;
  if ( v8 <= 11 )
    goto LABEL_19;
  if ( v8 <= 14 )
  {
LABEL_17:
    v7 = XamlLauncherState::ShowSearchOrCortana((XamlLauncherState *)((char *)this - 32), a2);
    goto LABEL_18;
  }
  if ( v8 != 16 )
    goto LABEL_19;
  XamlLauncherState::BeginCortanaTelemetryTimeout((char *)this - 32);
  *((_DWORD *)this + 8) = 17;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 6) + 64LL))(*((_QWORD *)this + 6), 7LL);
  v6 = v5;
  if ( v5 >= 0 )
  {
LABEL_16:
    *((_DWORD *)this + 8) = 6;
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x370,
    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
    (const char *)(unsigned int)v5);
LABEL_20:
  v10 = 0;
  StartWindowTelemetry::ShowCortana<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v8,
    (int *)this + 8);
  return v6;
}
