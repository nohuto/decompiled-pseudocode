/*
 * XREFs of ?lower_bound@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@$0A@@std@@@std@@QEBA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18013D188
 * Callers:
 *     ?GetEndpointInterfaceId@AtmosCheck@@AEBAJPEBGPEAPEAG@Z @ 0x180139104 (-GetEndpointInterfaceId@AtmosCheck@@AEBAJPEBGPEAPEAG@Z.c)
 * Callees:
 *     ??R?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEBA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@0@Z @ 0x1801379DC (--R-$_Uhash_compare@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$hash@V-$bas.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<std::wstring,std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::lower_bound(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v4; // r10
  __int64 v6; // r9
  unsigned __int64 v7; // r8
  __int64 v8; // rdx
  unsigned __int64 v9; // r10
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rdi
  __int64 v13; // rbp
  __int64 i; // r11
  __int64 v15; // rax
  __int64 *v16; // r11
  __int64 v17; // r11
  _QWORD *result; // rax

  v4 = *(_QWORD *)(a3 + 16);
  v6 = a3;
  if ( *(_QWORD *)(a3 + 24) >= 8uLL )
    v6 = *(_QWORD *)a3;
  v7 = 0LL;
  v8 = 0xCBF29CE484222325uLL;
  v9 = 2 * v4;
  if ( v9 )
  {
    do
    {
      v10 = *(unsigned __int8 *)(v7 + v6);
      ++v7;
      v8 = 0x100000001B3LL * (v10 ^ v8);
    }
    while ( v7 < v9 );
  }
  v11 = a1[3];
  v12 = a1[1];
  v13 = 2 * (v8 & a1[6]);
  for ( i = *(_QWORD *)(v11 + 16 * (v8 & a1[6])); ; i = *v16 )
  {
    v15 = *(_QWORD *)(v11 + 8 * v13) == v12 ? v12 : **(_QWORD **)(v11 + 8 * v13 + 8);
    if ( i == v15 )
      break;
    if ( !std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>::operator()(
            (__int64)a1,
            (char *)(i + 16),
            a3) )
    {
      if ( !std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>::operator()(
              (__int64)a1,
              (char *)a3,
              (__int64)(v16 + 2)) )
        v12 = v17;
      break;
    }
  }
  result = a2;
  *a2 = v12;
  return result;
}
