/*
 * XREFs of ??1FeatureFunctorHost@details@wil@@QEAA@XZ @ 0x180018384
 * Callers:
 *     _CreativeFramework::Actions::MakePinWebsiteToTaskbarService_::_1_::dtor$4 @ 0x1800C81AC (_CreativeFramework--Actions--MakePinWebsiteToTaskbarService_--_1_--dtor$4.c)
 *     _CreativeFramework::Actions::PinWebsiteToTaskbarService::Invoke_::_1_::dtor$0 @ 0x1800CEC23 (_CreativeFramework--Actions--PinWebsiteToTaskbarService--Invoke_--_1_--dtor$0.c)
 *     _wil::details::functor_wrapper_void__lambda_62158d46a05af21ae3d227fe228597be__&___ptr64_::Run_::_1_::dtor$7 @ 0x1800CED5A (_wil--details--functor_wrapper_void__lambda_62158d46a05af21ae3d227fe228597be__-___ptr64_--Run_--.c)
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
