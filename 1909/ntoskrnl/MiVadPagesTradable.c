/*
 * XREFs of MiVadPagesTradable @ 0x1400C20F4
 * Callers:
 *     NtUnlockVirtualMemory @ 0x1400A40B0 (NtUnlockVirtualMemory.c)
 *     MiLockStealUserVm @ 0x1400C2478 (MiLockStealUserVm.c)
 *     NtLockVirtualMemory @ 0x1400CB120 (NtLockVirtualMemory.c)
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
