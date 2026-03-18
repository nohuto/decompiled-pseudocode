/*
 * XREFs of ?EmitAddTargets@CCompositionLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@W4Enum@CompositionLightProperty@@@Z @ 0x1C0006430
 * Callers:
 *     ?EmitUpdateCommands@CCompositionLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00063B0 (-EmitUpdateCommands@CCompositionLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ??$EmitAddTargets@UtagMILCMD_COMPOSITIONLIGHT_ADDTARGETS@@@CCompositionLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@PEAPEAVCResourceMarshaler@1@PEAI2W4MILCMD@@@Z @ 0x1C0006474 (--$EmitAddTargets@UtagMILCMD_COMPOSITIONLIGHT_ADDTARGETS@@@CCompositionLightMarshaler@DirectComp.c)
 *     ??$EmitAddTargets@UtagMILCMD_COMPOSITIONLIGHT_ADDEXCLUSIONS@@@CCompositionLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@PEAPEAVCResourceMarshaler@1@PEAI2W4MILCMD@@@Z @ 0x1C0006584 (--$EmitAddTargets@UtagMILCMD_COMPOSITIONLIGHT_ADDEXCLUSIONS@@@CCompositionLightMarshaler@DirectC.c)
 */

__int64 __fastcall DirectComposition::CCompositionLightMarshaler::EmitAddTargets(__int64 a1, __int64 a2, int a3)
{
  if ( a3 )
    return DirectComposition::CCompositionLightMarshaler::EmitAddTargets<tagMILCMD_COMPOSITIONLIGHT_ADDEXCLUSIONS>(
             a1,
             a2,
             *(_QWORD *)(a1 + 56),
             a1 + 64,
             a1 + 68);
  else
    return DirectComposition::CCompositionLightMarshaler::EmitAddTargets<tagMILCMD_COMPOSITIONLIGHT_ADDTARGETS>(
             a1,
             a2,
             *(_QWORD *)(a1 + 40),
             a1 + 48,
             a1 + 52);
}
