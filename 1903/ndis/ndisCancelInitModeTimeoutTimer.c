/*
 * XREFs of ndisCancelInitModeTimeoutTimer @ 0x1C00FF774
 * Callers:
 *     ndisSetSystemPower @ 0x1C00131C8 (ndisSetSystemPower.c)
 *     ndisWdfNotifySystemPower @ 0x1C00A7128 (ndisWdfNotifySystemPower.c)
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C010A270 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ndisMCommonHaltMiniport @ 0x1C0136B28 (ndisMCommonHaltMiniport.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     NdisCancelTimer @ 0x1C001CB50 (NdisCancelTimer.c)
 */

void __fastcall ndisCancelInitModeTimeoutTimer(__int64 a1, char a2)
{
  BOOLEAN TimerCancelled; // [rsp+40h] [rbp+8h] BYREF

  NdisCancelTimer((PNDIS_TIMER)(a1 + 2776), &TimerCancelled);
  if ( TimerCancelled )
  {
    KeSetEvent((PRKEVENT)(a1 + 2984), 0, 0);
    ndisDereferenceMiniport(a1, 0x17u);
  }
  else if ( a2 )
  {
    KeWaitForSingleObject((PVOID)(a1 + 2984), Executive, 0, 0, 0LL);
  }
}
