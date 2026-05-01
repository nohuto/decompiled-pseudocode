/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800DE1FC
 * Callers:
 *     _KeyboardHosting::TabTipAdapter::OnEditControlFocusChanged_::_1_::dtor$0 @ 0x1800AE4AF (_KeyboardHosting--TabTipAdapter--OnEditControlFocusChanged_--_1_--dtor$0.c)
 *     _RetailDemoExperienceManager::Close_::_1_::dtor$0 @ 0x18018459A (_RetailDemoExperienceManager--Close_--_1_--dtor$0.c)
 *     _RetailDemoExperienceManager::Dock_::_1_::dtor$0 @ 0x180184788 (_RetailDemoExperienceManager--Dock_--_1_--dtor$0.c)
 *     _RetailDemoExperienceManager::Float_::_1_::dtor$0 @ 0x18018486E (_RetailDemoExperienceManager--Float_--_1_--dtor$0.c)
 *     _RetailDemoExperienceManager::Hide_::_1_::dtor$0 @ 0x180184A84 (_RetailDemoExperienceManager--Hide_--_1_--dtor$0.c)
 *     _RetailDemoExperienceManager::LaunchApplication_::_1_::dtor$0 @ 0x180184F79 (_RetailDemoExperienceManager--LaunchApplication_--_1_--dtor$0.c)
 *     _RetailDemoExperienceManager::OnClientWindowReadyForPresentationChanged_::_1_::dtor$0 @ 0x1801850FE (_RetailDemoExperienceManager--OnClientWindowReadyForPresentationChanged_--_1_--dtor$0.c)
 *     _RetailDemoExperienceManager::OnViewEvent_::_1_::dtor$0 @ 0x1801856F6 (_RetailDemoExperienceManager--OnViewEvent_--_1_--dtor$0.c)
 *     _RetailDemoExperienceManager::SetTopmost_::_1_::dtor$0 @ 0x1801858E1 (_RetailDemoExperienceManager--SetTopmost_--_1_--dtor$0.c)
 *     _RetailDemoExperienceManager::SetWindowBand_::_1_::dtor$0 @ 0x18018599C (_RetailDemoExperienceManager--SetWindowBand_--_1_--dtor$0.c)
 *     _RetailDemoExperienceManager::Show_::_1_::dtor$0 @ 0x180185A4A (_RetailDemoExperienceManager--Show_--_1_--dtor$0.c)
 *     _RetailDemoExperienceManager::SubscribeToServices_::_1_::dtor$0 @ 0x180185DFD (_RetailDemoExperienceManager--SubscribeToServices_--_1_--dtor$0.c)
 *     _KeyboardHosting::TabTipAdapter::EnsureInputAppIsReady_::_1_::dtor$0 @ 0x1802C22E5 (_KeyboardHosting--TabTipAdapter--EnsureInputAppIsReady_--_1_--dtor$0.c)
 *     _KeyboardHosting::TabTipAdapter::OnInputAppChangeApproved_::_1_::dtor$0 @ 0x1802C3E36 (_KeyboardHosting--TabTipAdapter--OnInputAppChangeApproved_--_1_--dtor$0.c)
 *     _KeyboardHosting::TabTipAdapter::OnInputAppTerminated_::_1_::dtor$0 @ 0x1802C4965 (_KeyboardHosting--TabTipAdapter--OnInputAppTerminated_--_1_--dtor$0.c)
 *     _TwinUI::Lighting::AssistantLightManager::AddDevice_::_1_::dtor$6 @ 0x18039AAF9 (_TwinUI--Lighting--AssistantLightManager--AddDevice_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(
        struct _RTL_CRITICAL_SECTION **a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rcx

  v1 = *a1;
  if ( v1 )
    LeaveCriticalSection(v1);
}
