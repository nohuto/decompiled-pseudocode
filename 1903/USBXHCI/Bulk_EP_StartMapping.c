/*
 * XREFs of Bulk_EP_StartMapping @ 0x1C0034380
 * Callers:
 *     <none>
 * Callees:
 *     TR_AttemptStateChange @ 0x1C00284E8 (TR_AttemptStateChange.c)
 *     Bulk_MapTransfers @ 0x1C0034C98 (Bulk_MapTransfers.c)
 */

void __fastcall Bulk_EP_StartMapping(__int64 a1)
{
  KIRQL v2; // si
  unsigned __int8 CurrentIrql; // bl
  __int64 v4; // rdx

  v2 = 0;
  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
    v2 = KfRaiseIrql(2u);
  _InterlockedExchange((volatile __int32 *)(a1 + 324), 0);
  *(_DWORD *)(a1 + 352) = 0;
  if ( !(unsigned int)TR_AttemptStateChange(a1, 5, 3) )
  {
    LOBYTE(v4) = CurrentIrql == 0;
    Bulk_MapTransfers(a1, v4);
  }
  if ( !CurrentIrql )
    KeLowerIrql(v2);
}
