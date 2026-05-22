/*
 * XREFs of ?_Destroy@?$vector@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@std@@@std@@AEAAXPEAV?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@0@Z @ 0x180066694
 * Callers:
 *     _std::vector_Microsoft::WRL::ComPtr_BamoInputAttemptedDeliveryClientProxy__std::allocator_Microsoft::WRL::ComPtr_BamoInputAttemptedDeliveryClientProxy_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_BamoInputAttemptedDeliveryClientProxy__const_&__::_1_::catch$57 @ 0x18003AA44 (_std--vector_Microsoft--WRL--ComPtr_BamoInputAttemptedDeliveryClientProxy__std--allocator_Micros.c)
 *     _std::vector_Microsoft::WRL::ComPtr_InputSiteElementProxy__std::allocator_Microsoft::WRL::ComPtr_InputSiteElementProxy_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_InputSiteElementProxy____::_1_::catch$57 @ 0x18003D9FB (_std--vector_Microsoft--WRL--ComPtr_InputSiteElementProxy__std--allocator_Microsoft--WRL--ComPtr.c)
 *     _std::vector_Microsoft::WRL::ComPtr_BamoControllerNavigationOverrideProxy__std::allocator_Microsoft::WRL::ComPtr_BamoControllerNavigationOverrideProxy_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_BamoControllerNavigationOverrideProxy____::_1_::catch$32 @ 0x180071CF6 (_std--vector_Microsoft--WRL--ComPtr_BamoControllerNavigationOverrideProxy__std--allocator_Micros.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy>>::_Destroy(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v4; // rbx
  __int64 v5; // rcx
  __int64 result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      v5 = *v4;
      if ( *v4 )
      {
        *v4 = 0LL;
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      }
      ++v4;
    }
    while ( v4 != a3 );
  }
  return result;
}
