/*
 * XREFs of ?_Destroy_if_node@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@2@@Z @ 0x1800BCCB0
 * Callers:
 *     ??$_Insert_at@AEAU?$pair@QEAUHWND__@@UExeData@@@std@@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UExeData@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@1@AEAU?$pair@QEAUHWND__@@UExeData@@@1@1@Z @ 0x1800B9760 (--$_Insert_at@AEAU-$pair@QEAUHWND__@@UExeData@@@std@@PEAU-$_Tree_node@U-$pair@QEAUHWND__@@UExeDa.c)
 *     _std::_Tree_std::_Tmap_traits_HWND_____ExeData_std::less_HWND______std::allocator_std::pair_HWND_____const_ExeData____0___::_Insert_hint_std::pair_HWND_____const_ExeData__&_std::_Tree_node_std::pair_HWND_____const_ExeData__void_______::_1_::catch$41 @ 0x1800B9AD6 (_std--_Tree_std--_Tmap_traits_HWND_____ExeData_std--less_HWND______std--allocator_std--pair_HWND.c)
 *     ??$_Insert_nohint@AEAU?$pair@QEAUHWND__@@UExeData@@@std@@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UExeData@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@QEAUHWND__@@UExeData@@@1@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@1@@Z @ 0x1800B9FB8 (--$_Insert_nohint@AEAU-$pair@QEAUHWND__@@UExeData@@@std@@PEAU-$_Tree_node@U-$pair@QEAUHWND__@@UE.c)
 *     _std::_Tree_std::_Tmap_traits_HWND_____ExeData_std::less_HWND______std::allocator_std::pair_HWND_____const_ExeData____0___::_Insert_nohint_std::pair_HWND_____const_ExeData__&_std::_Tree_node_std::pair_HWND_____const_ExeData__void_______::_1_::catch$18 @ 0x1800BA0F2 (_std--_Tree_std--_Tmap_traits_HWND_____ExeData_std--less_HWND______std--allocator_s_ea_1800BA0F2.c)
 * Callees:
 *     ??1ExeData@@QEAA@XZ @ 0x1800BA798 (--1ExeData@@QEAA@XZ.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::_Destroy_if_node(
        __int64 a1,
        __int64 a2)
{
  ExeData::~ExeData((ExeData *)(a2 + 40));
  std::_Deallocate<16,0>((void *)a2, (const struct std::nothrow_t *)0x70);
}
