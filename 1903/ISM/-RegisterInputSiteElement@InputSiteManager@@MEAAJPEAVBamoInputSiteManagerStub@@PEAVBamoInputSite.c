/*
 * XREFs of ?RegisterInputSiteElement@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoInputSiteElementProxy@@@Z @ 0x180005E50
 * Callers:
 *     <none>
 * Callees:
 *     ?AssociateWithInputSite@InputSiteElementProxy@@QEAAXAEBV?$ComPtr@VInputSite@@@WRL@Microsoft@@@Z @ 0x180005F70 (-AssociateWithInputSite@InputSiteElementProxy@@QEAAXAEBV-$ComPtr@VInputSite@@@WRL@Microsoft@@@Z.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x180026A54 (--$_Emplace_reallocate@V-$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VIn.c)
 *     ?GetOrCreateInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_KK@Z @ 0x18002F654 (-GetOrCreateInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4Inpu.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InputSiteManager::RegisterInputSiteElement(
        InputSiteManager *this,
        struct BamoInputSiteManagerStub *a2,
        struct BamoInputSiteElementProxy *a3)
{
  struct BamoInputSiteElementProxy *v3; // rbx
  int v5; // ebp
  int v6; // edi
  int v7; // eax
  struct BamoInputSiteElementProxy **v8; // rdx
  __int64 v9; // rcx
  struct BamoInputSiteElementProxy *v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF

  v3 = a3;
  v5 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD, struct BamoInputSiteManagerStub *))(**(_QWORD **)(*((_QWORD *)a3 + 4) + 16LL)
                                                                                        + 8LL))(
                     *(_QWORD *)(*((_QWORD *)a3 + 4) + 16LL),
                     a2)
                 + 32);
  v6 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v3 + 1) + 32LL))((__int64)v3 + 8);
  v7 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v3 + 1) + 24LL))((__int64)v3 + 8);
  InputSiteManager::GetOrCreateInputSiteFromId((_DWORD)this, (unsigned int)&v12, v7, v6, v5);
  InputSiteElementProxy::AssociateWithInputSite(v3, &v12);
  v11 = v3;
  (**(void (__fastcall ***)(struct BamoInputSiteElementProxy *))v3)(v3);
  v8 = (struct BamoInputSiteElementProxy **)*((_QWORD *)this + 11);
  if ( *((struct BamoInputSiteElementProxy ***)this + 12) == v8 )
  {
    std::vector<Microsoft::WRL::ComPtr<InputSiteElementProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<InputSiteElementProxy>>(
      (char *)this + 80,
      v8,
      &v11);
    v3 = v11;
  }
  else
  {
    *v8 = 0LL;
    if ( v8 != &v11 )
    {
      *v8 = v3;
      v3 = 0LL;
    }
    *((_QWORD *)this + 11) += 8LL;
  }
  if ( v3 )
    (*(void (__fastcall **)(struct BamoInputSiteElementProxy *))(*(_QWORD *)v3 + 8LL))(v3);
  v9 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return 0LL;
}
