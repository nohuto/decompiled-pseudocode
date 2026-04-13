/*
 * XREFs of ??1FeatureFunctorHost@details@wil@@QEAA@XZ @ 0x180018B38
 * Callers:
 *     _CreativeFramework::Actions::MakePinWebsiteToTaskbarService_::_1_::dtor$4 @ 0x1800CC280 (_CreativeFramework--Actions--MakePinWebsiteToTaskbarService_--_1_--dtor$4.c)
 *     _CreativeFramework::Actions::PinWebsiteToTaskbarService::Invoke_::_1_::dtor$0 @ 0x1800D2F6B (_CreativeFramework--Actions--PinWebsiteToTaskbarService--Invoke_--_1_--dtor$0.c)
 *     _wil::details::functor_wrapper_void__lambda_62158d46a05af21ae3d227fe228597be__&_::Run_::_1_::dtor$7 @ 0x1800D30A2 (_wil--details--functor_wrapper_void__lambda_62158d46a05af21ae3d227fe228597be__-_--Run_--_1_--dto.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::FeatureFunctorHost::~FeatureFunctorHost(wil::details::FeatureFunctorHost *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 1);
  if ( v1 )
    *(_DWORD *)(v1 + 16) = *((_DWORD *)this + 5);
}
