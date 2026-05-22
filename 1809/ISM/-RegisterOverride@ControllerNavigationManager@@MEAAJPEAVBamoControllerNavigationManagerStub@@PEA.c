/*
 * XREFs of ?RegisterOverride@ControllerNavigationManager@@MEAAJPEAVBamoControllerNavigationManagerStub@@PEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x180030A30
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x18001E3A8 (--$_Emplace_reallocate@V-$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VIn.c)
 *     ?SetCurrentStateWithOverride@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x180030ADC (-SetCurrentStateWithOverride@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverr.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ControllerNavigationManager::RegisterOverride(
        ControllerNavigationManager *this,
        struct BamoControllerNavigationManagerStub *a2,
        struct BamoControllerNavigationOverrideProxy *a3)
{
  struct BamoControllerNavigationOverrideProxy *v5; // rbx
  char *v6; // rdx
  struct BamoControllerNavigationOverrideProxy *v8; // [rsp+40h] [rbp+8h] BYREF

  v5 = a3;
  v8 = a3;
  if ( a3 )
    (**(void (__fastcall ***)(struct BamoControllerNavigationOverrideProxy *, struct BamoControllerNavigationManagerStub *))a3)(
      a3,
      a2);
  v6 = (char *)*((_QWORD *)this + 26);
  if ( *((char **)this + 27) == v6 )
  {
    std::vector<Microsoft::WRL::ComPtr<InputSiteElementProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<InputSiteElementProxy>>(
      (char **)this + 25,
      v6,
      (char *)&v8);
    v5 = v8;
  }
  else
  {
    *(_QWORD *)v6 = 0LL;
    if ( v6 != (char *)&v8 )
    {
      *(_QWORD *)v6 = a3;
      v5 = 0LL;
    }
    *((_QWORD *)this + 26) += 8LL;
  }
  if ( v5 )
    (*(void (__fastcall **)(struct BamoControllerNavigationOverrideProxy *))(*(_QWORD *)v5 + 8LL))(v5);
  ControllerNavigationManager::SetCurrentStateWithOverride(this, a3);
  return 0LL;
}
