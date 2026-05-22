/*
 * XREFs of ?GetActiveInputTypeList@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@PEAVBamoAsyncResult_string_Proxy@@@Z @ 0x180089590
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18006F254 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?GetCurrentInputTypesString@MPCConstantManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x180089BB8 (-GetCurrentInputTypesString@MPCConstantManager@@AEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCConstantManager::GetActiveInputTypeList(
        MPCConstantManager *this,
        struct BamoMPCConstantManagerClientStub *a2,
        struct BamoAsyncResult_string_Proxy *a3)
{
  _QWORD *v4; // rdx
  unsigned int v5; // ebx
  _QWORD v7[4]; // [rsp+28h] [rbp-30h] BYREF

  MPCConstantManager::GetCurrentInputTypesString(this, v7);
  v4 = v7;
  if ( v7[3] >= 8uLL )
    v4 = (_QWORD *)v7[0];
  v5 = (*(__int64 (__fastcall **)(char *, _QWORD *))(*((_QWORD *)a3 + 1) + 24LL))((char *)a3 + 8, v4);
  std::wstring::_Tidy_deallocate((__int64)v7);
  return v5;
}
