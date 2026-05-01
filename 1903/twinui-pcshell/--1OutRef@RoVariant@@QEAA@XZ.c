/*
 * XREFs of ??1OutRef@RoVariant@@QEAA@XZ @ 0x180192274
 * Callers:
 *     _CSingleViewShellExperience::OnViewPropertiesChangedBase_::_1_::dtor$5 @ 0x1800C630E (_CSingleViewShellExperience--OnViewPropertiesChangedBase_--_1_--dtor$5.c)
 *     _CPeopleBarJumpViewExperienceManager::OnViewPropertiesChanging_::_1_::dtor$2 @ 0x180192FA8 (_CPeopleBarJumpViewExperienceManager--OnViewPropertiesChanging_--_1_--dtor$2.c)
 *     _CShoulderTapExperienceManager::OnViewPropertiesChanging_::_1_::dtor$2 @ 0x180194763 (_CShoulderTapExperienceManager--OnViewPropertiesChanging_--_1_--dtor$2.c)
 *     _CShoulderTapExperienceManager::OnViewPropertiesChanging_::_1_::dtor$4 @ 0x18019477B (_CShoulderTapExperienceManager--OnViewPropertiesChanging_--_1_--dtor$4.c)
 *     _CShoulderTapExperienceManager::OnViewPropertiesChanging_::_1_::dtor$6 @ 0x180194793 (_CShoulderTapExperienceManager--OnViewPropertiesChanging_--_1_--dtor$6.c)
 *     _CJumpViewExperienceManager::EnsureWindowPosition_::_1_::dtor$2 @ 0x18019C282 (_CJumpViewExperienceManager--EnsureWindowPosition_--_1_--dtor$2.c)
 *     _CJumpViewExperienceManager::EnsureWindowPosition_::_1_::dtor$5 @ 0x18019C2A6 (_CJumpViewExperienceManager--EnsureWindowPosition_--_1_--dtor$5.c)
 *     _CJumpViewExperienceManager::EnsureWindowPosition_::_1_::dtor$8 @ 0x18019C2CA (_CJumpViewExperienceManager--EnsureWindowPosition_--_1_--dtor$8.c)
 *     _CJumpViewExperienceManager::OnViewPropertiesChanging_::_1_::dtor$2 @ 0x18019D56B (_CJumpViewExperienceManager--OnViewPropertiesChanging_--_1_--dtor$2.c)
 *     _CQuickConnectExperienceManager::OnViewPropertiesChanging_::_1_::dtor$3 @ 0x1801A3129 (_CQuickConnectExperienceManager--OnViewPropertiesChanging_--_1_--dtor$3.c)
 *     _CQuickConnectExperienceManager::OnViewPropertiesChanging_::_1_::dtor$6 @ 0x1801A314D (_CQuickConnectExperienceManager--OnViewPropertiesChanging_--_1_--dtor$6.c)
 *     _CQuickConnectExperienceManager::OnViewPropertiesChanging_::_1_::dtor$9 @ 0x1801A3171 (_CQuickConnectExperienceManager--OnViewPropertiesChanging_--_1_--dtor$9.c)
 *     _CQuickConnectExperienceManager::UpdateWindowPosition_::_1_::dtor$3 @ 0x1801A60BE (_CQuickConnectExperienceManager--UpdateWindowPosition_--_1_--dtor$3.c)
 *     _PeoplePaneViewManager::GetRectFromPropertySet_::_1_::dtor$6 @ 0x180220EFA (_PeoplePaneViewManager--GetRectFromPropertySet_--_1_--dtor$6.c)
 *     _PeoplePaneViewManager::GetRectFromPropertySet_::_1_::dtor$8 @ 0x180220F12 (_PeoplePaneViewManager--GetRectFromPropertySet_--_1_--dtor$8.c)
 *     _PeoplePaneViewManager::IsWindowVisibleInContactPanel_::_1_::dtor$6 @ 0x180221C17 (_PeoplePaneViewManager--IsWindowVisibleInContactPanel_--_1_--dtor$6.c)
 * Callees:
 *     ?Attach@RoVariant@@QEAAXPEAUIInspectable@@@Z @ 0x18003A0B4 (-Attach@RoVariant@@QEAAXPEAUIInspectable@@@Z.c)
 */

void __fastcall RoVariant::OutRef::~OutRef(RoVariant::OutRef *this)
{
  RoVariant::Attach(*(RoVariant **)this, *((struct IInspectable **)this + 1));
}
