/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@IUComboButtonRegistration@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUComboButtonRegistration@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@2@0@Z @ 0x1800C6F30
 * Callers:
 *     ??1ButtonRecognizer@@MEAA@XZ @ 0x1800C57E0 (--1ButtonRecognizer@@MEAA@XZ.c)
 *     ?Thunk_UnregisterComboButton_9@?$IComboButton_Receive@VButtonRecognizer@@@@SAJPEAXPEAPEAX@Z @ 0x1800C7450 (-Thunk_UnregisterComboButton_9@-$IComboButton_Receive@VButtonRecognizer@@@@SAJPEAXPEAPEAX@Z.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@IUComboButtonRegistration@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUComboButtonRegistration@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@2@@Z @ 0x1800C701C (-erase@-$_Tree@V-$_Tmap_traits@IUComboButtonRegistration@@U-$less@I@std@@V-$allocat_ea_1800C701C.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@IUComboButtonRegistration@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUComboButtonRegistration@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@2@@Z @ 0x1800C7100 (-_Erase@-$_Tree@V-$_Tmap_traits@IUComboButtonRegistration@@U-$less@I@std@@V-$allocator@U-$pair@$.c)
 */

// Hidden C++ exception states: #wind=1
__int64 **__fastcall std::_Tree<std::_Tmap_traits<unsigned int,ComboButtonRegistration,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ComboButtonRegistration>>,0>>::erase(
        __int64 ***a1,
        __int64 **a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 *v5; // rbx
  __int64 **v8; // rdx
  __int64 *v9; // r8
  __int64 **v10; // rax
  __int64 *j; // rcx
  __int64 *i; // rax
  char v14; // [rsp+40h] [rbp+8h] BYREF

  v5 = a3;
  v8 = *a1;
  if ( a3 == **a1 && a4 == (__int64 *)v8 )
  {
    std::_Tree<std::_Tmap_traits<unsigned int,ComboButtonRegistration,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ComboButtonRegistration>>,0>>::_Erase(
      a1,
      v8[1]);
    (*a1)[1] = (__int64 *)*a1;
    **a1 = (__int64 *)*a1;
    (*a1)[2] = (__int64 *)*a1;
    a1[1] = 0LL;
    *a2 = **a1;
  }
  else
  {
    while ( v5 != a4 )
    {
      v9 = v5;
      if ( !*((_BYTE *)v5 + 25) )
      {
        v10 = (__int64 **)v5[2];
        if ( *((_BYTE *)v10 + 25) )
        {
          for ( i = (__int64 *)v5[1]; !*((_BYTE *)i + 25) && v5 == (__int64 *)i[2]; i = (__int64 *)i[1] )
            v5 = i;
          v5 = i;
        }
        else
        {
          v5 = (__int64 *)v5[2];
          for ( j = *v10; !*((_BYTE *)j + 25); j = (__int64 *)*j )
            v5 = j;
        }
      }
      std::_Tree<std::_Tmap_traits<unsigned int,ComboButtonRegistration,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ComboButtonRegistration>>,0>>::erase(
        a1,
        &v14,
        v9);
    }
    *a2 = v5;
  }
  return a2;
}
