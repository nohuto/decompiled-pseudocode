/*
 * XREFs of ??1Edge@@QEAA@XZ @ 0x1800CA514
 * Callers:
 *     _Edges::AddOrUpdate_::_1_::dtor$0 @ 0x18013408C (_Edges--AddOrUpdate_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Edge::~Edge(Edge *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 5);
  if ( v2 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (**(void (__fastcall ***)(__int64))(v2 + 16))(v2 + 16);
  }
  std::wstring::~wstring((__int64)this + 8);
}
