/*
 * XREFs of _std::vector_std::function_void___cdecl(bool)__std::allocator_std::function_void___cdecl(bool)_____::_Emplace_reallocate_std::function_void___cdecl(bool)__&__::_1_::catch$40 @ 0x18007BB12
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18002C71A (_CxxThrowException_0.c)
 *     ?_Destroy@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@AEAAXPEAV?$function@$$A6AX_N@Z@2@0@Z @ 0x18007C570 (-_Destroy@-$vector@V-$function@$$A6AX_N@Z@std@@V-$allocator@V-$function@$$A6AX_N@Z@std@@@2@@std@.c)
 */

void __fastcall __noreturn std::vector_std::function_void___cdecl_bool___std::allocator_std::function_void___cdecl_bool______::_Emplace_reallocate_std::function_void___cdecl_bool______::_1_::catch_40(
        __int64 a1,
        __int64 a2)
{
  std::vector<std::function<void (bool)>>::_Destroy(a1, *(_QWORD *)(a2 + 160), *(_QWORD *)(a2 + 48));
  std::_Deallocate<16,0>(*(void **)(a2 + 56), (const struct std::nothrow_t *)(*(_QWORD *)(a2 + 168) << 6));
  throw;
}
