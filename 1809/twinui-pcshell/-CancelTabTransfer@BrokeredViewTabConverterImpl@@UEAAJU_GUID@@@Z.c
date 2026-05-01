/*
 * XREFs of ?CancelTabTransfer@BrokeredViewTabConverterImpl@@UEAAJU_GUID@@@Z @ 0x1801CD4C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BrokeredViewTabConverterImpl::CancelTabTransfer(
        BrokeredViewTabConverterImpl *this,
        struct _GUID *a2)
{
  __int128 v3; // [rsp+30h] [rbp-18h] BYREF

  v3 = (__int128)*a2;
  return (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 8) + 88LL))(*((_QWORD *)this + 8), &v3);
}
