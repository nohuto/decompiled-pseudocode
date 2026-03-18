/*
 * XREFs of IopCancelPendingEject @ 0x140875B7C
 * Callers:
 *     PnpProcessRelation @ 0x14072F16C (PnpProcessRelation.c)
 * Callees:
 *     IoFreeIrp @ 0x140043EA0 (IoFreeIrp.c)
 *     IoCancelIrp @ 0x1401279E0 (IoCancelIrp.c)
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
