/*
 * XREFs of ??0CDropShadow@@QEAA@PEAVCComposition@@@Z @ 0x18003024C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C4F0 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ?SetMask@ShadowIntermediates@CDropShadow@@QEAAJPEAV2@PEAVCSpriteVisualContent@@@Z @ 0x18003030C (-SetMask@ShadowIntermediates@CDropShadow@@QEAAJPEAV2@PEAVCSpriteVisualContent@@@Z.c)
 *     ??0?$_Hash@V?$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@1@AEBV?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@1@@Z @ 0x180030358 (--0-$_Hash@V-$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V-$_Uhash_compare@PEAV.c)
 */

CDropShadow *__fastcall CDropShadow::CDropShadow(CDropShadow *this, struct CComposition *a2)
{
  CDropShadow::ShadowIntermediates *v3; // rbx
  CDropShadow *result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  *((_DWORD *)this + 2) = 0;
  v3 = (CDropShadow *)((char *)this + 136);
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *(_QWORD *)this = &CDropShadow::`vftable'{for `CContent'};
  *((_BYTE *)this + 72) = 0;
  *((_DWORD *)this + 33) = 0;
  *((_QWORD *)this + 7) = &CLinearGradientBrush::`vftable'{for `IVisualListenerInfoProvider'};
  *((_DWORD *)this + 24) = 1091567616;
  *((_DWORD *)this + 25) = 1065353216;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 0;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_DWORD *)this + 46) = 1065353216;
  std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>(
    (char *)this + 200,
    &v5);
  CDropShadow::ShadowIntermediates::SetMask(v3, this, 0LL);
  result = this;
  *((_DWORD *)this + 23) = 1065353216;
  return result;
}
