/*
 * XREFs of ??$?4VCScrollScaleKeyframeAnimation@@@?$ComPtr@VCScrollKeyframeAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCScrollScaleKeyframeAnimation@@@Z @ 0x18019D794
 * Callers:
 *     ?CreateAndStartKeyframeAnimation@CInteractionTracker@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@InteractionTrackerProperty@@AEBUD2DVector4@@MPEAPEAVCScrollKeyframeAnimation@@@Z @ 0x18019F108 (-CreateAndStartKeyframeAnimation@CInteractionTracker@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@W4En.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18001B8B8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<CScrollKeyframeAnimation>::operator=<CScrollScaleKeyframeAnimation>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = a2;
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v6);
  v4 = *a1;
  *a1 = a2;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return a1;
}
