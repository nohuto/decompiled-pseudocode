/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IV?$shared_ptr@VWin32ProcessInfo@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@PEAX@1@@Z @ 0x1800AB220
 * Callers:
 *     ?UpdateView@Win32AppInfo@@QEAAXIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1800ADED8 (-UpdateView@Win32AppInfo@@QEAAXIAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 * Callees:
 *     ??$_Insert_at@AEAU?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IV?$shared_ptr@VWin32ProcessInfo@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@PEAX@1@AEAU?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@1@1@Z @ 0x1800AAA3C (--$_Insert_at@AEAU-$pair@$$CBIV-$shared_ptr@VWin32ProcessInfo@@@std@@@std@@PEAU-$_Tree_node@U-$p.c)
 *     ?_Destroy_if_node@?$_Tree@V?$_Tmap_traits@PEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@U?$less@PEAUHSTRING__@@@3@V?$allocator@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@PEAX@2@@Z @ 0x1800AE380 (-_Destroy_if_node@-$_Tree@V-$_Tmap_traits@PEAUHSTRING__@@V-$shared_ptr@VIAssistantLight@Lighting.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned int,std::shared_ptr<Win32ProcessInfo>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<Win32ProcessInfo>>>,0>>::_Insert_nohint<std::pair<unsigned int const,std::shared_ptr<Win32ProcessInfo>> &,std::_Tree_node<std::pair<unsigned int const,std::shared_ptr<Win32ProcessInfo>>,void *> *>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5)
{
  __int64 *v7; // rsi
  __int64 v8; // r9
  __int64 v9; // rax
  char v10; // r10
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // [rsp+20h] [rbp-28h]
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  v7 = a1;
  v8 = *a1;
  v9 = *(_QWORD *)(*a1 + 8);
  v10 = 1;
  while ( !*(_BYTE *)(v9 + 25) )
  {
    v8 = v9;
    if ( *a4 >= *(_DWORD *)(v9 + 32) )
    {
      v10 = 0;
      v9 = *(_QWORD *)(v9 + 16);
    }
    else
    {
      v10 = 1;
      v9 = *(_QWORD *)v9;
    }
  }
  try
  {
    v11 = v8;
    if ( v10 )
    {
      if ( v8 == *(_QWORD *)*a1 )
      {
        *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<unsigned int,std::shared_ptr<Win32ProcessInfo>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<Win32ProcessInfo>>>,0>>::_Insert_at<std::pair<unsigned int const,std::shared_ptr<Win32ProcessInfo>> &,std::_Tree_node<std::pair<unsigned int const,std::shared_ptr<Win32ProcessInfo>>,void *> *>(
                           a1,
                           &v17,
                           1,
                           (_QWORD *)v8,
                           v16,
                           a5);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *(_BYTE *)(v8 + 25) )
      {
        v11 = *(_QWORD *)(v8 + 16);
      }
      else
      {
        v14 = *(_QWORD *)v8;
        if ( *(_BYTE *)(*(_QWORD *)v8 + 25LL) )
        {
          v15 = *(_QWORD *)(v8 + 8);
          if ( !*(_BYTE *)(v15 + 25) )
          {
            a1 = (__int64 *)v8;
            do
            {
              if ( a1 != *(__int64 **)v15 )
                break;
              v11 = v15;
              v15 = *(_QWORD *)(v15 + 8);
              a1 = (__int64 *)v11;
            }
            while ( !*(_BYTE *)(v15 + 25) );
          }
          if ( !*(_BYTE *)(v11 + 25) )
            v11 = v15;
        }
        else
        {
          do
          {
            v11 = v14;
            v14 = *(_QWORD *)(v14 + 16);
          }
          while ( !*(_BYTE *)(v14 + 25) );
        }
      }
    }
    if ( *(_DWORD *)(v11 + 32) >= *a4 )
    {
      std::_Tree<std::_Tmap_traits<HSTRING__ *,std::shared_ptr<TwinUI::Lighting::IAssistantLight>,std::less<HSTRING__ *>,std::allocator<std::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>>,0>>::_Destroy_if_node(
        a1,
        a5);
      *(_QWORD *)a2 = v11;
      *(_BYTE *)(a2 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<unsigned int,std::shared_ptr<Win32ProcessInfo>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<Win32ProcessInfo>>>,0>>::_Insert_at<std::pair<unsigned int const,std::shared_ptr<Win32ProcessInfo>> &,std::_Tree_node<std::pair<unsigned int const,std::shared_ptr<Win32ProcessInfo>>,void *> *>(
                         v7,
                         &v17,
                         v10,
                         (_QWORD *)v8,
                         v16,
                         a5);
      *(_BYTE *)(a2 + 8) = 1;
    }
    result = a2;
  }
  catch ( ... )
  {
    std::_Tree<std::_Tmap_traits<HSTRING__ *,std::shared_ptr<TwinUI::Lighting::IAssistantLight>,std::less<HSTRING__ *>,std::allocator<std::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>>,0>>::_Destroy_if_node(
      v12,
      a5);
    throw;
  }
  return result;
}
