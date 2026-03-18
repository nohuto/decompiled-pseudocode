/*
 * XREFs of PipDmaGuardGetRegistryPolicy @ 0x140195250
 * Callers:
 *     PipDmgGetDriverDmarCompatLevel @ 0x1407795B0 (PipDmgGetDriverDmarCompatLevel.c)
 *     PiDmaGuardProcessRegistry @ 0x140A18210 (PiDmaGuardProcessRegistry.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x1406DA724 (IopGetRegistryValue.c)
 */

__int64 __fastcall PipDmaGuardGetRegistryPolicy(void *a1, __int64 a2, _DWORD *a3)
{
  int RegistryValue; // ebx

  *a3 = 0;
  RegistryValue = IopGetRegistryValue(a1);
  if ( RegistryValue >= 0 )
  {
    if ( MEMORY[4] == 4 && MEMORY[0xC] == 4 )
      *a3 = *(_DWORD *)MEMORY[8];
    else
      return (unsigned int)-1073741271;
  }
  return (unsigned int)RegistryValue;
}
