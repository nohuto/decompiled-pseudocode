/*
 * XREFs of ??B?$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEBAPEQBoolStruct@Details@12@HXZ @ 0x1800EF5A4
 * Callers:
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x1801A11A0 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CBaseExpression>::operator int Microsoft::WRL::Details::BoolStruct::*(
        _QWORD *a1)
{
  return (unsigned int)(*a1 != 0LL) - 1;
}
