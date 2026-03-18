/*
 * XREFs of ExFreeToNPagedLookasideList @ 0x1C001E8D0
 * Callers:
 *     DpiFdoHandleQueryConnectionChange @ 0x1C001E7F0 (DpiFdoHandleQueryConnectionChange.c)
 *     DpiPdoPollingWorkItem @ 0x1C02AFBF0 (DpiPdoPollingWorkItem.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

void __stdcall ExFreeToNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside, PVOID Entry)
{
  ++Lookaside->L.TotalFrees;
  if ( ExQueryDepthSList(&Lookaside->L.ListHead) >= Lookaside->L.Depth )
  {
    ++Lookaside->L.FreeMisses;
    ((void (__fastcall *)(PVOID))Lookaside->L.FreeEx)(Entry);
  }
  else
  {
    ExpInterlockedPushEntrySList(&Lookaside->L.ListHead, (PSLIST_ENTRY)Entry);
  }
}
