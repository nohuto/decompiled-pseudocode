/*
 * XREFs of ??$_Eqrange@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@IEBA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@@std@@V12@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180049D4C
 * Callers:
 *     ?RemoveConstantFromDeviceId@MPCConstantManager@@QEAAXKPEBG@Z @ 0x180048458 (-RemoveConstantFromDeviceId@MPCConstantManager@@QEAAXKPEBG@Z.c)
 *     ?CheckGenericConstantExistence@MPCConstantManager@@QEAA_NW4InputType@@PEBG@Z @ 0x180048850 (-CheckGenericConstantExistence@MPCConstantManager@@QEAA_NW4InputType@@PEBG@Z.c)
 *     ?CheckDeviceConstantExistence@MPCConstantManager@@QEAA_NKPEBG@Z @ 0x180048964 (-CheckDeviceConstantExistence@MPCConstantManager@@QEAA_NKPEBG@Z.c)
 * Callees:
 *     ??R?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@QEBA_NAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@0@Z @ 0x180049E2C (--R-$less@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@std@@QEBA_NAEBV-$bas.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<std::wstring,std::variant<unsigned long,bool,float>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>,0>>::_Eqrange<std::wstring>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 *v3; // rbp
  __int64 *v6; // rdi
  __int64 **v7; // r14
  __int64 *v8; // rbx
  __int64 *v9; // rbx
  _QWORD *result; // rax

  v3 = (__int64 *)*a1;
  v6 = (__int64 *)*a1;
  v7 = (__int64 **)(*a1 + 8LL);
  v8 = *v7;
  while ( !*((_BYTE *)v8 + 25) )
  {
    if ( (unsigned __int8)std::less<std::wstring>::operator()(a1, v8 + 4, a3) )
    {
      v8 = (__int64 *)v8[2];
    }
    else
    {
      if ( *((_BYTE *)v6 + 25) && (unsigned __int8)std::less<std::wstring>::operator()(a1, a3, v8 + 4) )
        v6 = v8;
      v3 = v8;
      v8 = (__int64 *)*v8;
    }
  }
  if ( !*((_BYTE *)v6 + 25) )
    v7 = (__int64 **)v6;
  v9 = *v7;
  while ( !*((_BYTE *)v9 + 25) )
  {
    if ( (unsigned __int8)std::less<std::wstring>::operator()(a1, a3, v9 + 4) )
    {
      v6 = v9;
      v9 = (__int64 *)*v9;
    }
    else
    {
      v9 = (__int64 *)v9[2];
    }
  }
  result = a2;
  *a2 = v3;
  a2[1] = v6;
  return result;
}
