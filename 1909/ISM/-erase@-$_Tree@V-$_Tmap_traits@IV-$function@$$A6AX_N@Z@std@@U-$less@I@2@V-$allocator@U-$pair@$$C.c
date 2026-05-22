/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@2@0@Z @ 0x18007C93C
 * Callers:
 *     ??1?$map@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@@std@@QEAA@XZ @ 0x18007BDB0 (--1-$map@IV-$function@$$A6AX_N@Z@std@@U-$less@I@2@V-$allocator@U-$pair@$$CBIV-$function@$$A6AX_N.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x18007CA00 (-erase@-$_Tree@V-$_Tmap_traits@IV-$function@$$A6AX_N@Z@std@@U-$less@I@2@V-$allocato_ea_18007CA00.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_INPUT_INTEROP_MESSAGE@@@std@@IEAAXXZ @ 0x180028604 (-_Tidy@-$_Func_class@XPEBU_MIT_INPUT_INTEROP_MESSAGE@@@std@@IEAAXXZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18007BE74 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@@Z @ 0x18007C5D4 (-_Erase@-$_Tree@V-$_Tmap_traits@IV-$function@$$A6AX_N@Z@std@@U-$less@I@2@V-$allocator@U-$pair@$$.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@2@@Z @ 0x18007C638 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$function@$$A6AX_N@Z@std@@@std@@@std@.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::erase(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // r10
  __int64 v8; // rdi
  __int64 v9; // r10
  __int64 *v10; // r10
  __int64 *v11; // rdi
  __int64 v12; // rdx
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF

  v15 = a3;
  v5 = a3;
  v8 = *a1;
  if ( a3 == *(_QWORD *)*a1 && a4 == v8 )
  {
    std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Erase(
      (__int64)a1,
      *(void **)(v8 + 8));
    *(_QWORD *)(*a1 + 8LL) = v8;
    *(_QWORD *)*a1 = v8;
    *(_QWORD *)(*a1 + 16LL) = v8;
    a1[1] = 0LL;
    *a2 = *(_QWORD *)*a1;
  }
  else
  {
    while ( v5 != a4 )
    {
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&v15);
      v14 = v9;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&v14);
      v11 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::function<void (bool)>>>>::_Extract(
              a1,
              v10);
      std::_Func_class<void,_MIT_INPUT_INTEROP_MESSAGE const *>::_Tidy((__int64)(v11 + 5), v12);
      std::_Deallocate<16,0>(v11, (const struct std::nothrow_t *)0x68);
      v5 = v15;
    }
    *a2 = v5;
  }
  return a2;
}
