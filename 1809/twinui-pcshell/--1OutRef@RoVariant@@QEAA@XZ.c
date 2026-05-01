/*
 * XREFs of ??1OutRef@RoVariant@@QEAA@XZ @ 0x180165884
 * Callers:
 *     _CSingleViewShellExperience::OnViewPropertiesChangedBase_::_1_::dtor$5 @ 0x1800AE691 (_CSingleViewShellExperience--OnViewPropertiesChangedBase_--_1_--dtor$5.c)
 *     _CPeopleBarJumpViewExperienceManager::OnViewPropertiesChanging_::_1_::dtor$2 @ 0x18016659D (_CPeopleBarJumpViewExperienceManager--OnViewPropertiesChanging_--_1_--dtor$2.c)
 *     _CShoulderTapExperienceManager::OnViewPropertiesChanging_::_1_::dtor$2 @ 0x180167D36 (_CShoulderTapExperienceManager--OnViewPropertiesChanging_--_1_--dtor$2.c)
 *     _CShoulderTapExperienceManager::OnViewPropertiesChanging_::_1_::dtor$4 @ 0x180167D4E (_CShoulderTapExperienceManager--OnViewPropertiesChanging_--_1_--dtor$4.c)
 *     _CShoulderTapExperienceManager::OnViewPropertiesChanging_::_1_::dtor$6 @ 0x180167D66 (_CShoulderTapExperienceManager--OnViewPropertiesChanging_--_1_--dtor$6.c)
 *     _CJumpViewExperienceManager::EnsureWindowPosition_::_1_::dtor$2 @ 0x18016D8B6 (_CJumpViewExperienceManager--EnsureWindowPosition_--_1_--dtor$2.c)
 *     _CJumpViewExperienceManager::EnsureWindowPosition_::_1_::dtor$5 @ 0x18016D8DA (_CJumpViewExperienceManager--EnsureWindowPosition_--_1_--dtor$5.c)
 *     _CJumpViewExperienceManager::EnsureWindowPosition_::_1_::dtor$8 @ 0x18016D8FE (_CJumpViewExperienceManager--EnsureWindowPosition_--_1_--dtor$8.c)
 *     _CJumpViewExperienceManager::OnViewPropertiesChanging_::_1_::dtor$2 @ 0x18016E6C1 (_CJumpViewExperienceManager--OnViewPropertiesChanging_--_1_--dtor$2.c)
 *     _CQuickConnectExperienceManager::OnViewPropertiesChanging_::_1_::dtor$3 @ 0x180173F34 (_CQuickConnectExperienceManager--OnViewPropertiesChanging_--_1_--dtor$3.c)
 *     _CQuickConnectExperienceManager::OnViewPropertiesChanging_::_1_::dtor$6 @ 0x180173F58 (_CQuickConnectExperienceManager--OnViewPropertiesChanging_--_1_--dtor$6.c)
 *     _CQuickConnectExperienceManager::OnViewPropertiesChanging_::_1_::dtor$9 @ 0x180173F7C (_CQuickConnectExperienceManager--OnViewPropertiesChanging_--_1_--dtor$9.c)
 *     _CQuickConnectExperienceManager::UpdateWindowPosition_::_1_::dtor$3 @ 0x180176A2F (_CQuickConnectExperienceManager--UpdateWindowPosition_--_1_--dtor$3.c)
 *     _PeoplePaneViewManager::GetRectFromPropertySet_::_1_::dtor$6 @ 0x1801C973A (_PeoplePaneViewManager--GetRectFromPropertySet_--_1_--dtor$6.c)
 *     _PeoplePaneViewManager::GetRectFromPropertySet_::_1_::dtor$8 @ 0x1801C9752 (_PeoplePaneViewManager--GetRectFromPropertySet_--_1_--dtor$8.c)
 *     _PeoplePaneViewManager::IsWindowVisibleInContactPanel_::_1_::dtor$6 @ 0x1801CA457 (_PeoplePaneViewManager--IsWindowVisibleInContactPanel_--_1_--dtor$6.c)
 * Callees:
 *     ?Attach@RoVariant@@QEAAXPEAUIInspectable@@@Z @ 0x18002688C (-Attach@RoVariant@@QEAAXPEAUIInspectable@@@Z.c)
 */

void __fastcall RoVariant::OutRef::~OutRef(RoVariant::OutRef *this)
{
  RoVariant::Attach(*(RoVariant **)this, *((struct IInspectable **)this + 1));
}
