/*
 * XREFs of wil::details::ScopeExitFn__lambda_da6f0bd90bf7c2fa00899691c94231d9___::_ScopeExitFn__lambda_da6f0bd90bf7c2fa00899691c94231d9___ @ 0x180268D30
 * Callers:
 *     _ViewEventDispatcher::_HandleWindowCreatedWithNoView_::_1_::dtor$1 @ 0x180274F81 (_ViewEventDispatcher--_HandleWindowCreatedWithNoView_--_1_--dtor$1.c)
 * Callees:
 *     ?NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180287880 (-NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windo.c)
 */

BOOL __fastcall wil::details::ScopeExitFn__lambda_da6f0bd90bf7c2fa00899691c94231d9___::_ScopeExitFn__lambda_da6f0bd90bf7c2fa00899691c94231d9___(
        __int64 a1)
{
  BOOL result; // eax

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    ViewManagerBridge::NavigateView(*(_QWORD *)(*(_QWORD *)a1 + 496LL), **(unsigned int **)(a1 + 8), 0LL);
    return SetPropW(**(HWND **)(a1 + 16), L"Microsoft.Windows.WindowFactory.ViewId", 0LL);
  }
  return result;
}
