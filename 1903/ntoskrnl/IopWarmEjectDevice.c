/*
 * XREFs of IopWarmEjectDevice @ 0x140878040
 * Callers:
 *     PnpProcessCompletedEject @ 0x140862770 (PnpProcessCompletedEject.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     PpDevNodeUnlockTree @ 0x1406A2B0C (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406A2C34 (PpDevNodeLockTree.c)
 *     NtInitiatePowerAction @ 0x140725440 (NtInitiatePowerAction.c)
 *     PnpSetPowerVetoEvent @ 0x14086DED4 (PnpSetPowerVetoEvent.c)
 */

__int64 __fastcall IopWarmEjectDevice(_QWORD *a1, SYSTEM_POWER_STATE a2)
{
  __int64 v4; // rdx
  NTSTATUS v5; // ebx
  __int64 v6; // r8

  KeWaitForSingleObject(&IopWarmEjectLock, Executive, 0, 0, 0LL);
  PpDevNodeLockTree(1);
  IopWarmEjectPdo = (__int64)a1;
  PpDevNodeUnlockTree(1);
  v5 = NtInitiatePowerAction(PowerActionWarmEject, a2, 3u, 0);
  if ( v5 == -1073741727 )
    PnpSetPowerVetoEvent(7, v4, v6, a1, 12, 0LL);
  PpDevNodeLockTree(1);
  if ( IopWarmEjectPdo )
  {
    if ( v5 >= 0 )
      v5 = -1073741823;
    IopWarmEjectPdo = 0LL;
  }
  PpDevNodeUnlockTree(1);
  KeSetEvent(&IopWarmEjectLock, 0, 0);
  return (unsigned int)v5;
}
