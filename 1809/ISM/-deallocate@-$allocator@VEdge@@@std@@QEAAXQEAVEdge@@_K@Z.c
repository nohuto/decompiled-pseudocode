/*
 * XREFs of ?deallocate@?$allocator@VEdge@@@std@@QEAAXQEAVEdge@@_K@Z @ 0x1800CA4CC
 * Callers:
 *     _std::vector_Edge_std::allocator_Edge___::_Emplace_reallocate_Edge_const_&___ptr64__::_1_::catch$2 @ 0x180134167 (_std--vector_Edge_std--allocator_Edge___--_Emplace_reallocate_Edge_const_-___ptr64__--_1_--catch.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<Edge>::deallocate(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx

  v4 = 104 * a3;
  if ( (unsigned __int64)(104 * a3) >= 0x1000 )
  {
    v5 = *(a2 - 1);
    v4 += 39LL;
    if ( (unsigned __int64)a2 - v5 - 8 > 0x1F )
    {
      _o__invalid_parameter_noinfo_noreturn(v5, v4);
      JUMPOUT(0x1800CA50ALL);
    }
    a2 = (_QWORD *)*(a2 - 1);
  }
  operator delete(a2, (const struct std::nothrow_t *)v4);
}
