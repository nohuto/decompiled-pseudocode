/*
 * XREFs of ??1exception_ptr@std@@QEAA@XZ @ 0x18007C094
 * Callers:
 *     _DWMCursor::SetPosition_::_1_::dtor$6 @ 0x18003AD20 (_DWMCursor--SetPosition_--_1_--dtor$6.c)
 *     _MPCMouseProcessor::RuntimeClassInitialize_::_1_::dtor$0 @ 0x18003CFA7 (_MPCMouseProcessor--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     __lambda_3bf0c1641773c9cead522fb3b6204044_::operator()_::_1_::dtor$4 @ 0x18003D24B (__lambda_3bf0c1641773c9cead522fb3b6204044_--operator()_--_1_--dtor$4.c)
 *     _std::rethrow_exception_::_1_::dtor$0 @ 0x18007CD11 (_std--rethrow_exception_--_1_--dtor$0.c)
 *     _MPCGestureHandlerManager::GetInstance_::_1_::dtor$0 @ 0x180086455 (_MPCGestureHandlerManager--GetInstance_--_1_--dtor$0.c)
 *     _MPCGamepadInputHelper::GetInstance_::_1_::dtor$0 @ 0x1800876CD (_MPCGamepadInputHelper--GetInstance_--_1_--dtor$0.c)
 *     _MPCHeadUpdateListener::GetInstance_::_1_::dtor$0 @ 0x1800979F5 (_MPCHeadUpdateListener--GetInstance_--_1_--dtor$0.c)
 *     _std::call_once__lambda_fdfea97a1e4915bc7c15af4fd38df93b__WGIRawInputProvider____::_1_::dtor$0 @ 0x1800A727E (_std--call_once__lambda_fdfea97a1e4915bc7c15af4fd38df93b__WGIRawInputProvider____--_1_--dtor$0.c)
 *     _MPCVoiceProcessor::RuntimeClassInitialize_::_1_::dtor$0 @ 0x18012C450 (_MPCVoiceProcessor--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _std::call_once__lambda_2ab80ba63dcc212dafbb4e4695138308____::_1_::dtor$0 @ 0x18012EABF (_std--call_once__lambda_2ab80ba63dcc212dafbb4e4695138308____--_1_--dtor$0.c)
 *     _MPCSixDofProcessor::Initialize3DComponents_::_1_::dtor$9 @ 0x18013067C (_MPCSixDofProcessor--Initialize3DComponents_--_1_--dtor$9.c)
 *     _MPCSixDofProcessor::RuntimeClassInitialize_::_1_::dtor$0 @ 0x180131B2A (_MPCSixDofProcessor--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _MPCHandProcessor::Initialize3DComponents_::_1_::dtor$2 @ 0x180135753 (_MPCHandProcessor--Initialize3DComponents_--_1_--dtor$2.c)
 *     _MPCHandProcessor::RuntimeClassInitialize_::_1_::dtor$0 @ 0x180136970 (_MPCHandProcessor--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _MPCGamepadProcessor::Initialize3DComponents_::_1_::dtor$3 @ 0x180137AE9 (_MPCGamepadProcessor--Initialize3DComponents_--_1_--dtor$3.c)
 *     _MPCGamepadProcessor::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1801391DE (_MPCGamepadProcessor--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _MPCEyeGazeProcessor::RuntimeClassInitialize_::_1_::dtor$0 @ 0x18013EEDD (_MPCEyeGazeProcessor--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _MPCHeadProcessor::RuntimeClassInitialize_::_1_::dtor$0 @ 0x18013F41A (_MPCHeadProcessor--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _MPCClickerProcessor::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1801408C9 (_MPCClickerProcessor--RuntimeClassInitialize_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall std::exception_ptr::~exception_ptr(std::exception_ptr *this)
{
  __ExceptionPtrDestroy(this);
}
