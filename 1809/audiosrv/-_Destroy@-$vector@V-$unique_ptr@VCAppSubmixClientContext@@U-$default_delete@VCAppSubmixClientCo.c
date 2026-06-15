/*
 * XREFs of ?_Destroy@?$vector@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@2@@std@@AEAAXPEAV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@2@0@Z @ 0x1800F20E0
 * Callers:
 *     _std::vector_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____std::allocator_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext_______::_Emplace_reallocate_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext______::_1_::catch$95 @ 0x1800F0DB1 (_std--vector_std--unique_ptr_CAppSubmixClientContext_std--default_delete_CAppSubmixClientContext.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180060C94 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAppSubmixClientContext@@QEAA@XZ @ 0x1800F1240 (--1CAppSubmixClientContext@@QEAA@XZ.c)
 */

void __fastcall std::vector<std::unique_ptr<CAppSubmixClientContext>>::_Destroy(
        __int64 a1,
        CAppSubmixClientContext **a2,
        CAppSubmixClientContext **a3)
{
  CAppSubmixClientContext **v4; // rbx
  CAppSubmixClientContext *v5; // rdi

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      v5 = *v4;
      if ( *v4 )
      {
        CAppSubmixClientContext::~CAppSubmixClientContext(*v4);
        operator delete(v5, (const struct std::nothrow_t *)0x48);
      }
      ++v4;
    }
    while ( v4 != a3 );
  }
}
