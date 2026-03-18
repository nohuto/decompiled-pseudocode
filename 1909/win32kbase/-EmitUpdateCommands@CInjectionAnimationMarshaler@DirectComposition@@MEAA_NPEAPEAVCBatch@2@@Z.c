/*
 * XREFs of ?EmitUpdateCommands@CInjectionAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01AC420
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0008750 (-EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetInjectionData@CInjectionAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01AC378 (-EmitSetInjectionData@CInjectionAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CInjectionAnimationMarshaler::EmitUpdateCommands(
        DirectComposition::CInjectionAnimationMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CBaseExpressionMarshaler::EmitUpdateCommands(this, a2) )
    return DirectComposition::CInjectionAnimationMarshaler::EmitSetInjectionData(this, a2) != 0;
  return v4;
}
