/*
 * XREFs of ?RegisterSystemContextObserver@SystemContextProvider@@UEAAJPEAUISystemContextObserver@@@Z @ 0x1800298E0
 * Callers:
 *     ?RegisterSystemContextObserver@InputConfigContextProvider@@UEAAJPEAUISystemContextObserver@@@Z @ 0x180029850 (-RegisterSystemContextObserver@InputConfigContextProvider@@UEAAJPEAUISystemContextObserver@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Insert@AEBQEAUISystemContextObserver@@U_Not_a_node_tag@std@@@?$_Hash@V?$_Uset_traits@PEAUISystemContextObserver@@V?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@std@@V?$allocator@PEAUISystemContextObserver@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@@std@@_N@1@AEBQEAUISystemContextObserver@@U_Not_a_node_tag@1@@Z @ 0x180011618 (--$_Insert@AEBQEAUISystemContextObserver@@U_Not_a_node_tag@std@@@-$_Hash@V-$_Uset_traits@PEAUISy.c)
 */

__int64 __fastcall SystemContextProvider::RegisterSystemContextObserver(
        SystemContextProvider *this,
        struct ISystemContextObserver *a2)
{
  __int64 v4; // rax
  struct ISystemContextObserver **v5; // rdx
  __int64 v6; // r10
  __int64 v7; // rcx
  __int64 v8; // r11
  __int64 *v9; // rdx
  __int64 v10; // r10
  __int64 *i; // rcx
  __int64 *v12; // rax
  __int64 v14; // rdx
  _BYTE v15[24]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct ISystemContextObserver *v17; // [rsp+48h] [rbp+10h] BYREF

  v17 = a2;
  if ( a2 )
  {
    v4 = 0xCBF29CE484222325uLL;
    v5 = &v17;
    v6 = 8LL;
    do
    {
      v7 = *(unsigned __int8 *)v5;
      v5 = (struct ISystemContextObserver **)((char *)v5 + 1);
      v4 = 0x100000001B3LL * (v7 ^ v4);
      --v6;
    }
    while ( v6 );
    v8 = *((_QWORD *)this + 6);
    v9 = (__int64 *)*((_QWORD *)this + 4);
    v10 = 2 * (v4 & *((_QWORD *)this + 9));
    for ( i = *(__int64 **)(v8 + 16 * (v4 & *((_QWORD *)this + 9))); ; i = (__int64 *)*i )
    {
      v12 = *(__int64 **)(v8 + 8 * v10) == v9 ? (__int64 *)*((_QWORD *)this + 4) : **(__int64 ***)(v8 + 8 * v10 + 8);
      if ( i == v12 )
        break;
      if ( (struct ISystemContextObserver *)i[2] == a2 )
        goto LABEL_9;
    }
    i = (__int64 *)*((_QWORD *)this + 4);
LABEL_9:
    if ( i == v9 )
    {
      std::_Hash<std::_Uset_traits<ISystemContextObserver *,std::_Uhash_compare<ISystemContextObserver *,std::hash<ISystemContextObserver *>,std::equal_to<ISystemContextObserver *>>,std::allocator<ISystemContextObserver *>,0>>::_Insert<ISystemContextObserver * const &,std::_Not_a_node_tag>(
        (_QWORD *)this + 3,
        (__int64)v15,
        (unsigned __int8 *)&v17);
      return 0LL;
    }
    v14 = 58LL;
  }
  else
  {
    v14 = 52LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\systemcontextprovider\\lib\\systemcontextprovider.cpp",
    (const char *)0x80070057LL);
  return 2147942487LL;
}
