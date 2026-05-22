/*
 * XREFs of ?deallocate@?$allocator@USpatialInputButtonCaps@SpatialInteractionDevices@@@std@@QEAAXQEAUSpatialInputButtonCaps@SpatialInteractionDevices@@_K@Z @ 0x1800A7744
 * Callers:
 *     _std::vector_SpatialInteractionDevices::SpatialInputButtonCaps_std::allocator_SpatialInteractionDevices::SpatialInputButtonCaps___::_Emplace_reallocate_SpatialInteractionDevices::SpatialInputButtonCaps__::_1_::catch$0 @ 0x1801331E5 (_std--vector_SpatialInteractionDevices--SpatialInputButtonCaps_std--allocator_SpatialInteraction.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<SpatialInteractionDevices::SpatialInputButtonCaps>::deallocate(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx

  v4 = 12 * a3;
  if ( (unsigned __int64)(12 * a3) >= 0x1000 )
  {
    v5 = *(a2 - 1);
    v4 += 39LL;
    if ( (unsigned __int64)a2 - v5 - 8 > 0x1F )
    {
      _o__invalid_parameter_noinfo_noreturn(v5, v4);
      JUMPOUT(0x1800A7786LL);
    }
    a2 = (_QWORD *)*(a2 - 1);
  }
  operator delete(a2, (const struct std::nothrow_t *)v4);
}
