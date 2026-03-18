/*
 * XREFs of MiVadPagesTradable @ 0x1400E2B14
 * Callers:
 *     NtLockVirtualMemory @ 0x14008DF10 (NtLockVirtualMemory.c)
 *     NtUnlockVirtualMemory @ 0x1400C4230 (NtUnlockVirtualMemory.c)
 *     MiLockStealUserVm @ 0x1400E22B4 (MiLockStealUserVm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadPagesTradable(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 48);
  if ( (v1 & 0x70) != 0 )
  {
    if ( (v1 & 0x70) == 0x20 )
      return 1LL;
  }
  else if ( (v1 & 0x100000) == 0 || (v1 & 0x400000) == 0 && (v1 & 0xC0000u) < 0x80000 )
  {
    return 1LL;
  }
  return 0LL;
}
