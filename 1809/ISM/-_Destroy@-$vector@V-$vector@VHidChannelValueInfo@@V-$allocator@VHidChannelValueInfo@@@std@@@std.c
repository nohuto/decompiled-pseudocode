/*
 * XREFs of ?_Destroy@?$vector@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@V?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@2@@std@@AEAAXPEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@2@0@Z @ 0x18007C5D4
 * Callers:
 *     _std::vector_std::vector_HidChannelValueInfo_std::allocator_HidChannelValueInfo____std::allocator_std::vector_HidChannelValueInfo_std::allocator_HidChannelValueInfo_______::_Emplace_reallocate_std::vector_HidChannelValueInfo_std::allocator_HidChannelValueInfo______::_1_::catch$0 @ 0x180131C44 (_std--vector_std--vector_HidChannelValueInfo_std--allocator_HidChannelValueInfo____std--allocato.c)
 * Callees:
 *     ??1?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@QEAA@XZ @ 0x1800789B4 (--1-$vector@VHidChannelValueInfo@@V-$allocator@VHidChannelValueInfo@@@std@@@std@@QEAA@XZ.c)
 */

void __fastcall std::vector<std::vector<HidChannelValueInfo>>::_Destroy(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      std::vector<HidChannelValueInfo>::~vector<HidChannelValueInfo>(v4);
      v4 += 24LL;
    }
    while ( v4 != a3 );
  }
}
