/*
 * XREFs of ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800411FC
 * Callers:
 *     ??_G?$CTaskWrapper@V_lambda_5b180c0ca92e82d68f6c8a12cad9fd8b_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180041120 (--_G-$CTaskWrapper@V_lambda_5b180c0ca92e82d68f6c8a12cad9fd8b_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     ?OnEventQueued@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180041FF0 (-OnEventQueued@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Ex.c)
 *     ?LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ @ 0x18006EDDC (-LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ.c)
 *     ??1LaunchCompleted@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x18006EE90 (--1LaunchCompleted@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??1OnEventQueued@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x1803AE500 (--1OnEventQueued@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??1Reactivate@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x1803B0A40 (--1Reactivate@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ?reset@?$shared_object@V?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18006B44C (-reset@-$shared_object@V-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflector_ea_18006B44C.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?SetStopResult@?$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1800F3074 (-SetStopResult@-$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(
        _QWORD *a1)
{
  _QWORD *v1; // rdi
  RTL_SRWLOCK *v3; // rbx
  RTL_SRWLOCK *v4; // rbx
  char v5; // bp
  _DWORD *v6; // rcx
  __int64 v7; // rdx
  int v8[6]; // [rsp+20h] [rbp-18h] BYREF

  v1 = a1 + 38;
  v3 = (RTL_SRWLOCK *)a1[38];
  if ( !v3 )
    goto LABEL_8;
  v4 = v3 + 31;
  AcquireSRWLockExclusive(v4);
  if ( *v1 && *(_DWORD *)*v1 == 1 )
  {
    v5 = 1;
  }
  else
  {
    v5 = 0;
    wil::details::shared_object<wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v1);
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  if ( v5 )
  {
LABEL_8:
    v6 = (_DWORD *)a1[6];
    if ( *v6 == 1 )
    {
      v8[0] = v6[21];
      v7 = 2147942974LL;
      if ( v8[0] < 0 )
        v7 = (unsigned int)v8[0];
      wil::ActivityBase<TrayNotificationAreaLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TrayNotificationAreaLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v6,
        v7,
        v8);
      (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
    }
  }
}
