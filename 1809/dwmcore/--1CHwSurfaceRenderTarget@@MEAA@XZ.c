/*
 * XREFs of ??1CHwSurfaceRenderTarget@@MEAA@XZ @ 0x1800DA954
 * Callers:
 *     ??1CHwTextureRenderTarget@@MEAA@XZ @ 0x1800DB100 (--1CHwTextureRenderTarget@@MEAA@XZ.c)
 *     ??1CHwDisplayRenderTarget@@MEAA@XZ @ 0x1800EA7A4 (--1CHwDisplayRenderTarget@@MEAA@XZ.c)
 *     ??1CHwCompSwapChainTarget@@MEAA@XZ @ 0x180200388 (--1CHwCompSwapChainTarget@@MEAA@XZ.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tset_traits@PEAVCWindowBackgroundTreatment@@U?$less@PEAVCWindowBackgroundTreatment@@@std@@V?$allocator@PEAVCWindowBackgroundTreatment@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowBackgroundTreatment@@@std@@@std@@@2@V32@0@Z @ 0x1800DA9C8 (-erase@-$_Tree@V-$_Tset_traits@PEAVCWindowBackgroundTreatment@@U-$less@PEAVCWindowB_ea_1800DA9C8.c)
 *     ?RemoveAssociations@CBaseRenderTarget@@AEAAXXZ @ 0x1800DAED8 (-RemoveAssociations@CBaseRenderTarget@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwSurfaceRenderTarget::~CHwSurfaceRenderTarget(CHwSurfaceRenderTarget *this)
{
  __int64 v2; // rcx
  char v3; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 25);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  *((_QWORD *)this + 20) = &CMILCOMBase::`vftable';
  CBaseRenderTarget::RemoveAssociations(this);
  std::_Tree<std::_Tset_traits<CWindowBackgroundTreatment *,std::less<CWindowBackgroundTreatment *>,std::allocator<CWindowBackgroundTreatment *>,0>>::erase(
    (char *)this + 144,
    &v3,
    **((_QWORD **)this + 18),
    *((_QWORD *)this + 18));
  std::_Deallocate<16,0>(*((void **)this + 18), 0x28uLL);
}
