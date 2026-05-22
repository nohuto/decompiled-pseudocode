/*
 * XREFs of _std::vector_InputSite___std::allocator_InputSite_____::_Emplace_reallocate_InputSite____::_1_::catch$59 @ 0x18003A602
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18002C71A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_InputSite___std::allocator_InputSite_____::_Emplace_reallocate_InputSite____::_1_::catch_59(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 112), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a2 + 120)));
  throw;
}
