/*
 * XREFs of NVMeControllerPowerUp @ 0x1C000B450
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0004C30 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeControllerStartFailureEventLog @ 0x1C0007EAC (NVMeControllerStartFailureEventLog.c)
 *     ControllerReset @ 0x1C0008ABC (ControllerReset.c)
 *     NVMeControllerInitPart1 @ 0x1C000AF04 (NVMeControllerInitPart1.c)
 *     NVMeControllerInitPart2 @ 0x1C000B078 (NVMeControllerInitPart2.c)
 *     NVMeQueuesReInit @ 0x1C000D7C8 (NVMeQueuesReInit.c)
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
