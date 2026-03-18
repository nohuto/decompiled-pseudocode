/*
 * XREFs of ACPIWakeEmulationDisable @ 0x1C005FA10
 * Callers:
 *     ACPIDeviceInitializePowerRequest @ 0x1C001C2EC (ACPIDeviceInitializePowerRequest.c)
 *     ACPIDereferenceWaitWakePowerRequest @ 0x1C0024ED0 (ACPIDereferenceWaitWakePowerRequest.c)
 *     ACPIDeviceCancelWaitWakeIrp @ 0x1C004E500 (ACPIDeviceCancelWaitWakeIrp.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x1C0057258 (OSNotifyDeviceWakeByInterrupt.c)
 * Callees:
 *     ACPIDisconnectWakeInterrupt @ 0x1C005F350 (ACPIDisconnectWakeInterrupt.c)
 */

void __fastcall ACPIWakeEmulationDisable(__int64 a1)
{
  unsigned int v1; // eax
  __int64 *v2; // rbx
  __int64 v3; // rdi

  v1 = *(_DWORD *)(a1 + 116);
  v2 = (__int64 *)(a1 + 152);
  if ( v1 > 1 )
    v2 = (__int64 *)*v2;
  if ( v1 )
  {
    v3 = *(unsigned int *)(a1 + 116);
    do
    {
      ACPIDisconnectWakeInterrupt(v2);
      v2 += 5;
      --v3;
    }
    while ( v3 );
  }
}
