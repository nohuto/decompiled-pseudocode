/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x180331764
 * Callers:
 *     _lambda_7a5168388c52e35df9f99ba32a5252ab_::operator() @ 0x180031A94 (_lambda_7a5168388c52e35df9f99ba32a5252ab_--operator().c)
 *     _lambda_46851bff5b4673daf3d019eee80c73b2_::operator() @ 0x18005BC80 (_lambda_46851bff5b4673daf3d019eee80c73b2_--operator().c)
 *     _lambda_69f1d5bd17a52b1cfb35c35a1e227214_::operator() @ 0x180331DC8 (_lambda_69f1d5bd17a52b1cfb35c35a1e227214_--operator().c)
 *     ??$_Try_emplace@AEBK$$V@?$map@KV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@5@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x180333B74 (--$_Try_emplace@AEBK$$V@-$map@KV-$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U-$less@K@std@@V-$a.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@PEAU32@@Z @ 0x18008F75C (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$com_ptr_t@UIWindowGroup@@Uerr_exception_.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@1@AEAU?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@1@1@Z @ 0x1803315F8 (--$_Insert_at@AEAU-$pair@$$CBKV-$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAU-$_Tree_no.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x1803319DC (--$_Insert_nohint@AEAU-$pair@$$CBKV-$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAU-$_Tre.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>,0>>::_Insert_hint<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>> &,std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>,void *> *>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        unsigned int *a4,
        __int64 a5)
{
  __int64 *v7; // r11
  __int64 **v8; // r10
  __int64 v9; // rcx
  __int64 *result; // rax
  __int64 *v11; // r9
  unsigned int v12; // edi
  bool v13; // cf
  __int64 *v14; // rax
  __int64 *v15; // r9
  __int64 *j; // rax
  __int64 *i; // rcx
  __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 k; // rcx
  int v21; // [rsp+20h] [rbp-38h]
  char v22; // [rsp+38h] [rbp-20h] BYREF

  v7 = a1;
  v8 = (__int64 **)*a1;
  if ( a1[1] )
  {
    if ( a3 == *v8 )
    {
      if ( *a4 < *((_DWORD *)a3 + 8) )
      {
        std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Insert_at<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>> &,std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>,void *> *>(
          a1,
          a2,
          1,
          a3,
          v21,
          a5);
        return a2;
      }
      goto LABEL_43;
    }
    if ( a3 == (__int64 *)v8 )
    {
      v11 = v8[2];
      if ( *((_DWORD *)v11 + 8) < *a4 )
      {
        std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Insert_at<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>> &,std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>,void *> *>(
          a1,
          a2,
          0,
          v11,
          v21,
          a5);
        return a2;
      }
      goto LABEL_43;
    }
    v12 = *a4;
    v13 = *((_DWORD *)a3 + 8) < *a4;
    if ( *((_DWORD *)a3 + 8) > *a4 )
    {
      v14 = a3;
      if ( *((_BYTE *)a3 + 25) )
      {
        v15 = (__int64 *)a3[2];
      }
      else
      {
        v15 = (__int64 *)*a3;
        if ( *(_BYTE *)(*a3 + 25) )
        {
          for ( i = (__int64 *)a3[1]; !*((_BYTE *)i + 25) && v14 == (__int64 *)*i; i = (__int64 *)i[1] )
            v14 = i;
          v15 = v14;
          if ( !*((_BYTE *)v14 + 25) )
            v15 = i;
        }
        else
        {
          for ( j = (__int64 *)v15[2]; !*((_BYTE *)j + 25); j = (__int64 *)j[2] )
            v15 = j;
        }
      }
      if ( *((_DWORD *)v15 + 8) < v12 )
      {
        if ( *(_BYTE *)(v15[2] + 25) )
          std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Insert_at<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>> &,std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>,void *> *>(
            v7,
            a2,
            0,
            v15,
            v21,
            a5);
        else
          std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Insert_at<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>> &,std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>,void *> *>(
            v7,
            a2,
            1,
            a3,
            v21,
            a5);
        return a2;
      }
      v13 = *((_DWORD *)a3 + 8) < v12;
    }
    if ( !v13 )
      goto LABEL_43;
    v18 = a3;
    if ( !*((_BYTE *)a3 + 25) )
    {
      v19 = a3[2];
      if ( *(_BYTE *)(v19 + 25) )
      {
        for ( k = a3[1]; !*(_BYTE *)(k + 25) && v18 == *(__int64 **)(k + 16); k = *(_QWORD *)(k + 8) )
          v18 = (__int64 *)k;
        v18 = (__int64 *)k;
      }
      else
      {
        v18 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy>>>>::_Min((_QWORD *)v19);
      }
    }
    if ( v18 != (__int64 *)v8 && v12 >= *((_DWORD *)v18 + 8) )
    {
LABEL_43:
      *a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>,0>>::_Insert_nohint<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>> &,std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>,void *> *>(
                         (_DWORD)v7,
                         (unsigned int)&v22,
                         (_DWORD)a3,
                         (_DWORD)a4,
                         a5);
      return a2;
    }
    if ( *(_BYTE *)(a3[2] + 25) )
      std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Insert_at<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>> &,std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>,void *> *>(
        v7,
        a2,
        0,
        a3,
        v21,
        a5);
    else
      std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Insert_at<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>> &,std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>,void *> *>(
        v7,
        a2,
        1,
        v18,
        v21,
        a5);
    return a2;
  }
  else
  {
    try
    {
      std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Insert_at<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>> &,std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>,void *> *>(
        a1,
        a2,
        1,
        v8,
        v21,
        a5);
      result = a2;
    }
    catch ( ... )
    {
      std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>,0>>::_Destroy_if_node(
        v9,
        a5);
      throw;
    }
  }
  return result;
}
