/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@IUComboButtonRegistration@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUComboButtonRegistration@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@2@@Z @ 0x1800C701C
 * Callers:
 *     ?RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@@Z @ 0x1800C65A0 (-RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@IUComboButtonRegistration@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUComboButtonRegistration@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@2@0@Z @ 0x1800C6F30 (-erase@-$_Tree@V-$_Tmap_traits@IUComboButtonRegistration@@U-$less@I@std@@V-$allocator@U-$pair@$$.c)
 * Callees:
 *     ?_Extract@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@@std@@@std@@@std@@@2@@Z @ 0x18003B5E8 (-_Extract@-$_Tree@V-$_Tmap_traits@U_GUID@@V-$map@U_GUID@@V-$vector@EV-$allocator@E@std@@@std@@UG.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 **__fastcall std::_Tree<std::_Tmap_traits<unsigned int,ComboButtonRegistration,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ComboButtonRegistration>>,0>>::erase(
        _QWORD *a1,
        __int64 **a2,
        __int64 *a3)
{
  __int64 *j; // rbx
  __int64 **v5; // rax
  __int64 *v6; // r9
  __int64 *i; // rax
  __int64 *v8; // rax
  __int64 *v9; // rdi
  char *v10; // rcx
  const struct std::nothrow_t *v11; // rdx
  char *v12; // r8
  char *v13; // rcx

  j = a3;
  if ( !*((_BYTE *)a3 + 25) )
  {
    v5 = (__int64 **)a3[2];
    if ( *((_BYTE *)v5 + 25) )
    {
      for ( i = (__int64 *)a3[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
        j = i;
      j = i;
    }
    else
    {
      v6 = *v5;
      for ( j = (__int64 *)a3[2]; !*((_BYTE *)v6 + 25); v6 = (__int64 *)*v6 )
        j = v6;
    }
  }
  v8 = std::_Tree<std::_Tmap_traits<_GUID,std::map<_GUID,std::vector<unsigned char>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::vector<unsigned char>>>>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::map<_GUID,std::vector<unsigned char>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::vector<unsigned char>>>>>>,0>>::_Extract(
         a1,
         a3);
  v9 = v8;
  v10 = (char *)v8[6];
  if ( v10 )
  {
    v11 = (const struct std::nothrow_t *)((v8[8] - (_QWORD)v10) & 0xFFFFFFFFFFFFFFFCuLL);
    if ( (unsigned __int64)v11 >= 0x1000 )
    {
      v12 = (char *)*((_QWORD *)v10 - 1);
      v11 = (const struct std::nothrow_t *)((char *)v11 + 39);
      v13 = (char *)(v10 - v12);
      if ( (unsigned __int64)(v13 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v13, v11);
        JUMPOUT(0x1800C70F9LL);
      }
      v10 = v12;
    }
    operator delete(v10, v11);
    v9[6] = 0LL;
    v9[7] = 0LL;
    v9[8] = 0LL;
  }
  operator delete(v9, (const struct std::nothrow_t *)0x70);
  *a2 = j;
  return a2;
}
