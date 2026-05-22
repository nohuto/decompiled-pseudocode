/*
 * XREFs of ??1exception_ptr@std@@QEAA@XZ @ 0x18007BE54
 * Callers:
 *     _DWMCursor::SetPosition_::_1_::dtor$6 @ 0x18003A7F0 (_DWMCursor--SetPosition_--_1_--dtor$6.c)
 *     _MPCMouseProcessor::RuntimeClassInitialize_::_1_::dtor$0 @ 0x18003CA77 (_MPCMouseProcessor--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     __lambda_3bf0c1641773c9cead522fb3b6204044_::operator()_::_1_::dtor$4 @ 0x18003CD1B (__lambda_3bf0c1641773c9cead522fb3b6204044_--operator()_--_1_--dtor$4.c)
 *     _std::rethrow_exception_::_1_::dtor$0 @ 0x18007CAD1 (_std--rethrow_exception_--_1_--dtor$0.c)
 *     _MPCGestureHandlerManager::GetInstance_::_1_::dtor$0 @ 0x180086215 (_MPCGestureHandlerManager--GetInstance_--_1_--dtor$0.c)
 *     _MPCGamepadInputHelper::GetInstance_::_1_::dtor$0 @ 0x18008748D (_MPCGamepadInputHelper--GetInstance_--_1_--dtor$0.c)
 *     _MPCHeadUpdateListener::GetInstance_::_1_::dtor$0 @ 0x1800977D5 (_MPCHeadUpdateListener--GetInstance_--_1_--dtor$0.c)
 *     _std::call_once__lambda_fdfea97a1e4915bc7c15af4fd38df93b__WGIRawInputProvider____::_1_::dtor$0 @ 0x1800A70CE (_std--call_once__lambda_fdfea97a1e4915bc7c15af4fd38df93b__WGIRawInputProvider____--_1_--dtor$0.c)
 *     _MPCVoiceProcessor::RuntimeClassInitialize_::_1_::dtor$0 @ 0x18012C450 (_MPCVoiceProcessor--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _std::call_once__lambda_2ab80ba63dcc212dafbb4e4695138308____::_1_::dtor$0 @ 0x18012EABF (_std--call_once__lambda_2ab80ba63dcc212dafbb4e4695138308____--_1_--dtor$0.c)
 *     _MPCSixDofProcessor::Initialize3DComponents_::_1_::dtor$9 @ 0x18013067C (_MPCSixDofProcessor--Initialize3DComponents_--_1_--dtor$9.c)
 *     _MPCSixDofProcessor::RuntimeClassInitialize_::_1_::dtor$0 @ 0x180131B2A (_MPCSixDofProcessor--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _MPCHandProcessor::Initialize3DComponents_::_1_::dtor$2 @ 0x180135753 (_MPCHandProcessor--Initialize3DComponents_--_1_--dtor$2.c)
 *     _MPCHandProcessor::RuntimeClassInitialize_::_1_::dtor$0 @ 0x180136970 (_MPCHandProcessor--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _MPCGamepadProcessor::Initialize3DComponents_::_1_::dtor$3 @ 0x180137AE9 (_MPCGamepadProcessor--Initialize3DComponents_--_1_--dtor$3.c)
 *     _MPCGamepadProcessor::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1801391F2 (_MPCGamepadProcessor--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _MPCEyeGazeProcessor::RuntimeClassInitialize_::_1_::dtor$0 @ 0x18013EF1D (_MPCEyeGazeProcessor--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _MPCHeadProcessor::RuntimeClassInitialize_::_1_::dtor$0 @ 0x18013F45A (_MPCHeadProcessor--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _MPCClickerProcessor::RuntimeClassInitialize_::_1_::dtor$0 @ 0x180140909 (_MPCClickerProcessor--RuntimeClassInitialize_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall std::exception_ptr::~exception_ptr(std::exception_ptr *this)
{
  __ExceptionPtrDestroy(this);
}
