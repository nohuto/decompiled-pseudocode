/*
 * XREFs of ?NotifyOfDwmTermination@CCompositionBuffer@@UEAAXXZ @ 0x1C0055E50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionBuffer::NotifyOfDwmTermination(CCompositionBuffer *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 31) + 32LL))(*((_QWORD *)this + 31));
}
