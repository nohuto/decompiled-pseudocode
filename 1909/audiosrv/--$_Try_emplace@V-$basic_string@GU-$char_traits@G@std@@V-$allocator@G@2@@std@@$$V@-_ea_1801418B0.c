/*
 * XREFs of ??$_Try_emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1801418B0
 * Callers:
 *     ?Initialize@CConstraintModel@@QEAAJXZ @ 0x1800616B8 (-Initialize@CConstraintModel@@QEAAJXZ.c)
 * Callees:
 *     ??$_Lbound@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@$0A@@std@@@std@@IEBAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800F486C (--$_Lbound@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Tree@V-$_Tmap_trait.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180140F24 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAV-$basic_string@GU-$char_t_ea_180140F24.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@@1@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@1@@Z @ 0x180141120 (--$_Insert_hint@AEAU-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12.c)
 */

__int64 __fastcall std::map<std::wstring,std::wstring>::_Try_emplace<std::wstring,>(__int64 *a1, __int64 a2, char *a3)
{
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 *v8; // rbx
  char *v9; // rax
  char *v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  signed __int64 v13; // rcx
  unsigned __int16 v14; // r10
  int v15; // eax
  bool v16; // sf
  __int64 v17; // rax
  char *v19; // [rsp+40h] [rbp+8h] BYREF

  v6 = std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::_Lbound<std::wstring>(
         a1,
         (__int64)a3);
  v8 = v6;
  if ( v6 == (__int64 *)*a1 )
    goto LABEL_20;
  v9 = (char *)(v6 + 4);
  if ( (unsigned __int64)v8[7] >= 8 )
    v9 = (char *)v8[4];
  v10 = a3;
  if ( *((_QWORD *)a3 + 3) >= 8uLL )
    v10 = *(char **)a3;
  v11 = v8[6];
  v12 = *((_QWORD *)a3 + 2);
  v7 = v11;
  if ( v11 >= v12 )
    v7 = *((_QWORD *)a3 + 2);
  if ( v7 )
  {
    v13 = v10 - v9;
    while ( 1 )
    {
      v14 = *(_WORD *)&v9[v13];
      if ( v14 != *(_WORD *)v9 )
        break;
      v9 += 2;
      if ( !--v7 )
        goto LABEL_12;
    }
    v15 = v14 < *(_WORD *)v9 ? -1 : 1;
  }
  else
  {
LABEL_12:
    v15 = 0;
  }
  v16 = v15 < 0;
  if ( v15 )
    goto LABEL_17;
  if ( v12 < v11 )
    goto LABEL_20;
  if ( v12 <= v11 )
  {
    v16 = 0;
LABEL_17:
    if ( !v16 )
      goto LABEL_18;
LABEL_20:
    v19 = a3;
    v17 = std::_Tree_comp_alloc<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<std::wstring &&>,std::tuple<>>(
            (__int64)a1,
            v7,
            (__int64 *)&v19);
    std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::_Insert_hint<std::pair<std::wstring const,std::wstring> &,std::_Tree_node<std::pair<std::wstring const,std::wstring>,void *> *>(
      a1,
      (__int64 *)&v19,
      (char *)v8,
      (unsigned __int16 *)(v17 + 32),
      v17);
    *(_QWORD *)a2 = v19;
    *(_BYTE *)(a2 + 8) = 1;
    return a2;
  }
LABEL_18:
  *(_QWORD *)a2 = v8;
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}
