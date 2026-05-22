/*
 * XREFs of ??1?$vector@U?$pair@KPEAUIInputProcessor@@@std@@V?$allocator@U?$pair@KPEAUIInputProcessor@@@std@@@2@@std@@QEAA@XZ @ 0x180054184
 * Callers:
 *     ??1SpatialGraphDriverClient@Holographic@Internal@Windows@@EEAA@XZ @ 0x1801117F0 (--1SpatialGraphDriverClient@Holographic@Internal@Windows@@EEAA@XZ.c)
 *     _InputStateManager::InputStateManager_::_1_::dtor$4 @ 0x180130778 (_InputStateManager--InputStateManager_--_1_--dtor$4.c)
 *     _std::_Ref_count_obj_SystemCursorService_::_Ref_count_obj_SystemCursorService__SystemCursorController_____ptr64_unsigned_long_&___ptr64__::_1_::dtor$3 @ 0x1801329A2 (_std--_Ref_count_obj_SystemCursorService_--_Ref_count_obj_SystemCursorService__Syst_ea_1801329A2.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverClient::SpatialGraphDriverClient_::_1_::dtor$7 @ 0x180136092 (_Windows--Internal--Holographic--SpatialGraphDriverClient--SpatialGraphDriverClient_ea_180136092.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::vector<std::pair<unsigned long,IInputProcessor *>>::~vector<std::pair<unsigned long,IInputProcessor *>>(
        __int64 a1)
{
  char *v2; // rcx
  const struct std::nothrow_t *v3; // rdx
  char *v4; // r8
  char *v5; // rcx

  v2 = *(char **)a1;
  if ( v2 )
  {
    v3 = (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( (unsigned __int64)v3 >= 0x1000 )
    {
      v4 = (char *)*((_QWORD *)v2 - 1);
      v3 = (const struct std::nothrow_t *)((char *)v3 + 39);
      v5 = (char *)(v2 - v4);
      if ( (unsigned __int64)(v5 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v5, v3);
        JUMPOUT(0x1800541E0LL);
      }
      v2 = v4;
    }
    operator delete(v2, v3);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
