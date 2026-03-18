/*
 * XREFs of IopCancelPendingEject @ 0x14083ADD8
 * Callers:
 *     PnpProcessRelation @ 0x1406EC6AC (PnpProcessRelation.c)
 * Callees:
 *     IoFreeIrp @ 0x1400B9650 (IoFreeIrp.c)
 *     IoCancelIrp @ 0x140121E10 (IoCancelIrp.c)
 */

void __fastcall IopCancelPendingEject(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 72) && !_InterlockedExchange((volatile __int32 *)(a1 + 80), 1) )
  {
    IoCancelIrp(*(PIRP *)(a1 + 72));
    if ( _InterlockedExchange((volatile __int32 *)(a1 + 80), 2) == 3 )
      IoFreeIrp(*(PIRP *)(a1 + 72));
  }
}
