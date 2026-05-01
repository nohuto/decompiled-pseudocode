/*
 * XREFs of ?Unregister@CApplicationManager@@UEAAJK@Z @ 0x18011B140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationManager::Unregister(RTL_SRWLOCK *this, int a2)
{
  return AgileRegistrationList::Unregister(this + 27, a2);
}
