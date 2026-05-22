/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@$$CBKV?$shared_ptr@UHOTKEY@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKV?$shared_ptr@UHOTKEY@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KV?$shared_ptr@UHOTKEY@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@UHOTKEY@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$shared_ptr@UHOTKEY@@@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$shared_ptr@UHOTKEY@@@std@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBKV?$shared_ptr@UHOTKEY@@@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$shared_ptr@UHOTKEY@@@std@@@std@@PEAX@1@@Z @ 0x180145220
 * Callers:
 *     ??$_Try_emplace@AEBK$$V@?$map@KV?$shared_ptr@UHOTKEY@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@UHOTKEY@@@std@@@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$shared_ptr@UHOTKEY@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x1801456F0 (--$_Try_emplace@AEBK$$V@-$map@KV-$shared_ptr@UHOTKEY@@@std@@U-$less@K@2@V-$allocator@U-$pair@$$C.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@PEAX@2@PEAU32@@Z @ 0x180025538 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBa.c)
 *     ??$_Insert_at@AEAU?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@VSystemCursorShape@@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@PEAX@1@AEAU?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@1@1@Z @ 0x1800C8384 (--$_Insert_at@AEAU-$pair@$$CB_KV-$shared_ptr@VSystemCursorShape@@@std@@@std@@PEAU-$_Tree_node@U-.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IV?$shared_ptr@VCustomCursorApplication@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@PEAX@1@@Z @ 0x1800C8774 (--$_Insert_nohint@AEAU-$pair@$$CBIV-$shared_ptr@VCustomCursorApplication@@@std@@@std@@PEAU-$_Tre.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<unsigned long,std::shared_ptr<HOTKEY>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::shared_ptr<HOTKEY>>>,0>>::_Insert_hint<std::pair<unsigned long const,std::shared_ptr<HOTKEY>> &,std::_Tree_node<std::pair<unsigned long const,std::shared_ptr<HOTKEY>>,void *> *>(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        unsigned int *a4,
        std::_Ref_count_base **a5)
{
  __int64 *v7; // r11
  __int64 v8; // rcx
  __int64 v9; // r10
  __int64 *result; // rax
  __int64 v11; // r9
  unsigned int v12; // edi
  bool v13; // cf
  __int64 v14; // rax
  __int64 i; // r9
  __int64 j; // rax
  _QWORD *v17; // rcx
  _QWORD *k; // rax
  int v19; // [rsp+20h] [rbp-38h]
  char v20[32]; // [rsp+38h] [rbp-20h] BYREF

  v7 = a1;
  if ( a1[1] )
  {
    v9 = *a1;
    if ( a3 == *(_QWORD *)*a1 )
    {
      if ( *a4 < *(_DWORD *)(a3 + 32) )
      {
        std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::_Insert_at<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>> &,std::_Tree_node<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>,void *> *>(
          a1,
          a2,
          1,
          (_QWORD *)a3,
          v19,
          (__int64)a5);
        return a2;
      }
      goto LABEL_42;
    }
    if ( a3 == v9 )
    {
      v11 = *(_QWORD *)(v9 + 16);
      if ( *(_DWORD *)(v11 + 32) < *a4 )
      {
        std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::_Insert_at<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>> &,std::_Tree_node<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>,void *> *>(
          a1,
          a2,
          0,
          (_QWORD *)v11,
          v19,
          (__int64)a5);
        return a2;
      }
      goto LABEL_42;
    }
    v12 = *a4;
    v13 = *(_DWORD *)(a3 + 32) < *a4;
    if ( *(_DWORD *)(a3 + 32) > *a4 )
    {
      v14 = a3;
      if ( *(_BYTE *)(a3 + 25) )
      {
        i = *(_QWORD *)(a3 + 16);
      }
      else
      {
        i = *(_QWORD *)a3;
        if ( *(_BYTE *)(*(_QWORD *)a3 + 25LL) )
        {
          for ( i = *(_QWORD *)(a3 + 8); !*(_BYTE *)(i + 25) && v14 == *(_QWORD *)i; i = *(_QWORD *)(i + 8) )
            v14 = i;
          if ( *(_BYTE *)(v14 + 25) )
            i = v14;
        }
        else
        {
          for ( j = *(_QWORD *)(i + 16); !*(_BYTE *)(j + 25); j = *(_QWORD *)(j + 16) )
            i = j;
        }
      }
      if ( *(_DWORD *)(i + 32) < v12 )
      {
        if ( *(_BYTE *)(*(_QWORD *)(i + 16) + 25LL) )
          std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::_Insert_at<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>> &,std::_Tree_node<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>,void *> *>(
            a1,
            a2,
            0,
            (_QWORD *)i,
            v19,
            (__int64)a5);
        else
          std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::_Insert_at<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>> &,std::_Tree_node<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>,void *> *>(
            a1,
            a2,
            1,
            (_QWORD *)a3,
            v19,
            (__int64)a5);
        return a2;
      }
      v13 = *(_DWORD *)(a3 + 32) < v12;
    }
    if ( !v13 )
      goto LABEL_42;
    v17 = (_QWORD *)a3;
    if ( *(_BYTE *)(*(_QWORD *)(a3 + 16) + 25LL) )
    {
      for ( k = *(_QWORD **)(a3 + 8); !*((_BYTE *)k + 25) && v17 == (_QWORD *)k[2]; k = (_QWORD *)k[1] )
        v17 = k;
    }
    else
    {
      k = std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy> const,wil::com_ptr_t<IMPCManagerClientProxy,wil::err_exception_policy>>>>::_Min(*(_QWORD **)(a3 + 16));
    }
    if ( k != (_QWORD *)v9 && v12 >= *((_DWORD *)k + 8) )
    {
LABEL_42:
      *a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned int,std::shared_ptr<CustomCursorApplication>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication>>>,0>>::_Insert_nohint<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication>> &,std::_Tree_node<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication>>,void *> *>(
                         v7,
                         (__int64)v20,
                         a3,
                         a4,
                         a5);
      return a2;
    }
    if ( *(_BYTE *)(*(_QWORD *)(a3 + 16) + 25LL) )
      std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::_Insert_at<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>> &,std::_Tree_node<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>,void *> *>(
        v7,
        a2,
        0,
        (_QWORD *)a3,
        v19,
        (__int64)a5);
    else
      std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::_Insert_at<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>> &,std::_Tree_node<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>,void *> *>(
        v7,
        a2,
        1,
        k,
        v19,
        (__int64)a5);
    return a2;
  }
  else
  {
    try
    {
      std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::_Insert_at<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>> &,std::_Tree_node<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>,void *> *>(
        a1,
        a2,
        1,
        (_QWORD *)*a1,
        v19,
        (__int64)a5);
      result = a2;
    }
    catch ( ... )
    {
      std::_Tree<std::_Tmap_traits<__int64,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>,std::less<__int64>,std::allocator<std::pair<__int64 const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>>>,0>>::_Destroy_if_node(
        v8,
        a5);
      throw;
    }
  }
  return result;
}
