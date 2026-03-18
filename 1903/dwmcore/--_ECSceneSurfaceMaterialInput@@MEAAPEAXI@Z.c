/*
 * XREFs of ??_ECSceneSurfaceMaterialInput@@MEAAPEAXI@Z @ 0x1801F9EB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CSceneSurfaceMaterialInput@@MEAA@XZ @ 0x1801F9E38 (--1CSceneSurfaceMaterialInput@@MEAA@XZ.c)
 */

CSceneSurfaceMaterialInput *__fastcall CSceneSurfaceMaterialInput::`vector deleting destructor'(
        CSceneSurfaceMaterialInput *this,
        char a2)
{
  CSceneSurfaceMaterialInput::~CSceneSurfaceMaterialInput(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
