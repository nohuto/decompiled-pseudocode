/*
 * XREFs of ?RegisterInputSiteElement@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoInputSiteElementProxy@@@Z @ 0x18001DC70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteType@@_K@Z @ 0x18001D8DC (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteTyp.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x18001E3A8 (--$_Emplace_reallocate@V-$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VIn.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InputSiteManager::RegisterInputSiteElement(
        InputSiteManager *this,
        struct BamoInputSiteManagerStub *a2,
        struct BamoInputSiteElementProxy *a3)
{
  struct BamoInputSiteElementProxy *v3; // rbx
  char *v5; // rsi
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rdi
  struct BamoInputSiteElementProxy **v10; // rdx
  __int64 v11; // rcx
  struct BamoInputSiteElementProxy *v13; // [rsp+50h] [rbp+8h] BYREF
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  v3 = a3;
  v5 = (char *)a3 + 8;
  v6 = (*(__int64 (__fastcall **)(char *, struct BamoInputSiteManagerStub *))(*((_QWORD *)a3 + 1) + 32LL))(
         (char *)a3 + 8,
         a2);
  v7 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v5 + 24LL))(v5);
  InputSiteManager::GetInputSiteFromId((__int64)this, &v14, v7, v6);
  v8 = *((_QWORD *)v3 + 15);
  v9 = v14;
  if ( v8 != v14 )
  {
    if ( v14 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      v8 = *((_QWORD *)v3 + 15);
    }
    *((_QWORD *)v3 + 15) = v9;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  (*(void (__fastcall **)(struct BamoInputSiteElementProxy *))(*(_QWORD *)v3 + 72LL))(v3);
  (*(void (__fastcall **)(struct BamoInputSiteElementProxy *))(*(_QWORD *)v3 + 80LL))(v3);
  (*(void (__fastcall **)(struct BamoInputSiteElementProxy *))(*(_QWORD *)v3 + 88LL))(v3);
  (*(void (__fastcall **)(struct BamoInputSiteElementProxy *))(*(_QWORD *)v3 + 96LL))(v3);
  (*(void (__fastcall **)(struct BamoInputSiteElementProxy *))(*(_QWORD *)v3 + 104LL))(v3);
  (*(void (__fastcall **)(struct BamoInputSiteElementProxy *))(*(_QWORD *)v3 + 112LL))(v3);
  (*(void (__fastcall **)(struct BamoInputSiteElementProxy *))(*(_QWORD *)v3 + 120LL))(v3);
  v13 = v3;
  (**(void (__fastcall ***)(struct BamoInputSiteElementProxy *))v3)(v3);
  v10 = (struct BamoInputSiteElementProxy **)*((_QWORD *)this + 11);
  if ( *((struct BamoInputSiteElementProxy ***)this + 12) == v10 )
  {
    std::vector<Microsoft::WRL::ComPtr<InputSiteElementProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<InputSiteElementProxy>>(
      (char *)this + 80,
      v10,
      &v13);
    v3 = v13;
  }
  else
  {
    *v10 = 0LL;
    if ( v10 != &v13 )
    {
      *v10 = v3;
      v3 = 0LL;
    }
    *((_QWORD *)this + 11) += 8LL;
  }
  if ( v3 )
    (*(void (__fastcall **)(struct BamoInputSiteElementProxy *))(*(_QWORD *)v3 + 8LL))(v3);
  v11 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return 0LL;
}
