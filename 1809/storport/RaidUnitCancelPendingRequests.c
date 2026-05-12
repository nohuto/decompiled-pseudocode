/*
 * XREFs of RaidUnitCancelPendingRequests @ 0x1C001E454
 * Callers:
 *     RaUnitSurpriseRemovalIrp @ 0x1C006E2BC (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     RaidRemoveIoQueue @ 0x1C001E498 (RaidRemoveIoQueue.c)
 *     RaidCancelIrp @ 0x1C0045D1C (RaidCancelIrp.c)
 */

__int64 __fastcall RaidUnitCancelPendingRequests(__int64 a1)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = a1 + 640;
  while ( 1 )
  {
    result = RaidRemoveIoQueue(v2);
    if ( !result )
      break;
    RaidCancelIrp(a1, 8LL, result);
  }
  return result;
}
