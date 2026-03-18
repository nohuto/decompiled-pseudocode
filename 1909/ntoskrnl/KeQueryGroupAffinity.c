/*
 * XREFs of KeQueryGroupAffinity @ 0x1401353A0
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CB430 (ExpQuerySystemInformation.c)
 *     MmCreatePeb @ 0x1406800CC (MmCreatePeb.c)
 *     PopProcessorInformation @ 0x14073C078 (PopProcessorInformation.c)
 *     PpmEnableWmiInterface @ 0x140780BB0 (PpmEnableWmiInterface.c)
 *     EtwpProcessorRundown @ 0x1408FBD6C (EtwpProcessorRundown.c)
 *     NtCreateProfile @ 0x140917A10 (NtCreateProfile.c)
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
