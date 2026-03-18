/*
 * XREFs of ?AssociateWindowBackgroundTreatment@CHwDisplayRenderTarget@@UEAAXPEAVCWindowBackgroundTreatment@@@Z @ 0x18001E150
 * Callers:
 *     ?AssociateWindowBackgroundTreatment@CHwDisplayRenderTarget@@WNA@EAAXPEAVCWindowBackgroundTreatment@@@Z @ 0x1800F0E00 (-AssociateWindowBackgroundTreatment@CHwDisplayRenderTarget@@WNA@EAAXPEAVCWindowBackgroundTreatme.c)
 * Callees:
 *     ??$_Insert_nohint@AEBQEAVCWindowBackgroundTreatment@@U_Not_a_node_tag@std@@@?$_Tree@V?$_Tset_traits@PEAVCWindowBackgroundTreatment@@U?$less@PEAVCWindowBackgroundTreatment@@@std@@V?$allocator@PEAVCWindowBackgroundTreatment@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowBackgroundTreatment@@@std@@@std@@@std@@_N@1@_NAEBQEAVCWindowBackgroundTreatment@@U_Not_a_node_tag@1@@Z @ 0x180019E2C (--$_Insert_nohint@AEBQEAVCWindowBackgroundTreatment@@U_Not_a_node_tag@std@@@-$_Tree@V-$_Tset_tra.c)
 */

void __fastcall CHwDisplayRenderTarget::AssociateWindowBackgroundTreatment(
        __int64 **this,
        struct CWindowBackgroundTreatment *a2,
        __int64 a3)
{
  _BYTE v3[24]; // [rsp+30h] [rbp-18h] BYREF
  struct CWindowBackgroundTreatment *v4; // [rsp+50h] [rbp+8h] BYREF

  v4 = a2;
  std::_Tree<std::_Tset_traits<CWindowBackgroundTreatment *,std::less<CWindowBackgroundTreatment *>,std::allocator<CWindowBackgroundTreatment *>,0>>::_Insert_nohint<CWindowBackgroundTreatment * const &,std::_Not_a_node_tag>(
    this + 18,
    (__int64)v3,
    a3,
    &v4);
}
