/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IV?$shared_ptr@VCustomCursorApplication@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@PEAX@1@@Z @ 0x1800C8730
 * Callers:
 *     ??$_Try_emplace@AEBI$$V@?$map@IV?$shared_ptr@VCustomCursorApplication@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBI@Z @ 0x1800C8B50 (--$_Try_emplace@AEBI$$V@-$map@IV-$shared_ptr@VCustomCursorApplication@@@std@@U-$less@I@2@V-$allo.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@PEAX@2@PEAU32@@Z @ 0x180025A18 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBa.c)
 *     ??$_Insert_at@AEAU?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@VSystemCursorShape@@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@PEAX@1@AEAU?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@1@1@Z @ 0x1800C85C4 (--$_Insert_at@AEAU-$pair@$$CB_KV-$shared_ptr@VSystemCursorShape@@@std@@@std@@PEAU-$_Tree_node@U-.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IV?$shared_ptr@VCustomCursorApplication@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@PEAX@1@@Z @ 0x1800C89B4 (--$_Insert_nohint@AEAU-$pair@$$CBIV-$shared_ptr@VCustomCursorApplication@@@std@@@std@@PEAU-$_Tre.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,std::shared_ptr<CustomCursorApplication>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication>>>,0>>::_Insert_hint<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication>> &,std::_Tree_node<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication>>,void *> *>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        unsigned int *a4,
        __int64 a5)
{
  __int64 *v7; // r10
  __int64 v8; // rcx
  __int64 v9; // r11
  __int64 *result; // rax
  __int64 v11; // r9
  unsigned int v12; // edi
  bool v13; // cf
  __int64 *v14; // r9
  __int64 *v15; // rax
  __int64 *v16; // rax
  __int64 *v17; // rcx
  __int64 *v18; // rdx
  __int64 v19; // rcx
  __int64 *v20; // rax
  __int64 *v21; // rcx
  __int64 *v22; // rdx
  int v23; // [rsp+20h] [rbp-38h]
  char v24; // [rsp+38h] [rbp-20h] BYREF

  v7 = a1;
  if ( a1[1] )
  {
    v9 = *a1;
    if ( a3 == *(__int64 **)*a1 )
    {
      if ( *a4 < *((_DWORD *)a3 + 8) )
      {
        std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::_Insert_at<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>> &,std::_Tree_node<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>,void *> *>(
          a1,
          a2,
          1,
          a3,
          v23,
          a5);
        return a2;
      }
      goto LABEL_39;
    }
    if ( a3 == (__int64 *)v9 )
    {
      v11 = *(_QWORD *)(v9 + 16);
      if ( *(_DWORD *)(v11 + 32) < *a4 )
      {
        std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::_Insert_at<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>> &,std::_Tree_node<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>,void *> *>(
          a1,
          a2,
          0,
          (_QWORD *)v11,
          v23,
          a5);
        return a2;
      }
      goto LABEL_39;
    }
    v12 = *a4;
    v13 = *((_DWORD *)a3 + 8) < *a4;
    if ( *((_DWORD *)a3 + 8) > *a4 )
    {
      v14 = a3;
      if ( *((_BYTE *)a3 + 25) )
      {
        v14 = (__int64 *)a3[2];
      }
      else
      {
        v15 = (__int64 *)*a3;
        if ( *(_BYTE *)(*a3 + 25) )
        {
          v16 = (__int64 *)a3[1];
          if ( !*((_BYTE *)v16 + 25) )
          {
            v17 = a3;
            do
            {
              v18 = v16;
              if ( v17 != (__int64 *)*v16 )
                break;
              v14 = v16;
              v16 = (__int64 *)v16[1];
              v17 = v18;
            }
            while ( !*((_BYTE *)v16 + 25) );
          }
          if ( !*((_BYTE *)v14 + 25) )
            v14 = v16;
        }
        else
        {
          do
          {
            v14 = v15;
            v15 = (__int64 *)v15[2];
          }
          while ( !*((_BYTE *)v15 + 25) );
        }
      }
      if ( *((_DWORD *)v14 + 8) < v12 )
      {
        if ( *(_BYTE *)(v14[2] + 25) )
          std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::_Insert_at<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>> &,std::_Tree_node<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>,void *> *>(
            v7,
            a2,
            0,
            v14,
            v23,
            a5);
        else
          std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::_Insert_at<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>> &,std::_Tree_node<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>,void *> *>(
            v7,
            a2,
            1,
            a3,
            v23,
            a5);
        return a2;
      }
      v13 = *((_DWORD *)a3 + 8) < v12;
    }
    if ( !v13 )
      goto LABEL_39;
    v19 = a3[2];
    if ( *(_BYTE *)(v19 + 25) )
    {
      v20 = (__int64 *)a3[1];
      if ( !*((_BYTE *)v20 + 25) )
      {
        v21 = a3;
        do
        {
          v22 = v20;
          if ( v21 != (__int64 *)v20[2] )
            break;
          v20 = (__int64 *)v20[1];
          v21 = v22;
        }
        while ( !*((_BYTE *)v20 + 25) );
      }
    }
    else
    {
      v20 = std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy> const,wil::com_ptr_t<IMPCManagerClientProxy,wil::err_exception_policy>>>>::_Min((_QWORD *)v19);
    }
    if ( v20 != (__int64 *)v9 && v12 >= *((_DWORD *)v20 + 8) )
    {
LABEL_39:
      *a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned int,std::shared_ptr<CustomCursorApplication>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication>>>,0>>::_Insert_nohint<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication>> &,std::_Tree_node<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication>>,void *> *>(
                         (_DWORD)v7,
                         (unsigned int)&v24,
                         (_DWORD)a3,
                         (_DWORD)a4,
                         a5);
      return a2;
    }
    if ( *(_BYTE *)(a3[2] + 25) )
      std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::_Insert_at<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>> &,std::_Tree_node<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>,void *> *>(
        v7,
        a2,
        0,
        a3,
        v23,
        a5);
    else
      std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::_Insert_at<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>> &,std::_Tree_node<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>,void *> *>(
        v7,
        a2,
        1,
        v20,
        v23,
        a5);
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
        v23,
        a5);
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
