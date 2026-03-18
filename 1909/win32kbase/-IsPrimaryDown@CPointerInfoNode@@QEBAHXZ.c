/*
 * XREFs of ?IsPrimaryDown@CPointerInfoNode@@QEBAHXZ @ 0x1C016BE40
 * Callers:
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z @ 0x1C016EA28 (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C0172704 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 * Callees:
 *     ?IsPrimary@CPointerInfoNode@@QEBAHXZ @ 0x1C016BE10 (-IsPrimary@CPointerInfoNode@@QEBAHXZ.c)
 */

__int64 __fastcall CPointerInfoNode::IsPrimaryDown(CPointerInfoNode *this)
{
  int IsPrimary; // eax
  __int64 v2; // rcx
  unsigned int v3; // edx

  IsPrimary = CPointerInfoNode::IsPrimary(this);
  v3 = 0;
  if ( IsPrimary )
    return (*(_DWORD *)(v2 + 188) & 0x10000) != 0;
  return v3;
}
