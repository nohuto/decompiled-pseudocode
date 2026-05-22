/*
 * XREFs of ??$_Try_emplace@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@@std@@_N@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180088554
 * Callers:
 *     ?OnCallbacksChanged@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@@Z @ 0x18008A160 (-OnCallbacksChanged@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@@Z.c)
 * Callees:
 *     ??$_Insert_hint@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@@1@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@1@@Z @ 0x180025944 (--$_Insert_hint@AEAU-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180087CDC (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBV-$basic_string@GU-$char_traits@G@std@@V-.c)
 *     ??$_Lbound@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@IEBAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180088190 (--$_Lbound@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Tree@V-$_Tmap_trait.c)
 */

__int64 __fastcall std::map<std::wstring,std::variant<unsigned long,bool,float>>::_Try_emplace<std::wstring const &,>(
        __int64 *a1,
        __int64 a2,
        char *a3)
{
  __int64 *v6; // rax
  __int64 *v7; // rbx
  char *v8; // rax
  char *v9; // r8
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // rdx
  int v12; // ecx
  unsigned __int16 v13; // r9
  signed __int64 v14; // r8
  bool v15; // cc
  unsigned __int16 v16; // r9
  bool v17; // sf
  char *v18; // rax
  char *v20; // [rsp+40h] [rbp+8h] BYREF

  v6 = std::_Tree<std::_Tmap_traits<std::wstring,std::variant<unsigned long,bool,float>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>,0>>::_Lbound<std::wstring>(
         a1,
         (__int64)a3);
  v7 = v6;
  if ( v6 == (__int64 *)*a1 )
    goto LABEL_22;
  v8 = (char *)(v6 + 4);
  if ( (unsigned __int64)v7[7] >= 8 )
    v8 = (char *)v7[4];
  v9 = a3;
  if ( *((_QWORD *)a3 + 3) >= 8uLL )
    v9 = *(char **)a3;
  v10 = v7[6];
  v11 = v10;
  if ( v10 >= *((_QWORD *)a3 + 2) )
    v11 = *((_QWORD *)a3 + 2);
  v12 = 0;
  if ( v11 )
  {
    v13 = *(_WORD *)v9;
    if ( *(_WORD *)v9 < *(_WORD *)v8 )
    {
LABEL_14:
      v12 = -1;
    }
    else
    {
      v14 = v9 - v8;
      v15 = v13 <= *(_WORD *)v8;
      while ( v15 )
      {
        if ( v11 == 1 )
          goto LABEL_15;
        v8 += 2;
        --v11;
        v16 = *(_WORD *)&v8[v14];
        v15 = v16 <= *(_WORD *)v8;
        if ( v16 < *(_WORD *)v8 )
          goto LABEL_14;
      }
      v12 = 1;
    }
  }
LABEL_15:
  v17 = v12 < 0;
  if ( v12 )
    goto LABEL_19;
  if ( *((_QWORD *)a3 + 2) < v10 )
    goto LABEL_22;
  if ( *((_QWORD *)a3 + 2) <= v10 )
  {
    v17 = 0;
LABEL_19:
    if ( !v17 )
      goto LABEL_20;
LABEL_22:
    v20 = a3;
    v18 = (char *)std::_Tree_comp_alloc<std::_Tmap_traits<std::wstring,std::variant<unsigned long,bool,float>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<std::wstring const &>,std::tuple<>>(a1);
    std::_Tree<std::_Tmap_traits<std::wstring,std::variant<unsigned long,bool,float>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>,0>>::_Insert_hint<std::pair<std::wstring const,std::variant<unsigned long,bool,float>> &,std::_Tree_node<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>,void *> *>(
      a1,
      &v20,
      (char *)v7,
      v18 + 32,
      (__int64)v18);
    *(_QWORD *)a2 = v20;
    *(_BYTE *)(a2 + 8) = 1;
    return a2;
  }
LABEL_20:
  *(_QWORD *)a2 = v7;
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}
