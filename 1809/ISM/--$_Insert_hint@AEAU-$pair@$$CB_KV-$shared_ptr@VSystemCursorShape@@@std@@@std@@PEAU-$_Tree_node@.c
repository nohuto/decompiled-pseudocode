/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@VSystemCursorShape@@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@std@@@std@@@1@AEAU?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@PEAX@1@@Z @ 0x180098400
 * Callers:
 *     ?AddShape@SystemCursor@@QEAAJV?$shared_ptr@VSystemCursorShape@@@std@@@Z @ 0x180096D24 (-AddShape@SystemCursor@@QEAAJV-$shared_ptr@VSystemCursorShape@@@std@@@Z.c)
 *     ??A?$map@_KV?$shared_ptr@VSystemCursorShape@@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@2@@std@@QEAAAEAV?$shared_ptr@VSystemCursorShape@@@1@AEB_K@Z @ 0x180097C58 (--A-$map@_KV-$shared_ptr@VSystemCursorShape@@@std@@U-$less@_K@2@V-$allocator@U-$pair@$$CB_KV-$sh.c)
 * Callees:
 *     ??F?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@std@@QEAAAEAV01@XZ @ 0x18003C108 (--F-$_Tree_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE_ID@@VWeak.c)
 *     ??$_Insert_at@AEAU?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@VSystemCursorShape@@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@PEAX@1@AEAU?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@1@1@Z @ 0x180093BA0 (--$_Insert_at@AEAU-$pair@$$CB_KV-$shared_ptr@VSystemCursorShape@@@std@@@std@@PEAU-$_Tree_node@U-.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@VSystemCursorShape@@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@PEAX@1@@Z @ 0x180098628 (--$_Insert_nohint@AEAU-$pair@$$CB_KV-$shared_ptr@VSystemCursorShape@@@std@@@std@@PEAU-$_Tree_nod.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::_Insert_hint<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>> &,std::_Tree_node<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>,void *> *>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        unsigned __int64 *a4,
        _QWORD *a5)
{
  _QWORD *v9; // rdi
  __int64 v10; // rcx
  _QWORD *result; // rax
  _QWORD *v12; // r9
  unsigned __int64 v13; // r15
  __int64 v14; // r9
  _QWORD *v15; // rax
  __int64 i; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  void *v19; // [rsp+20h] [rbp-48h]
  int v20; // [rsp+38h] [rbp-30h] BYREF
  __int64 *v21; // [rsp+70h] [rbp+8h] BYREF

  v21 = 0LL;
  v9 = (_QWORD *)*a1;
  if ( a1[1] )
  {
    if ( a3 == *v9 )
    {
      if ( *a4 < *(_QWORD *)(a3 + 32) )
      {
        std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::_Insert_at<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>> &,std::_Tree_node<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>,void *> *>(
          a1,
          a2,
          1,
          (_QWORD *)a3,
          (__int64)v19,
          a5);
        return a2;
      }
      goto LABEL_31;
    }
    if ( (_QWORD *)a3 == v9 )
    {
      v12 = (_QWORD *)v9[2];
      if ( v12[4] < *a4 )
      {
        std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::_Insert_at<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>> &,std::_Tree_node<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>,void *> *>(
          a1,
          a2,
          0,
          v12,
          (__int64)v19,
          a5);
        return a2;
      }
      goto LABEL_31;
    }
    v13 = *a4;
    if ( *a4 >= *(_QWORD *)(a3 + 32)
      || (v21 = (__int64 *)a3,
          (*std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>>>::operator--(&v21))[4] >= v13) )
    {
      if ( *(_QWORD *)(a3 + 32) >= v13 )
        goto LABEL_31;
      v14 = a3;
      v21 = (__int64 *)a3;
      v15 = (_QWORD *)a3;
      if ( !*(_BYTE *)(a3 + 25) )
      {
        v14 = *(_QWORD *)(a3 + 16);
        if ( *(_BYTE *)(v14 + 25) )
        {
          v14 = *(_QWORD *)(a3 + 8);
          if ( !*(_BYTE *)(v14 + 25) )
          {
            v17 = a3;
            do
            {
              v18 = v14;
              if ( v17 != *(_QWORD *)(v14 + 16) )
                break;
              v21 = (__int64 *)v14;
              v14 = *(_QWORD *)(v14 + 8);
              v17 = v18;
            }
            while ( !*(_BYTE *)(v14 + 25) );
          }
        }
        else
        {
          for ( i = *(_QWORD *)v14; !*(_BYTE *)(i + 25); i = *(_QWORD *)i )
            v14 = i;
        }
        v15 = (_QWORD *)v14;
        v21 = (__int64 *)v14;
      }
      if ( v15 != v9 && v13 >= *(_QWORD *)(v14 + 32) )
      {
LABEL_31:
        *a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::_Insert_nohint<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>> &,std::_Tree_node<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>,void *> *>(
                           (int)a1,
                           (int)&v20,
                           a3,
                           (int)a4,
                           a5);
        return a2;
      }
      if ( *(_BYTE *)(*(_QWORD *)(a3 + 16) + 25LL) )
        std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::_Insert_at<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>> &,std::_Tree_node<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>,void *> *>(
          a1,
          a2,
          0,
          (_QWORD *)a3,
          (__int64)v19,
          a5);
      else
        std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::_Insert_at<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>> &,std::_Tree_node<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>,void *> *>(
          a1,
          a2,
          1,
          (_QWORD *)v14,
          (__int64)v19,
          a5);
      return a2;
    }
    else
    {
      if ( *(_BYTE *)(v21[2] + 25) )
        std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::_Insert_at<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>> &,std::_Tree_node<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>,void *> *>(
          a1,
          a2,
          0,
          v21,
          (__int64)v19,
          a5);
      else
        std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::_Insert_at<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>> &,std::_Tree_node<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>,void *> *>(
          a1,
          a2,
          1,
          (_QWORD *)a3,
          (__int64)v19,
          a5);
      return a2;
    }
  }
  else
  {
    try
    {
      std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::_Insert_at<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>> &,std::_Tree_node<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>,void *> *>(
        a1,
        a2,
        1,
        v9,
        (__int64)v19,
        a5);
      result = a2;
    }
    catch ( ... )
    {
      std::_Tree<std::_Tmap_traits<__int64,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>,std::less<__int64>,std::allocator<std::pair<__int64 const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>>>,0>>::_Destroy_if_node(
        v10,
        a5);
      throw;
    }
  }
  return result;
}
