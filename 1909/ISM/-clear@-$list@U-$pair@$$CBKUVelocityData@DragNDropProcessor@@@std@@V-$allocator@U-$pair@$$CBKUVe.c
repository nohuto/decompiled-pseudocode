/*
 * XREFs of ?clear@?$list@U?$pair@$$CBKUVelocityData@DragNDropProcessor@@@std@@V?$allocator@U?$pair@$$CBKUVelocityData@DragNDropProcessor@@@std@@@2@@std@@QEAAXXZ @ 0x18006DC48
 * Callers:
 *     ??1?$list@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@2@@std@@QEAA@XZ @ 0x18006A3F4 (--1-$list@U-$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@V-$allocator@U-$pair@$$CBKU.c)
 *     ??1?$unordered_map@KUVelocityData@DragNDropProcessor@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUVelocityData@DragNDropProcessor@@@std@@@4@@std@@QEAA@XZ @ 0x18006A46C (--1-$unordered_map@KUVelocityData@DragNDropProcessor@@U-$hash@K@std@@U-$equal_to@K@4@V-$allocato.c)
 *     ??1DragNDropProcessor@@EEAA@XZ @ 0x18006A568 (--1DragNDropProcessor@@EEAA@XZ.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KUVelocityData@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUVelocityData@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x18006DF38 (-erase@-$_Hash@V-$_Umap_traits@KUVelocityData@DragNDropProcessor@@V-$_Uhash_compare_ea_18006DF38.c)
 *     ??1DragNDropProcessorLegacy@@EEAA@XZ @ 0x1800FE3AC (--1DragNDropProcessorLegacy@@EEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::list<std::pair<unsigned long const,DragNDropProcessor::VelocityData>>::clear(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  v1 = *(_QWORD **)a1;
  v3 = **(_QWORD ***)a1;
  *v1 = v1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( v3 != *(_QWORD **)a1 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)0x30);
      v3 = v4;
    }
    while ( v4 != *(_QWORD **)a1 );
  }
}
