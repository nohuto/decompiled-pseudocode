/*
 * XREFs of ?BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x1802FAAA4
 * Callers:
 *     ?Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x1802FD7A0 (-Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x1802FE070 (-Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800437F4 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18004B0F8 (--0-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto_ea_18004B0F8.c)
 *     ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x18004B19C (--0-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto_ea_18004B19C.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18016F0F0 (-_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ @ 0x1802F18BC (--0CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ.c)
 *     ??1CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ @ 0x1802F1DC8 (--1CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ.c)
 *     ??4CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802FA964 (--4CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?StartActivity@CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAAXXZ @ 0x1802FD9FC (-StartActivity@CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAAXXZ.c)
 */

void __fastcall XamlLauncherState::BeginCortanaTelemetryTimeout(char *pv)
{
  struct _TP_TIMER **v1; // rdi
  __int64 v3; // r8
  struct _TP_TIMER *ThreadpoolTimer; // rax
  const char *v5; // r9
  struct _TP_TIMER *v6; // rcx
  __int64 v7; // r8
  struct _FILETIME pftDueTime; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v9[40]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v10[40]; // [rsp+178h] [rbp+70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2D0h] [rbp+1C8h]

  v1 = (struct _TP_TIMER **)(pv + 960);
  if ( !*((_QWORD *)pv + 120) )
  {
    StartWindowTelemetry::CortanaLauncherInvokeActivity::CortanaLauncherInvokeActivity((StartWindowTelemetry::CortanaLauncherInvokeActivity *)v10);
    if ( **((_DWORD **)pv + 82) != 1 )
    {
      wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
        (__int64)v9,
        (__int64)"CortanaLauncherInvokeActivity");
      v9[0] = &StartWindowTelemetry::CortanaLauncherInvokeActivity::`vftable';
      StartWindowTelemetry::CortanaLauncherInvokeActivity::StartActivity((StartWindowTelemetry::CortanaLauncherInvokeActivity *)v9);
      StartWindowTelemetry::CortanaLauncherInvokeActivity::operator=(v10, (__int64)v9, v3);
      StartWindowTelemetry::CortanaLauncherInvokeActivity::~CortanaLauncherInvokeActivity((StartWindowTelemetry::CortanaLauncherInvokeActivity *)v9);
    }
    ThreadpoolTimer = CreateThreadpoolTimer(
                        (PTP_TIMER_CALLBACK)lambda_4af01f2a77325a2f7ccbe9b4c7e45e28_::_lambda_invoker_cdecl_,
                        pv,
                        0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
      v1,
      ThreadpoolTimer);
    v6 = *v1;
    if ( *v1
      || (wil::details::in1diag3::_Log_NullAlloc(
            retaddr,
            1249LL,
            (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            v5),
          (v6 = (struct _TP_TIMER *)*((_QWORD *)pv + 120)) != 0LL) )
    {
      pftDueTime = (struct _FILETIME)(-10000000LL * *((unsigned int *)pv + 17));
      SetThreadpoolTimer(v6, &pftDueTime, 0, 0x3E8u);
    }
    if ( *(_DWORD *)v10[6] == 1 )
    {
      wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
        v9,
        (__int64)v10,
        0);
      v9[0] = &StartWindowTelemetry::CortanaLauncherInvokeActivity::`vftable';
      StartWindowTelemetry::CortanaLauncherInvokeActivity::operator=((_QWORD *)pv + 76, (__int64)v9, v7);
      StartWindowTelemetry::CortanaLauncherInvokeActivity::~CortanaLauncherInvokeActivity((StartWindowTelemetry::CortanaLauncherInvokeActivity *)v9);
    }
    StartWindowTelemetry::CortanaLauncherInvokeActivity::~CortanaLauncherInvokeActivity((StartWindowTelemetry::CortanaLauncherInvokeActivity *)v10);
  }
}
