/*
 * XREFs of ?ChangeConstantForDeviceId@MPCConstantManager@@QEAAJKW4InputType@@PEBGV?$variant@K_NM@std@@@Z @ 0x1800481F0
 * Callers:
 *     ?UpdateConstantForDevice@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@IW4InputType@@PEBGAEBUtagPROPVARIANT@@PEAVBamoAsyncHRESULTProxy@@@Z @ 0x180048B30 (-UpdateConstantForDevice@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@IW4Input.c)
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800278A4 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?AddDeviceId@MPCConstantManager@@AEAAXW4InputType@@K@Z @ 0x1800482E4 (-AddDeviceId@MPCConstantManager@@AEAAXW4InputType@@K@Z.c)
 *     ?VerifyConstantTypeMatches@MPCConstantManager@@QEAA_NW4InputType@@PEBGV?$variant@K_NM@std@@@Z @ 0x180048A78 (-VerifyConstantTypeMatches@MPCConstantManager@@QEAA_NW4InputType@@PEBGV-$variant@K_NM@std@@@Z.c)
 *     ??A?$map@KV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@2@@std@@QEAAAEAV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@1@AEBK@Z @ 0x18004950C (--A-$map@KV-$map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$variant@K_NM@2.c)
 *     ??A?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@QEAAAEAV?$variant@K_NM@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180049594 (--A-$map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$variant@K_NM@2@U-$less.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18004B650 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCConstantManager::ChangeConstantForDeviceId(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        void *a4,
        __int64 a5)
{
  __int64 *v9; // rax
  __int64 *v10; // rcx
  __int64 *v11; // rdx
  int v12; // eax
  _BYTE v14[32]; // [rsp+30h] [rbp-58h] BYREF

  if ( !(unsigned __int8)MPCConstantManager::VerifyConstantTypeMatches(a1, a3) )
    return 2147942487LL;
  v9 = *(__int64 **)(a1 + 56);
  v10 = (__int64 *)v9[1];
  v11 = v9;
  if ( *((_BYTE *)v10 + 25) )
    goto LABEL_10;
  do
  {
    if ( *((_DWORD *)v10 + 8) >= a2 )
    {
      v11 = v10;
      v10 = (__int64 *)*v10;
    }
    else
    {
      v10 = (__int64 *)v10[2];
    }
  }
  while ( !*((_BYTE *)v10 + 25) );
  if ( v11 == v9 || a2 < *((_DWORD *)v11 + 8) )
LABEL_10:
    v11 = *(__int64 **)(a1 + 56);
  if ( v11 == v9 )
    MPCConstantManager::AddDeviceId(a1, a3);
  std::wstring::wstring(v14, a4);
  v12 = std::map<unsigned long,std::map<std::wstring,std::variant<unsigned long,bool,float>>>::operator[]((int)a1 + 56);
  *(_QWORD *)std::map<std::wstring,std::variant<unsigned long,bool,float>>::operator[](v12) = a5;
  std::wstring::~wstring((__int64)v14);
  return 0LL;
}
