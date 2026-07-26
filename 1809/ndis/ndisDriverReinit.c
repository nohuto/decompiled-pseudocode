/*
 * XREFs of ndisDriverReinit @ 0x1C00D20A0
 * Callers:
 *     <none>
 * Callees:
 *     ndisAoAcInitDisconnectedStandby @ 0x1C004FB6C (ndisAoAcInitDisconnectedStandby.c)
 */

void __fastcall ndisDriverReinit(struct _DRIVER_OBJECT *DriverObject, PVOID Context, ULONG Count)
{
  if ( !ndisNsiInitialized )
    RtlRunOnceExecuteOnce(&ndisNsiInitOnceBlock, (PRTL_RUN_ONCE_INIT_FN)ndisInitializeNsiInitFn, 0LL, 0LL);
  if ( (ndisAoAcCapable || ndisAoAcTest) && !ndisEnforceDisconnectedStandby )
    ndisAoAcInitDisconnectedStandby();
  ndisBootFinishedTime.QuadPart = MEMORY[0xFFFFF78000000014];
}
