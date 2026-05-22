/*
 * XREFs of ??1?$unordered_map@KUVelocityData@DragNDropProcessor@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUVelocityData@DragNDropProcessor@@@std@@@4@@std@@QEAA@XZ @ 0x18006A46C
 * Callers:
 *     _DragNDropProcessor::DragNDropProcessor_::_1_::dtor$3 @ 0x18006A386 (_DragNDropProcessor--DragNDropProcessor_--_1_--dtor$3.c)
 *     _DragNDropProcessor::DragNDropProcessor_::_1_::dtor$7 @ 0x18006A3CC (_DragNDropProcessor--DragNDropProcessor_--_1_--dtor$7.c)
 *     _DragNDropProcessorLegacy::DragNDropProcessorLegacy_::_1_::dtor$7 @ 0x1800FE393 (_DragNDropProcessorLegacy--DragNDropProcessorLegacy_--_1_--dtor$7.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?clear@?$list@U?$pair@$$CBKUVelocityData@DragNDropProcessor@@@std@@V?$allocator@U?$pair@$$CBKUVelocityData@DragNDropProcessor@@@std@@@2@@std@@QEAAXXZ @ 0x18006DC48 (-clear@-$list@U-$pair@$$CBKUVelocityData@DragNDropProcessor@@@std@@V-$allocator@U-$pair@$$CBKUVe.c)
 */

void __fastcall std::unordered_map<unsigned long,DragNDropProcessor::VelocityData>::~unordered_map<unsigned long,DragNDropProcessor::VelocityData>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 24);
  if ( v2 )
  {
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 40) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  std::list<std::pair<unsigned long const,DragNDropProcessor::VelocityData>>::clear(a1 + 8);
  std::_Deallocate<16,0>(*(void **)(a1 + 8), (const struct std::nothrow_t *)0x30);
}
