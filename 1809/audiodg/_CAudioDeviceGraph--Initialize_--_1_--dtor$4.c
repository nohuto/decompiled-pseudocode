/*
 * XREFs of _CAudioDeviceGraph::Initialize_::_1_::dtor$4 @ 0x14001F7B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioDeviceGraph::Initialize_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return wistd::unique_ptr<CPipeInstance,wistd::default_delete<CPipeInstance>>::~unique_ptr<CPipeInstance,wistd::default_delete<CPipeInstance>>(a2 + 80);
}
