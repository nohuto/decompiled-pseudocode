/*
 * XREFs of IopCancelPendingEject @ 0x14083C018
 * Callers:
 *     PnpProcessRelation @ 0x1406ED92C (PnpProcessRelation.c)
 * Callees:
 *     IoFreeIrp @ 0x1400B95B0 (IoFreeIrp.c)
 *     IoCancelIrp @ 0x140121F00 (IoCancelIrp.c)
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
