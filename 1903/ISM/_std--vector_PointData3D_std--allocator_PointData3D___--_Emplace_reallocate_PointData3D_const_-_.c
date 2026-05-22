/*
 * XREFs of _std::vector_PointData3D_std::allocator_PointData3D___::_Emplace_reallocate_PointData3D_const_&__::_1_::catch$30 @ 0x180080301
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18002CA9A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_PointData3D_std::allocator_PointData3D___::_Emplace_reallocate_PointData3D_const____::_1_::catch_30(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 104), (const struct std::nothrow_t *)(184LL * *(_QWORD *)(a2 + 96)));
  throw;
}
