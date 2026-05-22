/*
 * XREFs of ?VerifyConstantTypeMatches@MPCConstantManager@@QEAA_NW4InputType@@PEBGV?$variant@K_NM@std@@@Z @ 0x180048A78
 * Callers:
 *     ?ChangeConstantForInputType@MPCConstantManager@@QEAAJW4InputType@@PEBGV?$variant@K_NM@std@@@Z @ 0x180048160 (-ChangeConstantForInputType@MPCConstantManager@@QEAAJW4InputType@@PEBGV-$variant@K_NM@std@@@Z.c)
 *     ?ChangeConstantForDeviceId@MPCConstantManager@@QEAAJKW4InputType@@PEBGV?$variant@K_NM@std@@@Z @ 0x1800481F0 (-ChangeConstantForDeviceId@MPCConstantManager@@QEAAJKW4InputType@@PEBGV-$variant@K_NM@std@@@Z.c)
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800278A4 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?CheckGenericConstantExistence@MPCConstantManager@@QEAA_NW4InputType@@PEBG@Z @ 0x180048850 (-CheckGenericConstantExistence@MPCConstantManager@@QEAA_NW4InputType@@PEBG@Z.c)
 *     ??A?$map@W4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@U?$less@W4InputType@@@3@V?$allocator@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@3@@std@@QEAAAEAV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@1@AEBW4InputType@@@Z @ 0x180049384 (--A-$map@W4InputType@@V-$map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$va.c)
 *     ??A?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@QEAAAEAV?$variant@K_NM@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180049594 (--A-$map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$variant@K_NM@2@U-$less.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18004B650 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall MPCConstantManager::VerifyConstantTypeMatches(__int64 a1, int a2, void *a3, __int64 a4)
{
  int v5; // esi
  bool v6; // bl
  char v7; // di
  int v8; // eax
  _BYTE v10[32]; // [rsp+38h] [rbp-50h] BYREF
  char v11; // [rsp+ACh] [rbp+24h]

  v11 = BYTE4(a4);
  v5 = a1;
  v6 = 0;
  v7 = 0;
  if ( MPCConstantManager::CheckGenericConstantExistence(a1, a2, a3) )
  {
    std::wstring::wstring(v10, a3);
    v7 = 1;
    v8 = std::map<enum InputType,std::map<std::wstring,std::variant<unsigned long,bool,float>>>::operator[](v5 + 72);
    v6 = *(char *)(std::map<std::wstring,std::variant<unsigned long,bool,float>>::operator[](v8) + 4) == (__int64)v11;
  }
  if ( (v7 & 1) != 0 )
    std::wstring::~wstring((__int64)v10);
  return v6;
}
