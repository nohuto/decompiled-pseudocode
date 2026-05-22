/*
 * XREFs of ??1?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x180086FB8
 * Callers:
 *     ??1?$unordered_map@UtagMsgRoutingInfo@@PEAUIInputTarget@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@5@@std@@QEAA@XZ @ 0x180086FAC (--1-$unordered_map@UtagMsgRoutingInfo@@PEAUIInputTarget@@URoutingInfoHash@@U-$equal_to@UtagMsgRo.c)
 *     ??1DWMInputRouter@@MEAA@XZ @ 0x18008706C (--1DWMInputRouter@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,IInputTarget *,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,IInputTarget *>>,0>>::~_Hash<std::_Umap_traits<tagMsgRoutingInfo,IInputTarget *,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,IInputTarget *>>,0>>(
        _QWORD *a1)
{
  char *v2; // rcx
  const struct std::nothrow_t *v3; // rdx
  char *v4; // r8
  char *v5; // rcx
  _QWORD **v6; // rax
  _QWORD *v7; // r8
  _QWORD *v8; // rcx
  _QWORD *v9; // rbx

  v2 = (char *)a1[3];
  if ( v2 )
  {
    v3 = (const struct std::nothrow_t *)((a1[5] - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (unsigned __int64)v3 >= 0x1000 )
    {
      v4 = (char *)*((_QWORD *)v2 - 1);
      v3 = (const struct std::nothrow_t *)((char *)v3 + 39);
      v5 = (char *)(v2 - v4);
      if ( (unsigned __int64)(v5 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v5, v3);
        JUMPOUT(0x180087062LL);
      }
      v2 = v4;
    }
    operator delete(v2, v3);
    a1[3] = 0LL;
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  v6 = (_QWORD **)a1[1];
  v7 = *v6;
  *v6 = v6;
  *(_QWORD *)(a1[1] + 8LL) = a1[1];
  a1[2] = 0LL;
  v8 = (_QWORD *)a1[1];
  if ( v7 != v8 )
  {
    do
    {
      v9 = (_QWORD *)*v7;
      operator delete(v7, (const struct std::nothrow_t *)0x40);
      v8 = (_QWORD *)a1[1];
      v7 = v9;
    }
    while ( v9 != v8 );
  }
  operator delete(v8, (const struct std::nothrow_t *)0x40);
}
