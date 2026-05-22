/*
 * XREFs of ??1?$_Uninitialized_backout_al@PEAV?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@QEAA@XZ @ 0x18003BE50
 * Callers:
 *     _std::vector_std::function_void___cdecl(bool)__std::allocator_std::function_void___cdecl(bool)_____::_Emplace_reallocate_std::function_void___cdecl(bool)__&___ptr64__::_1_::dtor$1 @ 0x18012F7ED (_std--vector_std--function_void___cdecl(bool)__std--allocator_std--function_void____ea_18012F7ED.c)
 *     _std::vector_std::function_void___cdecl(bool)__std::allocator_std::function_void___cdecl(bool)_____::_Umove_::_1_::dtor$0 @ 0x18012F811 (_std--vector_std--function_void___cdecl(bool)__std--allocator_std--function_void____ea_18012F811.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Uninitialized_backout_al<std::function<void (bool)> *,std::allocator<std::function<void (bool)>>>::~_Uninitialized_backout_al<std::function<void (bool)> *,std::allocator<std::function<void (bool)>>>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // rdi
  __int64 i; // rbx
  __int64 v4; // rcx
  __int64 result; // rax

  v2 = a1[1];
  for ( i = *a1; i != v2; i += 64LL )
  {
    v4 = *(_QWORD *)(i + 56);
    if ( v4 )
    {
      LOBYTE(a2) = v4 != i;
      result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 32LL))(v4, a2);
      *(_QWORD *)(i + 56) = 0LL;
    }
  }
  return result;
}
