/*
 * XREFs of ??1?$vector@U?$pair@KPEAUIInputProcessor@@@std@@V?$allocator@U?$pair@KPEAUIInputProcessor@@@std@@@2@@std@@QEAA@XZ @ 0x18009265C
 * Callers:
 *     _InputStateManager::InputStateManager_::_1_::dtor$4 @ 0x18003CBB8 (_InputStateManager--InputStateManager_--_1_--dtor$4.c)
 *     _SystemCursorService::SystemCursorService_::_1_::dtor$3 @ 0x1800CBD5D (_SystemCursorService--SystemCursorService_--_1_--dtor$3.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverClient::SpatialGraphDriverClient_::_1_::dtor$7 @ 0x180151128 (_Windows--Internal--Holographic--SpatialGraphDriverClient--SpatialGraphDriverClient_ea_180151128.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<std::pair<unsigned long,IInputProcessor *>>::~vector<std::pair<unsigned long,IInputProcessor *>>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF0uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
