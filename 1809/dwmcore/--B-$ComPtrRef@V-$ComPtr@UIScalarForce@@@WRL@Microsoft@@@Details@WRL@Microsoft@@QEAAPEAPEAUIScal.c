/*
 * XREFs of ??B?$ComPtrRef@V?$ComPtr@UIScalarForce@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAUIScalarForce@@XZ @ 0x18019DC94
 * Callers:
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x1801A11A0 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800183E0 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IScalarForce>>::operator IScalarForce * *(
        __int64 **a1)
{
  __int64 *v1; // rbx

  v1 = *a1;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(*a1);
  return v1;
}
