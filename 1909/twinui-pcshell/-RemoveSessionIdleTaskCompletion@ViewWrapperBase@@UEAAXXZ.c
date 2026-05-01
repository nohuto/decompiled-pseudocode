/*
 * XREFs of ?RemoveSessionIdleTaskCompletion@ViewWrapperBase@@UEAAXXZ @ 0x1802B8990
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
