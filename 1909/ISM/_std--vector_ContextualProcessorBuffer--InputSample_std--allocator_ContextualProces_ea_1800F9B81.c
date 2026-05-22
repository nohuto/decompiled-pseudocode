/*
 * XREFs of _std::vector_ContextualProcessorBuffer::InputSample_std::allocator_ContextualProcessorBuffer::InputSample___::_Emplace_reallocate_ContextualProcessorBuffer::InputSample__::_1_::catch$103 @ 0x1800F9B81
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18002C71A (_CxxThrowException_0.c)
 *     ?_Destroy@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@AEAAXPEAUInputSample@ContextualProcessorBuffer@@0@Z @ 0x1800FB490 (-_Destroy@-$vector@UInputSample@ContextualProcessorBuffer@@V-$allocator@UInputSample@ContextualP.c)
 */

void __fastcall __noreturn std::vector_ContextualProcessorBuffer::InputSample_std::allocator_ContextualProcessorBuffer::InputSample___::_Emplace_reallocate_ContextualProcessorBuffer::InputSample__::_1_::catch_103(
        __int64 a1,
        __int64 a2)
{
  std::vector<ContextualProcessorBuffer::InputSample>::_Destroy(a1, *(_QWORD *)(a2 + 160), *(_QWORD *)(a2 + 40));
  std::_Deallocate<16,0>(*(void **)(a2 + 48), (const struct std::nothrow_t *)(80LL * *(_QWORD *)(a2 + 168)));
  throw;
}
