/*
 * XREFs of ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x18004B19C
 * Callers:
 *     ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x18004B0C8 (--0-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0Is.c)
 *     ?TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA?AV12@XZ @ 0x18004C2C4 (-TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA-AV12@XZ.c)
 *     ?BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x1802FAAA4 (-BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 *     ?TransferToCurrentThread@CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA?AV12@XZ @ 0x1802FE214 (-TransferToCurrentThread@CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA-AV12@XZ.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028AD4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV012@@Z @ 0x18002C6BC (--0-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activ.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002E740 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 */

_QWORD *__fastcall wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
        _QWORD *a1,
        __int64 a2,
        char a3)
{
  _QWORD *v5; // rcx
  __int64 v6; // rax
  _QWORD *v7; // rcx
  bool v8; // zf

  *a1 = &wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  a1[3] = 0LL;
  v5 = a1 + 1;
  *v5 = 0LL;
  *((_DWORD *)v5 + 6) = 0;
  v5[4] = 0LL;
  v5[1] = a1;
  if ( a3 )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)v5);
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)(a1 + 7),
    a2 + 56);
  a1[38] = *(_QWORD *)(a2 + 304);
  *(_QWORD *)(a2 + 304) = 0LL;
  v6 = a1[38];
  v7 = (_QWORD *)(v6 + 8);
  if ( !v6 )
    v7 = a1 + 7;
  a1[6] = v7;
  a1[5] = v7 + 5;
  v8 = *(_DWORD *)(a2 + 32) == 0;
  *(_QWORD *)(a2 + 48) = a2 + 56;
  if ( !v8 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a2 + 8));
  return a1;
}
