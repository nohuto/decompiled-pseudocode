/*
 * XREFs of ?Unregister@InputAttemptedTargetManager@@QEAAXAEBV?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@@Z @ 0x180070D2C
 * Callers:
 *     ?OnDisconnected@InputAttemptedDeliveryClientProxy@@UEAAJXZ @ 0x180070650 (-OnDisconnected@InputAttemptedDeliveryClientProxy@@UEAAJXZ.c)
 * Callees:
 *     ??4?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180070BA8 (--4-$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?erase@?$vector@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x180070DBC (-erase@-$vector@V-$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@V-$allocator@V.c)
 */

__int64 __fastcall InputAttemptedTargetManager::Unregister(__int64 a1, _QWORD *a2)
{
  __int64 *v2; // rsi
  __int64 v3; // r15
  __int64 *v4; // rbx
  char *i; // rdi
  char v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(__int64 **)(a1 + 24);
  v3 = a1 + 16;
  v4 = *(__int64 **)(a1 + 16);
  if ( v4 != v2 )
  {
    do
    {
      if ( *v4 == *a2 )
        break;
      ++v4;
    }
    while ( v4 != v2 );
    if ( v4 != v2 )
    {
      for ( i = (char *)(v4 + 1); i != (char *)v2; i += 8 )
      {
        if ( *(_QWORD *)i != *a2 )
          Microsoft::WRL::ComPtr<BamoInputAttemptedDeliveryClientProxy>::operator=(v4++, i);
      }
    }
  }
  return std::vector<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy>>::erase(v3, &v8, v4, v2);
}
