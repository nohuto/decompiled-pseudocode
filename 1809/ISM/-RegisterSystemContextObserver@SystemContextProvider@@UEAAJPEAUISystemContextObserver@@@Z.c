/*
 * XREFs of ?RegisterSystemContextObserver@SystemContextProvider@@UEAAJPEAUISystemContextObserver@@@Z @ 0x18009EAE0
 * Callers:
 *     ?RegisterSystemContextObserver@InputConfigContextProvider@@UEAAJPEAUISystemContextObserver@@@Z @ 0x18009DE50 (-RegisterSystemContextObserver@InputConfigContextProvider@@UEAAJPEAUISystemContextObserver@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Insert@AEBQEAUIHeatSystemContextClient@@U_Not_a_node_tag@std@@@?$_Hash@V?$_Uset_traits@PEAUIHeatSystemContextClient@@V?$_Uhash_compare@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@@std@@V?$allocator@PEAUIHeatSystemContextClient@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIHeatSystemContextClient@@@std@@@std@@@std@@_N@1@AEBQEAUIHeatSystemContextClient@@U_Not_a_node_tag@1@@Z @ 0x18003A4DC (--$_Insert@AEBQEAUIHeatSystemContextClient@@U_Not_a_node_tag@std@@@-$_Hash@V-$_Uset_traits@PEAUI.c)
 */

__int64 __fastcall SystemContextProvider::RegisterSystemContextObserver(
        SystemContextProvider *this,
        struct ISystemContextObserver *a2)
{
  unsigned __int64 v2; // r8
  __int64 v5; // rdx
  __int64 *v7; // rdx
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 *i; // rax
  __int64 v14; // rcx
  _BYTE v15[24]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct ISystemContextObserver *v17; // [rsp+48h] [rbp+10h] BYREF

  v17 = a2;
  v2 = 0LL;
  if ( !a2 )
  {
    v5 = 52LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\systemcontextprovider\\lib\\systemcontextprovider.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v7 = (__int64 *)*((_QWORD *)this + 4);
  v8 = 0xCBF29CE484222325uLL;
  do
  {
    v9 = *((unsigned __int8 *)&v17 + v2++);
    v8 = 0x100000001B3LL * (v9 ^ v8);
  }
  while ( v2 < 8 );
  v10 = *((_QWORD *)this + 6);
  v11 = v8 & *((_QWORD *)this + 9);
  v12 = 2 * v11;
  for ( i = *(__int64 **)(v10 + 16 * v11); ; i = (__int64 *)*i )
  {
    v14 = *(__int64 **)(v10 + 8 * v12) == v7 ? (__int64)v7 : **(_QWORD **)(v10 + 8 * v12 + 8);
    if ( i == (__int64 *)v14 )
      break;
    if ( (struct ISystemContextObserver *)i[2] == a2 )
      goto LABEL_14;
  }
  i = v7;
LABEL_14:
  if ( i != v7 )
  {
    v5 = 58LL;
    goto LABEL_3;
  }
  std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::_Insert<IHeatSystemContextClient * const &,std::_Not_a_node_tag>(
    (_QWORD *)this + 3,
    (__int64)v15,
    (__int64 *)&v17);
  return 0LL;
}
