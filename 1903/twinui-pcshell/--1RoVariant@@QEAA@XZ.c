/*
 * XREFs of ??1RoVariant@@QEAA@XZ @ 0x180069780
 * Callers:
 *     ?OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x1800694CC (-OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChang.c)
 *     _CSingleViewShellExperience::OnViewPropertiesChangedBase_::_1_::dtor$2 @ 0x1800C62FC (_CSingleViewShellExperience--OnViewPropertiesChangedBase_--_1_--dtor$2.c)
 *     ?OnViewPropertiesChanging@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180192D70 (-OnViewPropertiesChanging@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperien.c)
 *     _CPeopleBarJumpViewExperienceManager::OnViewPropertiesChanging_::_1_::dtor$1 @ 0x180192F9C (_CPeopleBarJumpViewExperienceManager--OnViewPropertiesChanging_--_1_--dtor$1.c)
 *     ?OnViewPropertiesChanging@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180194500 (-OnViewPropertiesChanging@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     _CShoulderTapExperienceManager::OnViewPropertiesChanging_::_1_::dtor$1 @ 0x180194757 (_CShoulderTapExperienceManager--OnViewPropertiesChanging_--_1_--dtor$1.c)
 *     ?EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18019BE9C (-EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     _CJumpViewExperienceManager::EnsureWindowPosition_::_1_::dtor$1 @ 0x18019C276 (_CJumpViewExperienceManager--EnsureWindowPosition_--_1_--dtor$1.c)
 *     _CJumpViewExperienceManager::EnsureWindowPosition_::_1_::dtor$4 @ 0x18019C29A (_CJumpViewExperienceManager--EnsureWindowPosition_--_1_--dtor$4.c)
 *     _CJumpViewExperienceManager::EnsureWindowPosition_::_1_::dtor$7 @ 0x18019C2BE (_CJumpViewExperienceManager--EnsureWindowPosition_--_1_--dtor$7.c)
 *     ?OnViewPropertiesChanging@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18019D390 (-OnViewPropertiesChanging@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     _CJumpViewExperienceManager::OnViewPropertiesChanging_::_1_::dtor$1 @ 0x18019D55F (_CJumpViewExperienceManager--OnViewPropertiesChanging_--_1_--dtor$1.c)
 *     ?OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801A2C70 (-OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@.c)
 *     _CQuickConnectExperienceManager::OnViewPropertiesChanging_::_1_::dtor$2 @ 0x1801A311D (_CQuickConnectExperienceManager--OnViewPropertiesChanging_--_1_--dtor$2.c)
 *     _CQuickConnectExperienceManager::OnViewPropertiesChanging_::_1_::dtor$5 @ 0x1801A3141 (_CQuickConnectExperienceManager--OnViewPropertiesChanging_--_1_--dtor$5.c)
 *     _CQuickConnectExperienceManager::OnViewPropertiesChanging_::_1_::dtor$8 @ 0x1801A3165 (_CQuickConnectExperienceManager--OnViewPropertiesChanging_--_1_--dtor$8.c)
 *     ?UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801A5D84 (-UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     _CQuickConnectExperienceManager::UpdateWindowPosition_::_1_::dtor$2 @ 0x1801A60B2 (_CQuickConnectExperienceManager--UpdateWindowPosition_--_1_--dtor$2.c)
 *     ?GetRectFromPropertySet@PeoplePaneViewManager@@AEAAJPEBGPEAUtagRECT@@@Z @ 0x180220B90 (-GetRectFromPropertySet@PeoplePaneViewManager@@AEAAJPEBGPEAUtagRECT@@@Z.c)
 *     _PeoplePaneViewManager::GetRectFromPropertySet_::_1_::dtor$5 @ 0x180220EEE (_PeoplePaneViewManager--GetRectFromPropertySet_--_1_--dtor$5.c)
 *     ?IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z @ 0x180221668 (-IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z.c)
 *     _PeoplePaneViewManager::IsWindowVisibleInContactPanel_::_1_::dtor$5 @ 0x180221C0B (_PeoplePaneViewManager--IsWindowVisibleInContactPanel_--_1_--dtor$5.c)
 *     ?IsDeviceEnabled@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUIDeviceInformationUpdate@Enumeration@Devices@Windows@@PEA_N@Z @ 0x1804009BC (-IsDeviceEnabled@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUIDeviceInformationUpdate@Enumer.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
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
