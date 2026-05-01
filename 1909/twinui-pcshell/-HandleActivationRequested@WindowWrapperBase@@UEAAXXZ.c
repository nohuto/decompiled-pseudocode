/*
 * XREFs of ?HandleActivationRequested@WindowWrapperBase@@UEAAXXZ @ 0x1800856E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WindowWrapperBase::HandleActivationRequested(WindowWrapperBase *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 34) + 208LL))(*((_QWORD *)this + 34));
  (*(void (__fastcall **)(char *))(*((_QWORD *)this - 2) + 224LL))((char *)this - 16);
}
