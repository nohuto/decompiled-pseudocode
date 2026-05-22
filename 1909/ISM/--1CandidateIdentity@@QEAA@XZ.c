/*
 * XREFs of ??1CandidateIdentity@@QEAA@XZ @ 0x18006E6EC
 * Callers:
 *     _std::operator__unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____::_1_::dtor$0 @ 0x180087A1E (_std--operator__unsigned_short_std--char_traits_unsigned_short__std--allocator_unsigned_short___.c)
 *     _MPCConstantManager::ChangeConstant_::_1_::dtor$0 @ 0x18008921C (_MPCConstantManager--ChangeConstant_--_1_--dtor$0.c)
 *     _MPCConstantManager::ChangeConstant_::_1_::dtor$2 @ 0x180089234 (_MPCConstantManager--ChangeConstant_--_1_--dtor$2.c)
 *     _MPCConstantManager::ChangeConstant_::_1_::dtor$3 @ 0x180089240 (_MPCConstantManager--ChangeConstant_--_1_--dtor$3.c)
 *     _MPCConstantManager::GetActiveInputTypeList_::_1_::dtor$0 @ 0x1800895FF (_MPCConstantManager--GetActiveInputTypeList_--_1_--dtor$0.c)
 *     _MPCConstantManager::GetConstantNamesString_::_1_::dtor$0 @ 0x1800899AA (_MPCConstantManager--GetConstantNamesString_--_1_--dtor$0.c)
 *     _MPCConstantManager::GetConstantNamesString_::_1_::dtor$1 @ 0x1800899D0 (_MPCConstantManager--GetConstantNamesString_--_1_--dtor$1.c)
 *     _MPCConstantManager::GetConstantsForInputType_::_1_::dtor$0 @ 0x180089BA3 (_MPCConstantManager--GetConstantsForInputType_--_1_--dtor$0.c)
 *     _MPCConstantManager::GetCurrentInputTypesString_::_1_::dtor$0 @ 0x180089DA5 (_MPCConstantManager--GetCurrentInputTypesString_--_1_--dtor$0.c)
 *     _MPCConstantManager::GetCurrentInputTypesString_::_1_::dtor$2 @ 0x180089DD7 (_MPCConstantManager--GetCurrentInputTypesString_--_1_--dtor$2.c)
 *     _MPCConstantManager::GetCurrentInputTypesString_::_1_::dtor$3 @ 0x180089DE3 (_MPCConstantManager--GetCurrentInputTypesString_--_1_--dtor$3.c)
 *     _MPCConstantManager::GetPROPVARIANT_::_1_::dtor$0 @ 0x180089FE2 (_MPCConstantManager--GetPROPVARIANT_--_1_--dtor$0.c)
 *     _MPCConstantManager::GetPROPVARIANT_::_1_::dtor$1 @ 0x180089FEE (_MPCConstantManager--GetPROPVARIANT_--_1_--dtor$1.c)
 *     _MPCConstantManager::VerifyConstantTypeMatches_::_1_::dtor$0 @ 0x18008B18D (_MPCConstantManager--VerifyConstantTypeMatches_--_1_--dtor$0.c)
 *     _TracingSessionHelper::StartOrStop_::_1_::dtor$2 @ 0x18009F652 (_TracingSessionHelper--StartOrStop_--_1_--dtor$2.c)
 *     _SpatialInteractionDevices::HID_HANDLE::HID_HANDLE_::_1_::dtor$1 @ 0x1800DE6D5 (_SpatialInteractionDevices--HID_HANDLE--HID_HANDLE_--_1_--dtor$1.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::SpatialInteractionObjectDevice_::_1_::dtor$2 @ 0x1800EA67D (_Windows--Internal--SpatialInteractions--SpatialInteractionObjectDevice--SpatialInt_ea_1800EA67D.c)
 *     _Edge::Edge_::_1_::dtor$0 @ 0x18010154B (_Edge--Edge_--_1_--dtor$0.c)
 *     _Edge::Edge_::_1_::dtor$0_0 @ 0x1801015E4 (_Edge--Edge_--_1_--dtor$0_0.c)
 *     _Edges::HitTest_::_1_::dtor$0 @ 0x180101FA5 (_Edges--HitTest_--_1_--dtor$0.c)
 *     _PenDevice::PenDevice_::_1_::dtor$4 @ 0x180129EE7 (_PenDevice--PenDevice_--_1_--dtor$4.c)
 *     _MPCConstantManager::GetStaticConstant_bool__::_1_::dtor$0 @ 0x18012BD84 (_MPCConstantManager--GetStaticConstant_bool__--_1_--dtor$0.c)
 *     _MPCConstantManager::GetStaticConstant_bool__::_1_::dtor$1 @ 0x18012BD90 (_MPCConstantManager--GetStaticConstant_bool__--_1_--dtor$1.c)
 *     _MPCConstantManager::GetStaticConstant_unsigned_long__::_1_::dtor$0 @ 0x18012E0D4 (_MPCConstantManager--GetStaticConstant_unsigned_long__--_1_--dtor$0.c)
 *     _MPCConstantManager::GetStaticConstant_unsigned_long__::_1_::dtor$1 @ 0x18012E0E0 (_MPCConstantManager--GetStaticConstant_unsigned_long__--_1_--dtor$1.c)
 *     _MPCConstantManager::GetStaticConstant_float__::_1_::dtor$0 @ 0x18012E31B (_MPCConstantManager--GetStaticConstant_float__--_1_--dtor$0.c)
 *     _MPCConstantManager::GetStaticConstant_float__::_1_::dtor$1 @ 0x18012E327 (_MPCConstantManager--GetStaticConstant_float__--_1_--dtor$1.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::Create_::_1_::dtor$4 @ 0x180153DA1 (_Windows--Internal--Holographic--SpatialGraphDriverHandleWrapper--Create_--_1_--dtor$4.c)
 *     __lambda_b6eb6e6574f6e884ecb744657c22bdda_::operator()_::_1_::dtor$0 @ 0x180163855 (__lambda_b6eb6e6574f6e884ecb744657c22bdda_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CandidateIdentity::~CandidateIdentity(CandidateIdentity *this)
{
  std::wstring::_Tidy_deallocate(this);
}
