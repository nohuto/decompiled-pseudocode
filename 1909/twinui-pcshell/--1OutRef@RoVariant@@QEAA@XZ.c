/*
 * XREFs of ??1OutRef@RoVariant@@QEAA@XZ @ 0x1801B1364
 * Callers:
 *     _CSingleViewShellExperience::OnViewPropertiesChangedBase_::_1_::dtor$5 @ 0x1800E8A57 (_CSingleViewShellExperience--OnViewPropertiesChangedBase_--_1_--dtor$5.c)
 *     _CPeopleBarJumpViewExperienceManager::OnViewPropertiesChanging_::_1_::dtor$2 @ 0x1801B2098 (_CPeopleBarJumpViewExperienceManager--OnViewPropertiesChanging_--_1_--dtor$2.c)
 *     _CShoulderTapExperienceManager::OnViewPropertiesChanging_::_1_::dtor$2 @ 0x1801B3853 (_CShoulderTapExperienceManager--OnViewPropertiesChanging_--_1_--dtor$2.c)
 *     _CShoulderTapExperienceManager::OnViewPropertiesChanging_::_1_::dtor$4 @ 0x1801B386B (_CShoulderTapExperienceManager--OnViewPropertiesChanging_--_1_--dtor$4.c)
 *     _CShoulderTapExperienceManager::OnViewPropertiesChanging_::_1_::dtor$6 @ 0x1801B3883 (_CShoulderTapExperienceManager--OnViewPropertiesChanging_--_1_--dtor$6.c)
 *     _CJumpViewExperienceManager::EnsureWindowPosition_::_1_::dtor$2 @ 0x1801BB162 (_CJumpViewExperienceManager--EnsureWindowPosition_--_1_--dtor$2.c)
 *     _CJumpViewExperienceManager::EnsureWindowPosition_::_1_::dtor$5 @ 0x1801BB186 (_CJumpViewExperienceManager--EnsureWindowPosition_--_1_--dtor$5.c)
 *     _CJumpViewExperienceManager::EnsureWindowPosition_::_1_::dtor$8 @ 0x1801BB1AA (_CJumpViewExperienceManager--EnsureWindowPosition_--_1_--dtor$8.c)
 *     _CJumpViewExperienceManager::OnViewPropertiesChanging_::_1_::dtor$2 @ 0x1801BC44B (_CJumpViewExperienceManager--OnViewPropertiesChanging_--_1_--dtor$2.c)
 *     _CQuickConnectExperienceManager::OnViewPropertiesChanging_::_1_::dtor$3 @ 0x1801C2019 (_CQuickConnectExperienceManager--OnViewPropertiesChanging_--_1_--dtor$3.c)
 *     _CQuickConnectExperienceManager::OnViewPropertiesChanging_::_1_::dtor$6 @ 0x1801C203D (_CQuickConnectExperienceManager--OnViewPropertiesChanging_--_1_--dtor$6.c)
 *     _CQuickConnectExperienceManager::OnViewPropertiesChanging_::_1_::dtor$9 @ 0x1801C2061 (_CQuickConnectExperienceManager--OnViewPropertiesChanging_--_1_--dtor$9.c)
 *     _CQuickConnectExperienceManager::UpdateWindowPosition_::_1_::dtor$3 @ 0x1801C4FAE (_CQuickConnectExperienceManager--UpdateWindowPosition_--_1_--dtor$3.c)
 *     _PeoplePaneViewManager::GetRectFromPropertySet_::_1_::dtor$6 @ 0x18024057A (_PeoplePaneViewManager--GetRectFromPropertySet_--_1_--dtor$6.c)
 *     _PeoplePaneViewManager::GetRectFromPropertySet_::_1_::dtor$8 @ 0x180240592 (_PeoplePaneViewManager--GetRectFromPropertySet_--_1_--dtor$8.c)
 *     _PeoplePaneViewManager::IsWindowVisibleInContactPanel_::_1_::dtor$6 @ 0x180241297 (_PeoplePaneViewManager--IsWindowVisibleInContactPanel_--_1_--dtor$6.c)
 * Callees:
 *     ?Attach@RoVariant@@QEAAXPEAUIInspectable@@@Z @ 0x1800229E4 (-Attach@RoVariant@@QEAAXPEAUIInspectable@@@Z.c)
 */

void __fastcall RoVariant::OutRef::~OutRef(RoVariant::OutRef *this)
{
  RoVariant::Attach(*(RoVariant **)this, *((struct IInspectable **)this + 1));
}
