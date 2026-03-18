/*
 * XREFs of ??1CDropShadow@@UEAA@XZ @ 0x1800E35E0
 * Callers:
 *     ??_GCDropShadow@@UEAAPEAXI@Z @ 0x1800E35A0 (--_GCDropShadow@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800677FC (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800E3AD8 (-_Init@-$_Hash@V-$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V-$_Uhash_compare@.c)
 *     ?clear@?$list@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@2@@std@@QEAAXXZ @ 0x1800E4080 (-clear@-$list@U-$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@V-$allocator@U-$pair@.c)
 *     ??1ShadowIntermediates@CDropShadow@@QEAA@XZ @ 0x1800E40C8 (--1ShadowIntermediates@CDropShadow@@QEAA@XZ.c)
 */

void __fastcall CDropShadow::~CDropShadow(CDropShadow *this)
{
  char *v2; // rbx
  void *v3; // rcx

  *(_QWORD *)this = &CDropShadow::`vftable'{for `CContent'};
  v2 = (char *)this + 192;
  *((_QWORD *)this + 7) = &CLinearGradientBrush::`vftable'{for `IVisualListenerInfoProvider'};
  std::list<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>::clear((char *)this + 200);
  std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::_Init(
    v2,
    8LL);
  v3 = (void *)*((_QWORD *)this + 27);
  if ( v3 )
  {
    std::_Deallocate<16,0>(v3, (*((_QWORD *)this + 29) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 27) = 0LL;
    *((_QWORD *)this + 28) = 0LL;
    *((_QWORD *)this + 29) = 0LL;
  }
  std::list<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>::clear((char *)this + 200);
  std::_Deallocate<16,0>(*((void **)this + 25), 0x58uLL);
  CDropShadow::ShadowIntermediates::~ShadowIntermediates((CDropShadow *)((char *)this + 128));
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 8);
  CResource::~CResource(this);
}
