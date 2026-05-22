/*
 * XREFs of _std::vector_ContextualProcessorBuffer::InputSample_std::allocator_ContextualProcessorBuffer::InputSample___::_Emplace_reallocate_ContextualProcessorBuffer::InputSample__::_1_::catch$16 @ 0x180133E04
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@UDeviceDisplayMapping@DWMInputRouter@@@std@@QEAAXQEAUDeviceDisplayMapping@DWMInputRouter@@_K@Z @ 0x18001FE20 (-deallocate@-$allocator@UDeviceDisplayMapping@DWMInputRouter@@@std@@QEAAXQEAUDeviceDisplayMappin.c)
 *     ?_Destroy@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@AEAAXPEAUInputSample@ContextualProcessorBuffer@@0@Z @ 0x1800C43F4 (-_Destroy@-$vector@UInputSample@ContextualProcessorBuffer@@V-$allocator@UInputSample@ContextualP.c)
 *     _CxxThrowException_0 @ 0x18012C47A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_ContextualProcessorBuffer::InputSample_std::allocator_ContextualProcessorBuffer::InputSample___::_Emplace_reallocate_ContextualProcessorBuffer::InputSample__::_1_::catch_16(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx

  std::vector<ContextualProcessorBuffer::InputSample>::_Destroy(
    a1,
    *(const struct std::nothrow_t **)(a2 + 120),
    *(const struct std::nothrow_t **)(a2 + 40));
  std::allocator<DWMInputRouter::DeviceDisplayMapping>::deallocate(v3, *(void **)(a2 + 112), *(_QWORD *)(a2 + 136));
  throw;
}
