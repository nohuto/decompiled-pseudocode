/*
 * XREFs of ?GetAnimationForAxis@CInteractionTracker@@AEBAXW4ScrollAxis@@PEAPEAVCScrollAnimation@@@Z @ 0x1801D8D2C
 * Callers:
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x1801DA7A0 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D76C (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800207E8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 *     ??$?4VCInteractionTrackerPositionAnimation@@@?$ComPtr@VCScrollAnimation@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@VCInteractionTrackerPositionAnimation@@@12@@Z @ 0x1801D6BAC (--$-4VCInteractionTrackerPositionAnimation@@@-$ComPtr@VCScrollAnimation@@@WRL@Microsoft@@QEAAAEA.c)
 */

__int64 __fastcall CInteractionTracker::GetAnimationForAxis(__int64 *a1, int a2, __int64 *a3)
{
  int v4; // edx
  __int64 v5; // rbx
  __int64 *v6; // rdx
  const void *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0LL;
  if ( !a2 )
  {
    v6 = a1 + 41;
    goto LABEL_8;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v6 = a1 + 42;
LABEL_8:
    Microsoft::WRL::ComPtr<CScrollAnimation>::operator=<CInteractionTrackerPositionAnimation>(&v9, v6);
    v5 = v9;
    goto LABEL_9;
  }
  if ( v4 != 1 )
    ModuleFailFastForHRESULT(-2147467259, retaddr);
  v5 = a1[40];
  v9 = v5;
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v9);
  v9 = 0LL;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v9);
LABEL_9:
  v9 = 0LL;
  *a3 = v5;
  return Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v9);
}
