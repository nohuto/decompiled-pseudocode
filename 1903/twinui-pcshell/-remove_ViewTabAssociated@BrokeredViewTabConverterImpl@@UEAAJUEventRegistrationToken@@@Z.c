/*
 * XREFs of ?remove_ViewTabAssociated@BrokeredViewTabConverterImpl@@UEAAJUEventRegistrationToken@@@Z @ 0x180224910
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BrokeredViewTabConverterImpl::remove_ViewTabAssociated(
        BrokeredViewTabConverterImpl *this,
        struct EventRegistrationToken a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 8) + 112LL))(*((_QWORD *)this + 8), a2.value);
}
