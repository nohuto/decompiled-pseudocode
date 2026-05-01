/*
 * XREFs of ??1?$ComPtr@VAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1802175A8
 * Callers:
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListenerFactory::Create_::_1_::dtor$0 @ 0x18021793D (_Windows--Internal--Shell--TaskFlow--DataEngine--AppViewListenerFactory--Create_--_1_--dtor$0.c)
 *     _HolographicPositioner::_RaiseViewRemoved_::_1_::dtor$2 @ 0x180224EAB (_HolographicPositioner--_RaiseViewRemoved_--_1_--dtor$2.c)
 *     _ViewEventDispatcher::_RaiseViewEventWithPropertySet_::_1_::dtor$1 @ 0x180294F4B (_ViewEventDispatcher--_RaiseViewEventWithPropertySet_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener>::~ComPtr<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener>::InternalRelease(a1);
}
