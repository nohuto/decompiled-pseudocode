/*
 * XREFs of ??_GCConnection@@MEAAPEAXI@Z @ 0x18016B890
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CConnection@@MEAA@XZ @ 0x18016B828 (--1CConnection@@MEAA@XZ.c)
 */

CConnection *__fastcall CConnection::`scalar deleting destructor'(CConnection *this, char a2)
{
  CConnection::~CConnection(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
