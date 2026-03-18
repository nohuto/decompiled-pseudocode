/*
 * XREFs of ?GetCurrentVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18019F89C
 * Callers:
 *     ?GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z @ 0x18019FA00 (-GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x1801D7C50 (-CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStac.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x18019E4BC (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?GetPositionVelocity@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x1801D740C (-GetPositionVelocity@CScrollPositionKeyframeAnimation@@QEBA-AUD2DVector3@@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

float __fastcall CInteractionTracker::GetCurrentVelocity(CInteractionTracker *a1, int a2)
{
  float result; // xmm0_4
  int v3; // edx
  __int64 v4; // rcx
  __int64 v5; // rcx
  CScrollScaleKeyframeAnimation *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  CMotion *v10; // rax
  __int64 v11; // rcx
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF
  void *retaddr; // [rsp+38h] [rbp+0h]

  result = 0.0;
  if ( a2 )
  {
    v3 = a2 - 1;
    if ( v3 )
    {
      if ( v3 != 1 )
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
      if ( CInteractionTracker::AreInteractionAnimationsAlive(a1) )
      {
        v5 = *(_QWORD *)(v4 + 320);
LABEL_15:
        v10 = (CMotion *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 280LL))(v5);
        return CMotion::GetCurrentVelocity(v10);
      }
      v6 = *(CScrollScaleKeyframeAnimation **)(v4 + 464);
      if ( v6 )
        return CScrollScaleKeyframeAnimation::GetScaleVelocity(v6);
    }
    else
    {
      if ( CInteractionTracker::AreInteractionAnimationsAlive(a1) )
      {
        v5 = *(_QWORD *)(v7 + 336);
        goto LABEL_15;
      }
      v8 = *(_QWORD *)(v7 + 456);
      if ( v8 )
        return *(float *)(CScrollPositionKeyframeAnimation::GetPositionVelocity(v8, v12) + 4);
    }
  }
  else
  {
    if ( CInteractionTracker::AreInteractionAnimationsAlive(a1) )
    {
      v5 = *(_QWORD *)(v9 + 328);
      goto LABEL_15;
    }
    v11 = *(_QWORD *)(v9 + 456);
    if ( v11 )
      return *(float *)CScrollPositionKeyframeAnimation::GetPositionVelocity(v11, v12);
  }
  return result;
}
