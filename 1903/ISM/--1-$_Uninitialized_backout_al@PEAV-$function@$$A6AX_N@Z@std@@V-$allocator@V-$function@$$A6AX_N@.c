/*
 * XREFs of ??1?$_Uninitialized_backout_al@PEAV?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@QEAA@XZ @ 0x18007BFB8
 * Callers:
 *     _std::vector_std::function_void___cdecl(bool)__std::allocator_std::function_void___cdecl(bool)_____::_Emplace_reallocate_std::function_void___cdecl(bool)__&__::_1_::dtor$24 @ 0x18007BD16 (_std--vector_std--function_void___cdecl(bool)__std--allocator_std--function_void___cdecl(bool)__.c)
 *     _std::vector_std::function_void___cdecl(bool)__std::allocator_std::function_void___cdecl(bool)_____::_Emplace_reallocate_std::function_void___cdecl(bool)__&__::_1_::dtor$29 @ 0x18007BD22 (_std--vector_std--function_void___cdecl(bool)__std--allocator_std--function_void____ea_18007BD22.c)
 *     _std::vector_std::function_void___cdecl(bool)__std::allocator_std::function_void___cdecl(bool)_____::_Emplace_reallocate_std::function_void___cdecl(bool)__&__::_1_::dtor$35 @ 0x18007BD3A (_std--vector_std--function_void___cdecl(bool)__std--allocator_std--function_void____ea_18007BD3A.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_INPUT_INTEROP_MESSAGE@@@std@@IEAAXXZ @ 0x180028AE4 (-_Tidy@-$_Func_class@XPEBU_MIT_INPUT_INTEROP_MESSAGE@@@std@@IEAAXXZ.c)
 */

__int64 __fastcall std::_Uninitialized_backout_al<std::function<void (bool)> *,std::allocator<std::function<void (bool)>>>::~_Uninitialized_backout_al<std::function<void (bool)> *,std::allocator<std::function<void (bool)>>>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // rdi
  __int64 i; // rbx
  __int64 result; // rax

  v2 = a1[1];
  for ( i = *a1; i != v2; i += 64LL )
    result = std::_Func_class<void,_MIT_INPUT_INTEROP_MESSAGE const *>::_Tidy(i, a2);
  return result;
}
