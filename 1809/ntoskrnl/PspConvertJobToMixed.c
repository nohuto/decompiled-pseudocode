/*
 * XREFs of PspConvertJobToMixed @ 0x14088AC8C
 * Callers:
 *     PspBindProcessSessionToJob @ 0x140606480 (PspBindProcessSessionToJob.c)
 *     PspSetJobMemoryPartition @ 0x14088B5E0 (PspSetJobMemoryPartition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspConvertJobToMixed(__int64 a1, int a2)
{
  int v3; // eax

  if ( *(_DWORD *)(a1 + 480) == -2 )
    return 0LL;
  v3 = *(_DWORD *)(a1 + 1304);
  if ( (v3 & 0x10) == 0
    && ((v3 & 0x40000000) != 0 || ((*(_QWORD *)(a1 + 1544) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0 || a2) )
  {
    *(_DWORD *)(a1 + 480) = -2;
    return 0LL;
  }
  return 3221225506LL;
}
