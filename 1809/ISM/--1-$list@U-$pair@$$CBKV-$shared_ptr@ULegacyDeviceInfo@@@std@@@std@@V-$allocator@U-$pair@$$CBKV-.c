/*
 * XREFs of ??1?$list@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x180063F34
 * Callers:
 *     ??_ESpatialRimDeviceCollection@@UEAAPEAXI@Z @ 0x180061ED0 (--_ESpatialRimDeviceCollection@@UEAAPEAXI@Z.c)
 *     ??1?$unordered_map@KV?$shared_ptr@ULegacyDeviceInfo@@@std@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x180062038 (--1-$unordered_map@KV-$shared_ptr@ULegacyDeviceInfo@@@std@@U-$hash@K@2@U-$equal_to@K@2@V-$alloca.c)
 *     _SpatialRimDeviceCollection::SpatialRimDeviceCollection_::_1_::dtor$8 @ 0x180131188 (_SpatialRimDeviceCollection--SpatialRimDeviceCollection_--_1_--dtor$8.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::list<std::pair<unsigned long const,std::shared_ptr<LegacyDeviceInfo>>>::~list<std::pair<unsigned long const,std::shared_ptr<LegacyDeviceInfo>>>(
        __int64 a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rcx
  volatile signed __int32 *v4; // rbx
  _QWORD *v5; // rbp

  v2 = **(_QWORD ***)a1;
  **(_QWORD **)a1 = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  v3 = *(_QWORD **)a1;
  if ( v2 != v3 )
  {
    do
    {
      v4 = (volatile signed __int32 *)v2[4];
      v5 = (_QWORD *)*v2;
      if ( v4 )
      {
        if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
          if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
        }
      }
      operator delete(v2, (const struct std::nothrow_t *)0x28);
      v3 = *(_QWORD **)a1;
      v2 = v5;
    }
    while ( v5 != *(_QWORD **)a1 );
  }
  operator delete(v3, (const struct std::nothrow_t *)0x28);
}
