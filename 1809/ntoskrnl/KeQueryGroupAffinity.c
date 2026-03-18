/*
 * XREFs of KeQueryGroupAffinity @ 0x1400F3660
 * Callers:
 *     ExpQuerySystemInformation @ 0x140626390 (ExpQuerySystemInformation.c)
 *     MmCreatePeb @ 0x140678550 (MmCreatePeb.c)
 *     PopProcessorInformation @ 0x14070D738 (PopProcessorInformation.c)
 *     PpmEnableWmiInterface @ 0x140758650 (PpmEnableWmiInterface.c)
 *     EtwpProcessorRundown @ 0x1408BF5C0 (EtwpProcessorRundown.c)
 *     NtCreateProfile @ 0x1408DA240 (NtCreateProfile.c)
 * Callees:
 *     <none>
 */

KAFFINITY __stdcall KeQueryGroupAffinity(USHORT GroupNumber)
{
  if ( GroupNumber >= LOWORD(KeActiveProcessors[0]) )
    return 0LL;
  else
    return qword_1405416A8[GroupNumber];
}
