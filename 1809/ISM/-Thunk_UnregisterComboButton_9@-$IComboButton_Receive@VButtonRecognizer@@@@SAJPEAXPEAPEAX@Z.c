/*
 * XREFs of ?Thunk_UnregisterComboButton_9@?$IComboButton_Receive@VButtonRecognizer@@@@SAJPEAXPEAPEAX@Z @ 0x1800C7450
 * Callers:
 *     <none>
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@IUComboButtonRegistration@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUComboButtonRegistration@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@2@0@Z @ 0x1800C6F30 (-erase@-$_Tree@V-$_Tmap_traits@IUComboButtonRegistration@@U-$less@I@std@@V-$allocator@U-$pair@$$.c)
 */

__int64 __fastcall IComboButton_Receive<ButtonRecognizer>::Thunk_UnregisterComboButton_9(__int64 a1, __int64 a2)
{
  __int64 ***v2; // r10
  __int64 *v3; // r8
  __int64 v4; // r9
  unsigned int v5; // edx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 *j; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 i; // rdx
  __int64 *v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 ***)(a1 + 32);
  v3 = *(__int64 **)(a1 + 32);
  v4 = (__int64)v3;
  v5 = **(_DWORD **)(a2 + 8);
  v6 = v3[1];
  v7 = v6;
  while ( !*(_BYTE *)(v7 + 25) )
  {
    if ( *(_DWORD *)(v7 + 32) >= v5 )
    {
      if ( *(_BYTE *)(v4 + 25) && v5 < *(_DWORD *)(v7 + 32) )
        v4 = v7;
      v3 = (__int64 *)v7;
      v7 = *(_QWORD *)v7;
    }
    else
    {
      v7 = *(_QWORD *)(v7 + 16);
    }
  }
  if ( !*(_BYTE *)(v4 + 25) )
    v6 = *(_QWORD *)v4;
  while ( !*(_BYTE *)(v6 + 25) )
  {
    if ( v5 >= *(_DWORD *)(v6 + 32) )
    {
      v6 = *(_QWORD *)(v6 + 16);
    }
    else
    {
      v4 = v6;
      v6 = *(_QWORD *)v6;
    }
  }
  j = v3;
  while ( j != (__int64 *)v4 )
  {
    if ( !*((_BYTE *)j + 25) )
    {
      v9 = j[2];
      if ( *(_BYTE *)(v9 + 25) )
      {
        for ( i = j[1]; !*(_BYTE *)(i + 25) && j == *(__int64 **)(i + 16); i = *(_QWORD *)(i + 8) )
          j = (__int64 *)i;
        j = (__int64 *)i;
      }
      else
      {
        v10 = *(_QWORD *)v9;
        for ( j = (__int64 *)j[2]; !*(_BYTE *)(v10 + 25); v10 = *(_QWORD *)v10 )
          j = (__int64 *)v10;
      }
    }
  }
  std::_Tree<std::_Tmap_traits<unsigned int,ComboButtonRegistration,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ComboButtonRegistration>>,0>>::erase(
    v2,
    &v13,
    v3,
    (__int64 *)v4);
  return 0LL;
}
