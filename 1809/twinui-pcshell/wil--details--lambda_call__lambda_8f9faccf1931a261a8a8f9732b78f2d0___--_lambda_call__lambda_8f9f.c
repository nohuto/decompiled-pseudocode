/*
 * XREFs of wil::details::lambda_call__lambda_8f9faccf1931a261a8a8f9732b78f2d0___::_lambda_call__lambda_8f9faccf1931a261a8a8f9732b78f2d0___ @ 0x18021155C
 * Callers:
 *     __lambda_7d6b9a4e32c168b2e51ca46a812f2e25_::operator()_::_1_::dtor$2 @ 0x180212AE6 (__lambda_7d6b9a4e32c168b2e51ca46a812f2e25_--operator()_--_1_--dtor$2.c)
 *     __lambda_7d6b9a4e32c168b2e51ca46a812f2e25_::operator()_::_1_::dtor$7 @ 0x180212B16 (__lambda_7d6b9a4e32c168b2e51ca46a812f2e25_--operator()_--_1_--dtor$7.c)
 *     _ViewEventDispatcher::ViewCreated_::_1_::dtor$8 @ 0x18021C37C (_ViewEventDispatcher--ViewCreated_--_1_--dtor$8.c)
 *     _ViewEventDispatcher::ViewNavigationRequested_::_1_::dtor$11 @ 0x18021D385 (_ViewEventDispatcher--ViewNavigationRequested_--_1_--dtor$11.c)
 *     _ViewEventDispatcher::_EnsureViewHasWrapperAndListener_::_1_::dtor$2 @ 0x18021E350 (_ViewEventDispatcher--_EnsureViewHasWrapperAndListener_--_1_--dtor$2.c)
 *     _ViewEventDispatcher::_HandleWindowCreatedForExistingView_::_1_::dtor$8 @ 0x18021F505 (_ViewEventDispatcher--_HandleWindowCreatedForExistingView_--_1_--dtor$8.c)
 *     _KeyboardHosting::TabTipAdapter::SetInputAppAUMID_::_1_::dtor$1 @ 0x1802C6A25 (_KeyboardHosting--TabTipAdapter--SetInputAppAUMID_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::lambda_call__lambda_8f9faccf1931a261a8a8f9732b78f2d0___::_lambda_call__lambda_8f9faccf1931a261a8a8f9732b78f2d0___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return MsgRelease(**(_QWORD **)a1);
  }
  return result;
}
