/*
 * XREFs of _std::vector_ContextualProcessorBuffer::ContextualProcessorMetadata_std::allocator_ContextualProcessorBuffer::ContextualProcessorMetadata___::_Emplace_reallocate_ContextualProcessorBuffer::ContextualProcessorMetadata_const_&___ptr64__::_1_::catch$7 @ 0x180133E3E
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@QEAAXQEAUINPUT_SPACE_PAYLOAD@@_K@Z @ 0x180005544 (-deallocate@-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@QEAAXQEAUINPUT_SPACE_PAYLOAD@@_K@Z.c)
 *     ?_Destroy@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@AEAAXPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@0@Z @ 0x1800C444C (-_Destroy@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     _CxxThrowException_0 @ 0x18012C47A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_ContextualProcessorBuffer::ContextualProcessorMetadata_std::allocator_ContextualProcessorBuffer::ContextualProcessorMetadata___::_Emplace_reallocate_ContextualProcessorBuffer::ContextualProcessorMetadata_const_____ptr64__::_1_::catch_7(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx

  std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Destroy(
    a1,
    *(__int64 **)(a2 + 136),
    *(__int64 **)(a2 + 48));
  std::allocator<INPUT_SPACE_PAYLOAD>::deallocate(v3, *(_QWORD **)(a2 + 120), *(_QWORD *)(a2 + 32));
  throw;
}
