/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@1@PEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x180154E80
 * Callers:
 *     ??$_Insert_hint@AEAU?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@1@PEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x180154C94 (--$_Insert_hint@AEAU-$pair@$$CBIV-$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@1@AEAU?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@1@1@Z @ 0x180154B1C (--$_Insert_at@AEAU-$pair@$$CBIV-$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned int,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>,0>>::_Insert_nohint<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>> &,std::_Tree_node<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>,void *> *>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        __int64 *a5)
{
  __int64 *v6; // rsi
  __int64 **v8; // r9
  char v9; // r10
  __int64 *v10; // rax
  __int64 **v11; // rbx
  char v12; // r8
  __int64 **v13; // rax
  __int64 *v14; // rax
  __int64 *i; // rax
  int v17; // [rsp+20h] [rbp-18h]
  __int64 *v18; // [rsp+40h] [rbp+8h] BYREF

  v6 = a5;
  v8 = (__int64 **)*a1;
  v9 = 1;
  v10 = *(__int64 **)(*a1 + 8);
  while ( !*((_BYTE *)v10 + 25) )
  {
    v8 = (__int64 **)v10;
    if ( *a4 >= *((_DWORD *)v10 + 8) )
    {
      v10 = (__int64 *)v10[2];
      v9 = 0;
    }
    else
    {
      v10 = (__int64 *)*v10;
      v9 = 1;
    }
  }
  v11 = v8;
  if ( v9 )
  {
    if ( v8 == *(__int64 ***)*a1 )
    {
      v12 = 1;
      goto LABEL_9;
    }
    if ( *((_BYTE *)v8 + 25) )
    {
      v11 = (__int64 **)v8[2];
    }
    else
    {
      v14 = *v8;
      if ( *((_BYTE *)*v8 + 25) )
      {
        for ( i = v8[1]; !*((_BYTE *)i + 25) && v11 == (__int64 **)*i; i = (__int64 *)i[1] )
          v11 = (__int64 **)i;
        if ( !*((_BYTE *)v11 + 25) )
          v11 = (__int64 **)i;
      }
      else
      {
        do
        {
          v11 = (__int64 **)v14;
          v14 = (__int64 *)v14[2];
        }
        while ( !*((_BYTE *)v14 + 25) );
      }
    }
  }
  if ( *((_DWORD *)v11 + 8) >= *a4 )
  {
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(a5 + 5);
    std::_Deallocate<16,0>(v6, 0x30uLL);
    *(_QWORD *)a2 = v11;
    *(_BYTE *)(a2 + 8) = 0;
    return a2;
  }
  v12 = v9;
LABEL_9:
  v13 = std::_Tree<std::_Tmap_traits<unsigned int,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>,0>>::_Insert_at<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>> &,std::_Tree_node<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>,void *> *>(
          a1,
          &v18,
          v12,
          v8,
          v17,
          a5);
  *(_BYTE *)(a2 + 8) = 1;
  *(_QWORD *)a2 = *v13;
  return a2;
}
