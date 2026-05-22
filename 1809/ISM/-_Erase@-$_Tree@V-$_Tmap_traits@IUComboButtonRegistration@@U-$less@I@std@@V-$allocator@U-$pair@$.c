/*
 * XREFs of ?_Erase@?$_Tree@V?$_Tmap_traits@IUComboButtonRegistration@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUComboButtonRegistration@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@2@@Z @ 0x1800C7100
 * Callers:
 *     ?erase@?$_Tree@V?$_Tmap_traits@IUComboButtonRegistration@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUComboButtonRegistration@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@2@0@Z @ 0x1800C6F30 (-erase@-$_Tree@V-$_Tmap_traits@IUComboButtonRegistration@@U-$less@I@std@@V-$allocator@U-$pair@$$.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@IUComboButtonRegistration@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUComboButtonRegistration@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@2@@Z @ 0x1800C7100 (-_Erase@-$_Tree@V-$_Tmap_traits@IUComboButtonRegistration@@U-$less@I@std@@V-$allocator@U-$pair@$.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@IUComboButtonRegistration@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUComboButtonRegistration@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@2@@Z @ 0x1800C7100 (-_Erase@-$_Tree@V-$_Tmap_traits@IUComboButtonRegistration@@U-$less@I@std@@V-$allocator@U-$pair@$.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<unsigned int,ComboButtonRegistration,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ComboButtonRegistration>>,0>>::_Erase(
        __int64 a1,
        __int64 *a2)
{
  bool v2; // zf
  _QWORD *v3; // rbx
  __int64 *v5; // rdi
  char *v6; // rcx
  const struct std::nothrow_t *v7; // rdx
  char *v8; // r8
  char *v9; // rcx

  v2 = *((_BYTE *)a2 + 25) == 0;
  v3 = a2;
  v5 = a2;
  while ( v2 )
  {
    std::_Tree<std::_Tmap_traits<unsigned int,ComboButtonRegistration,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ComboButtonRegistration>>,0>>::_Erase(
      a1,
      v5[2]);
    v6 = (char *)v3[6];
    v5 = (__int64 *)*v5;
    if ( v6 )
    {
      v7 = (const struct std::nothrow_t *)((v3[8] - (_QWORD)v6) & 0xFFFFFFFFFFFFFFFCuLL);
      if ( (unsigned __int64)v7 >= 0x1000 )
      {
        v8 = (char *)*((_QWORD *)v6 - 1);
        v7 = (const struct std::nothrow_t *)((char *)v7 + 39);
        v9 = (char *)(v6 - v8);
        if ( (unsigned __int64)(v9 - 8) > 0x1F )
        {
          _o__invalid_parameter_noinfo_noreturn(v9, v7);
          __debugbreak();
        }
        v6 = v8;
      }
      operator delete(v6, v7);
      v3[6] = 0LL;
      v3[7] = 0LL;
      v3[8] = 0LL;
    }
    operator delete(v3, (const struct std::nothrow_t *)0x70);
    v2 = *((_BYTE *)v5 + 25) == 0;
    v3 = v5;
  }
}
