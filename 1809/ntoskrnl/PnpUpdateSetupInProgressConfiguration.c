/*
 * XREFs of PnpUpdateSetupInProgressConfiguration @ 0x140832CB4
 * Callers:
 *     PnpWatchdogSetupInProgressConfigure @ 0x14073C160 (PnpWatchdogSetupInProgressConfigure.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x1406804F4 (IopGetRegistryValue.c)
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
