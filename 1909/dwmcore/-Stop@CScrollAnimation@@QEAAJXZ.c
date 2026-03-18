/*
 * XREFs of ?Stop@CScrollAnimation@@QEAAJXZ @ 0x1802061A8
 * Callers:
 *     ?DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ @ 0x1801D88D8 (-DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ??1CScrollAnimation@@UEAA@XZ @ 0x180205584 (--1CScrollAnimation@@UEAA@XZ.c)
 *     ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x180205C2C (-Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 * Callees:
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x1800A4FF8 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 */

__int64 __fastcall CScrollAnimation::Stop(CScrollAnimation *this)
{
  *((_BYTE *)this + 208) &= ~1u;
  if ( (*((_BYTE *)this + 344) & 1) != 0 )
  {
    CBaseExpression::EnsureExpressionIsUnregistered(this);
    *((_BYTE *)this + 344) &= ~1u;
    *((_DWORD *)this + 66) = 16;
  }
  return 0LL;
}
