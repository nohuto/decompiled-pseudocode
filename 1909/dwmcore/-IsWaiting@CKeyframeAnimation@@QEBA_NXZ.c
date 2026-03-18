/*
 * XREFs of ?IsWaiting@CKeyframeAnimation@@QEBA_NXZ @ 0x1800A7C70
 * Callers:
 *     ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x1800A761C (-OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CKeyframeAnimation::IsWaiting(CKeyframeAnimation *this)
{
  char v1; // dl

  v1 = 1;
  if ( (*((_BYTE *)this + 541) & 1) == 0 || *((_DWORD *)this + 113) >= *((_DWORD *)this + 112) )
    return 0;
  return v1;
}
