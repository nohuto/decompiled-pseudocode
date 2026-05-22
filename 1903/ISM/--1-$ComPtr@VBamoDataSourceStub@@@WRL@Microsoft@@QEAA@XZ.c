/*
 * XREFs of ??1?$ComPtr@VBamoDataSourceStub@@@WRL@Microsoft@@QEAA@XZ @ 0x18005A770
 * Callers:
 *     __lambda_d6825bbef0718a568adec6fcdf443266_::operator()_::_1_::dtor$0 @ 0x180035904 (__lambda_d6825bbef0718a568adec6fcdf443266_--operator()_--_1_--dtor$0.c)
 *     _InputDeliveryServer::RegisterInputAttemptedClient_::_1_::dtor$1 @ 0x18003AA32 (_InputDeliveryServer--RegisterInputAttemptedClient_--_1_--dtor$1.c)
 *     _InputSiteManager::RegisterInputSiteElement_::_1_::dtor$1 @ 0x18003AB20 (_InputSiteManager--RegisterInputSiteElement_--_1_--dtor$1.c)
 *     _DWMCursor::SetPosition_::_1_::dtor$5 @ 0x18003AD00 (_DWMCursor--SetPosition_--_1_--dtor$5.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$20 @ 0x18003BDE3 (_DWMInputRouter--DWMInputRouter_--_1_--dtor$20.c)
 *     _CBaseInputObserverServer_12_::DeliverToApps_::_1_::dtor$1 @ 0x1800685F4 (_CBaseInputObserverServer_12_--DeliverToApps_--_1_--dtor$1.c)
 *     _std::_Func_impl_no_alloc__lambda_859182f4e94fc01b4fb35b59b211797f__void_Microsoft::WRL::ComPtr_BamoInputObserverClientProxy__const_&_::_Do_call_::_1_::dtor$1 @ 0x180068BCC (_std--_Func_impl_no_alloc__lambda_859182f4e94fc01b4fb35b59b211797f__void_Microsoft--WRL--ComPtr_.c)
 *     _DragNDropProcessor::DragNDropProcessor_::_1_::dtor$6 @ 0x18006A5F9 (_DragNDropProcessor--DragNDropProcessor_--_1_--dtor$6.c)
 *     _DragNDropProcessor::FeedAnimationDataIfNeeded_::_1_::dtor$0 @ 0x18006B90A (_DragNDropProcessor--FeedAnimationDataIfNeeded_--_1_--dtor$0.c)
 *     _DragNDropProcessor::FeedAnimationDataIfNeeded_::_1_::dtor$2 @ 0x18006B916 (_DragNDropProcessor--FeedAnimationDataIfNeeded_--_1_--dtor$2.c)
 *     _DragNDropProcessor::StartAnimation_::_1_::dtor$0 @ 0x18006CE38 (_DragNDropProcessor--StartAnimation_--_1_--dtor$0.c)
 *     _DragNDropProcessor::StartAnimation_::_1_::dtor$1 @ 0x18006CE44 (_DragNDropProcessor--StartAnimation_--_1_--dtor$1.c)
 *     _ControllerNavigationManager::RegisterControllerProcessor_::_1_::dtor$0 @ 0x180073ACF (_ControllerNavigationManager--RegisterControllerProcessor_--_1_--dtor$0.c)
 *     _ControllerNavigationManager::RegisterOverride_::_1_::dtor$0 @ 0x180073C97 (_ControllerNavigationManager--RegisterOverride_--_1_--dtor$0.c)
 *     _SystemCursorService::CreateCursorShapeAnimation_::_1_::dtor$1 @ 0x1800CC8C1 (_SystemCursorService--CreateCursorShapeAnimation_--_1_--dtor$1.c)
 *     _SystemCursorService::CreateCustomCursorShapeAnimation_::_1_::dtor$1 @ 0x1800CCB89 (_SystemCursorService--CreateCustomCursorShapeAnimation_--_1_--dtor$1.c)
 *     _SystemCursorShape::FeedAnimationData_::_1_::dtor$2 @ 0x1800CD3D8 (_SystemCursorShape--FeedAnimationData_--_1_--dtor$2.c)
 *     _AnimationDataProvider::CreateDataSource_::_1_::dtor$0 @ 0x1800CFE1B (_AnimationDataProvider--CreateDataSource_--_1_--dtor$0.c)
 *     _AnimationDataProvider::GetBamoDataSourceStub_::_1_::dtor$0 @ 0x1800CFFEB (_AnimationDataProvider--GetBamoDataSourceStub_--_1_--dtor$0.c)
 *     _AnimationDataProvider::GetBamoDataSourceStub_::_1_::dtor$1 @ 0x1800CFFF7 (_AnimationDataProvider--GetBamoDataSourceStub_--_1_--dtor$1.c)
 *     _AnimationDataProvider::GetDataSourceId_::_1_::dtor$0 @ 0x1800D0112 (_AnimationDataProvider--GetDataSourceId_--_1_--dtor$0.c)
 *     _DWMCursor::FeedOrientationAnimationData_::_1_::dtor$1 @ 0x18014491B (_DWMCursor--FeedOrientationAnimationData_--_1_--dtor$1.c)
 *     _DWMCursor::FeedPositionAnimationData_::_1_::dtor$1 @ 0x180144A3B (_DWMCursor--FeedPositionAnimationData_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::ComPtr<BamoDataSourceStub>::~ComPtr<BamoDataSourceStub>(_QWORD *a1)
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
