/*
 * XREFs of MI_GET_GRAPHICS_PROTECTION_FROM_VAD @ 0x140053910
 * Callers:
 *     MiProtectPrivateMemory @ 0x140020F60 (MiProtectPrivateMemory.c)
 *     MiQueryAddressState @ 0x1400C63D0 (MiQueryAddressState.c)
 *     MiProtectAweRegion @ 0x1402D7184 (MiProtectAweRegion.c)
 *     MmQueryVirtualMemory @ 0x140604960 (MmQueryVirtualMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MI_GET_GRAPHICS_PROTECTION_FROM_VAD(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v3; // edx

  v1 = *(_DWORD *)(a1 + 48);
  if ( (v1 & 0x1100000) != 0x1100000 )
    return 0LL;
  v3 = 2048 << ((v1 >> 26) & 7);
  if ( (v1 & 0x2000000) != 0 )
    v3 |= 0x20000u;
  return v3;
}
