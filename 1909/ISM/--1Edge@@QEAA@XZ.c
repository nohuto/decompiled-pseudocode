/*
 * XREFs of ??1Edge@@QEAA@XZ @ 0x1800FFD68
 * Callers:
 *     _Edges::AddOrUpdate_::_1_::dtor$0 @ 0x180101798 (_Edges--AddOrUpdate_--_1_--dtor$0.c)
 *     _Edges::AddOrUpdate_::_1_::dtor$0_0 @ 0x18010187C (_Edges--AddOrUpdate_--_1_--dtor$0_0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800672AC (-InternalRelease@-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall Edge::~Edge(Edge *this)
{
  Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::InternalRelease((__int64 *)this + 5);
  std::wstring::_Tidy_deallocate((__int64)this + 8);
}
