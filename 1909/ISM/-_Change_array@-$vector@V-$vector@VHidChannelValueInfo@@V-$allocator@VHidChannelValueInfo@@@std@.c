/*
 * XREFs of ?_Change_array@?$vector@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@V?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@2@@std@@AEAAXQEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@2@_K1@Z @ 0x1800B5AF8
 * Callers:
 *     ??$_Emplace_reallocate@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@?$vector@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@V?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@2@@std@@QEAAPEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1800B19C8 (--$_Emplace_reallocate@V-$vector@VHidChannelValueInfo@@V-$allocator@VHidChannelValueInfo@@@std@@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<std::vector<HidChannelValueInfo>>::_Change_array(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v9; // rbp
  __int64 result; // rax

  v4 = *a1;
  if ( *a1 )
  {
    v9 = a1[1];
    if ( v4 != v9 )
    {
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
      while ( v4 != v9 );
      v4 = *a1;
    }
    std::_Deallocate<16,0>((void *)v4, (const struct std::nothrow_t *)(24 * ((a1[2] - v4) / 24)));
  }
  *a1 = a2;
  result = 3 * a4;
  a1[1] = a2 + 24 * a3;
  a1[2] = a2 + 24 * a4;
  return result;
}
