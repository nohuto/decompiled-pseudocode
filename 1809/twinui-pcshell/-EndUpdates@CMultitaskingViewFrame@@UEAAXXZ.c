/*
 * XREFs of ?EndUpdates@CMultitaskingViewFrame@@UEAAXXZ @ 0x1802FB3A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMultitaskingViewFrame::EndUpdates(CMultitaskingViewFrame *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 315) + 64LL))(*((_QWORD *)this + 315));
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 307) + 32LL))(*((_QWORD *)this + 307), 0LL);
}
