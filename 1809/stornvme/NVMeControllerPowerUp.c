/*
 * XREFs of NVMeControllerPowerUp @ 0x1C000DE90
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0006160 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeControllerInitPart3 @ 0x1C0006510 (NVMeControllerInitPart3.c)
 *     NVMeControllerStartFailureEventLog @ 0x1C000AC40 (NVMeControllerStartFailureEventLog.c)
 *     ControllerReset @ 0x1C000B83C (ControllerReset.c)
 *     NVMeControllerInitPart1 @ 0x1C000DABC (NVMeControllerInitPart1.c)
 *     NVMeControllerInitPart2 @ 0x1C000DC08 (NVMeControllerInitPart2.c)
 *     NVMeQueuesReInit @ 0x1C000F68C (NVMeQueuesReInit.c)
 */

__int64 __fastcall NVMeControllerPowerUp(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  char inited; // al
  __int64 v6; // r8

  *(_DWORD *)(a1 + 20) &= ~4u;
  StorPortDebugPrint(3LL, "StorNVMe - POWER: Controller D0\n");
  NVMeQueuesReInit(a1);
  inited = ControllerReset(a1, v2, v3, v4);
  if ( inited == 1 )
  {
    inited = NVMeControllerInitPart1(a1, 0);
    if ( inited == 1 )
    {
      LOBYTE(v6) = 1;
      inited = NVMeControllerInitPart2(a1, 0LL, v6);
      if ( inited == 1 )
        inited = NVMeControllerInitPart3(a1, 1);
    }
  }
  if ( !inited )
    NVMeControllerStartFailureEventLog(a1);
  return StorPortDebugPrint(3LL, "StorNVMe - POWER: Controller D0\n");
}
