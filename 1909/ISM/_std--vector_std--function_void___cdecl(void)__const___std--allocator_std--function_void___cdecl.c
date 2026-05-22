/*
 * XREFs of _std::vector_std::function_void___cdecl(void)__const___std::allocator_std::function_void___cdecl(void)__const_____::_Emplace_reallocate_std::function_void___cdecl(void)__const___const_&__::_1_::catch$34 @ 0x18014C167
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18002C71A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_std::function_void___cdecl_void___const___std::allocator_std::function_void___cdecl_void___const_____::_Emplace_reallocate_std::function_void___cdecl_void___const___const____::_1_::catch_34(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 104), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a2 + 96)));
  throw;
}
