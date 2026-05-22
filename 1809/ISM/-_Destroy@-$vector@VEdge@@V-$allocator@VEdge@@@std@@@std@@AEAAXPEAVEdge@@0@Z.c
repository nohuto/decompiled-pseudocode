/*
 * XREFs of ?_Destroy@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@AEAAXPEAVEdge@@0@Z @ 0x1800CA470
 * Callers:
 *     _std::vector_Edge_std::allocator_Edge___::_Emplace_reallocate_Edge_const_&___ptr64__::_1_::catch$2 @ 0x180134167 (_std--vector_Edge_std--allocator_Edge___--_Emplace_reallocate_Edge_const_-___ptr64__--_1_--catch.c)
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800278A4 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall std::vector<Edge>::_Destroy(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *v4; // rbx
  __int64 v5; // rcx
  __int64 *result; // rax

  if ( a2 != a3 )
  {
    v4 = a2 + 5;
    do
    {
      v5 = *v4;
      if ( *v4 )
      {
        *v4 = 0LL;
        (**(void (__fastcall ***)(__int64))(v5 + 16))(v5 + 16);
      }
      std::wstring::~wstring((__int64)(v4 - 4));
      v4 += 13;
      result = v4 - 5;
    }
    while ( v4 - 5 != a3 );
  }
  return result;
}
