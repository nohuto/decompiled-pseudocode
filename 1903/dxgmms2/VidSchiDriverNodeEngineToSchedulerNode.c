/*
 * XREFs of VidSchiDriverNodeEngineToSchedulerNode @ 0x1C00109A8
 * Callers:
 *     VidSchGetNodeOrdinal @ 0x1C0078D6C (VidSchGetNodeOrdinal.c)
 *     VidSchCreateContext @ 0x1C007B6A0 (VidSchCreateContext.c)
 *     VidSchiPreemptEngineNodes @ 0x1C00C9E00 (VidSchiPreemptEngineNodes.c)
 *     VidSchiResetEngines @ 0x1C00CA08C (VidSchiResetEngines.c)
 *     VidSchInitializeComponentPowerManagement @ 0x1C00CB6A0 (VidSchInitializeComponentPowerManagement.c)
 *     VidSchCreateHwContext @ 0x1C00CCF60 (VidSchCreateHwContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiDriverNodeEngineToSchedulerNode(__int64 a1, int a2, unsigned int a3)
{
  return a2 + (unsigned int)*(unsigned __int8 *)(a3 + a1 + 76);
}
