/*
 * XREFs of ??_ECScalar@@MEAAPEAXI@Z @ 0x18019F9A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CScalar@@MEAA@XZ @ 0x1801F6400 (--1CScalar@@MEAA@XZ.c)
 */

CScalar *__fastcall CScalar::`vector deleting destructor'(CScalar *this, char a2)
{
  CScalar::~CScalar(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
