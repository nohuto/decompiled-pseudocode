/*
 * XREFs of ?SetTrigger@CAnimationResource@@QEAAJPEAVCAnimationTriggerProxy@@@Z @ 0x180030440
 * Callers:
 *     ?SetStartTrigger@CAnimatedTransitionVisual@@UEAAJPEAVCAnimationTriggerProxy@@@Z @ 0x1800051F0 (-SetStartTrigger@CAnimatedTransitionVisual@@UEAAJPEAVCAnimationTriggerProxy@@@Z.c)
 *     ?GetAnimationResourceNoRef@CAnimatedTransitionVisual@@UEAAJW4TransformAnimationType@@PEAPEAVCAnimationResource@@@Z @ 0x1800303B0 (-GetAnimationResourceNoRef@CAnimatedTransitionVisual@@UEAAJW4TransformAnimationType@@PEAPEAVCAni.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimationResource::SetTrigger(CAnimationResource *this, struct CAnimationTriggerProxy *a2)
{
  __int64 result; // rax

  result = 2147942405LL;
  if ( !*((_BYTE *)this + 81) && !*((_QWORD *)this + 13) )
  {
    *((_QWORD *)this + 13) = a2;
    if ( a2 )
      _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
    return 0LL;
  }
  return result;
}
