/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@2@0@Z @ 0x18003B2FC
 * Callers:
 *     ??1?$map@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@@std@@QEAA@XZ @ 0x18003ABBC (--1-$map@IV-$function@$$A6AX_N@Z@std@@U-$less@I@2@V-$allocator@U-$pair@$$CBIV-$function@$$A6AX_N.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x18003B1FC (-erase@-$_Tree@V-$_Tmap_traits@IV-$function@$$A6AX_N@Z@std@@U-$less@I@2@V-$allocator@U-$pair@$$C.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@@Z @ 0x18003B560 (-_Erase@-$_Tree@V-$_Tmap_traits@IV-$function@$$A6AX_N@Z@std@@U-$less@I@2@V-$allocator@U-$pair@$$.c)
 *     ?_Extract@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@@std@@@std@@@std@@@2@@Z @ 0x18003B5E8 (-_Extract@-$_Tree@V-$_Tmap_traits@U_GUID@@V-$map@U_GUID@@V-$vector@EV-$allocator@E@std@@@std@@UG.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::erase(
        _QWORD **a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD *v5; // rbx
  _QWORD *v8; // rax
  __int64 *v9; // rbx
  __int64 *v10; // rdi
  __int64 v11; // rdx
  __int64 *v12; // rcx
  _QWORD *v13; // rdx
  char v14; // r8
  __int64 **v15; // rax
  __int64 *j; // rcx
  _QWORD *i; // rax
  _QWORD *v18; // rax
  __int64 **v19; // rcx
  __int64 *m; // rcx
  _QWORD *k; // rcx
  __int64 v22; // rdx
  _QWORD *v23; // rbp
  _QWORD *v24; // rcx

  v5 = a3;
  v8 = *a1;
  if ( a3 == (_QWORD *)**a1 && a4 == v8 )
  {
    v9 = (__int64 *)v8[1];
    v10 = v9;
    if ( !*((_BYTE *)v9 + 25) )
    {
      do
      {
        std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Erase(
          a1,
          v10[2]);
        v10 = (__int64 *)*v10;
        v12 = (__int64 *)v9[12];
        if ( v12 )
        {
          LOBYTE(v11) = v12 != v9 + 5;
          (*(void (__fastcall **)(__int64 *, __int64))(*v12 + 32))(v12, v11);
          v9[12] = 0LL;
        }
        operator delete(v9, (const struct std::nothrow_t *)0x68);
        v9 = v10;
      }
      while ( !*((_BYTE *)v10 + 25) );
      v8 = *a1;
    }
    v8[1] = v8;
    **a1 = *a1;
    (*a1)[2] = *a1;
    a1[1] = 0LL;
    *a2 = **a1;
  }
  else
  {
    if ( a3 != a4 )
    {
      do
      {
        v13 = v5;
        v14 = *((_BYTE *)v5 + 25);
        if ( !v14 )
        {
          v15 = (__int64 **)v5[2];
          if ( *((_BYTE *)v15 + 25) )
          {
            for ( i = (_QWORD *)v5[1]; !*((_BYTE *)i + 25) && v5 == (_QWORD *)i[2]; i = (_QWORD *)i[1] )
              v5 = i;
            v5 = i;
          }
          else
          {
            v5 = (_QWORD *)v5[2];
            for ( j = *v15; !*((_BYTE *)j + 25); j = (__int64 *)*j )
              v5 = j;
          }
        }
        v18 = v13;
        if ( !v14 )
        {
          v19 = (__int64 **)v13[2];
          if ( *((_BYTE *)v19 + 25) )
          {
            for ( k = (_QWORD *)v13[1]; !*((_BYTE *)k + 25) && v18 == (_QWORD *)k[2]; k = (_QWORD *)k[1] )
              v18 = k;
          }
          else
          {
            for ( m = *v19; !*((_BYTE *)m + 25); m = (__int64 *)*m )
              ;
          }
        }
        v23 = (_QWORD *)std::_Tree<std::_Tmap_traits<_GUID,std::map<_GUID,std::vector<unsigned char>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::vector<unsigned char>>>>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::map<_GUID,std::vector<unsigned char>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::vector<unsigned char>>>>>>,0>>::_Extract(a1);
        v24 = (_QWORD *)v23[12];
        if ( v24 )
        {
          LOBYTE(v22) = v24 != v23 + 5;
          (*(void (__fastcall **)(_QWORD *, __int64))(*v24 + 32LL))(v24, v22);
          v23[12] = 0LL;
        }
        operator delete(v23, (const struct std::nothrow_t *)0x68);
      }
      while ( v5 != a4 );
    }
    *a2 = v5;
  }
  return a2;
}
