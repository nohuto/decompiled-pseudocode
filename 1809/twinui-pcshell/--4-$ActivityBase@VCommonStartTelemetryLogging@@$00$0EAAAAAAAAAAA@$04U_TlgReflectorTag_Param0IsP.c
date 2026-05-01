/*
 * XREFs of ??4?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x180011C2C
 * Callers:
 *     ??0?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180011A20 (--0-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 * Callees:
 *     ??4?$shared_object@V?$ActivityData@VCommonStartTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAAEAV012@AEBV012@@Z @ 0x180011D64 (--4-$shared_object@V-$ActivityData@VCommonStartTelemetryLogging@@U_TlgReflectorTag_Param0IsProvi.c)
 *     ??$create@V?$ActivityData@VCommonStartTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@?$shared_object@V?$ActivityData@VCommonStartTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAA_N$$QEAV?$ActivityData@VCommonStartTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@2@@Z @ 0x180011D9C (--$create@V-$ActivityData@VCommonStartTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 */

__int64 __fastcall wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::operator=(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v4; // rcx

  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
  v4 = a1 + 304;
  if ( a2[38] )
  {
    *(_QWORD *)(a1 + 48) = a2[6];
    wil::details::shared_object<wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CommonStartTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>>::operator=(
      v4,
      a2 + 38);
  }
  else if ( (unsigned __int8)wil::details::shared_object<wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CommonStartTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>>::create<wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CommonStartTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>>(
                               v4,
                               a2 + 7) )
  {
    *(_QWORD *)(a1 + 48) = (*(_QWORD *)(a1 + 304) + 8LL) & -(__int64)(*(_QWORD *)(a1 + 304) != 0LL);
    wil::details::shared_object<wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CommonStartTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>>::operator=(
      a2 + 38,
      a1 + 304);
    a2[6] = *(_QWORD *)(a1 + 48);
    a2[5] = *(_QWORD *)(a1 + 48) + 40LL;
  }
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 48) + 40LL;
  return a1;
}
