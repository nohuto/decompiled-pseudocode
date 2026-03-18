/*
 * XREFs of PiSwQueuedCreateInfoFree @ 0x14086FF9C
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x140720DAC (PiSwIrpStartCreateWorker.c)
 *     PiSwCloseDevice @ 0x14074DF5C (PiSwCloseDevice.c)
 *     PiSwProcessRemove @ 0x140782BA4 (PiSwProcessRemove.c)
 *     PiSwDeviceFree @ 0x140782D8C (PiSwDeviceFree.c)
 *     PiSwQueuedCreateInfoCreate @ 0x14086FE88 (PiSwQueuedCreateInfoCreate.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PnpFreeDevPropertyArray @ 0x1405BB33C (PnpFreeDevPropertyArray.c)
 *     PiSwPnPInfoFree @ 0x140782E28 (PiSwPnPInfoFree.c)
 */

void __fastcall PiSwQueuedCreateInfoFree(PVOID P)
{
  void *v2; // rcx
  void *v3; // rcx
  char *v4; // rdx

  v2 = *(void **)P;
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x57706E50u);
    *(_QWORD *)P = 0LL;
  }
  PiSwPnPInfoFree((__int64)P + 8);
  v3 = (void *)*((_QWORD *)P + 7);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x57706E50u);
    *((_QWORD *)P + 7) = 0LL;
  }
  v4 = (char *)*((_QWORD *)P + 9);
  if ( v4 )
    PnpFreeDevPropertyArray(*((_DWORD *)P + 20), v4, 0x57706E50u);
  ExFreePoolWithTag(P, 0x57706E50u);
}
