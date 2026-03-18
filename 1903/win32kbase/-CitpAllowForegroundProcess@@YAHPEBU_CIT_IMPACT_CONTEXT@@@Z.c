/*
 * XREFs of ?CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0088054
 * Callers:
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C0087510 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     CitSessionConnectChange @ 0x1C0088BF0 (CitSessionConnectChange.c)
 *     CitDisplayPowerChange @ 0x1C00B8C1C (CitDisplayPowerChange.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CitpAllowForegroundProcess(const struct _CIT_IMPACT_CONTEXT *a1)
{
  return (*((_BYTE *)a1 + 112) & 2) != 0 && *((_DWORD *)a1 + 47);
}
