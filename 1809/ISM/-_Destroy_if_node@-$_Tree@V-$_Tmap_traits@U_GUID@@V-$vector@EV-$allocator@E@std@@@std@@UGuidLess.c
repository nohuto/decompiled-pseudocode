/*
 * XREFs of ?_Destroy_if_node@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@PEAX@2@@Z @ 0x18011F8F4
 * Callers:
 *     ??$_Insert_at@AEAU?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@PEAX@1@AEAU?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@1@1@Z @ 0x180120794 (--$_Insert_at@AEAU-$pair@$$CBU_GUID@@V-$vector@EV-$allocator@E@std@@@std@@@std@@PEAU-$_Tree_node.c)
 *     _std::_Tree_std::_Tmap_traits__GUID_std::vector_unsigned_char_std::allocator_unsigned_char____Windows::Internal::Holographic::PropertyCache::GuidLess_std::allocator_std::pair__GUID_const__std::vector_unsigned_char_std::allocator_unsigned_char________0___::_Insert_hint_std::pair__GUID_const__std::vector_unsigned_char_std::allocator_unsigned_char______&___ptr64_std::_Tree_node_std::pair__GUID_const__std::vector_unsigned_char_std::allocator_unsigned_char______void_____ptr64______ptr64__::_1_::catch$0 @ 0x18013646A (_std--_Tree_std--_Tmap_traits__GUID_std--vector_unsigned_char_std--allocator_unsigned_char____Wi.c)
 *     _std::_Tree_std::_Tmap_traits__GUID_std::vector_unsigned_char_std::allocator_unsigned_char____Windows::Internal::Holographic::PropertyCache::GuidLess_std::allocator_std::pair__GUID_const__std::vector_unsigned_char_std::allocator_unsigned_char________0___::_Insert_nohint_std::pair__GUID_const__std::vector_unsigned_char_std::allocator_unsigned_char______&___ptr64_std::_Tree_node_std::pair__GUID_const__std::vector_unsigned_char_std::allocator_unsigned_char______void_____ptr64______ptr64__::_1_::catch$1 @ 0x1801365AE (_std--_Tree_std--_Tmap_traits__GUID_std--vector_unsigned_char_std--allocator_unsign_ea_1801365AE.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<_GUID,std::vector<unsigned char>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::vector<unsigned char>>>,0>>::_Destroy_if_node(
        __int64 a1,
        _QWORD *a2)
{
  char *v2; // rcx
  const struct std::nothrow_t *v4; // rdx
  char *v5; // r8
  char *v6; // rcx

  v2 = (char *)a2[6];
  if ( v2 )
  {
    v4 = (const struct std::nothrow_t *)(a2[8] - (_QWORD)v2);
    if ( (unsigned __int64)v4 >= 0x1000 )
    {
      v5 = (char *)*((_QWORD *)v2 - 1);
      v4 = (const struct std::nothrow_t *)((char *)v4 + 39);
      v6 = (char *)(v2 - v5);
      if ( (unsigned __int64)(v6 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v6, v4);
        JUMPOUT(0x18011F95ALL);
      }
      v2 = v5;
    }
    operator delete(v2, v4);
    a2[6] = 0LL;
    a2[7] = 0LL;
    a2[8] = 0LL;
  }
  operator delete(a2, (const struct std::nothrow_t *)0x48);
}
