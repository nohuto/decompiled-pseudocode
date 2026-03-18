/*
 * XREFs of TR_TransferEventHandler @ 0x1C00298BC
 * Callers:
 *     Endpoint_TransferEventHandler @ 0x1C001B8E8 (Endpoint_TransferEventHandler.c)
 *     Interrupter_DeferredWorkProcessor @ 0x1C001E4C4 (Interrupter_DeferredWorkProcessor.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     Control_ProcessTransferEventWithED0 @ 0x1C002A818 (Control_ProcessTransferEventWithED0.c)
 *     Control_ProcessTransferEventWithED1 @ 0x1C002AB34 (Control_ProcessTransferEventWithED1.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C003558C (Bulk_ProcessTransferEventWithED0.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C0035890 (Bulk_ProcessTransferEventWithED1.c)
 */

char __fastcall TR_TransferEventHandler(_DWORD *a1, __int64 a2)
{
  if ( a2 )
    return (*(__int64 (**)(void))(*(_QWORD *)(a2 + 32) + 88LL))();
  if ( (*a1 & 3) != 0 )
  {
    if ( (*a1 & 3u) <= 1uLL )
    {
      return 0;
    }
    else if ( (a1[3] & 4) != 0 )
    {
      return Bulk_ProcessTransferEventWithED1(a1, 0LL);
    }
    else
    {
      return Bulk_ProcessTransferEventWithED0(a1, 0LL);
    }
  }
  else if ( (a1[3] & 4) != 0 )
  {
    return Control_ProcessTransferEventWithED1(a1, 0LL);
  }
  else
  {
    return Control_ProcessTransferEventWithED0(a1, 0LL);
  }
}
