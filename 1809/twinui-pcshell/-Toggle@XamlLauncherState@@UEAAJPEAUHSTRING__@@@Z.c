/*
 * XREFs of ?Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x1802A5BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ @ 0x1800125A4 (-IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ.c)
 *     ?ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x18001DF4C (-ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800498D4 (-IsPPIEdition@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     CortanaHelpers::AllowCortanaAboveLock @ 0x180188184 (CortanaHelpers--AllowCortanaAboveLock.c)
 *     ??$ToggleCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x1802A1EDC (--$ToggleCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4In.c)
 *     ?BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x1802A2740 (-BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::Toggle(XamlLauncherState *this, HSTRING a2)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8; // [rsp+28h] [rbp-20h] BYREF
  char *v9; // [rsp+30h] [rbp-18h]
  char v10; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v12; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 936) && !IsPPIEdition() && !CortanaHelpers::AllowCortanaAboveLock() )
    return 0LL;
  if ( XamlLauncherState::IsCortanaNotInstalledOrDisabledByPolicy((XamlLauncherState *)((char *)this - 32)) )
    return 2147942487LL;
  v8 = *((_DWORD *)this + 8);
  v9 = (char *)this - 32;
  v10 = 1;
  if ( v8 )
  {
    if ( v8 == 5 )
    {
      v12 = 0;
      v5 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 7) + 152LL))(*((_QWORD *)this + 7), &v12);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 986LL;
        goto LABEL_22;
      }
      if ( v12 )
      {
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 96LL))(*((_QWORD *)this + 7));
      }
      else
      {
        v5 = XamlLauncherState::ShowCortanaFromOpenStart((XamlLauncherState *)((char *)this - 32), a2);
        v6 = v5;
        if ( v5 < 0 )
        {
          v7 = 993LL;
          goto LABEL_22;
        }
      }
    }
    else if ( v8 == 7 )
    {
      *((_DWORD *)this + 8) = 8;
      v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 88LL))(*((_QWORD *)this + 7));
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 980LL;
LABEL_22:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v7,
          (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v5);
        goto LABEL_17;
      }
    }
  }
  else
  {
    XamlLauncherState::BeginCortanaTelemetryTimeout((char *)this - 32);
    *(_WORD *)((char *)this + 931) = 0;
    *((_BYTE *)this + 933) = 0;
    *((_DWORD *)this + 8) = 6;
    v5 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, __int64))(**((_QWORD **)this + 7) + 56LL))(
           *((_QWORD *)this + 7),
           a2,
           1LL);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 975LL;
      goto LABEL_22;
    }
  }
  v6 = 0;
LABEL_17:
  v10 = 0;
  StartWindowTelemetry::ToggleCortana<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v8,
    (int *)this + 8);
  return v6;
}
