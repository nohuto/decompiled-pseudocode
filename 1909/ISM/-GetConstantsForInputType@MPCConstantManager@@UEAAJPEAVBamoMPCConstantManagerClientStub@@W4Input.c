/*
 * XREFs of ?GetConstantsForInputType@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEAVBamoAsyncResult_string_Proxy@@@Z @ 0x180089B00
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckTypeExistence@MPCConstantManager@@QEAA_NW4InputType@@@Z @ 0x180025894 (-CheckTypeExistence@MPCConstantManager@@QEAA_NW4InputType@@@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18006F254 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?GetConstantNamesString@MPCConstantManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4InputType@@@Z @ 0x1800897D8 (-GetConstantNamesString@MPCConstantManager@@AEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allo.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCConstantManager::GetConstantsForInputType(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  const void **v8; // rdx
  unsigned int v9; // ebx
  const void *v10[4]; // [rsp+28h] [rbp-40h] BYREF

  if ( !MPCConstantManager::CheckTypeExistence(a1, a3) )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a4 + 8) + 32LL))(a4 + 8, 2147942487LL);
  MPCConstantManager::GetConstantNamesString(a1, v10, a3);
  v8 = v10;
  if ( v10[3] >= (const void *)8 )
    v8 = (const void **)v10[0];
  v9 = (*(__int64 (__fastcall **)(__int64, const void **))(*(_QWORD *)(a4 + 8) + 24LL))(a4 + 8, v8);
  std::wstring::_Tidy_deallocate((__int64)v10);
  return v9;
}
