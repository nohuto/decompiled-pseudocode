/*
 * XREFs of _std::vector_PointData3D_std::allocator_PointData3D___::_Emplace_reallocate_PointData3D_const_&___ptr64__::_1_::catch$0 @ 0x18012FDB3
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@UPointData3D@@@std@@QEAAXQEAUPointData3D@@_K@Z @ 0x180043684 (-deallocate@-$allocator@UPointData3D@@@std@@QEAAXQEAUPointData3D@@_K@Z.c)
 *     _CxxThrowException_0 @ 0x18012C47A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_PointData3D_std::allocator_PointData3D___::_Emplace_reallocate_PointData3D_const_____ptr64__::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::allocator<PointData3D>::deallocate(a1, *(_QWORD **)(a2 + 112), *(_QWORD *)(a2 + 120));
  throw;
}
