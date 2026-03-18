/*
 * XREFs of ?Pause@CKeyframeAnimation@@AEAAXXZ @ 0x18001AE40
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180051970 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180052748 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CKeyframeAnimation::Pause(CKeyframeAnimation *this)
{
  char v1; // al

  if ( (*((_BYTE *)this + 525) & 1) != 0 )
  {
    v1 = *((_BYTE *)this + 524);
    if ( v1 < 0 )
    {
      *((_BYTE *)this + 524) = v1 & 0x7F;
      *(_BYTE *)(*((_QWORD *)this + 42) + 140LL) &= ~2u;
    }
  }
}
