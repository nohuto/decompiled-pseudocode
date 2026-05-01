/*
 * XREFs of ?AddSessionIdleTaskCompletion@WindowWrapperBase@@UEAAXXZ @ 0x18024FE90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WindowWrapperBase::AddSessionIdleTaskCompletion(WindowWrapperBase *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 200LL))(*((_QWORD *)this + 33));
  *((_DWORD *)this + 41) |= 1u;
  WindowWrapperBase::ReconcileSessionIdleTaskCompletion((WindowWrapperBase *)((char *)this - 16));
}
