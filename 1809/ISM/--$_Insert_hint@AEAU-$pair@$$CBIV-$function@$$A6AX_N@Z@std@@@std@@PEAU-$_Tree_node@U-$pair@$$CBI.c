/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@1@@Z @ 0x18003BEE0
 * Callers:
 *     ?RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x18003B008 (-RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV-$function@$$A6AX_N@Z@std@@PEAI@Z.c)
 *     ??0MPCHolographicInputManager@@AEAA@XZ @ 0x18003F964 (--0MPCHolographicInputManager@@AEAA@XZ.c)
 * Callees:
 *     ??F?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@std@@QEAAAEAV01@XZ @ 0x18003C108 (--F-$_Tree_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE_ID@@VWeak.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@1@AEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@1@1@Z @ 0x18003C218 (--$_Insert_at@AEAU-$pair@$$CBIV-$function@$$A6AX_N@Z@std@@@std@@PEAU-$_Tree_node@U-$pair@$$CBIV-.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@1@@Z @ 0x18003C4A4 (--$_Insert_nohint@AEAU-$pair@$$CBIV-$function@$$A6AX_N@Z@std@@@std@@PEAU-$_Tree_node@U-$pair@$$C.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Insert_hint<std::pair<unsigned int const,std::function<void (bool)>> &,std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *> *>(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3,
        unsigned int *a4,
        void *a5)
{
  __int64 *v6; // rbx
  int v8; // r14d
  __int64 **v9; // rdi
  __int64 v10; // rcx
  int v11; // r9d
  _QWORD *result; // rax
  __int64 *v13; // r9
  unsigned int v14; // r15d
  __int64 *v15; // r9
  __int64 **v16; // rax
  __int64 *v17; // rcx
  __int64 *v18; // rax
  __int64 *v19; // rcx
  int v20; // [rsp+38h] [rbp-30h] BYREF
  __int64 *v21; // [rsp+70h] [rbp+8h] BYREF

  v6 = a3;
  v8 = a1;
  v21 = 0LL;
  v9 = *(__int64 ***)a1;
  if ( *(_QWORD *)(a1 + 8) )
  {
    if ( a3 == *v9 )
    {
      if ( *a4 < *((_DWORD *)a3 + 8) )
      {
        v11 = (int)a3;
        LOBYTE(a3) = 1;
        std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Insert_at<std::pair<unsigned int const,std::function<void (bool)>> &,std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *> *>(
          a1,
          (_DWORD)a2,
          (_DWORD)a3,
          v11);
        return a2;
      }
      goto LABEL_31;
    }
    if ( a3 == (__int64 *)v9 )
    {
      v13 = v9[2];
      if ( *((_DWORD *)v13 + 8) < *a4 )
      {
        std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Insert_at<std::pair<unsigned int const,std::function<void (bool)>> &,std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *> *>(
          a1,
          (_DWORD)a2,
          0,
          (_DWORD)v13);
        return a2;
      }
      goto LABEL_31;
    }
    v14 = *a4;
    if ( *a4 >= *((_DWORD *)a3 + 8)
      || (v21 = a3,
          *(_DWORD *)(*(_QWORD *)std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>>>::operator--(&v21)
                    + 32LL) >= v14) )
    {
      if ( *((_DWORD *)v6 + 8) >= v14 )
        goto LABEL_31;
      v15 = v6;
      v21 = v6;
      v16 = (__int64 **)v6;
      if ( !*((_BYTE *)v6 + 25) )
      {
        v15 = (__int64 *)v6[2];
        if ( *((_BYTE *)v15 + 25) )
        {
          v15 = (__int64 *)v6[1];
          if ( !*((_BYTE *)v15 + 25) )
          {
            v18 = v6;
            do
            {
              v19 = v15;
              if ( v18 != (__int64 *)v15[2] )
                break;
              v21 = v15;
              v15 = (__int64 *)v15[1];
              v18 = v19;
            }
            while ( !*((_BYTE *)v15 + 25) );
          }
        }
        else
        {
          v17 = (__int64 *)*v15;
          if ( !*(_BYTE *)(*v15 + 25) )
          {
            do
            {
              v15 = v17;
              v17 = (__int64 *)*v17;
            }
            while ( !*((_BYTE *)v17 + 25) );
          }
        }
        v16 = (__int64 **)v15;
        v21 = v15;
      }
      if ( v16 != v9 && v14 >= *((_DWORD *)v15 + 8) )
      {
LABEL_31:
        *a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Insert_nohint<std::pair<unsigned int const,std::function<void (bool)>> &,std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *> *>(
                           v8,
                           (int)&v20,
                           (int)a3,
                           (int)a4,
                           a5);
        return a2;
      }
      if ( *(_BYTE *)(v6[2] + 25) )
      {
        std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Insert_at<std::pair<unsigned int const,std::function<void (bool)>> &,std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *> *>(
          v8,
          (_DWORD)a2,
          0,
          (_DWORD)v6);
      }
      else
      {
        LOBYTE(a3) = 1;
        std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Insert_at<std::pair<unsigned int const,std::function<void (bool)>> &,std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *> *>(
          v8,
          (_DWORD)a2,
          (_DWORD)a3,
          (_DWORD)v15);
      }
      return a2;
    }
    else
    {
      if ( *(_BYTE *)(v21[2] + 25) )
      {
        std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Insert_at<std::pair<unsigned int const,std::function<void (bool)>> &,std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *> *>(
          v8,
          (_DWORD)a2,
          0,
          (_DWORD)v21);
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
  }
  else
  {
    try
    {
      LOBYTE(a3) = 1;
      std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Insert_at<std::pair<unsigned int const,std::function<void (bool)>> &,std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *> *>(
        a1,
        (_DWORD)a2,
        (_DWORD)a3,
        (_DWORD)v9);
      result = a2;
    }
    catch ( ... )
    {
      std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Destroy_if_node(
        v10,
        a5);
      throw;
    }
  }
  return result;
}
