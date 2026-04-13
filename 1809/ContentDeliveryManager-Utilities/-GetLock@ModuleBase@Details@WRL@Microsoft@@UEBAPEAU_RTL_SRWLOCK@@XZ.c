/*
 * XREFs of ?GetLock@ModuleBase@Details@WRL@Microsoft@@UEBAPEAU_RTL_SRWLOCK@@XZ @ 0x18001EB10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _RTL_SRWLOCK *__fastcall Microsoft::WRL::Details::ModuleBase::GetLock(Microsoft::WRL::Details::ModuleBase *this)
{
  return &Microsoft::WRL::Details::ModuleBase::moduleLock_;
}
