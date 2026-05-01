/*
 * XREFs of ?remove_ViewTabClosed@BrokeredViewTabConverterImpl@@UEAAJUEventRegistrationToken@@@Z @ 0x1801CDAC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BrokeredViewTabConverterImpl::remove_ViewTabClosed(
        BrokeredViewTabConverterImpl *this,
        struct EventRegistrationToken a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 8) + 136LL))(*((_QWORD *)this + 8), a2.value);
}
