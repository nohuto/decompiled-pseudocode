/*
 * XREFs of ??1RoVariant@@QEAA@XZ @ 0x1800648B8
 * Callers:
 *     ?OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180064630 (-OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChang.c)
 *     _CSingleViewShellExperience::OnViewPropertiesChangedBase_::_1_::dtor$2 @ 0x1800AE67F (_CSingleViewShellExperience--OnViewPropertiesChangedBase_--_1_--dtor$2.c)
 *     ?OnViewPropertiesChanging@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180166370 (-OnViewPropertiesChanging@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperien.c)
 *     _CPeopleBarJumpViewExperienceManager::OnViewPropertiesChanging_::_1_::dtor$1 @ 0x180166591 (_CPeopleBarJumpViewExperienceManager--OnViewPropertiesChanging_--_1_--dtor$1.c)
 *     ?OnViewPropertiesChanging@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180167AE0 (-OnViewPropertiesChanging@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     _CShoulderTapExperienceManager::OnViewPropertiesChanging_::_1_::dtor$1 @ 0x180167D2A (_CShoulderTapExperienceManager--OnViewPropertiesChanging_--_1_--dtor$1.c)
 *     ?EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18016D4EC (-EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     _CJumpViewExperienceManager::EnsureWindowPosition_::_1_::dtor$1 @ 0x18016D8AA (_CJumpViewExperienceManager--EnsureWindowPosition_--_1_--dtor$1.c)
 *     _CJumpViewExperienceManager::EnsureWindowPosition_::_1_::dtor$4 @ 0x18016D8CE (_CJumpViewExperienceManager--EnsureWindowPosition_--_1_--dtor$4.c)
 *     _CJumpViewExperienceManager::EnsureWindowPosition_::_1_::dtor$7 @ 0x18016D8F2 (_CJumpViewExperienceManager--EnsureWindowPosition_--_1_--dtor$7.c)
 *     ?OnViewPropertiesChanging@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18016E4F0 (-OnViewPropertiesChanging@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     _CJumpViewExperienceManager::OnViewPropertiesChanging_::_1_::dtor$1 @ 0x18016E6B5 (_CJumpViewExperienceManager--OnViewPropertiesChanging_--_1_--dtor$1.c)
 *     ?OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180173A80 (-OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@.c)
 *     _CQuickConnectExperienceManager::OnViewPropertiesChanging_::_1_::dtor$2 @ 0x180173F28 (_CQuickConnectExperienceManager--OnViewPropertiesChanging_--_1_--dtor$2.c)
 *     _CQuickConnectExperienceManager::OnViewPropertiesChanging_::_1_::dtor$5 @ 0x180173F4C (_CQuickConnectExperienceManager--OnViewPropertiesChanging_--_1_--dtor$5.c)
 *     _CQuickConnectExperienceManager::OnViewPropertiesChanging_::_1_::dtor$8 @ 0x180173F70 (_CQuickConnectExperienceManager--OnViewPropertiesChanging_--_1_--dtor$8.c)
 *     ?UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801766EC (-UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     _CQuickConnectExperienceManager::UpdateWindowPosition_::_1_::dtor$2 @ 0x180176A23 (_CQuickConnectExperienceManager--UpdateWindowPosition_--_1_--dtor$2.c)
 *     ?GetRectFromPropertySet@PeoplePaneViewManager@@AEAAJPEBGPEAUtagRECT@@@Z @ 0x1801C93D0 (-GetRectFromPropertySet@PeoplePaneViewManager@@AEAAJPEBGPEAUtagRECT@@@Z.c)
 *     _PeoplePaneViewManager::GetRectFromPropertySet_::_1_::dtor$5 @ 0x1801C972E (_PeoplePaneViewManager--GetRectFromPropertySet_--_1_--dtor$5.c)
 *     ?IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z @ 0x1801C9EA8 (-IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z.c)
 *     _PeoplePaneViewManager::IsWindowVisibleInContactPanel_::_1_::dtor$5 @ 0x1801CA44B (_PeoplePaneViewManager--IsWindowVisibleInContactPanel_--_1_--dtor$5.c)
 *     ?IsDeviceEnabled@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUIDeviceInformationUpdate@Enumeration@Devices@Windows@@PEA_N@Z @ 0x18039B00C (-IsDeviceEnabled@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUIDeviceInformationUpdate@Enumer.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RoVariant::~RoVariant(RoVariant *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    if ( ((*((_DWORD *)this + 2) - 3) & 0xFFFFFFFB) == 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
