/*
 * XREFs of ndisCancelInitModeTimeoutTimer @ 0x1C00BE278
 * Callers:
 *     ndisSetSystemPower @ 0x1C00B8930 (ndisSetSystemPower.c)
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00BE1DC (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ndisWdfNotifySystemPower @ 0x1C00F58A0 (ndisWdfNotifySystemPower.c)
 *     ndisMCommonHaltMiniport @ 0x1C0115B88 (ndisMCommonHaltMiniport.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     NdisCancelTimer @ 0x1C00164D0 (NdisCancelTimer.c)
 */

void __fastcall ndisCancelInitModeTimeoutTimer(__int64 a1, char a2)
{
  BOOLEAN TimerCancelled; // [rsp+40h] [rbp+8h] BYREF

  NdisCancelTimer((PNDIS_TIMER)(a1 + 2792), &TimerCancelled);
  if ( TimerCancelled )
  {
    KeSetEvent((PRKEVENT)(a1 + 3000), 0, 0);
    ndisDereferenceMiniport(a1, 0x17u);
  }
  else if ( a2 )
  {
    KeWaitForSingleObject((PVOID)(a1 + 3000), Executive, 0, 0, 0LL);
  }
}
