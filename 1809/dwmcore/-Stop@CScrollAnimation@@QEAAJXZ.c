/*
 * XREFs of ?Stop@CScrollAnimation@@QEAAJXZ @ 0x1801D66DC
 * Callers:
 *     ?DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ @ 0x18019F334 (-DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ??1CScrollAnimation@@UEAA@XZ @ 0x1801D5B00 (--1CScrollAnimation@@UEAA@XZ.c)
 *     ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x1801D61A4 (-Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 * Callees:
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x180053984 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 */

__int64 __fastcall CScrollAnimation::Stop(CScrollAnimation *this)
{
  *((_BYTE *)this + 208) &= ~1u;
  if ( (*((_BYTE *)this + 320) & 1) != 0 )
  {
    CBaseExpression::EnsureExpressionIsUnregistered(this);
    *((_BYTE *)this + 320) &= ~1u;
    *((_DWORD *)this + 66) = 16;
  }
  return 0LL;
}
