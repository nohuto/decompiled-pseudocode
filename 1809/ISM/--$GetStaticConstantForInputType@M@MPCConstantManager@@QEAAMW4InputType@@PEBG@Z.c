/*
 * XREFs of ??$GetStaticConstantForInputType@M@MPCConstantManager@@QEAAMW4InputType@@PEBG@Z @ 0x1800F4328
 * Callers:
 *     ?UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ @ 0x1800F3274 (-UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800278A4 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?CheckGenericConstantExistence@MPCConstantManager@@QEAA_NW4InputType@@PEBG@Z @ 0x180048850 (-CheckGenericConstantExistence@MPCConstantManager@@QEAA_NW4InputType@@PEBG@Z.c)
 *     ??0bad_variant_access@std@@QEAA@XZ @ 0x18004915C (--0bad_variant_access@std@@QEAA@XZ.c)
 *     ??A?$map@W4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@U?$less@W4InputType@@@3@V?$allocator@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@3@@std@@QEAAAEAV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@1@AEBW4InputType@@@Z @ 0x180049384 (--A-$map@W4InputType@@V-$map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$va.c)
 *     ??A?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@QEAAAEAV?$variant@K_NM@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180049594 (--A-$map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$variant@K_NM@2@U-$less.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18004B650 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18012C47A (_CxxThrowException_0.c)
 */

// Hidden C++ exception states: #wind=1
__m128 __fastcall MPCConstantManager::GetStaticConstantForInputType<float>(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 v5; // r8
  const char *v6; // r9
  __int64 *v7; // rax
  __int64 *v8; // rax
  __int128 v9; // xmm6
  int v11[4]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD pExceptionObject[4]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v13[4]; // [rsp+50h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  pExceptionObject[3] = -2LL;
  v11[0] = 0x2000;
  if ( !MPCConstantManager::CheckGenericConstantExistence(a1, 0x2000, a3) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x30,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\inc\\MPCConstantManager.inl",
      v6);
    JUMPOUT(0x1800F4422LL);
  }
  std::wstring::wstring((char *)v13, a3, v5);
  v7 = (__int64 *)std::map<enum InputType,std::map<std::wstring,std::variant<unsigned long,bool,float>>>::operator[](
                    a1 + 72,
                    v11);
  v8 = std::map<std::wstring,std::variant<unsigned long,bool,float>>::operator[](v7, v13);
  if ( *((_BYTE *)v8 + 4) != 2 )
  {
    memset(pExceptionObject, 0, 24);
    std::bad_variant_access::bad_variant_access((std::bad_variant_access *)pExceptionObject);
    throw (std::bad_variant_access *)pExceptionObject;
  }
  v9 = *(unsigned int *)v8;
  std::wstring::~wstring((__int64)v13);
  return (__m128)v9;
}
