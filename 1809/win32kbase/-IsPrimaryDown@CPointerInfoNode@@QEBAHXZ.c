/*
 * XREFs of ?IsPrimaryDown@CPointerInfoNode@@QEBAHXZ @ 0x1C013F518
 * Callers:
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0142064 (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C0145968 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 * Callees:
 *     ?IsPrimary@CPointerInfoNode@@QEBAHXZ @ 0x1C013F4E8 (-IsPrimary@CPointerInfoNode@@QEBAHXZ.c)
 */

__int64 __fastcall CPointerInfoNode::IsPrimaryDown(CPointerInfoNode *this)
{
  int IsPrimary; // eax
  __int64 v2; // rcx
  unsigned int v3; // edx

  IsPrimary = CPointerInfoNode::IsPrimary(this);
  v3 = 0;
  if ( IsPrimary )
    return (*(_DWORD *)(v2 + 244) & 0x10000) != 0;
  return v3;
}
