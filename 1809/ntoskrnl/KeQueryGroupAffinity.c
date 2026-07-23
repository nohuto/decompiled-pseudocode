/*
 * XREFs of KeQueryGroupAffinity @ 0x1400F3700
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 *     MmCreatePeb @ 0x1406796F0 (MmCreatePeb.c)
 *     PopProcessorInformation @ 0x14070E9B8 (PopProcessorInformation.c)
 *     PpmEnableWmiInterface @ 0x140759820 (PpmEnableWmiInterface.c)
 *     EtwpProcessorRundown @ 0x1408C0860 (EtwpProcessorRundown.c)
 *     NtCreateProfile @ 0x1408DB4E0 (NtCreateProfile.c)
 * Callees:
 *     <none>
 */

KAFFINITY __stdcall KeQueryGroupAffinity(USHORT GroupNumber)
{
  if ( GroupNumber >= LOWORD(KeActiveProcessors[0]) )
    return 0LL;
  else
    return qword_1405426A8[GroupNumber];
}
