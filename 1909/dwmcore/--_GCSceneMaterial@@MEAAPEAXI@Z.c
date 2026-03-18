/*
 * XREFs of ??_GCSceneMaterial@@MEAAPEAXI@Z @ 0x1801F6B20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CSceneMaterial@@MEAA@XZ @ 0x1801F6AA0 (--1CSceneMaterial@@MEAA@XZ.c)
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
