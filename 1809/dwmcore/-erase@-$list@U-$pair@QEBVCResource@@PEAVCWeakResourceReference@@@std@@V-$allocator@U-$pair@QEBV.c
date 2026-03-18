/*
 * XREFs of ?erase@?$list@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@@Z @ 0x180069068
 * Callers:
 *     ?erase@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@MV?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCChannelContext@@M@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCChannelContext@@M@std@@@std@@@std@@@2@@Z @ 0x180068FDC (-erase@-$_Hash@V-$_Umap_traits@PEAVCChannelContext@@MV-$_Uhash_compare@PEAVCChannelContext@@U-$h.c)
 *     ??$_Insert@AEAU?$pair@QEAVCChannelContext@@M@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCChannelContext@@M@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@MV?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCChannelContext@@M@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@QEAVCChannelContext@@M@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCChannelContext@@M@std@@@std@@@std@@@1@@Z @ 0x1800691A0 (--$_Insert@AEAU-$pair@QEAVCChannelContext@@M@std@@V-$_List_unchecked_iterator@V-$_List_val@U-$_L.c)
 *     ??$_Insert@AEAU?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@1@@Z @ 0x1800C4AB4 (--$_Insert@AEAU-$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@V-$_List_unchecked_iterat.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::list<std::pair<CResource const * const,CWeakResourceReference *>>::erase(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v4; // rbx

  v4 = *a3;
  *(_QWORD *)a3[1] = *a3;
  *(_QWORD *)(*a3 + 8) = a3[1];
  --*(_QWORD *)(a1 + 8);
  std::_Deallocate<16,0>(a3, 0x20uLL);
  *a2 = v4;
  return a2;
}
