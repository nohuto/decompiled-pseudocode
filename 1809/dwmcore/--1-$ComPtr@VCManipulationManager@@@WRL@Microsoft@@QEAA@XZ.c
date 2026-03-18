/*
 * XREFs of ??1?$ComPtr@VCManipulationManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1801928F4
 * Callers:
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x1801A11A0 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 *     ?_EnqueueDeferredDeltaReset@CManipulation@@AEAAJI@Z @ 0x1801A6C40 (-_EnqueueDeferredDeltaReset@CManipulation@@AEAAJI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CManipulationManager>::~ComPtr<CManipulationManager>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(a1);
}
