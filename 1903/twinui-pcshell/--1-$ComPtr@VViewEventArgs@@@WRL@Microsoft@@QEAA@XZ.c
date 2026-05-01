/*
 * XREFs of ??1?$ComPtr@VViewEventArgs@@@WRL@Microsoft@@QEAA@XZ @ 0x180268B14
 * Callers:
 *     _ViewEventDispatcher::_RaiseViewEventWithPropertySet_::_1_::dtor$1 @ 0x180275A7B (_ViewEventDispatcher--_RaiseViewEventWithPropertySet_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 Microsoft::WRL::ComPtr<ViewEventArgs>::~ComPtr<ViewEventArgs>()
{
  return Microsoft::WRL::ComPtr<ViewEventArgs>::InternalRelease();
}
