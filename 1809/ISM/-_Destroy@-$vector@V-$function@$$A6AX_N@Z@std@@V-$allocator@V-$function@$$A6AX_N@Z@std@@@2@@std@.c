/*
 * XREFs of ?_Destroy@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@AEAAXPEAV?$function@$$A6AX_N@Z@2@0@Z @ 0x18003B4C8
 * Callers:
 *     _std::vector_std::function_void___cdecl(bool)__std::allocator_std::function_void___cdecl(bool)_____::_Emplace_reallocate_std::function_void___cdecl(bool)__&___ptr64__::_1_::catch$5 @ 0x18012F79E (_std--vector_std--function_void___cdecl(bool)__std--allocator_std--function_void___cdecl(bool)__.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::vector<std::function<void (bool)>>::_Destroy(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      v5 = *(_QWORD *)(v4 + 56);
      if ( v5 )
      {
        LOBYTE(a2) = v5 != v4;
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 32LL))(v5, a2);
        *(_QWORD *)(v4 + 56) = 0LL;
      }
      v4 += 64LL;
    }
    while ( v4 != a3 );
  }
  return result;
}
