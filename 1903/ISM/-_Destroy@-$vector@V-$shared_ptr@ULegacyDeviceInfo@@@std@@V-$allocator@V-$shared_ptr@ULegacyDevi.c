/*
 * XREFs of ?_Destroy@?$vector@V?$shared_ptr@ULegacyDeviceInfo@@@std@@V?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@2@@std@@AEAAXPEAV?$shared_ptr@ULegacyDeviceInfo@@@2@0@Z @ 0x180094F38
 * Callers:
 *     _std::vector_std::shared_ptr_LegacyDeviceInfo__std::allocator_std::shared_ptr_LegacyDeviceInfo_____::_Emplace_reallocate_std::shared_ptr_LegacyDeviceInfo__const_&__::_1_::catch$34 @ 0x180093B2F (_std--vector_std--shared_ptr_LegacyDeviceInfo__std--allocator_std--shared_ptr_LegacyDeviceInfo__.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002B220 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::vector<std::shared_ptr<LegacyDeviceInfo>>::_Destroy(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  std::_Ref_count_base *v5; // rcx

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      v5 = *(std::_Ref_count_base **)(v4 + 8);
      if ( v5 )
        std::_Ref_count_base::_Decref(v5);
      v4 += 16LL;
    }
    while ( v4 != a3 );
  }
}
