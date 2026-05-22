/*
 * XREFs of _std::vector_ContextualProcessorBuffer::ContextualProcessorMetadata_std::allocator_ContextualProcessorBuffer::ContextualProcessorMetadata___::_Emplace_reallocate_ContextualProcessorBuffer::ContextualProcessorMetadata_const_&__::_1_::catch$59 @ 0x18003BB60
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18002C71A (_CxxThrowException_0.c)
 *     ?_Destroy@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@AEAAXPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@0@Z @ 0x1800FB450 (-_Destroy@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 */

void __fastcall __noreturn std::vector_ContextualProcessorBuffer::ContextualProcessorMetadata_std::allocator_ContextualProcessorBuffer::ContextualProcessorMetadata___::_Emplace_reallocate_ContextualProcessorBuffer::ContextualProcessorMetadata_const____::_1_::catch_59(
        __int64 a1,
        __int64 a2)
{
  std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Destroy(
    a1,
    *(_QWORD *)(a2 + 32),
    *(_QWORD *)(a2 + 40));
  std::_Deallocate<16,0>(*(void **)(a2 + 152), (const struct std::nothrow_t *)(24LL * *(_QWORD *)(a2 + 128)));
  throw;
}
