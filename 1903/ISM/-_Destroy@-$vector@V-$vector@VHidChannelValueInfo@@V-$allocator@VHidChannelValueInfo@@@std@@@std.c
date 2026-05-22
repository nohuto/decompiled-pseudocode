/*
 * XREFs of ?_Destroy@?$vector@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@V?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@2@@std@@AEAAXPEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@2@0@Z @ 0x1800B5DD0
 * Callers:
 *     _std::vector_std::vector_HidChannelValueInfo_std::allocator_HidChannelValueInfo____std::allocator_std::vector_HidChannelValueInfo_std::allocator_HidChannelValueInfo_______::_Emplace_reallocate_std::vector_HidChannelValueInfo_std::allocator_HidChannelValueInfo______::_1_::catch$215 @ 0x1800B1D7B (_std--vector_std--vector_HidChannelValueInfo_std--allocator_HidChannelValueInfo____std--allocato.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<std::vector<HidChannelValueInfo>>::_Destroy(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      if ( *(_QWORD *)v4 )
      {
        std::_Deallocate<16,0>(
          *(void **)v4,
          (const struct std::nothrow_t *)(72 * ((*(_QWORD *)(v4 + 16) - *(_QWORD *)v4) / 72LL)));
        *(_QWORD *)v4 = 0LL;
        *(_QWORD *)(v4 + 8) = 0LL;
        *(_QWORD *)(v4 + 16) = 0LL;
      }
      v4 += 24LL;
    }
    while ( v4 != a3 );
  }
}
