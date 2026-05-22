/*
 * XREFs of ??1?$vector@V?$shared_ptr@ULegacyDeviceInfo@@@std@@V?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@2@@std@@QEAA@XZ @ 0x180093D28
 * Callers:
 *     _MPCRawInputProvider::FlushQueuedDeviceChanges_::_1_::dtor$0 @ 0x180094554 (_MPCRawInputProvider--FlushQueuedDeviceChanges_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002B220 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::vector<std::shared_ptr<LegacyDeviceInfo>>::~vector<std::shared_ptr<LegacyDeviceInfo>>(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v3; // rsi
  std::_Ref_count_base *v4; // rcx

  v1 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(_QWORD **)(a1 + 8);
    if ( v1 != v3 )
    {
      do
      {
        v4 = (std::_Ref_count_base *)v1[1];
        if ( v4 )
          std::_Ref_count_base::_Decref(v4);
        v1 += 2;
      }
      while ( v1 != v3 );
      v1 = *(_QWORD **)a1;
    }
    std::_Deallocate<16,0>(
      v1,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v1) & 0xFFFFFFFFFFFFFFF0uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
