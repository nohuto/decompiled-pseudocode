/*
 * XREFs of KeQueryGroupAffinity @ 0x140134AA0
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CAF30 (ExpQuerySystemInformation.c)
 *     MmCreatePeb @ 0x14067A018 (MmCreatePeb.c)
 *     PopProcessorInformation @ 0x140739DE8 (PopProcessorInformation.c)
 *     PpmEnableWmiInterface @ 0x14077E190 (PpmEnableWmiInterface.c)
 *     EtwpProcessorRundown @ 0x1408FC38C (EtwpProcessorRundown.c)
 *     NtCreateProfile @ 0x140917FB0 (NtCreateProfile.c)
 * Callees:
 *     <none>
 */

KAFFINITY __stdcall KeQueryGroupAffinity(USHORT GroupNumber)
{
  if ( GroupNumber >= LOWORD(KeActiveProcessors[0]) )
    return 0LL;
  else
    return qword_140572748[GroupNumber];
}
