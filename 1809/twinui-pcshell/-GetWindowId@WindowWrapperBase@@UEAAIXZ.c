/*
 * XREFs of ?GetWindowId@WindowWrapperBase@@UEAAIXZ @ 0x180053EB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowWrapperBase::GetWindowId(WindowWrapperBase *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 208LL))(*((_QWORD *)this + 33));
  return *((unsigned int *)this + 70);
}
