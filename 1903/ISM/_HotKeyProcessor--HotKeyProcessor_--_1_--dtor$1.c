/*
 * XREFs of _HotKeyProcessor::HotKeyProcessor_::_1_::dtor$1 @ 0x18014594C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HotKeyProcessor::HotKeyProcessor_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return std::map<unsigned long,std::shared_ptr<HOTKEY>>::~map<unsigned long,std::shared_ptr<HOTKEY>>(*(_QWORD *)(a2 + 144) + 24LL);
}
