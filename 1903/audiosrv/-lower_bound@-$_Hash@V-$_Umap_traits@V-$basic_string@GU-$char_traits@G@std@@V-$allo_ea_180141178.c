/*
 * XREFs of ?lower_bound@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@$0A@@std@@@std@@QEBA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180141178
 * Callers:
 *     ?GetEndpointInterfaceId@AtmosCheck@@AEBAJPEBGPEAPEAG@Z @ 0x18013EDE0 (-GetEndpointInterfaceId@AtmosCheck@@AEBAJPEBGPEAPEAG@Z.c)
 * Callees:
 *     ??R?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEBA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@0@Z @ 0x18013DD88 (--R-$_Uhash_compare@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$hash@V-$bas.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<std::wstring,std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::lower_bound(
        _QWORD *a1,
        _QWORD *a2,
        char *a3)
{
  char *v3; // rbx
  __int64 v4; // r9
  __int64 v7; // r9
  __int64 v8; // rax
  char *v9; // r10
  unsigned __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rbp
  __int64 i; // r11
  __int64 v16; // rax
  __int64 *v17; // r11
  __int64 v18; // r11
  _QWORD *result; // rax

  v3 = a3;
  v4 = *((_QWORD *)a3 + 2);
  if ( *((_QWORD *)a3 + 3) >= 8uLL )
    a3 = *(char **)a3;
  v7 = 2 * v4;
  v8 = 0xCBF29CE484222325uLL;
  v9 = a3;
  if ( a3 > &a3[v7] )
    v7 = 0LL;
  if ( v7 )
  {
    do
    {
      v10 = (unsigned __int8)*v9++ ^ (unsigned __int64)v8;
      v8 = 0x100000001B3LL * v10;
    }
    while ( v9 - a3 != v7 );
  }
  v11 = a1[3];
  v12 = v8 & a1[6];
  v13 = a1[1];
  v14 = 2 * v12;
  for ( i = *(_QWORD *)(v11 + 16 * v12); ; i = *v17 )
  {
    v16 = *(_QWORD *)(v11 + 8 * v14) == v13 ? v13 : **(_QWORD **)(v11 + 8 * v14 + 8);
    if ( i == v16 )
      break;
    if ( !std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>::operator()(
            v12,
            (char *)(i + 16),
            (__int64)v3) )
    {
      if ( !std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>::operator()(
              v12,
              v3,
              (__int64)(v17 + 2)) )
        v13 = v18;
      break;
    }
  }
  result = a2;
  *a2 = v13;
  return result;
}
