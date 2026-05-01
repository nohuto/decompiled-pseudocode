/*
 * XREFs of ?HandleActivationRequested@WindowWrapperBase@@UEAAXXZ @ 0x180080000
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WindowWrapperBase::HandleActivationRequested(WindowWrapperBase *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 200LL))(*((_QWORD *)this + 33));
  (*(void (__fastcall **)(char *))(*((_QWORD *)this - 2) + 224LL))((char *)this - 16);
}
