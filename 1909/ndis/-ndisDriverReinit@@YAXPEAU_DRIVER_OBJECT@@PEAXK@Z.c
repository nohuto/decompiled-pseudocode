/*
 * XREFs of ?ndisDriverReinit@@YAXPEAU_DRIVER_OBJECT@@PEAXK@Z @ 0x1C003F660
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisAoAcInitDisconnectedStandby@@YAXXZ @ 0x1C007BB94 (-ndisAoAcInitDisconnectedStandby@@YAXXZ.c)
 *     ndisInitializeNsi @ 0x1C010A8C4 (ndisInitializeNsi.c)
 */

void __fastcall ndisDriverReinit(struct _DRIVER_OBJECT *DriverObject, PVOID Context, ULONG Count)
{
  if ( !ndisNsiInitialized )
    ndisInitializeNsi(DriverObject);
  if ( (ndisAoAcCapable || ndisAoAcTest) && !ndisEnforceDisconnectedStandby )
    ndisAoAcInitDisconnectedStandby();
  ndisBootFinishedTime.QuadPart = MEMORY[0xFFFFF78000000014];
}
