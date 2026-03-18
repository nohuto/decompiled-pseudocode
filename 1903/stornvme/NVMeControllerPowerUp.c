/*
 * XREFs of NVMeControllerPowerUp @ 0x1C000B600
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C00046D0 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeControllerStartFailureEventLog @ 0x1C000806C (NVMeControllerStartFailureEventLog.c)
 *     ControllerReset @ 0x1C0008C6C (ControllerReset.c)
 *     NVMeControllerInitPart1 @ 0x1C000B0B4 (NVMeControllerInitPart1.c)
 *     NVMeControllerInitPart2 @ 0x1C000B228 (NVMeControllerInitPart2.c)
 *     NVMeQueuesReInit @ 0x1C000D8B8 (NVMeQueuesReInit.c)
 */

__int64 __fastcall NVMeControllerPowerUp(__int64 a1)
{
  char inited; // al

  *(_DWORD *)(a1 + 20) &= ~4u;
  StorPortDebugPrint(3LL, "StorNVMe - POWER: Controller D0\n");
  NVMeQueuesReInit(a1);
  inited = ControllerReset(a1);
  if ( inited == 1 )
  {
    inited = NVMeControllerInitPart1(a1, 0);
    if ( inited == 1 )
      inited = NVMeControllerInitPart2(a1, 0);
  }
  if ( !inited )
    NVMeControllerStartFailureEventLog(a1);
  return StorPortDebugPrint(3LL, "StorNVMe - POWER: Controller D0\n");
}
