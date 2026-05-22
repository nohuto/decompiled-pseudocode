/*
 * XREFs of _std::vector_Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::HandInputInfo_std::allocator_Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::HandInputInfo___::_Emplace_reallocate_Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::HandInputInfo_const_&___ptr64__::_1_::catch$0 @ 0x180133BCF
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@UHandInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@@std@@QEAAXQEAUHandInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@_K@Z @ 0x1800BFAE0 (-deallocate@-$allocator@UHandInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal.c)
 *     _CxxThrowException_0 @ 0x18012C47A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::HandInputInfo_std::allocator_Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::HandInputInfo___::_Emplace_reallocate_Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::HandInputInfo_const_____ptr64__::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::allocator<Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::HandInputInfo>::deallocate(
    a1,
    *(_QWORD **)(a2 + 112),
    *(_QWORD *)(a2 + 136));
  throw;
}
