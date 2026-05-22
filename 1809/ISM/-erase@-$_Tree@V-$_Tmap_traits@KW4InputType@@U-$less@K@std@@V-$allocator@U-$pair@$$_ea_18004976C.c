/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@KW4InputType@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKW4InputType@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKW4InputType@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKW4InputType@@@std@@@std@@@std@@@2@0@Z @ 0x18004976C
 * Callers:
 *     ??_GMPCConstantManager@@UEAAPEAXI@Z @ 0x180047FB0 (--_GMPCConstantManager@@UEAAPEAXI@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KW4InputType@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKW4InputType@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x1800491C4 (-erase@-$_Tree@V-$_Tmap_traits@KW4InputType@@U-$less@K@std@@V-$allocator@U-$pair@$$CBKW4InputTyp.c)
 * Callees:
 *     ?_Extract@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@@std@@@std@@@std@@@2@@Z @ 0x18003B5E8 (-_Extract@-$_Tree@V-$_Tmap_traits@U_GUID@@V-$map@U_GUID@@V-$vector@EV-$allocator@E@std@@@std@@UG.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@W4GazeProperty@@GU?$less@W4GazeProperty@@@std@@V?$allocator@U?$pair@$$CBW4GazeProperty@@G@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBW4GazeProperty@@G@std@@PEAX@2@@Z @ 0x180049BC0 (-_Erase@-$_Tree@V-$_Tmap_traits@W4GazeProperty@@GU-$less@W4GazeProperty@@@std@@V-$allocator@U-$p.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 **__fastcall std::_Tree<std::_Tmap_traits<unsigned long,enum InputType,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,enum InputType>>,0>>::erase(
        __int64 **a1,
        __int64 **a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 *v5; // rbx
  __int64 *v8; // rax
  _BYTE *v9; // rbx
  _BYTE *v10; // rdi
  __int64 *v11; // rdx
  char v12; // r8
  __int64 **v13; // rax
  __int64 *j; // rcx
  __int64 *i; // rax
  __int64 *v16; // rax
  __int64 v17; // rcx
  __int64 *m; // rcx
  __int64 k; // rcx
  __int64 *v20; // rax

  v5 = a3;
  v8 = *a1;
  if ( a3 == (__int64 *)**a1 && a4 == v8 )
  {
    v9 = (_BYTE *)v8[1];
    v10 = v9;
    if ( !v9[25] )
    {
      do
      {
        std::_Tree<std::_Tmap_traits<enum GazeProperty,unsigned short,std::less<enum GazeProperty>,std::allocator<std::pair<enum GazeProperty const,unsigned short>>,0>>::_Erase(
          a1,
          *((_QWORD *)v10 + 2));
        v10 = *(_BYTE **)v10;
        operator delete(v9, (const struct std::nothrow_t *)0x28);
        v9 = v10;
      }
      while ( !v10[25] );
      v8 = *a1;
    }
    v8[1] = (__int64)v8;
    **a1 = (__int64)*a1;
    (*a1)[2] = (__int64)*a1;
    a1[1] = 0LL;
    *a2 = (__int64 *)**a1;
  }
  else
  {
    while ( v5 != a4 )
    {
      v11 = v5;
      v12 = *((_BYTE *)v5 + 25);
      if ( !v12 )
      {
        v13 = (__int64 **)v5[2];
        if ( *((_BYTE *)v13 + 25) )
        {
          for ( i = (__int64 *)v5[1]; !*((_BYTE *)i + 25) && v5 == (__int64 *)i[2]; i = (__int64 *)i[1] )
            v5 = i;
          v5 = i;
        }
        else
        {
          v5 = (__int64 *)v5[2];
          for ( j = *v13; !*((_BYTE *)j + 25); j = (__int64 *)*j )
            v5 = j;
        }
      }
      v16 = v11;
      if ( !v12 )
      {
        v17 = v11[2];
        if ( *(_BYTE *)(v17 + 25) )
        {
          for ( k = v11[1]; !*(_BYTE *)(k + 25) && v16 == *(__int64 **)(k + 16); k = *(_QWORD *)(k + 8) )
            v16 = (__int64 *)k;
        }
        else
        {
          for ( m = *(__int64 **)v17; !*((_BYTE *)m + 25); m = (__int64 *)*m )
            ;
        }
      }
      v20 = std::_Tree<std::_Tmap_traits<_GUID,std::map<_GUID,std::vector<unsigned char>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::vector<unsigned char>>>>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::map<_GUID,std::vector<unsigned char>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::vector<unsigned char>>>>>>,0>>::_Extract(
              a1,
              v11);
      operator delete(v20, (const struct std::nothrow_t *)0x28);
    }
    *a2 = v5;
  }
  return a2;
}
