/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@U?$less@_J@std@@V?$allocator@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@@std@@@1@AEAU?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@1@PEAU?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x180129594
 * Callers:
 *     ??$_Try_emplace@AEB_J$$V@?$map@_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@U?$less@_J@std@@V?$allocator@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@5@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEB_J@Z @ 0x180129960 (--$_Try_emplace@AEB_J$$V@-$map@_JV-$ComPtr@UIUnknown@@@WRL@Microsoft@@U-$less@_J@std@@V-$allocat.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@2@PEAU32@@Z @ 0x1800D94F0 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ??$_Insert_at@AEAU?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@U?$less@_J@std@@V?$allocator@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@1@AEAU?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@1@1@Z @ 0x180129428 (--$_Insert_at@AEAU-$pair@$$CB_JV-$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAU-$_Tree_node@U-$pa.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@U?$less@_J@std@@V?$allocator@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@1@PEAU?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x1801297FC (--$_Insert_nohint@AEAU-$pair@$$CB_JV-$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAU-$_Tree_node@U.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<__int64,Microsoft::WRL::ComPtr<IUnknown>,std::less<__int64>,std::allocator<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>>,0>>::_Insert_hint<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>> &,std::_Tree_node<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>,void *> *>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 a5)
{
  __int64 *v7; // r11
  __int64 v8; // rcx
  __int64 v9; // r10
  __int64 *result; // rax
  _QWORD *v11; // r9
  __int64 v12; // rdi
  bool v13; // cc
  __int64 *v14; // rax
  __int64 *i; // r9
  __int64 *j; // rax
  __int64 *v17; // rcx
  __int64 *k; // rax
  int v19; // [rsp+20h] [rbp-38h]
  char v20; // [rsp+38h] [rbp-20h] BYREF

  v7 = a1;
  if ( a1[1] )
  {
    v9 = *a1;
    if ( a3 == *(__int64 **)*a1 )
    {
      if ( *a4 < a3[4] )
      {
        std::_Tree<std::_Tmap_traits<__int64,Microsoft::WRL::ComPtr<IUnknown>,std::less<__int64>,std::allocator<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>>,0>>::_Insert_at<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>> &,std::_Tree_node<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>,void *> *>(
          a1,
          a2,
          1,
          a3,
          v19,
          a5);
        return a2;
      }
      goto LABEL_42;
    }
    if ( a3 == (__int64 *)v9 )
    {
      v11 = *(_QWORD **)(v9 + 16);
      if ( v11[4] < *a4 )
      {
        std::_Tree<std::_Tmap_traits<__int64,Microsoft::WRL::ComPtr<IUnknown>,std::less<__int64>,std::allocator<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>>,0>>::_Insert_at<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>> &,std::_Tree_node<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>,void *> *>(
          a1,
          a2,
          0,
          v11,
          v19,
          a5);
        return a2;
      }
      goto LABEL_42;
    }
    v12 = *a4;
    v13 = a3[4] < *a4;
    if ( a3[4] > *a4 )
    {
      v14 = a3;
      if ( *((_BYTE *)a3 + 25) )
      {
        i = (__int64 *)a3[2];
      }
      else
      {
        i = (__int64 *)*a3;
        if ( *(_BYTE *)(*a3 + 25) )
        {
          for ( i = (__int64 *)a3[1]; !*((_BYTE *)i + 25) && v14 == (__int64 *)*i; i = (__int64 *)i[1] )
            v14 = i;
          if ( *((_BYTE *)v14 + 25) )
            i = v14;
        }
        else
        {
          for ( j = (__int64 *)i[2]; !*((_BYTE *)j + 25); j = (__int64 *)j[2] )
            i = j;
        }
      }
      if ( i[4] < v12 )
      {
        if ( *(_BYTE *)(i[2] + 25) )
          std::_Tree<std::_Tmap_traits<__int64,Microsoft::WRL::ComPtr<IUnknown>,std::less<__int64>,std::allocator<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>>,0>>::_Insert_at<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>> &,std::_Tree_node<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>,void *> *>(
            a1,
            a2,
            0,
            i,
            v19,
            a5);
        else
          std::_Tree<std::_Tmap_traits<__int64,Microsoft::WRL::ComPtr<IUnknown>,std::less<__int64>,std::allocator<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>>,0>>::_Insert_at<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>> &,std::_Tree_node<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>,void *> *>(
            a1,
            a2,
            1,
            a3,
            v19,
            a5);
        return a2;
      }
      v13 = a3[4] < v12;
    }
    if ( !v13 )
      goto LABEL_42;
    v17 = a3;
    if ( *(_BYTE *)(a3[2] + 25) )
    {
      for ( k = (__int64 *)a3[1]; !*((_BYTE *)k + 25) && v17 == (__int64 *)k[2]; k = (__int64 *)k[1] )
        v17 = k;
    }
    else
    {
      k = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::wstring>>>::_Min((_QWORD *)a3[2]);
    }
    if ( k != (__int64 *)v9 && v12 >= k[4] )
    {
LABEL_42:
      *a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<__int64,Microsoft::WRL::ComPtr<IUnknown>,std::less<__int64>,std::allocator<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>>,0>>::_Insert_nohint<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>> &,std::_Tree_node<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>,void *> *>(
                         (_DWORD)v7,
                         (unsigned int)&v20,
                         (_DWORD)a3,
                         (_DWORD)a4,
                         a5);
      return a2;
    }
    if ( *(_BYTE *)(a3[2] + 25) )
      std::_Tree<std::_Tmap_traits<__int64,Microsoft::WRL::ComPtr<IUnknown>,std::less<__int64>,std::allocator<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>>,0>>::_Insert_at<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>> &,std::_Tree_node<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>,void *> *>(
        v7,
        a2,
        0,
        a3,
        v19,
        a5);
    else
      std::_Tree<std::_Tmap_traits<__int64,Microsoft::WRL::ComPtr<IUnknown>,std::less<__int64>,std::allocator<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>>,0>>::_Insert_at<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>> &,std::_Tree_node<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>,void *> *>(
        v7,
        a2,
        1,
        k,
        v19,
        a5);
    return a2;
  }
  else
  {
    try
    {
      std::_Tree<std::_Tmap_traits<__int64,Microsoft::WRL::ComPtr<IUnknown>,std::less<__int64>,std::allocator<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>>,0>>::_Insert_at<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>> &,std::_Tree_node<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>,void *> *>(
        a1,
        a2,
        1,
        (_QWORD *)*a1,
        v19,
        a5);
      result = a2;
    }
    catch ( ... )
    {
      std::_Tree<std::_Tmap_traits<__int64,Microsoft::WRL::ComPtr<IUnknown>,std::less<__int64>,std::allocator<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>>,0>>::_Destroy_if_node(
        v8,
        a5);
      throw;
    }
  }
  return result;
}
