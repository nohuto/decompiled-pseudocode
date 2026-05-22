/*
 * XREFs of _std::vector_SpatialInteractionDevices::SpatialInputButtonCaps_std::allocator_SpatialInteractionDevices::SpatialInputButtonCaps___::_Emplace_reallocate_SpatialInteractionDevices::SpatialInputButtonCaps__::_1_::catch$0 @ 0x1801331E5
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@USpatialInputButtonCaps@SpatialInteractionDevices@@@std@@QEAAXQEAUSpatialInputButtonCaps@SpatialInteractionDevices@@_K@Z @ 0x1800A7744 (-deallocate@-$allocator@USpatialInputButtonCaps@SpatialInteractionDevices@@@std@@QEAAXQEAUSpatia.c)
 *     _CxxThrowException_0 @ 0x18012C47A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_SpatialInteractionDevices::SpatialInputButtonCaps_std::allocator_SpatialInteractionDevices::SpatialInputButtonCaps___::_Emplace_reallocate_SpatialInteractionDevices::SpatialInputButtonCaps__::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::allocator<SpatialInteractionDevices::SpatialInputButtonCaps>::deallocate(
    a1,
    *(_QWORD **)(a2 + 96),
    *(_QWORD *)(a2 + 104));
  throw;
}
