/*
 * XREFs of ??1CMarshaledInterface@@QEAA@XZ @ 0x180022470
 * Callers:
 *     _Windows::Internal::CMarshaledInterfaceResult_Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_::Get_::_1_::dtor$0 @ 0x180044BA0 (_Windows--Internal--CMarshaledInterfaceResult_Windows--Gaming--Preview--GamesEnumeration--IGameL.c)
 *     _Windows::Internal::CMarshaledInterfaceResult_Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_::Get_::_1_::dtor$1 @ 0x180044BB2 (_Windows--Internal--CMarshaledInterfaceResult_Windows--Gaming--Preview--GamesEnumer_ea_180044BB2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180043EE0 (_guard_dispatch_icall_nop.c)
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
