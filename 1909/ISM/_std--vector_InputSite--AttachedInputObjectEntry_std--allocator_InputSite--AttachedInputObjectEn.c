/*
 * XREFs of _std::vector_InputSite::AttachedInputObjectEntry_std::allocator_InputSite::AttachedInputObjectEntry___::_Emplace_reallocate_InputSite::AttachedInputObjectEntry__::_1_::catch$65 @ 0x18003A750
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18002C71A (_CxxThrowException_0.c)
 *     ?_Destroy@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@AEAAXPEAUAttachedInputObjectEntry@InputSite@@0@Z @ 0x180066CA4 (-_Destroy@-$vector@UAttachedInputObjectEntry@InputSite@@V-$allocator@UAttachedInputObjectEntry@I.c)
 */

void __fastcall __noreturn std::vector_InputSite::AttachedInputObjectEntry_std::allocator_InputSite::AttachedInputObjectEntry___::_Emplace_reallocate_InputSite::AttachedInputObjectEntry__::_1_::catch_65(
        __int64 a1,
        __int64 a2)
{
  std::vector<InputSite::AttachedInputObjectEntry>::_Destroy(a1, *(_QWORD *)(a2 + 136), *(_QWORD *)(a2 + 32));
  std::_Deallocate<16,0>(*(void **)(a2 + 120), (const struct std::nothrow_t *)(16LL * *(_QWORD *)(a2 + 112)));
  throw;
}
