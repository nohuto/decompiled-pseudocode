/*
 * XREFs of ??1?$vector@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800F202C
 * Callers:
 *     _CDeviceGraphStore::GetAllStreamGroups_::_1_::dtor$0 @ 0x1800F2DFF (_CDeviceGraphStore--GetAllStreamGroups_--_1_--dtor$0.c)
 *     _CDeviceGraphStore::GetConnectedStreamGroups_::_1_::dtor$0 @ 0x1800F325F (_CDeviceGraphStore--GetConnectedStreamGroups_--_1_--dtor$0.c)
 *     _CDeviceGraphStore::GetSubmixHelper_::_1_::dtor$0 @ 0x1800F3A63 (_CDeviceGraphStore--GetSubmixHelper_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180044928 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>::~vector<Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>(
        __int64 a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // rsi
  __int64 v4; // rcx

  v2 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(__int64 **)(a1 + 8);
    if ( v2 != v3 )
    {
      do
      {
        v4 = *v2;
        if ( *v2 )
        {
          *v2 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        }
        ++v2;
      }
      while ( v2 != v3 );
      v2 = *(__int64 **)a1;
    }
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
