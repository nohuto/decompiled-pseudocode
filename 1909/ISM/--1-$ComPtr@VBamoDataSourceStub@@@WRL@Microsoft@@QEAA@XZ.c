/*
 * XREFs of ??1?$ComPtr@VBamoDataSourceStub@@@WRL@Microsoft@@QEAA@XZ @ 0x18005A510
 * Callers:
 *     __lambda_d6825bbef0718a568adec6fcdf443266_::operator()_::_1_::dtor$0 @ 0x180035414 (__lambda_d6825bbef0718a568adec6fcdf443266_--operator()_--_1_--dtor$0.c)
 *     _InputDeliveryServer::RegisterInputAttemptedClient_::_1_::dtor$1 @ 0x18003A502 (_InputDeliveryServer--RegisterInputAttemptedClient_--_1_--dtor$1.c)
 *     _InputSiteManager::RegisterInputSiteElement_::_1_::dtor$1 @ 0x18003A5F0 (_InputSiteManager--RegisterInputSiteElement_--_1_--dtor$1.c)
 *     _DWMCursor::SetPosition_::_1_::dtor$5 @ 0x18003A7D0 (_DWMCursor--SetPosition_--_1_--dtor$5.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$20 @ 0x18003B8B3 (_DWMInputRouter--DWMInputRouter_--_1_--dtor$20.c)
 *     _CBaseInputObserverServer_12_::DeliverToApps_::_1_::dtor$1 @ 0x1800683B4 (_CBaseInputObserverServer_12_--DeliverToApps_--_1_--dtor$1.c)
 *     _std::_Func_impl_no_alloc__lambda_859182f4e94fc01b4fb35b59b211797f__void_Microsoft::WRL::ComPtr_BamoInputObserverClientProxy__const_&_::_Do_call_::_1_::dtor$1 @ 0x18006898C (_std--_Func_impl_no_alloc__lambda_859182f4e94fc01b4fb35b59b211797f__void_Microsoft--WRL--ComPtr_.c)
 *     _DragNDropProcessor::DragNDropProcessor_::_1_::dtor$6 @ 0x18006A3B9 (_DragNDropProcessor--DragNDropProcessor_--_1_--dtor$6.c)
 *     _DragNDropProcessor::FeedAnimationDataIfNeeded_::_1_::dtor$0 @ 0x18006B6CA (_DragNDropProcessor--FeedAnimationDataIfNeeded_--_1_--dtor$0.c)
 *     _DragNDropProcessor::FeedAnimationDataIfNeeded_::_1_::dtor$2 @ 0x18006B6D6 (_DragNDropProcessor--FeedAnimationDataIfNeeded_--_1_--dtor$2.c)
 *     _DragNDropProcessor::StartAnimation_::_1_::dtor$0 @ 0x18006CBF8 (_DragNDropProcessor--StartAnimation_--_1_--dtor$0.c)
 *     _DragNDropProcessor::StartAnimation_::_1_::dtor$1 @ 0x18006CC04 (_DragNDropProcessor--StartAnimation_--_1_--dtor$1.c)
 *     _ControllerNavigationManager::RegisterControllerProcessor_::_1_::dtor$0 @ 0x18007388F (_ControllerNavigationManager--RegisterControllerProcessor_--_1_--dtor$0.c)
 *     _ControllerNavigationManager::RegisterOverride_::_1_::dtor$0 @ 0x180073A57 (_ControllerNavigationManager--RegisterOverride_--_1_--dtor$0.c)
 *     _SystemCursorService::CreateCursorShapeAnimation_::_1_::dtor$1 @ 0x1800CC681 (_SystemCursorService--CreateCursorShapeAnimation_--_1_--dtor$1.c)
 *     _SystemCursorService::CreateCustomCursorShapeAnimation_::_1_::dtor$1 @ 0x1800CC949 (_SystemCursorService--CreateCustomCursorShapeAnimation_--_1_--dtor$1.c)
 *     _SystemCursorShape::FeedAnimationData_::_1_::dtor$2 @ 0x1800CD198 (_SystemCursorShape--FeedAnimationData_--_1_--dtor$2.c)
 *     _AnimationDataProvider::CreateDataSource_::_1_::dtor$0 @ 0x1800CFBDB (_AnimationDataProvider--CreateDataSource_--_1_--dtor$0.c)
 *     _AnimationDataProvider::GetBamoDataSourceStub_::_1_::dtor$0 @ 0x1800CFDAB (_AnimationDataProvider--GetBamoDataSourceStub_--_1_--dtor$0.c)
 *     _AnimationDataProvider::GetBamoDataSourceStub_::_1_::dtor$1 @ 0x1800CFDB7 (_AnimationDataProvider--GetBamoDataSourceStub_--_1_--dtor$1.c)
 *     _AnimationDataProvider::GetDataSourceId_::_1_::dtor$0 @ 0x1800CFED2 (_AnimationDataProvider--GetDataSourceId_--_1_--dtor$0.c)
 *     _DWMCursor::FeedOrientationAnimationData_::_1_::dtor$1 @ 0x18014495B (_DWMCursor--FeedOrientationAnimationData_--_1_--dtor$1.c)
 *     _DWMCursor::FeedPositionAnimationData_::_1_::dtor$1 @ 0x180144A7B (_DWMCursor--FeedPositionAnimationData_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
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
