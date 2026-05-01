/*
 * XREFs of _std::vector_std::shared_ptr_KBViewInfo__std::allocator_std::shared_ptr_KBViewInfo_____::_Emplace_reallocate_std::shared_ptr_KBViewInfo__&__::_1_::catch$41 @ 0x1801FE423
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800831C8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18008A8BC (_CxxThrowException_0.c)
 *     ?_Destroy@?$vector@V?$shared_ptr@UViewEventRegistration@@@std@@V?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@2@@std@@AEAAXPEAV?$shared_ptr@UViewEventRegistration@@@2@0@Z @ 0x180202C70 (-_Destroy@-$vector@V-$shared_ptr@UViewEventRegistration@@@std@@V-$allocator@V-$shared_ptr@UViewE.c)
 */

void __fastcall __noreturn std::vector_std::shared_ptr_KBViewInfo__std::allocator_std::shared_ptr_KBViewInfo_____::_Emplace_reallocate_std::shared_ptr_KBViewInfo_____::_1_::catch_41(
        __int64 a1,
        __int64 a2)
{
  std::vector<std::shared_ptr<ViewEventRegistration>>::_Destroy(a1, *(_QWORD *)(a2 + 96), *(_QWORD *)(a2 + 120));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), (const struct std::nothrow_t *)(16LL * *(_QWORD *)(a2 + 104)));
  throw;
}
