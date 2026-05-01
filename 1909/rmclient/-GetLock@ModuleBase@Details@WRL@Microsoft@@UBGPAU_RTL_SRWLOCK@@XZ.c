/*
 * XREFs of ?GetLock@ModuleBase@Details@WRL@Microsoft@@UBGPAU_RTL_SRWLOCK@@XZ @ 0x10009CB0
 * Callers:
 *     ??$GetActivationFactory@$00@Details@WRL@Microsoft@@YGJPAVModuleBase@012@PBGPAUHSTRING__@@PAPAUIActivationFactory@@@Z @ 0x100098E0 (--$GetActivationFactory@$00@Details@WRL@Microsoft@@YGJPAVModuleBase@012@PBGPAUHSTRING__@@PAPAUIA.c)
 * Callees:
 *     <none>
 */

struct _RTL_SRWLOCK *__stdcall Microsoft::WRL::Details::ModuleBase::GetLock(Microsoft::WRL::Details::ModuleBase *this)
{
  return &Microsoft::WRL::Details::ModuleBase::moduleLock_;
}
