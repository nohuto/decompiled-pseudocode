/*
 * XREFs of ??_GCScenePbrMaterial@@UEAAPEAXI@Z @ 0x18019FAF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@MEAA@XZ @ 0x18019E008 (--1-$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@MEAA@XZ.c)
 */

struct CResource **__fastcall CScenePbrMaterial::`scalar deleting destructor'(struct CResource **this, char a2)
{
  CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>::~CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse((CSwRenderTargetGetBounds *)this);
    else
      operator delete(this);
  }
  return this;
}
