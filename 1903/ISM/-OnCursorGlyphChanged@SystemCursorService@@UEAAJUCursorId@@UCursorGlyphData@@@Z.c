/*
 * XREFs of ?OnCursorGlyphChanged@SystemCursorService@@UEAAJUCursorId@@UCursorGlyphData@@@Z @ 0x1800CD8B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lower_bound@?$_Hash@V?$_Uset_traits@PEAUIHeatSystemContextClient@@V?$_Uhash_compare@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@@std@@V?$allocator@PEAUIHeatSystemContextClient@@@3@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIHeatSystemContextClient@@@std@@@std@@@2@AEBQEAUIHeatSystemContextClient@@@Z @ 0x1800569B0 (-lower_bound@-$_Hash@V-$_Uset_traits@PEAUIHeatSystemContextClient@@V-$_Uhash_compare@PEAUIHeatSy.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEB_K@2@V?$tuple@$$V@2@@?$_List_buy@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@PEAX@1@PEAU21@0AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEB_K@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800C8390 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEB_K@2@V-$tuple@$$V@2@@-$_List_ea_1800C8390.c)
 *     ??$_Insert@AEAU?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursor@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@std@@@std@@@1@@Z @ 0x1800C83F8 (--$_Insert@AEAU-$pair@$$CB_KV-$shared_ptr@VSystemCursor@@@std@@@std@@V-$_List_unchecked_iterator.c)
 *     ?CursorExists@SystemCursorService@@QEAA_N_K@Z @ 0x1800C9D70 (-CursorExists@SystemCursorService@@QEAA_N_K@Z.c)
 *     ?SetShape@SystemCursor@@QEAAJ_K@Z @ 0x1800CDD60 (-SetShape@SystemCursor@@QEAAJ_K@Z.c)
 */

__int64 __fastcall SystemCursorService::OnCursorGlyphChanged(
        SystemCursorService *a1,
        unsigned int *a2,
        unsigned __int64 a3)
{
  __int64 v3; // rsi
  __int64 v6; // r9
  __int64 *v7; // rax
  __int64 *v8; // rcx
  _QWORD *v9; // rsi
  _QWORD *v10; // r14
  _QWORD *v11; // rdx
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // ebx
  __int64 *v16; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v18; // [rsp+68h] [rbp+10h] BYREF
  __int64 *v19; // [rsp+78h] [rbp+20h] BYREF

  v3 = *a2;
  if ( !SystemCursorService::CursorExists(a1, v3) )
    return 0LL;
  v18 = v3;
  std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::lower_bound(
    (__int64)a1 + 40,
    (__int64)&v19,
    (unsigned __int8 *)&v18);
  v7 = (__int64 *)*((_QWORD *)a1 + 6);
  v8 = v19;
  if ( v19 == v7 )
  {
    v9 = (_QWORD *)*v7;
    v19 = &v18;
    v10 = (_QWORD *)v9[1];
    v11 = std::_List_buy<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor>>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned __int64 const &>,std::tuple<>>(
            (__int64)&v18,
            v9,
            v10,
            v6,
            &v19);
    v12 = *((_QWORD *)a1 + 7);
    if ( v12 == 0x666666666666665LL )
      std::_Xlength_error("list<T> too long");
    *((_QWORD *)a1 + 7) = v12 + 1;
    v9[1] = v11;
    *v10 = v11;
    std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursor>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor>>>,0>>::_Insert<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor>>>>>>(
      (__int64)a1 + 40,
      (__int64)&v16,
      (unsigned __int8 *)(**((_QWORD **)a1 + 6) + 16LL),
      **((_QWORD ***)a1 + 6));
    v8 = v16;
  }
  v13 = SystemCursor::SetShape((SystemCursor *)v8[3], a3);
  v14 = v13;
  if ( v13 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x11B,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\system"
             "cursorservice.cpp",
    (const char *)(unsigned int)v13);
  return v14;
}
