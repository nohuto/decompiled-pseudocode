/*
 * XREFs of ?RemoveAssociatedWindowBackgroundTreatment@CHwDisplayRenderTarget@@UEAAXPEAVCWindowBackgroundTreatment@@@Z @ 0x18001EAD0
 * Callers:
 *     ?RemoveAssociatedWindowBackgroundTreatment@CHwTextureRenderTarget@@WNA@EAAXPEAVCWindowBackgroundTreatment@@@Z @ 0x1800F1020 (-RemoveAssociatedWindowBackgroundTreatment@CHwTextureRenderTarget@@WNA@EAAXPEAVCWindowBackground.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tset_traits@PEAVCWindowBackgroundTreatment@@U?$less@PEAVCWindowBackgroundTreatment@@@std@@V?$allocator@PEAVCWindowBackgroundTreatment@@@3@$0A@@std@@@std@@QEAA_KAEBQEAVCWindowBackgroundTreatment@@@Z @ 0x18001D570 (-erase@-$_Tree@V-$_Tset_traits@PEAVCWindowBackgroundTreatment@@U-$less@PEAVCWindowBackgroundTrea.c)
 */

void __fastcall CHwDisplayRenderTarget::RemoveAssociatedWindowBackgroundTreatment(
        CHwDisplayRenderTarget *this,
        struct CWindowBackgroundTreatment *a2)
{
  struct CWindowBackgroundTreatment *v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2;
  std::_Tree<std::_Tset_traits<CWindowBackgroundTreatment *,std::less<CWindowBackgroundTreatment *>,std::allocator<CWindowBackgroundTreatment *>,0>>::erase(
    (__int64 *)this + 18,
    (unsigned __int64 *)&v2);
}
