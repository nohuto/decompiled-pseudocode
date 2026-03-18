/*
 * XREFs of ??_GCMonitorTreeAssociation@@UEAAPEAXI@Z @ 0x180188C90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CMonitorTreeAssociation *__fastcall CMonitorTreeAssociation::`scalar deleting destructor'(
        CMonitorTreeAssociation *this,
        char a2)
{
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 16);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
