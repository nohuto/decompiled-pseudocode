/*
 * XREFs of ?RemoveSessionIdleTaskCompletion@ViewWrapperBase@@UEAAXXZ @ 0x1802994A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ViewWrapperBase::RemoveSessionIdleTaskCompletion(ViewWrapperBase *this)
{
  *((_DWORD *)this + 22) &= ~1u;
  ViewWrapperBase::_ReconcileSessionIdleTaskCompletion((ViewWrapperBase *)((char *)this - 8));
}
