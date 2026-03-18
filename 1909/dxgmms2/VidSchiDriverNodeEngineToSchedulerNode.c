/*
 * XREFs of VidSchiDriverNodeEngineToSchedulerNode @ 0x1C0010768
 * Callers:
 *     VidSchGetNodeOrdinal @ 0x1C007974C (VidSchGetNodeOrdinal.c)
 *     VidSchCreateContext @ 0x1C007C080 (VidSchCreateContext.c)
 *     VidSchiPreemptEngineNodes @ 0x1C00C9AA0 (VidSchiPreemptEngineNodes.c)
 *     VidSchiResetEngines @ 0x1C00C9D2C (VidSchiResetEngines.c)
 *     VidSchInitializeComponentPowerManagement @ 0x1C00CB340 (VidSchInitializeComponentPowerManagement.c)
 *     VidSchCreateHwContext @ 0x1C00CCC00 (VidSchCreateHwContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiDriverNodeEngineToSchedulerNode(__int64 a1, int a2, unsigned int a3)
{
  return a2 + (unsigned int)*(unsigned __int8 *)(a3 + a1 + 76);
}
