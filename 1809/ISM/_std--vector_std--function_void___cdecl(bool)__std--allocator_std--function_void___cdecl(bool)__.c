/*
 * XREFs of _std::vector_std::function_void___cdecl(bool)__std::allocator_std::function_void___cdecl(bool)_____::_Emplace_reallocate_std::function_void___cdecl(bool)__&___ptr64__::_1_::catch$5 @ 0x18012F79E
 * Callers:
 *     <none>
 * Callees:
 *     ?_Destroy@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@AEAAXPEAV?$function@$$A6AX_N@Z@2@0@Z @ 0x18003B4C8 (-_Destroy@-$vector@V-$function@$$A6AX_N@Z@std@@V-$allocator@V-$function@$$A6AX_N@Z@std@@@2@@std@.c)
 *     ?deallocate@?$allocator@V?$function@$$A6AX_N@Z@std@@@std@@QEAAXQEAV?$function@$$A6AX_N@Z@2@_K@Z @ 0x18003B518 (-deallocate@-$allocator@V-$function@$$A6AX_N@Z@std@@@std@@QEAAXQEAV-$function@$$A6AX_N@Z@2@_K@Z.c)
 *     _CxxThrowException_0 @ 0x18012C47A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_std::function_void___cdecl_bool___std::allocator_std::function_void___cdecl_bool______::_Emplace_reallocate_std::function_void___cdecl_bool_______ptr64__::_1_::catch_5(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx

  std::vector<std::function<void (bool)>>::_Destroy(a1, *(_QWORD *)(a2 + 160), *(_QWORD *)(a2 + 184));
  std::allocator<std::function<void (bool)>>::deallocate(v3, *(void **)(a2 + 48), *(_QWORD *)(a2 + 32));
  throw;
}
