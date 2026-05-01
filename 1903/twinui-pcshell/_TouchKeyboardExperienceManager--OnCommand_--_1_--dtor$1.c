/*
 * XREFs of _TouchKeyboardExperienceManager::OnCommand_::_1_::dtor$1 @ 0x180311A05
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TouchKeyboardExperienceManager::OnCommand_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 128));
}
