/*
 * XREFs of RtlWow64GetEquivalentMachineCHPE @ 0x1400F554C
 * Callers:
 *     PspAllocateProcess @ 0x14064BCB8 (PspAllocateProcess.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x140681FF4 (LdrImageDirectoryEntryToLoadConfig.c)
 *     PsWow64IsMachineSupported @ 0x140682070 (PsWow64IsMachineSupported.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall RtlWow64GetEquivalentMachineCHPE(__int16 a1)
{
  __int16 result; // ax

  result = 332;
  if ( a1 != 14948 )
    return a1;
  return result;
}
