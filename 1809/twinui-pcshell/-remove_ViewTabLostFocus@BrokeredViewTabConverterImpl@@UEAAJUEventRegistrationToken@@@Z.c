/*
 * XREFs of ?remove_ViewTabLostFocus@BrokeredViewTabConverterImpl@@UEAAJUEventRegistrationToken@@@Z @ 0x1801CDB20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BrokeredViewTabConverterImpl::remove_ViewTabLostFocus(
        BrokeredViewTabConverterImpl *this,
        struct EventRegistrationToken a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 8) + 152LL))(*((_QWORD *)this + 8), a2.value);
}
