/*
 * XREFs of ?RegisterOverride@ControllerNavigationManager@@MEAAJPEAVBamoControllerNavigationManagerStub@@PEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x180073BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180002978 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x180071B60 (--$_Emplace_reallocate@V-$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@-$vect.c)
 *     ?SetCurrentStateWithOverride@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x180073E40 (-SetCurrentStateWithOverride@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverr.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ControllerNavigationManager::RegisterOverride(
        ControllerNavigationManager *this,
        struct BamoControllerNavigationManagerStub *a2,
        struct BamoControllerNavigationOverrideProxy *a3)
{
  char *v5; // rdi
  struct BamoControllerNavigationOverrideProxy *v6; // rbx
  char *v7; // rdx
  struct BamoControllerNavigationOverrideProxy *v9; // [rsp+40h] [rbp+8h] BYREF

  v5 = (char *)this + 200;
  v6 = a3;
  v9 = a3;
  Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v9);
  v7 = (char *)*((_QWORD *)v5 + 1);
  if ( *((char **)v5 + 2) == v7 )
  {
    std::vector<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy>>(
      (char **)v5,
      v7,
      (char *)&v9);
    v6 = v9;
  }
  else
  {
    *(_QWORD *)v7 = 0LL;
    if ( v7 != (char *)&v9 )
    {
      *(_QWORD *)v7 = v6;
      v6 = 0LL;
    }
    *((_QWORD *)v5 + 1) += 8LL;
  }
  if ( v6 )
    (*(void (__fastcall **)(struct BamoControllerNavigationOverrideProxy *))(*(_QWORD *)v6 + 8LL))(v6);
  ControllerNavigationManager::SetCurrentStateWithOverride(this, a3);
  return 0LL;
}
