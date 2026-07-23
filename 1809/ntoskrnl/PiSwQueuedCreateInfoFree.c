/*
 * XREFs of PiSwQueuedCreateInfoFree @ 0x140837120
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x1406D80F8 (PiSwIrpStartCreateWorker.c)
 *     PiSwProcessRemove @ 0x1406D9DEC (PiSwProcessRemove.c)
 *     PiSwDeviceFree @ 0x1406D9EA8 (PiSwDeviceFree.c)
 *     PiSwCloseDevice @ 0x1406DA3B0 (PiSwCloseDevice.c)
 *     PiSwQueuedCreateInfoCreate @ 0x14083700C (PiSwQueuedCreateInfoCreate.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PnpFreeDevPropertyArray @ 0x140596490 (PnpFreeDevPropertyArray.c)
 *     PiSwPnPInfoFree @ 0x1406D9F44 (PiSwPnPInfoFree.c)
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
