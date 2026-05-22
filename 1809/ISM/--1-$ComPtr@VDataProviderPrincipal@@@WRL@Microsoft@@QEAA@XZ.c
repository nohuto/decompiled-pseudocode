/*
 * XREFs of ??1?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@QEAA@XZ @ 0x18001E0CC
 * Callers:
 *     _SystemCursorShape::FeedAnimationData_::_1_::dtor$2 @ 0x18012E9BE (_SystemCursorShape--FeedAnimationData_--_1_--dtor$2.c)
 *     _DragNDropProcessor::DragNDropProcessor_::_1_::dtor$6 @ 0x18012EC0B (_DragNDropProcessor--DragNDropProcessor_--_1_--dtor$6.c)
 *     _DragNDropProcessor::StartGestureRecognition_::_1_::dtor$0 @ 0x18012EC98 (_DragNDropProcessor--StartGestureRecognition_--_1_--dtor$0.c)
 *     _DragNDropProcessor::StartGestureRecognition_::_1_::dtor$1 @ 0x18012ECAA (_DragNDropProcessor--StartGestureRecognition_--_1_--dtor$1.c)
 *     _DragNDropProcessor::StartDrag_::_1_::dtor$0 @ 0x18012ECF2 (_DragNDropProcessor--StartDrag_--_1_--dtor$0.c)
 *     _DragNDropProcessor::StartAnimation_::_1_::dtor$0 @ 0x18012ED04 (_DragNDropProcessor--StartAnimation_--_1_--dtor$0.c)
 *     _ControllerNavigationManager::RegisterOverride_::_1_::dtor$0 @ 0x18012ED28 (_ControllerNavigationManager--RegisterOverride_--_1_--dtor$0.c)
 *     _DragNDropProcessor::FeedAnimationDataIfNeeded_::_1_::dtor$2 @ 0x18012ED3A (_DragNDropProcessor--FeedAnimationDataIfNeeded_--_1_--dtor$2.c)
 *     _InputDeliveryServer::RegisterInputAttemptedClient_::_1_::dtor$1 @ 0x18012F063 (_InputDeliveryServer--RegisterInputAttemptedClient_--_1_--dtor$1.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$20 @ 0x1801321D2 (_DWMInputRouter--DWMInputRouter_--_1_--dtor$20.c)
 *     _MagnifierProcessor::MagnifierProcessor_::_1_::dtor$2 @ 0x1801324B1 (_MagnifierProcessor--MagnifierProcessor_--_1_--dtor$2.c)
 *     _SystemCursorController::SystemCursorController_::_1_::dtor$1 @ 0x1801326AF (_SystemCursorController--SystemCursorController_--_1_--dtor$1.c)
 *     _SystemCursorService::CreateCursorShapeAnimation_::_1_::dtor$1 @ 0x180132B84 (_SystemCursorService--CreateCursorShapeAnimation_--_1_--dtor$1.c)
 *     _SystemCursorService::CreateCustomCursorShapeAnimation_::_1_::dtor$1 @ 0x180132BA8 (_SystemCursorService--CreateCustomCursorShapeAnimation_--_1_--dtor$1.c)
 *     _AnimationDataProvider::AnimationDataProvider_::_1_::dtor$1 @ 0x180132CEC (_AnimationDataProvider--AnimationDataProvider_--_1_--dtor$1.c)
 *     _AnimationDataProvider::AnimationDataProvider_::_1_::dtor$2 @ 0x180132D02 (_AnimationDataProvider--AnimationDataProvider_--_1_--dtor$2.c)
 *     _AnimationDataProvider::CreateDataSource_::_1_::dtor$0 @ 0x180132D18 (_AnimationDataProvider--CreateDataSource_--_1_--dtor$0.c)
 *     _AnimationDataProvider::GetBamoDataSourceStub_::_1_::dtor$0 @ 0x180132D6D (_AnimationDataProvider--GetBamoDataSourceStub_--_1_--dtor$0.c)
 *     _AnimationDataProvider::GetBamoDataSourceStub_::_1_::dtor$1 @ 0x180132D7F (_AnimationDataProvider--GetBamoDataSourceStub_--_1_--dtor$1.c)
 *     _AnimationDataProvider::GetDataSourceId_::_1_::dtor$0 @ 0x180132DAB (_AnimationDataProvider--GetDataSourceId_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::ComPtr<DataProviderPrincipal>::~ComPtr<DataProviderPrincipal>(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  return result;
}
