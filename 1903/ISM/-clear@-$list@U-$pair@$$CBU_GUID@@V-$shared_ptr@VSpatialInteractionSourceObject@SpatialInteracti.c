/*
 * XREFs of ?clear@?$list@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@2@@std@@QEAAXXZ @ 0x1800F0228
 * Callers:
 *     ??1?$list@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800EAB2C (--1-$list@U-$pair@$$CBU_GUID@@V-$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@.c)
 *     ??1SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@MEAA@XZ @ 0x1800EAC1C (--1SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@MEAA@XZ.c)
 *     ?RemoveAllObjects@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@IEAAJXZ @ 0x1800ED1AC (-RemoveAllObjects@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@IEAAJXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002B220 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::list<std::pair<_GUID const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>>>::clear(
        __int64 a1)
{
  _QWORD *v2; // rbx
  std::_Ref_count_base *v3; // rcx
  _QWORD *v4; // rsi

  v2 = **(_QWORD ***)a1;
  **(_QWORD **)a1 = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( v2 != *(_QWORD **)a1 )
  {
    do
    {
      v3 = (std::_Ref_count_base *)v2[5];
      v4 = (_QWORD *)*v2;
      if ( v3 )
        std::_Ref_count_base::_Decref(v3);
      std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x30);
      v2 = v4;
    }
    while ( v4 != *(_QWORD **)a1 );
  }
}
