/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180100118
 * Callers:
 *     _KeyboardHosting::TabTipAdapter::OnEditControlFocusChanged_::_1_::dtor$0 @ 0x1800C5EF9 (_KeyboardHosting--TabTipAdapter--OnEditControlFocusChanged_--_1_--dtor$0.c)
 *     _RetailDemoExperienceManager::Close_::_1_::dtor$0 @ 0x1801B4C0A (_RetailDemoExperienceManager--Close_--_1_--dtor$0.c)
 *     _RetailDemoExperienceManager::Dock_::_1_::dtor$0 @ 0x1801B4E78 (_RetailDemoExperienceManager--Dock_--_1_--dtor$0.c)
 *     _RetailDemoExperienceManager::Float_::_1_::dtor$0 @ 0x1801B4F5E (_RetailDemoExperienceManager--Float_--_1_--dtor$0.c)
 *     _RetailDemoExperienceManager::Hide_::_1_::dtor$0 @ 0x1801B5174 (_RetailDemoExperienceManager--Hide_--_1_--dtor$0.c)
 *     _RetailDemoExperienceManager::LaunchApplication_::_1_::dtor$0 @ 0x1801B5672 (_RetailDemoExperienceManager--LaunchApplication_--_1_--dtor$0.c)
 *     _RetailDemoExperienceManager::OnClientWindowReadyForPresentationChanged_::_1_::dtor$0 @ 0x1801B57ED (_RetailDemoExperienceManager--OnClientWindowReadyForPresentationChanged_--_1_--dtor$0.c)
 *     _RetailDemoExperienceManager::OnViewEvent_::_1_::dtor$0 @ 0x1801B5DE5 (_RetailDemoExperienceManager--OnViewEvent_--_1_--dtor$0.c)
 *     _RetailDemoExperienceManager::SetTopmost_::_1_::dtor$0 @ 0x1801B6041 (_RetailDemoExperienceManager--SetTopmost_--_1_--dtor$0.c)
 *     _RetailDemoExperienceManager::SetWindowBand_::_1_::dtor$0 @ 0x1801B60FC (_RetailDemoExperienceManager--SetWindowBand_--_1_--dtor$0.c)
 *     _RetailDemoExperienceManager::Show_::_1_::dtor$0 @ 0x1801B61AA (_RetailDemoExperienceManager--Show_--_1_--dtor$0.c)
 *     _RetailDemoExperienceManager::SubscribeToServices_::_1_::dtor$0 @ 0x1801B656A (_RetailDemoExperienceManager--SubscribeToServices_--_1_--dtor$0.c)
 *     _KeyboardHosting::TabTipAdapter::EnsureInputAppIsReady_::_1_::dtor$0 @ 0x18031FCB5 (_KeyboardHosting--TabTipAdapter--EnsureInputAppIsReady_--_1_--dtor$0.c)
 *     _KeyboardHosting::TabTipAdapter::OnInputAppChangeApproved_::_1_::dtor$0 @ 0x1803219CA (_KeyboardHosting--TabTipAdapter--OnInputAppChangeApproved_--_1_--dtor$0.c)
 *     _KeyboardHosting::TabTipAdapter::OnInputAppTerminated_::_1_::dtor$1 @ 0x18032277F (_KeyboardHosting--TabTipAdapter--OnInputAppTerminated_--_1_--dtor$1.c)
 *     _TwinUI::Lighting::AssistantLightManager::AddDevice_::_1_::dtor$6 @ 0x1804004B0 (_TwinUI--Lighting--AssistantLightManager--AddDevice_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(
        struct _RTL_CRITICAL_SECTION **a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rcx

  v1 = *a1;
  if ( v1 )
    LeaveCriticalSection(v1);
}
