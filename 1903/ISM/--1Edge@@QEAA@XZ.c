/*
 * XREFs of ??1Edge@@QEAA@XZ @ 0x1800FFF98
 * Callers:
 *     _Edges::AddOrUpdate_::_1_::dtor$0 @ 0x1801019C8 (_Edges--AddOrUpdate_--_1_--dtor$0.c)
 *     _Edges::AddOrUpdate_::_1_::dtor$0_0 @ 0x180101AAC (_Edges--AddOrUpdate_--_1_--dtor$0_0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800674EC (-InternalRelease@-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall Edge::~Edge(Edge *this)
{
  Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::InternalRelease((__int64 *)this + 5);
  std::wstring::_Tidy_deallocate((__int64)this + 8);
}
