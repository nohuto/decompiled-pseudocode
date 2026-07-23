/*
 * XREFs of PnpUpdateSetupInProgressConfiguration @ 0x140833EF4
 * Callers:
 *     PnpWatchdogSetupInProgressConfigure @ 0x14073D330 (PnpWatchdogSetupInProgressConfigure.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x140681694 (IopGetRegistryValue.c)
 */

void __fastcall PnpUpdateSetupInProgressConfiguration(HANDLE KeyHandle)
{
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  if ( IopGetRegistryValue(KeyHandle, L"OOBEInProgress", 0, &P) >= 0 )
  {
    if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
      PnpSetupOOBEInProgress = *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) != 0;
    ExFreePoolWithTag(P, 0);
  }
  if ( IopGetRegistryValue(KeyHandle, L"SystemSetupInProgress", 0, &P) >= 0 )
  {
    if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
      PnpSetupInProgress = *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) != 0;
    ExFreePoolWithTag(P, 0);
  }
}
