/*
 * XREFs of ??_GCSceneMaterial@@MEAAPEAXI@Z @ 0x1801F8210
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CSceneMaterial@@MEAA@XZ @ 0x1801F8190 (--1CSceneMaterial@@MEAA@XZ.c)
 */

CSceneMaterial *__fastcall CSceneMaterial::`scalar deleting destructor'(CSceneMaterial *this, char a2)
{
  CSceneMaterial::~CSceneMaterial(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
