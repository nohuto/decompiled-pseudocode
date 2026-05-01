/*
 * XREFs of ??$_Try_emplace@AEBQEAUHSTRING__@@$$V@?$map@PEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@U?$less@PEAUHSTRING__@@@3@V?$allocator@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@@3@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBQEAUHSTRING__@@@Z @ 0x18041F0A0
 * Callers:
 *     ?AddDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUHSTRING__@@@Z @ 0x18041F6E8 (-AddDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAUHSTRING__@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@PEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@U?$less@PEAUHSTRING__@@@3@V?$allocator@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAUHSTRING__@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18041EC80 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAUHSTRING__@@@2@V-$tuple@$$V@2@@-$_Tree.c)
 *     ??$_Insert_hint@AEAU?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@PEAU?$_Tree_node@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@U?$less@PEAUHSTRING__@@@3@V?$allocator@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@@std@@@std@@@1@AEAU?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@PEAX@1@@Z @ 0x18041ECEC (--$_Insert_hint@AEAU-$pair@QEAUHSTRING__@@V-$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@.c)
 */

unsigned __int64 __fastcall std::map<HSTRING__ *,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>::_Try_emplace<HSTRING__ * const &,>(
        __int64 **a1,
        unsigned __int64 a2,
        unsigned __int64 *a3)
{
  __int64 *v3; // rbx
  unsigned __int64 v5; // rdi
  __int64 v6; // rax
  _QWORD *v7; // rax
  unsigned __int64 *v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  v5 = a2;
  v6 = (*a1)[1];
  if ( *(_BYTE *)(v6 + 25) )
    goto LABEL_10;
  a2 = *a3;
  do
  {
    if ( *(_QWORD *)(v6 + 32) >= a2 )
    {
      v3 = (__int64 *)v6;
      v6 = *(_QWORD *)v6;
    }
    else
    {
      v6 = *(_QWORD *)(v6 + 16);
    }
  }
  while ( !*(_BYTE *)(v6 + 25) );
  if ( v3 == *a1 || a2 < v3[4] )
  {
LABEL_10:
    v9 = a3;
    v7 = std::_Tree_comp_alloc<std::_Tmap_traits<HSTRING__ *,std::shared_ptr<TwinUI::Lighting::IAssistantLight>,std::less<HSTRING__ *>,std::allocator<std::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<HSTRING__ * const &>,std::tuple<>>(
           a1,
           a2,
           &v9);
    std::_Tree<std::_Tmap_traits<HSTRING__ *,std::shared_ptr<TwinUI::Lighting::IAssistantLight>,std::less<HSTRING__ *>,std::allocator<std::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>>,0>>::_Insert_hint<std::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>> &,std::_Tree_node<std::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>,void *> *>(
      (__int64 *)a1,
      (__int64 *)&v9,
      v3,
      v7 + 4,
      v7);
    *(_QWORD *)v5 = v9;
    *(_BYTE *)(v5 + 8) = 1;
  }
  else
  {
    *(_QWORD *)v5 = v3;
    *(_BYTE *)(v5 + 8) = 0;
  }
  return v5;
}
