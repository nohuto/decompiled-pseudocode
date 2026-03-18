/*
 * XREFs of Isoch_EP_StartMapping @ 0x1C002DFD0
 * Callers:
 *     <none>
 * Callees:
 *     TR_AttemptStateChange @ 0x1C00284E8 (TR_AttemptStateChange.c)
 *     Isoch_MapTransfers @ 0x1C002E8DC (Isoch_MapTransfers.c)
 */

void __fastcall Isoch_EP_StartMapping(__int64 a1)
{
  KIRQL v2; // si
  unsigned __int8 CurrentIrql; // bl
  __int64 v4; // rdx

  v2 = 0;
  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
    v2 = KfRaiseIrql(2u);
  _InterlockedExchange((volatile __int32 *)(a1 + 328), 0);
  *(_DWORD *)(a1 + 376) = 0;
  if ( !(unsigned int)TR_AttemptStateChange(a1, 5, 3) )
  {
    LOBYTE(v4) = CurrentIrql == 0;
    Isoch_MapTransfers(a1, v4);
  }
  if ( !CurrentIrql )
    KeLowerIrql(v2);
}
