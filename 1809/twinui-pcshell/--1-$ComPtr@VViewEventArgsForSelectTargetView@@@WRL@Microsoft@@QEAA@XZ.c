/*
 * XREFs of ??1?$ComPtr@VViewEventArgsForSelectTargetView@@@WRL@Microsoft@@QEAA@XZ @ 0x1801B12AC
 * Callers:
 *     _HolographicPositioner::_RaiseFrameworkViewTypeChanged_::_1_::dtor$1 @ 0x1801B7DC3 (_HolographicPositioner--_RaiseFrameworkViewTypeChanged_--_1_--dtor$1.c)
 *     _ViewEventDispatcher::ViewNavigationRequested_::_1_::dtor$14 @ 0x18021D3A9 (_ViewEventDispatcher--ViewNavigationRequested_--_1_--dtor$14.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ViewEventArgsForSelectTargetView>::~ComPtr<ViewEventArgsForSelectTargetView>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<ViewHostItemPropertyChangedArgs>::InternalRelease(a1);
}
