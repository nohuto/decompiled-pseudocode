/*
 * XREFs of PipDmaGuardGetRegistryPolicy @ 0x14016ACBC
 * Callers:
 *     PipDmgGetDriverDmarCompatLevel @ 0x14070A2A4 (PipDmgGetDriverDmarCompatLevel.c)
 *     PiDmaGuardProcessRegistry @ 0x1409C7344 (PiDmaGuardProcessRegistry.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x140681694 (IopGetRegistryValue.c)
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
