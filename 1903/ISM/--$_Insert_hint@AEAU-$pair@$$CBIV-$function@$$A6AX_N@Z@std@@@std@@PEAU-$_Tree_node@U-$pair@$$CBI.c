/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@1@@Z @ 0x1800267F8
 * Callers:
 *     ?RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x18001FB40 (-RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV-$function@$$A6AX_N@Z@std@@PEAI@Z.c)
 *     ?RegisterFor3DHitTestingAvailabilityChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x180021154 (-RegisterFor3DHitTestingAvailabilityChanged@MPC3DStateHelper@@QEAAXV-$function@$$A6AX_N@Z@std@@P.c)
 * Callees:
 *     ??$_Insert_at@AEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@1@AEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@1@1@Z @ 0x1800268A8 (--$_Insert_at@AEAU-$pair@$$CBIV-$function@$$A6AX_N@Z@std@@@std@@PEAU-$_Tree_node@U-$pair@$$CBIV-.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@1@@Z @ 0x18007BD94 (--$_Insert_nohint@AEAU-$pair@$$CBIV-$function@$$A6AX_N@Z@std@@@std@@PEAU-$_Tree_node@U-$pair@$$C.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18007C0B4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE.c)
 */

// Hidden C++ exception states: #try_helpers=1
_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Insert_hint<std::pair<unsigned int const,std::function<void (bool)>> &,std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *> *>(
        __int64 ***a1,
        _QWORD *a2,
        __int64 *a3,
        unsigned int *a4,
        __int64 a5)
{
  __int64 *v6; // r9
  int v8; // r11d
  __int64 **v10; // rdi
  __int64 *v11; // r9
  unsigned int v12; // esi
  __int64 *v13; // rax
  __int64 *v14; // rcx
  __int64 *v15; // rcx
  __int64 *v16; // rdx
  __int64 v17; // r9
  char v18; // [rsp+38h] [rbp-20h] BYREF
  __int64 *v19; // [rsp+60h] [rbp+8h] BYREF

  v6 = a3;
  v8 = (int)a1;
  v19 = 0LL;
  if ( !a1[1] )
  {
    LOBYTE(a3) = 1;
    std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Insert_at<std::pair<unsigned int const,std::function<void (bool)>> &,std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *> *>(
      (_DWORD)a1,
      (_DWORD)a2,
      (_DWORD)a3,
      (unsigned int)*a1);
    return a2;
  }
  v10 = *a1;
  if ( a3 == **a1 )
  {
    if ( *a4 < *((_DWORD *)a3 + 8) )
    {
      LOBYTE(a3) = 1;
      std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Insert_at<std::pair<unsigned int const,std::function<void (bool)>> &,std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *> *>(
        (_DWORD)a1,
        (_DWORD)a2,
        (_DWORD)a3,
        (_DWORD)v6);
      return a2;
    }
    goto LABEL_33;
  }
  if ( a3 == (__int64 *)v10 )
  {
    v11 = v10[2];
    if ( *((_DWORD *)v11 + 8) < *a4 )
    {
      std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Insert_at<std::pair<unsigned int const,std::function<void (bool)>> &,std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *> *>(
        (_DWORD)a1,
        (_DWORD)a2,
        0,
        (_DWORD)v11);
      return a2;
    }
    goto LABEL_33;
  }
  v12 = *a4;
  if ( *a4 >= *((_DWORD *)a3 + 8) )
    goto LABEL_26;
  v13 = a3;
  v19 = a3;
  if ( *((_BYTE *)a3 + 25) )
  {
    v13 = (__int64 *)a3[2];
LABEL_20:
    v19 = v13;
    goto LABEL_21;
  }
  v14 = (__int64 *)*a3;
  if ( !*(_BYTE *)(*a3 + 25) )
  {
    do
    {
      v13 = v14;
      v14 = (__int64 *)v14[2];
    }
    while ( !*((_BYTE *)v14 + 25) );
    goto LABEL_20;
  }
  v15 = (__int64 *)a3[1];
  if ( !*((_BYTE *)v15 + 25) )
  {
    v16 = a3;
    do
    {
      LODWORD(a3) = (_DWORD)v15;
      if ( v16 != (__int64 *)*v15 )
        break;
      v13 = v15;
      v19 = v15;
      v15 = (__int64 *)v15[1];
      v16 = v13;
    }
    while ( !*((_BYTE *)v15 + 25) );
  }
  if ( !*((_BYTE *)v13 + 25) )
  {
    v13 = v15;
    v19 = v15;
  }
LABEL_21:
  if ( *((_DWORD *)v13 + 8) < v12 )
  {
    if ( *(_BYTE *)(v13[2] + 25) )
    {
      std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Insert_at<std::pair<unsigned int const,std::function<void (bool)>> &,std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *> *>(
        v8,
        (_DWORD)a2,
        0,
        (_DWORD)v13);
    }
    else
    {
      LOBYTE(a3) = 1;
      std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Insert_at<std::pair<unsigned int const,std::function<void (bool)>> &,std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *> *>(
        v8,
        (_DWORD)a2,
        (_DWORD)a3,
        (_DWORD)v6);
    }
    return a2;
  }
LABEL_26:
  if ( *((_DWORD *)v6 + 8) >= v12
    || (v19 = v6,
        std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&v19),
        v19 != (__int64 *)v10)
    && v12 >= *((_DWORD *)v19 + 8) )
  {
LABEL_33:
    *a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Insert_nohint<std::pair<unsigned int const,std::function<void (bool)>> &,std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *> *>(
                       v8,
                       (unsigned int)&v18,
                       (_DWORD)a3,
                       (_DWORD)a4,
                       a5);
    return a2;
  }
  if ( *(_BYTE *)(*(_QWORD *)(v17 + 16) + 25LL) )
  {
    std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Insert_at<std::pair<unsigned int const,std::function<void (bool)>> &,std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *> *>(
      v8,
      (_DWORD)a2,
      0,
      v17);
  }
  else
  {
    LOBYTE(a3) = 1;
    std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Insert_at<std::pair<unsigned int const,std::function<void (bool)>> &,std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *> *>(
      v8,
      (_DWORD)a2,
      (_DWORD)a3,
      (_DWORD)v19);
  }
  return a2;
}
