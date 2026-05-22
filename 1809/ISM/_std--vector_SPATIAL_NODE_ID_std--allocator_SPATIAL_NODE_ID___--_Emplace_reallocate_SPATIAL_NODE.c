/*
 * XREFs of _std::vector_SPATIAL_NODE_ID_std::allocator_SPATIAL_NODE_ID___::_Emplace_reallocate_SPATIAL_NODE_ID_const_&___ptr64__::_1_::catch$0 @ 0x180132C02
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@UDeviceDisplayMapping@DWMInputRouter@@@std@@QEAAXQEAUDeviceDisplayMapping@DWMInputRouter@@_K@Z @ 0x18001FE20 (-deallocate@-$allocator@UDeviceDisplayMapping@DWMInputRouter@@@std@@QEAAXQEAUDeviceDisplayMappin.c)
 *     _CxxThrowException_0 @ 0x18012C47A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_SPATIAL_NODE_ID_std::allocator_SPATIAL_NODE_ID___::_Emplace_reallocate_SPATIAL_NODE_ID_const_____ptr64__::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::allocator<DWMInputRouter::DeviceDisplayMapping>::deallocate(a1, *(void **)(a2 + 96), *(_QWORD *)(a2 + 104));
  throw;
}
