/*
 * XREFs of ??0AssistantLightWNFListener@Lighting@TwinUI@@QEAA@XZ @ 0x1803996F0
 * Callers:
 *     ??$make_unique_nothrow@VAssistantLightWNFListener@Lighting@TwinUI@@$$V@wil@@YA?AV?$unique_ptr@VAssistantLightWNFListener@Lighting@TwinUI@@U?$default_delete@VAssistantLightWNFListener@Lighting@TwinUI@@@wistd@@@wistd@@XZ @ 0x180187B14 (--$make_unique_nothrow@VAssistantLightWNFListener@Lighting@TwinUI@@$$V@wil@@YA-AV-$unique_ptr@VA.c)
 * Callees:
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180056F64 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180084C08 (--2@YAPEAX_K@Z.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x18008C9F4 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_LightingWhenLidClosed@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180399964 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_LightingWhenLidClosed@@@wil@@CAX_NW4.c)
 *     ??0AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x18039A3A8 (--0AssistantLightManager@Lighting@TwinUI@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
TwinUI::Lighting::AssistantLightWNFListener *__fastcall TwinUI::Lighting::AssistantLightWNFListener::AssistantLightWNFListener(
        TwinUI::Lighting::AssistantLightWNFListener *this)
{
  __int64 v2; // rcx
  struct wil::details::IFunctorHost *v3; // r8
  _QWORD v5[2]; // [rsp+28h] [rbp-58h] BYREF
  DiagnosticsInfo v6; // [rsp+38h] [rbp-48h] BYREF
  const char *v7; // [rsp+40h] [rbp-40h]
  __int64 v8; // [rsp+48h] [rbp-38h]
  __int16 v9; // [rsp+50h] [rbp-30h]
  _BYTE v10[8]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v11; // [rsp+60h] [rbp-20h]
  int v12; // [rsp+6Ch] [rbp-14h]
  DiagnosticsInfo retaddr; // [rsp+88h] [rbp+8h]
  TwinUI::Lighting::AssistantLightManager *v14; // [rsp+98h] [rbp+18h] BYREF

  *(_QWORD *)this = 0LL;
  v14 = (TwinUI::Lighting::AssistantLightManager *)operator new(0x70uLL);
  *((_QWORD *)this + 1) = TwinUI::Lighting::AssistantLightManager::AssistantLightManager(v14);
  v14 = this;
  v6 = retaddr;
  v7 = "pcshell\\twinui\\lighting\\lib\\assistantlightwnflistener.cpp";
  v8 = 0LL;
  v9 = 11;
  wil::Feature<__WilFeatureTraits_Feature_LightingWhenLidClosed>::ReportUsageToService(v2);
  v5[0] = off_1803FEB38;
  v5[1] = &v14;
  wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v10, 16487091, &v6);
  wil::details::RunFunctor((wil::details *)v5, (struct wil::details::IFunctor *)v10, v3);
  if ( v11 )
    *(_DWORD *)(v11 + 16) = v12;
  return this;
}
