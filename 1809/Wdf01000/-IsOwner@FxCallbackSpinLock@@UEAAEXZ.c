/*
 * XREFs of ?IsOwner@FxCallbackSpinLock@@UEAAEXZ @ 0x1C00046A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall FxCallbackSpinLock::IsOwner(FxCallbackSpinLock *this)
{
  return this->m_OwnerThread == KeGetCurrentThread();
}
