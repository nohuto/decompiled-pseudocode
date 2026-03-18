/*
 * XREFs of ?GetScalarForce@CNaturalAnimation@@QEAAJMMPEAPEAUIScalarForce@@@Z @ 0x18019FCC4
 * Callers:
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x1801A11A0 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 * Callees:
 *     ?GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z @ 0x1801A8D7C (-GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z.c)
 */

__int64 __fastcall CNaturalAnimation::GetScalarForce(
        CNaturalAnimation *this,
        float a2,
        float a3,
        struct IScalarForce **a4)
{
  return CNaturalAnimation::GetForceForAxis(this, 0LL);
}
