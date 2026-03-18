/*
 * XREFs of ?AssociateWindowBackgroundTreatment@CBaseRenderTarget@@UEAAXPEAVCWindowBackgroundTreatment@@@Z @ 0x1801680C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Insert_nohint@AEBQEAVCWindowBackgroundTreatment@@U_Not_a_node_tag@std@@@?$_Tree@V?$_Tset_traits@PEAVCWindowBackgroundTreatment@@U?$less@PEAVCWindowBackgroundTreatment@@@std@@V?$allocator@PEAVCWindowBackgroundTreatment@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowBackgroundTreatment@@@std@@@std@@@std@@_N@1@_NAEBQEAVCWindowBackgroundTreatment@@U_Not_a_node_tag@1@@Z @ 0x18001BB20 (--$_Insert_nohint@AEBQEAVCWindowBackgroundTreatment@@U_Not_a_node_tag@std@@@-$_Tree@V-$_Tset_tra.c)
 */

void __fastcall CBaseRenderTarget::AssociateWindowBackgroundTreatment(
        __int64 **this,
        struct CWindowBackgroundTreatment *a2,
        __int64 a3)
{
  _BYTE v3[24]; // [rsp+30h] [rbp-18h] BYREF
  struct CWindowBackgroundTreatment *v4; // [rsp+58h] [rbp+10h] BYREF

  v4 = a2;
  std::_Tree<std::_Tset_traits<CWindowBackgroundTreatment *,std::less<CWindowBackgroundTreatment *>,std::allocator<CWindowBackgroundTreatment *>,0>>::_Insert_nohint<CWindowBackgroundTreatment * const &,std::_Not_a_node_tag>(
    this + 10,
    (__int64)v3,
    a3,
    &v4);
}
