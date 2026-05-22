/*
 * XREFs of ?ChangeConstantForInputType@MPCConstantManager@@QEAAJW4InputType@@PEBGV?$variant@K_NM@std@@@Z @ 0x180048160
 * Callers:
 *     ?UpdateConstantForType@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEBGAEBUtagPROPVARIANT@@PEAVBamoAsyncHRESULTProxy@@@Z @ 0x180048C90 (-UpdateConstantForType@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@W4InputTyp.c)
 *     ?UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ @ 0x1800F3274 (-UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ.c)
 *     _lambda_8d7d1d3f4a837c513c02674b3d8f019a_::operator() @ 0x1800F38B8 (_lambda_8d7d1d3f4a837c513c02674b3d8f019a_--operator().c)
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800278A4 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?VerifyConstantTypeMatches@MPCConstantManager@@QEAA_NW4InputType@@PEBGV?$variant@K_NM@std@@@Z @ 0x180048A78 (-VerifyConstantTypeMatches@MPCConstantManager@@QEAA_NW4InputType@@PEBGV-$variant@K_NM@std@@@Z.c)
 *     ??A?$map@W4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@U?$less@W4InputType@@@3@V?$allocator@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@3@@std@@QEAAAEAV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@1@AEBW4InputType@@@Z @ 0x180049384 (--A-$map@W4InputType@@V-$map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$va.c)
 *     ??A?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@QEAAAEAV?$variant@K_NM@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180049594 (--A-$map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$variant@K_NM@2@U-$less.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18004B650 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCConstantManager::ChangeConstantForInputType(__int64 a1, __int64 a2, void *a3, __int64 a4)
{
  int v6; // edi
  int v8; // eax
  _BYTE v9[32]; // [rsp+30h] [rbp-48h] BYREF

  v6 = a1;
  if ( !(unsigned __int8)MPCConstantManager::VerifyConstantTypeMatches(a1, a2) )
    return 2147942487LL;
  std::wstring::wstring(v9, a3);
  v8 = std::map<enum InputType,std::map<std::wstring,std::variant<unsigned long,bool,float>>>::operator[](v6 + 72);
  *(_QWORD *)std::map<std::wstring,std::variant<unsigned long,bool,float>>::operator[](v8) = a4;
  std::wstring::~wstring((__int64)v9);
  return 0LL;
}
