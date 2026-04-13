/*
 * XREFs of _wil::details::functor_wrapper_other__lambda_a111f9909dcb1fbe287f852ebd02ec50__&_std::shared_ptr_CreativeFramework::Actions::PinWebsiteToTaskbarService___::Run_::_1_::dtor$6 @ 0x1800D2EA9
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x18001221C (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall wil::details::functor_wrapper_other__lambda_a111f9909dcb1fbe287f852ebd02ec50____std::shared_ptr_CreativeFramework::Actions::PinWebsiteToTaskbarService___::Run_::_1_::dtor_6(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~2u;
    return std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>(a2 + 176);
  }
  return result;
}
