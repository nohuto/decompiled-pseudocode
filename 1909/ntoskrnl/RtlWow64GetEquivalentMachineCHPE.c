/*
 * XREFs of RtlWow64GetEquivalentMachineCHPE @ 0x1400041F4
 * Callers:
 *     PsWow64IsMachineSupported @ 0x1405C9DE0 (PsWow64IsMachineSupported.c)
 *     PspAllocateProcess @ 0x140681A9C (PspAllocateProcess.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x140710B3C (LdrImageDirectoryEntryToLoadConfig.c)
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
