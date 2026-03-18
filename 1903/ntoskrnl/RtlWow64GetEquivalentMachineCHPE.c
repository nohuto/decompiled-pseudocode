/*
 * XREFs of RtlWow64GetEquivalentMachineCHPE @ 0x140004164
 * Callers:
 *     PsWow64IsMachineSupported @ 0x1405C98E0 (PsWow64IsMachineSupported.c)
 *     PspAllocateProcess @ 0x14068E52C (PspAllocateProcess.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x14070ED5C (LdrImageDirectoryEntryToLoadConfig.c)
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
