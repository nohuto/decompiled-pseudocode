/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@U?$less@_J@std@@V?$allocator@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@@std@@@1@AEAU?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@1@PEAU?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x18011CF74
 * Callers:
 *     ??$_Try_emplace@AEB_J$$V@?$map@_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@U?$less@_J@std@@V?$allocator@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@5@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEB_J@Z @ 0x18011D350 (--$_Try_emplace@AEB_J$$V@-$map@_JV-$ComPtr@UIUnknown@@@WRL@Microsoft@@U-$less@_J@std@@V-$allocat.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@2@PEAU32@@Z @ 0x1800CAFAC (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ??$_Insert_at@AEAU?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@U?$less@_J@std@@V?$allocator@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@1@AEAU?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@1@1@Z @ 0x18011CE08 (--$_Insert_at@AEAU-$pair@$$CB_JV-$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAU-$_Tree_node@U-$pa.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@U?$less@_J@std@@V?$allocator@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@1@PEAU?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x18011D1EC (--$_Insert_nohint@AEAU-$pair@$$CB_JV-$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAU-$_Tree_node@U.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<__int64,Microsoft::WRL::ComPtr<IUnknown>,std::less<__int64>,std::allocator<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>>,0>>::_Insert_hint<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>> &,std::_Tree_node<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>,void *> *>(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5)
{
  __int64 *v7; // r11
  _QWORD *v8; // r10
  __int64 v9; // rcx
  __int64 *result; // rax
  _QWORD *v11; // r9
  __int64 v12; // rdi
  bool v13; // cc
  __int64 v14; // rax
  _QWORD *v15; // r9
  __int64 j; // rax
  __int64 i; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 k; // rcx
  int v21; // [rsp+20h] [rbp-38h]
  char v22; // [rsp+38h] [rbp-20h] BYREF

  v7 = a1;
  v8 = (_QWORD *)*a1;
  if ( a1[1] )
  {
    if ( a3 == *v8 )
    {
      if ( *a4 < *(_QWORD *)(a3 + 32) )
      {
        std::_Tree<std::_Tmap_traits<__int64,Microsoft::WRL::ComPtr<IUnknown>,std::less<__int64>,std::allocator<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>>,0>>::_Insert_at<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>> &,std::_Tree_node<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>,void *> *>(
          a1,
          a2,
          1,
          (_QWORD *)a3,
          v21,
          a5);
        return a2;
      }
      goto LABEL_43;
    }
    if ( (_QWORD *)a3 == v8 )
    {
      v11 = (_QWORD *)v8[2];
      if ( v11[4] < *a4 )
      {
        std::_Tree<std::_Tmap_traits<__int64,Microsoft::WRL::ComPtr<IUnknown>,std::less<__int64>,std::allocator<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>>,0>>::_Insert_at<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>> &,std::_Tree_node<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>,void *> *>(
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
    v13 = *(_QWORD *)(a3 + 32) < *a4;
    if ( *(_QWORD *)(a3 + 32) > *a4 )
    {
      v14 = a3;
      if ( *(_BYTE *)(a3 + 25) )
      {
        v15 = *(_QWORD **)(a3 + 16);
      }
      else
      {
        v15 = *(_QWORD **)a3;
        if ( *(_BYTE *)(*(_QWORD *)a3 + 25LL) )
        {
          for ( i = *(_QWORD *)(a3 + 8); !*(_BYTE *)(i + 25) && v14 == *(_QWORD *)i; i = *(_QWORD *)(i + 8) )
            v14 = i;
          v15 = (_QWORD *)v14;
          if ( !*(_BYTE *)(v14 + 25) )
            v15 = (_QWORD *)i;
        }
        else
        {
          for ( j = v15[2]; !*(_BYTE *)(j + 25); j = *(_QWORD *)(j + 16) )
            v15 = (_QWORD *)j;
        }
      }
      if ( v15[4] < v12 )
      {
        if ( *(_BYTE *)(v15[2] + 25LL) )
          std::_Tree<std::_Tmap_traits<__int64,Microsoft::WRL::ComPtr<IUnknown>,std::less<__int64>,std::allocator<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>>,0>>::_Insert_at<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>> &,std::_Tree_node<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>,void *> *>(
            v7,
            a2,
            0,
            v15,
            v21,
            a5);
        else
          std::_Tree<std::_Tmap_traits<__int64,Microsoft::WRL::ComPtr<IUnknown>,std::less<__int64>,std::allocator<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>>,0>>::_Insert_at<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>> &,std::_Tree_node<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>,void *> *>(
            v7,
            a2,
            1,
            (_QWORD *)a3,
            v21,
            a5);
        return a2;
      }
      v13 = *(_QWORD *)(a3 + 32) < v12;
    }
    if ( !v13 )
      goto LABEL_43;
    v18 = (_QWORD *)a3;
    if ( !*(_BYTE *)(a3 + 25) )
    {
      v19 = *(_QWORD *)(a3 + 16);
      if ( *(_BYTE *)(v19 + 25) )
      {
        for ( k = *(_QWORD *)(a3 + 8); !*(_BYTE *)(k + 25) && v18 == *(_QWORD **)(k + 16); k = *(_QWORD *)(k + 8) )
          v18 = (_QWORD *)k;
        v18 = (_QWORD *)k;
      }
      else
      {
        v18 = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::wstring>>>::_Min((_QWORD *)v19);
      }
    }
    if ( v18 != v8 && v12 >= v18[4] )
    {
LABEL_43:
      *a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<__int64,Microsoft::WRL::ComPtr<IUnknown>,std::less<__int64>,std::allocator<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>>,0>>::_Insert_nohint<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>> &,std::_Tree_node<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>,void *> *>(
                         (_DWORD)v7,
                         (unsigned int)&v22,
                         a3,
                         (_DWORD)a4,
                         a5);
      return a2;
    }
    if ( *(_BYTE *)(*(_QWORD *)(a3 + 16) + 25LL) )
      std::_Tree<std::_Tmap_traits<__int64,Microsoft::WRL::ComPtr<IUnknown>,std::less<__int64>,std::allocator<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>>,0>>::_Insert_at<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>> &,std::_Tree_node<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>,void *> *>(
        v7,
        a2,
        0,
        (_QWORD *)a3,
        v21,
        a5);
    else
      std::_Tree<std::_Tmap_traits<__int64,Microsoft::WRL::ComPtr<IUnknown>,std::less<__int64>,std::allocator<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>>,0>>::_Insert_at<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>> &,std::_Tree_node<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>,void *> *>(
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
      std::_Tree<std::_Tmap_traits<__int64,Microsoft::WRL::ComPtr<IUnknown>,std::less<__int64>,std::allocator<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>>,0>>::_Insert_at<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>> &,std::_Tree_node<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>,void *> *>(
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
      std::_Tree<std::_Tmap_traits<__int64,Microsoft::WRL::ComPtr<IUnknown>,std::less<__int64>,std::allocator<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>>,0>>::_Destroy_if_node(
        v9,
        a5);
      throw;
    }
  }
  return result;
}
