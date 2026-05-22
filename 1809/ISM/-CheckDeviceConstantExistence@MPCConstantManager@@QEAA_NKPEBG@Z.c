/*
 * XREFs of ?CheckDeviceConstantExistence@MPCConstantManager@@QEAA_NKPEBG@Z @ 0x180048964
 * Callers:
 *     ?RemoveConstantFromDeviceId@MPCConstantManager@@QEAAXKPEBG@Z @ 0x180048458 (-RemoveConstantFromDeviceId@MPCConstantManager@@QEAAXKPEBG@Z.c)
 *     ?GetPROPVARIANT@MPCConstantManager@@QEAA?AV?$optional@UtagPROPVARIANT@@@std@@KW4InputType@@PEBG@Z @ 0x180048F44 (-GetPROPVARIANT@MPCConstantManager@@QEAA-AV-$optional@UtagPROPVARIANT@@@std@@KW4InputType@@PEBG@.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@PEBG@Z @ 0x1800F3C58 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@PEBG@Z.c)
 *     ??$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@PEBG@Z @ 0x1800F3DD4 (--$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@PEBG@Z.c)
 *     ??$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@PEBG@Z @ 0x1800F41BC (--$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@PEBG@Z.c)
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800278A4 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?CheckIdExistence@MPCConstantManager@@QEAA_NK@Z @ 0x180048778 (-CheckIdExistence@MPCConstantManager@@QEAA_NK@Z.c)
 *     ??A?$map@KV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@2@@std@@QEAAAEAV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@1@AEBK@Z @ 0x18004950C (--A-$map@KV-$map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$variant@K_NM@2.c)
 *     ??$_Eqrange@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@IEBA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@@std@@V12@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180049D4C (--$_Eqrange@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Tree@V-$_Tmap_trai.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18004B650 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall MPCConstantManager::CheckDeviceConstantExistence(
        MPCConstantManager *this,
        unsigned int a2,
        unsigned __int16 *a3)
{
  int v4; // esi
  char v5; // bl
  char v6; // di
  __int64 v7; // rax
  __int64 *v8; // rax
  __int64 v9; // r8
  __int64 **v10; // rcx
  __int64 *j; // rdx
  __int64 *i; // rcx
  __int64 *v14; // [rsp+30h] [rbp-58h] BYREF
  __int64 *v15; // [rsp+38h] [rbp-50h]
  __int64 v16; // [rsp+40h] [rbp-48h]
  _BYTE v17[32]; // [rsp+48h] [rbp-40h] BYREF

  v16 = -2LL;
  v4 = (int)this;
  v5 = 0;
  v6 = 0;
  if ( MPCConstantManager::CheckIdExistence(this, a2) )
  {
    std::wstring::wstring(v17, a3);
    v6 = 1;
    v7 = std::map<unsigned long,std::map<std::wstring,std::variant<unsigned long,bool,float>>>::operator[](v4 + 56);
    std::_Tree<std::_Tmap_traits<std::wstring,std::variant<unsigned long,bool,float>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>,0>>::_Eqrange<std::wstring>(
      v7,
      &v14,
      v17);
    v8 = v14;
    v9 = 0LL;
    if ( v14 != v15 )
    {
      do
      {
        ++v9;
        if ( !*((_BYTE *)v8 + 25) )
        {
          v10 = (__int64 **)v8[2];
          if ( *((_BYTE *)v10 + 25) )
          {
            for ( i = (__int64 *)v8[1]; !*((_BYTE *)i + 25) && v8 == (__int64 *)i[2]; i = (__int64 *)i[1] )
              v8 = i;
            v8 = i;
          }
          else
          {
            v8 = (__int64 *)v8[2];
            for ( j = *v10; !*((_BYTE *)j + 25); j = (__int64 *)*j )
              v8 = j;
          }
        }
      }
      while ( v8 != v15 );
      if ( v9 )
        v5 = 1;
    }
  }
  if ( (v6 & 1) != 0 )
    std::wstring::~wstring((__int64)v17);
  return v5;
}
