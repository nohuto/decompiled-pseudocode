/*
 * XREFs of wil::details::ScopeExitFn__lambda_be6ba644c24180971bc7738cb47109eb___::_ScopeExitFn__lambda_be6ba644c24180971bc7738cb47109eb___ @ 0x180288134
 * Callers:
 *     __lambda_313d2f60cc252ee9599e8e6a3d95ee51_::operator()_::_1_::dtor$2 @ 0x180288FAF (__lambda_313d2f60cc252ee9599e8e6a3d95ee51_--operator()_--_1_--dtor$2.c)
 *     __lambda_313d2f60cc252ee9599e8e6a3d95ee51_::operator()_::_1_::dtor$7 @ 0x180288FDF (__lambda_313d2f60cc252ee9599e8e6a3d95ee51_--operator()_--_1_--dtor$7.c)
 *     _ViewEventDispatcher::ViewCreated_::_1_::dtor$8 @ 0x1802912D7 (_ViewEventDispatcher--ViewCreated_--_1_--dtor$8.c)
 *     _ViewEventDispatcher::ViewNavigationRequested_::_1_::dtor$11 @ 0x1802922E0 (_ViewEventDispatcher--ViewNavigationRequested_--_1_--dtor$11.c)
 *     _ViewEventDispatcher::_EnsureViewHasWrapperAndListener_::_1_::dtor$2 @ 0x18029311F (_ViewEventDispatcher--_EnsureViewHasWrapperAndListener_--_1_--dtor$2.c)
 *     _ViewEventDispatcher::_HandleWindowCreatedForExistingView_::_1_::dtor$8 @ 0x1802940C4 (_ViewEventDispatcher--_HandleWindowCreatedForExistingView_--_1_--dtor$8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_be6ba644c24180971bc7738cb47109eb___::_ScopeExitFn__lambda_be6ba644c24180971bc7738cb47109eb___(
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
