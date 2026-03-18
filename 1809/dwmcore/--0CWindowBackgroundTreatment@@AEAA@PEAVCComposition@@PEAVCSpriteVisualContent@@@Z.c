/*
 * XREFs of ??0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCSpriteVisualContent@@@Z @ 0x1800E4A74
 * Callers:
 *     ?ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETWINDOWBACKGROUNDTREATMENT@@@Z @ 0x1800E4CB0 (-ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETWIND.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@QEAVCChannelContext@@M@std@@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@QEAVCChannelContext@@M@std@@PEAX@2@PEAU32@0@Z @ 0x180069160 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@QEAVCChannelContext@@M@std@@V-$allocator@U-.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800A55A8 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?UpdateBackdropFlags@CWindowBackgroundTreatment@@AEAAXXZ @ 0x1800E4718 (-UpdateBackdropFlags@CWindowBackgroundTreatment@@AEAAXXZ.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@PEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@V?$_Uhash_compare@PEAVIRenderTarget@@U?$hash@PEAVIRenderTarget@@@std@@U?$equal_to@PEAVIRenderTarget@@@3@@std@@V?$allocator@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800E4830 (-_Init@-$_Hash@V-$_Umap_traits@PEAVIRenderTarget@@V-$ComPtr@VCRenderTargetImageSource@@@WRL@Micr.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

CWindowBackgroundTreatment *__fastcall CWindowBackgroundTreatment::CWindowBackgroundTreatment(
        CWindowBackgroundTreatment *this,
        struct CComposition *a2,
        struct CSpriteVisualContent *a3)
{
  CPtrArrayBase *v4; // rcx
  unsigned __int64 v5; // r8
  int v6; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CWindowBackgroundTreatment::`vftable'{for `CResource'};
  *((_QWORD *)this + 7) = &CWindowBackgroundTreatment::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 8) = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct CSpriteVisualContent *))(*(_QWORD *)a3 + 8LL))(a3);
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 10) = std::_List_alloc<std::_List_base_types<std::pair<CChannelContext * const,float>>>::_Buynode0(
                             (__int64)this,
                             0LL,
                             0LL);
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 18) = 1065353216;
  std::_Hash<std::_Umap_traits<IRenderTarget *,Microsoft::WRL::ComPtr<CRenderTargetImageSource>,std::_Uhash_compare<IRenderTarget *,std::hash<IRenderTarget *>,std::equal_to<IRenderTarget *>>,std::allocator<std::pair<IRenderTarget * const,Microsoft::WRL::ComPtr<CRenderTargetImageSource>>>,0>>::_Init(
    (_QWORD *)this + 9,
    8LL);
  *((_QWORD *)this + 17) = 0LL;
  *((_OWORD *)this + 9) = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *((_QWORD *)this + 20) = qword_1803075C8;
  *(_OWORD *)((char *)this + 168) = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *((_QWORD *)this + 23) = qword_1803075C8;
  *((_OWORD *)this + 12) = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *((_QWORD *)this + 26) = qword_1803075C8;
  *(_OWORD *)((char *)this + 216) = _xmm;
  *((_WORD *)this + 140) = 32085;
  *(_OWORD *)((char *)this + 232) = _xmm;
  *(_OWORD *)((char *)this + 248) = _xmm;
  *(_OWORD *)((char *)this + 264) = _xmm;
  *((_DWORD *)this + 71) = 0;
  *((_OWORD *)this + 18) = _xmm;
  *((_WORD *)this + 176) = 32085;
  *((_OWORD *)this + 19) = _xmm;
  *((_OWORD *)this + 20) = _xmm;
  *((_OWORD *)this + 21) = _xmm;
  *((_WORD *)this + 178) = 256;
  *((_BYTE *)this + 358) = 0;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  v4 = (CPtrArrayBase *)(*((_QWORD *)this + 8) + 24LL);
  if ( (*(_QWORD *)v4 & 2) != 0 )
    v5 = *(_QWORD *)(*(_QWORD *)v4 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    v5 = *(_QWORD *)v4 & 1LL;
  v6 = CPtrArrayBase::InsertAt(v4, (unsigned __int64)this, v5);
  if ( v6 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v6, retaddr);
  CWindowBackgroundTreatment::UpdateBackdropFlags((CSpriteVisualContent **)this);
  return this;
}
