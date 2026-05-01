/*
 * XREFs of ?OnCortanaDestroyed@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18031B8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z @ 0x18005FF50 (-PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z.c)
 *     ?IsCortanaVisible@XamlLauncherState@@UEAA_NXZ @ 0x180079500 (-IsCortanaVisible@XamlLauncherState@@UEAA_NXZ.c)
 *     ?IsStartVisible@XamlLauncherState@@UEAA_NXZ @ 0x18007D100 (-IsStartVisible@XamlLauncherState@@UEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$OnCortanaDestroyed@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180318180 (--$OnCortanaDestroyed@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAE.c)
 *     ??$StartRunningWithoutCortana@J@StartWindowTelemetry@@SAX$$QEAJ@Z @ 0x1803194A0 (--$StartRunningWithoutCortana@J@StartWindowTelemetry@@SAX$$QEAJ@Z.c)
 *     ?CortanaViewDestroyedWhileVisible@StartWindowTelemetry@@SAXXZ @ 0x18031A220 (-CortanaViewDestroyedWhileVisible@StartWindowTelemetry@@SAXXZ.c)
 *     ?OnStartFailedToGetForegroundImpl@XamlLauncherState@@AEAAJXZ @ 0x18031C508 (-OnStartFailedToGetForegroundImpl@XamlLauncherState@@AEAAJXZ.c)
 *     ?StartStayedUpWhenCortanaCrashed@StartWindowTelemetry@@SAXXZ @ 0x18031D1E4 (-StartStayedUpWhenCortanaCrashed@StartWindowTelemetry@@SAXXZ.c)
 *     ?TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ @ 0x18031D6DC (-TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnCortanaDestroyed(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2,
        struct IInspectable *a3)
{
  int *v4; // rdi
  int v5; // ebx
  char v6; // r14
  XamlLauncherState *v7; // rbp
  int v9; // [rsp+28h] [rbp-30h] BYREF
  XamlLauncherState *v10; // [rsp+30h] [rbp-28h]
  char v11; // [rsp+38h] [rbp-20h]
  int v12; // [rsp+60h] [rbp+8h] BYREF

  v4 = (int *)((char *)this + 64);
  v5 = *((_DWORD *)this + 16);
  v9 = v5;
  v10 = this;
  v11 = 1;
  v6 = 1;
  v7 = (XamlLauncherState *)((char *)this + 24);
  if ( !XamlLauncherState::IsStartVisible((XamlLauncherState *)((char *)this + 24)) )
  {
    if ( v5 == 1 )
    {
LABEL_10:
      v6 = 0;
      *((_BYTE *)this + 971) = 1;
      *v4 = 1;
      v12 = -2147467260;
      StartWindowTelemetry::StartRunningWithoutCortana<long>((__int64)&v12);
      goto LABEL_11;
    }
    if ( v5 == 2 )
      goto LABEL_18;
    if ( v5 <= 2 )
      goto LABEL_11;
    if ( v5 <= 4 || v5 == 18 )
      goto LABEL_10;
    if ( v5 == 19 )
    {
LABEL_18:
      XamlLauncherState::TryToCompleteStartShowWithoutCortana(this);
    }
    else if ( v5 > 19 && v5 <= 21 )
    {
      goto LABEL_10;
    }
  }
LABEL_11:
  if ( XamlLauncherState::IsCortanaVisible(v7) )
  {
    *((_QWORD *)this + 123) = 0LL;
    XamlLauncherState::PostCortanaOrSearchVisibility(this, 0, 0LL);
  }
  if ( v6 )
  {
    if ( XamlLauncherState::IsCortanaVisible(v7) && XamlLauncherState::IsStartVisible(v7) )
    {
      *v4 = 16;
      if ( (*(int (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 128LL))(*((_QWORD *)this + 10)) < 0 )
      {
        XamlLauncherState::OnStartFailedToGetForegroundImpl(this);
        goto LABEL_22;
      }
LABEL_24:
      StartWindowTelemetry::StartStayedUpWhenCortanaCrashed();
      goto LABEL_22;
    }
    if ( XamlLauncherState::IsCortanaVisible(v7) )
    {
      StartWindowTelemetry::CortanaViewDestroyedWhileVisible();
    }
    else if ( *v4 == 16 )
    {
      goto LABEL_24;
    }
    *v4 = 0;
  }
LABEL_22:
  v11 = 0;
  StartWindowTelemetry::OnCortanaDestroyed<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v9,
    v4);
  return 0LL;
}
