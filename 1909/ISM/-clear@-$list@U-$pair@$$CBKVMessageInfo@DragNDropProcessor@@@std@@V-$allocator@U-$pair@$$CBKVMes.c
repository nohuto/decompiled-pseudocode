/*
 * XREFs of ?clear@?$list@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@V?$allocator@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@2@@std@@QEAAXXZ @ 0x18006DD1C
 * Callers:
 *     ??1?$list@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@V?$allocator@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@2@@std@@QEAA@XZ @ 0x18006A444 (--1-$list@U-$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@V-$allocator@U-$pair@$$CBKVMessage.c)
 *     ??1?$unordered_map@KVMessageInfo@DragNDropProcessor@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@4@@std@@QEAA@XZ @ 0x18006A4C0 (--1-$unordered_map@KVMessageInfo@DragNDropProcessor@@U-$hash@K@std@@U-$equal_to@K@4@V-$allocator.c)
 *     ??1DragNDropProcessor@@EEAA@XZ @ 0x18006A568 (--1DragNDropProcessor@@EEAA@XZ.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KVMessageInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x18006E200 (-erase@-$_Hash@V-$_Umap_traits@KVMessageInfo@DragNDropProcessor@@V-$_Uhash_compare@_ea_18006E200.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1MessageInfo@DragNDropProcessor@@QEAA@XZ @ 0x18006A7AC (--1MessageInfo@DragNDropProcessor@@QEAA@XZ.c)
 */

void __fastcall std::list<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>>::clear(__int64 a1)
{
  _QWORD *v2; // rsi
  _QWORD *v3; // rbx

  v2 = **(_QWORD ***)a1;
  **(_QWORD **)a1 = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( v2 != *(_QWORD **)a1 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      DragNDropProcessor::MessageInfo::~MessageInfo((DragNDropProcessor::MessageInfo *)(v2 + 3));
      std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x50);
      v2 = v3;
    }
    while ( v3 != *(_QWORD **)a1 );
  }
}
