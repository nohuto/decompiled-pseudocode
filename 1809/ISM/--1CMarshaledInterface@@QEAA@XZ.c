/*
 * XREFs of ??1CMarshaledInterface@@QEAA@XZ @ 0x18009F048
 * Callers:
 *     _TestCommandHost::TestCommandHost_::_1_::dtor$1 @ 0x180132E6A (_TestCommandHost--TestCommandHost_--_1_--dtor$1.c)
 *     _Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::IPropertyValue_::Get_::_1_::dtor$0 @ 0x180134812 (_Windows--Internal--CMarshaledInterfaceResult_Windows--Foundation--IPropertyValue_--Get_--_1_--d.c)
 *     _Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::IPropertyValue_::Get_::_1_::dtor$1 @ 0x180134824 (_Windows--Internal--CMarshaledInterfaceResult_Windows--Foundation--IPropertyValue_-_ea_180134824.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMarshaledInterface::~CMarshaledInterface(CMarshaledInterface *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
