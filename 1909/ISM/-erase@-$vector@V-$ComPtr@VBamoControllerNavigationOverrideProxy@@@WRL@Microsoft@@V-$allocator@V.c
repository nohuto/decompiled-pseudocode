/*
 * XREFs of ?erase@?$vector@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x180070B7C
 * Callers:
 *     ?Unregister@InputAttemptedTargetManager@@QEAAXAEBV?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@@Z @ 0x180070AEC (-Unregister@InputAttemptedTargetManager@@QEAAXAEBV-$ComPtr@VBamoInputAttemptedDeliveryClientProx.c)
 *     ?OverrideRemoved@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x180072DC8 (-OverrideRemoved@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationOverrideProxy@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180070968 (--4-$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 */

__int64 **__fastcall std::vector<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy>>::erase(
        __int64 a1,
        __int64 **a2,
        __int64 *a3,
        char *a4)
{
  char *v4; // rdi
  char *v8; // rbp
  __int64 *v9; // rsi
  __int64 *i; // rdi
  __int64 v11; // rcx
  __int64 **result; // rax

  v4 = a4;
  if ( a3 != (__int64 *)a4 )
  {
    v8 = *(char **)(a1 + 8);
    v9 = a3;
    if ( a4 != v8 )
    {
      do
      {
        Microsoft::WRL::ComPtr<BamoInputAttemptedDeliveryClientProxy>::operator=(v9++, v4);
        v4 += 8;
      }
      while ( v4 != v8 );
      v8 = *(char **)(a1 + 8);
    }
    for ( i = v9; i != (__int64 *)v8; ++i )
    {
      v11 = *i;
      if ( *i )
      {
        *i = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      }
    }
    *(_QWORD *)(a1 + 8) = v9;
  }
  result = a2;
  *a2 = a3;
  return result;
}
