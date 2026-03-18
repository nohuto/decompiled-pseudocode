/*
 * XREFs of MiIsSoftwareEnclave @ 0x1401211DC
 * Callers:
 *     MmQueryVirtualMemory @ 0x1405EE910 (MmQueryVirtualMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsSoftwareEnclave(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 48) & 0x20000) == 0 )
    return 0LL;
  result = 1LL;
  if ( (*(_DWORD *)(a1 + 64) & 1) != 0 )
    return 0LL;
  return result;
}
