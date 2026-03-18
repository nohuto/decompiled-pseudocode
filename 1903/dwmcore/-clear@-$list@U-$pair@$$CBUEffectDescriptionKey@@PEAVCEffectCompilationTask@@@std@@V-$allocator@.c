/*
 * XREFs of ?clear@?$list@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@2@@std@@QEAAXXZ @ 0x18018C1F8
 * Callers:
 *     ??1CEffectCompilationService@@UEAA@XZ @ 0x18018C020 (--1CEffectCompilationService@@UEAA@XZ.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBUEffectDescriptionKey@@@Z @ 0x18018C380 (-erase@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V_ea_18018C380.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::list<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>::clear(__int64 a1)
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
      std::_Deallocate<16,0>(v3, 0x28uLL);
      v3 = v4;
    }
    while ( v4 != *(_QWORD **)a1 );
  }
}
