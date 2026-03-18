/*
 * XREFs of ??_GCInternalMilCmdConnection@@EEAAPEAXI@Z @ 0x180155980
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CInternalMilCmdConnection@@EEAA@XZ @ 0x1801558F8 (--1CInternalMilCmdConnection@@EEAA@XZ.c)
 */

CInternalMilCmdConnection *__fastcall CInternalMilCmdConnection::`scalar deleting destructor'(
        CInternalMilCmdConnection *this,
        char a2)
{
  CInternalMilCmdConnection::~CInternalMilCmdConnection(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
