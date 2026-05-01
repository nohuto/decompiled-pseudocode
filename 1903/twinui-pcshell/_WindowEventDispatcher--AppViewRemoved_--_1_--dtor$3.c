/*
 * XREFs of _WindowEventDispatcher::AppViewRemoved_::_1_::dtor$3 @ 0x1800C2586
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WindowEventDispatcher::AppViewRemoved_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  std::shared_ptr<UwpAppViewInfo>::~shared_ptr<UwpAppViewInfo>(a2 + 64);
}
