/*
 * XREFs of ?deallocate@?$allocator@UHandInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@@std@@QEAAXQEAUHandInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@_K@Z @ 0x1800BFAE0
 * Callers:
 *     _std::vector_Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::HandInputInfo_std::allocator_Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::HandInputInfo___::_Emplace_reallocate_Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::HandInputInfo_const_&___ptr64__::_1_::catch$0 @ 0x180133BCF (_std--vector_Windows--Internal--SpatialInteractions--SpatialInteractionSourceHand--HandInputInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::HandInputInfo>::deallocate(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx

  v4 = 272 * a3;
  if ( (unsigned __int64)(272 * a3) >= 0x1000 )
  {
    v5 = *(a2 - 1);
    v4 += 39LL;
    if ( (unsigned __int64)a2 - v5 - 8 > 0x1F )
    {
      _o__invalid_parameter_noinfo_noreturn(v5, v4);
      JUMPOUT(0x1800BFB21LL);
    }
    a2 = (_QWORD *)*(a2 - 1);
  }
  operator delete(a2, (const struct std::nothrow_t *)v4);
}
