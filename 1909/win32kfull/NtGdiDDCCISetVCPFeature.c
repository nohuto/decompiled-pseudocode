/*
 * XREFs of NtGdiDDCCISetVCPFeature @ 0x1C026F2F0
 * Callers:
 *     <none>
 * Callees:
 *     ?DdcciSetVCPFeature@CMonitorAPI@@QEAAJPEAXKK@Z @ 0x1C026EA38 (-DdcciSetVCPFeature@CMonitorAPI@@QEAAJPEAXKK@Z.c)
 */

__int64 __fastcall NtGdiDDCCISetVCPFeature(CMonitorAPI *a1, unsigned int a2, unsigned int a3)
{
  return CMonitorAPI::DdcciSetVCPFeature(a1, a1, a2, a3);
}
