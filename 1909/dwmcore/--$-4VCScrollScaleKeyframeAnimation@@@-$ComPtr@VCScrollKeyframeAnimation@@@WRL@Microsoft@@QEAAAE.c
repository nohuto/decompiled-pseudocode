/*
 * XREFs of ??$?4VCScrollScaleKeyframeAnimation@@@?$ComPtr@VCScrollKeyframeAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCScrollScaleKeyframeAnimation@@@Z @ 0x1801D6C3C
 * Callers:
 *     ?CreateAndStartKeyframeAnimation@CInteractionTracker@@AEAAJW4Enum@InteractionTrackerProperty@@W4DCOMPOSITION_EXPRESSION_TYPE@@AEBUD2DVector4@@MPEAPEAVCScrollKeyframeAnimation@@@Z @ 0x1801D8670 (-CreateAndStartKeyframeAnimation@CInteractionTracker@@AEAAJW4Enum@InteractionTrackerProperty@@W4.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800207E8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
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
