/*
 * XREFs of ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18000B2E0
 * Callers:
 *     ?OnShellHookMessage@XamlLauncher@@UEAAJ_K_J@Z @ 0x18000B270 (-OnShellHookMessage@XamlLauncher@@UEAAJ_K_J@Z.c)
 *     ?HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ @ 0x18029AA4C (-HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ.c)
 *     ?OnStartButtonPressed@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x18029C320 (-OnStartButtonPressed@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERDISMI.c)
 * Callees:
 *     ?AdjustMonitorConnectedIfNeeded@ImmersiveMonitorHelper@@QEAAJXZ @ 0x18000B3C4 (-AdjustMonitorConnectedIfNeeded@ImmersiveMonitorHelper@@QEAAJXZ.c)
 *     ?DidHolographicHandleHotKey@XamlLauncher@@AEAA_NXZ @ 0x18000B5C8 (-DidHolographicHandleHotKey@XamlLauncher@@AEAA_NXZ.c)
 *     ?DismissPopupMenu@@YA_NXZ @ 0x18000B76C (-DismissPopupMenu@@YA_NXZ.c)
 *     ?Stop@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180012094 (-Stop@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     ??1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x180012474 (--1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180012698 (--0-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflector_ea_180012698.c)
 *     ?StartActivity@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXXZ @ 0x180012B10 (-StartActivity@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXXZ.c)
 *     ?LauncherOpened@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXIIW4Mode@LauncherTelemetry@@@Z @ 0x180012C10 (-LauncherOpened@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXIIW4Mode@LauncherTelemetry@@@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800498D4 (-IsPPIEdition@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ShowAttemptSkippedDueToOpenContextMenu@StartWindowTelemetry@@SAXXZ @ 0x18029CD4C (-ShowAttemptSkippedDueToOpenContextMenu@StartWindowTelemetry@@SAXXZ.c)
 */

__int64 __fastcall XamlLauncher::ShowStartView(__int64 a1, unsigned int a2, unsigned int a3)
{
  int v6; // eax
  unsigned int v7; // edi
  int v8; // eax
  unsigned int v9; // ebx
  int v11[80]; // [rsp+20h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  if ( !*(_QWORD *)(a1 + 224) )
    return 2147943568LL;
  if ( !DismissPopupMenu() && (a3 & 4) == 0 )
  {
    StartWindowTelemetry::ShowAttemptSkippedDueToOpenContextMenu();
    return 0LL;
  }
  if ( *(_BYTE *)(a1 + 208) || *(_BYTE *)(a1 + 210) )
  {
    wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v11);
    *(_QWORD *)v11 = &CommonStartTelemetry::LauncherInvokeActivity::`vftable';
    CommonStartTelemetry::LauncherInvokeActivity::StartActivity((CommonStartTelemetry::LauncherInvokeActivity *)v11);
    CommonStartTelemetry::LauncherInvokeActivity::LauncherOpened(v11, a2, a3, *(_BYTE *)(a1 + 208) != 0 ? 3 : 21);
    wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v11,
      0LL);
    CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v11);
    return 0LL;
  }
  if ( IsPPIEdition() )
    return 0LL;
  if ( a2 != 1 )
  {
    if ( a2 == 11 )
      goto LABEL_9;
    goto LABEL_8;
  }
  if ( XamlLauncher::DidHolographicHandleHotKey((XamlLauncher *)(a1 - 24)) )
    return 0LL;
LABEL_8:
  v6 = ImmersiveMonitorHelper::AdjustMonitorConnectedIfNeeded(*(ImmersiveMonitorHelper **)(a1 + 104));
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8A,
      (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v6,
      v11[0]);
    return v7;
  }
LABEL_9:
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 224) + 56LL))(
         *(_QWORD *)(a1 + 224),
         a2,
         a3);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8C,
    (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
    (const char *)(unsigned int)v8,
    v11[0]);
  return v9;
}
