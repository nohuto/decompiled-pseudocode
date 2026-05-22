/*
 * XREFs of ??1?$list@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@2@@std@@QEAA@XZ @ 0x180025774
 * Callers:
 *     ??_EDragNDropProcessor@@EEAAPEAXI@Z @ 0x180022F68 (--_EDragNDropProcessor@@EEAAPEAXI@Z.c)
 *     ??1?$unordered_map@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@@std@@QEAA@XZ @ 0x180023104 (--1-$unordered_map@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@U-$hash@K@std@@U-$equal_to@K.c)
 *     ??_GControllerNavigationManager@@UEAAPEAXI@Z @ 0x1800301F0 (--_GControllerNavigationManager@@UEAAPEAXI@Z.c)
 *     _DragNDropProcessor::DragNDropProcessor_::_1_::dtor$31 @ 0x18012EC82 (_DragNDropProcessor--DragNDropProcessor_--_1_--dtor$31.c)
 *     _ControllerNavigationManager::ControllerNavigationManager_::_1_::dtor$13 @ 0x18012F16F (_ControllerNavigationManager--ControllerNavigationManager_--_1_--dtor$13.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::list<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>::~list<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>(
        __int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rcx
  _QWORD *v4; // rsi
  __int64 v5; // rcx

  v2 = **(_QWORD ***)a1;
  **(_QWORD **)a1 = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  v3 = *(_QWORD **)a1;
  if ( v2 != v3 )
  {
    do
    {
      v4 = (_QWORD *)*v2;
      v5 = v2[3];
      if ( v5 )
      {
        v2[3] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      }
      operator delete(v2, (const struct std::nothrow_t *)0x20);
      v2 = v4;
      v3 = *(_QWORD **)a1;
    }
    while ( v4 != *(_QWORD **)a1 );
  }
  operator delete(v3, (const struct std::nothrow_t *)0x20);
}
