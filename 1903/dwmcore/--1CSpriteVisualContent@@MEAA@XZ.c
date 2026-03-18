/*
 * XREFs of ??1CSpriteVisualContent@@MEAA@XZ @ 0x180088FE8
 * Callers:
 *     ??_GCWindowBackdropBrush@@UEAAPEAXI@Z @ 0x180020030 (--_GCWindowBackdropBrush@@UEAAPEAXI@Z.c)
 *     ??1CGradientBrush@@MEAA@XZ @ 0x180020FC0 (--1CGradientBrush@@MEAA@XZ.c)
 *     ??1CSurfaceBrush@@MEAA@XZ @ 0x1800C6D00 (--1CSurfaceBrush@@MEAA@XZ.c)
 *     ??1CMaskBrush@@MEAA@XZ @ 0x1800C88B0 (--1CMaskBrush@@MEAA@XZ.c)
 *     ??1CEffectBrush@@MEAA@XZ @ 0x1800CAEA0 (--1CEffectBrush@@MEAA@XZ.c)
 *     ??1CNineGridBrush@@MEAA@XZ @ 0x1800CEB30 (--1CNineGridBrush@@MEAA@XZ.c)
 *     ??_ECColorBrush@@MEAAPEAXI@Z @ 0x1800D1320 (--_ECColorBrush@@MEAAPEAXI@Z.c)
 *     ??1CDropShadow@@UEAA@XZ @ 0x1800DBA58 (--1CDropShadow@@UEAA@XZ.c)
 *     ??1CCompositionSkyBoxBrush@@UEAA@XZ @ 0x1801D2790 (--1CCompositionSkyBoxBrush@@UEAA@XZ.c)
 *     ??1CTextBrush@@MEAA@XZ @ 0x1801FC80C (--1CTextBrush@@MEAA@XZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800B8A58 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C57A0 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CSpriteVisualContent::~CSpriteVisualContent(CSpriteVisualContent *this)
{
  __int64 v1; // rbx

  v1 = *((_QWORD *)this + 8);
  if ( v1 )
  {
    *(_DWORD *)(v1 + 40) = 0;
    DynArrayImpl<0>::ShrinkToSize(v1 + 16, 24LL);
    *(_BYTE *)(v1 + 200) = 1;
  }
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((char *)this + 64);
  CResource::~CResource(this);
}
