/*
 * XREFs of ??_ECSceneMesh@@MEAAPEAXI@Z @ 0x1801F67C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CSceneMesh@@MEAA@XZ @ 0x1801F66C0 (--1CSceneMesh@@MEAA@XZ.c)
 */

CSceneMesh *__fastcall CSceneMesh::`vector deleting destructor'(CSceneMesh *this, char a2)
{
  CSceneMesh::~CSceneMesh(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
