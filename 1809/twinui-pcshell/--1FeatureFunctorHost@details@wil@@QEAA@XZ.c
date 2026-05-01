/*
 * XREFs of ??1FeatureFunctorHost@details@wil@@QEAA@XZ @ 0x180138524
 * Callers:
 *     _CDesktopPositioner::_GetLaunchPosition_::_1_::dtor$5 @ 0x1800AE104 (_CDesktopPositioner--_GetLaunchPosition_--_1_--dtor$5.c)
 *     _wil::details::RunFeatureDispatch__lambda_d6345a2b433034ec221583a2ac3cef15__&___ptr64__::_1_::dtor$0 @ 0x180137F48 (_wil--details--RunFeatureDispatch__lambda_d6345a2b433034ec221583a2ac3cef15__-___ptr64__--_1_--dt.c)
 *     _TwinUI::Lighting::AssistantLightWNFListener::AssistantLightWNFListener_::_1_::dtor$2 @ 0x1803997E1 (_TwinUI--Lighting--AssistantLightWNFListener--AssistantLightWNFListener_--_1_--dtor$2.c)
 *     _TwinUI::Lighting::AssistantLightManager::AssistantLightManager_::_1_::dtor$15 @ 0x18039A515 (_TwinUI--Lighting--AssistantLightManager--AssistantLightManager_--_1_--dtor$15.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::FeatureFunctorHost::~FeatureFunctorHost(wil::details::FeatureFunctorHost *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 1);
  if ( v1 )
    *(_DWORD *)(v1 + 16) = *((_DWORD *)this + 5);
}
