/*
 * XREFs of PiSwQueuedCreateInfoFree @ 0x140835EE0
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x1406D6E78 (PiSwIrpStartCreateWorker.c)
 *     PiSwProcessRemove @ 0x1406D8B6C (PiSwProcessRemove.c)
 *     PiSwDeviceFree @ 0x1406D8C28 (PiSwDeviceFree.c)
 *     PiSwCloseDevice @ 0x1406D9130 (PiSwCloseDevice.c)
 *     PiSwQueuedCreateInfoCreate @ 0x140835DCC (PiSwQueuedCreateInfoCreate.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     PnpFreeDevPropertyArray @ 0x140595490 (PnpFreeDevPropertyArray.c)
 *     PiSwPnPInfoFree @ 0x1406D8CC4 (PiSwPnPInfoFree.c)
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
