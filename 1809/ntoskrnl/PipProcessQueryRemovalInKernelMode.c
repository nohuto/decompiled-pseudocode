/*
 * XREFs of PipProcessQueryRemovalInKernelMode @ 0x140841890
 * Callers:
 *     PiProcessQueryAndCancelRemoval @ 0x140841398 (PiProcessQueryAndCancelRemoval.c)
 * Callees:
 *     PiSendTargetDeviceRemoveCanceledNotification @ 0x140841744 (PiSendTargetDeviceRemoveCanceledNotification.c)
 *     PipSendQueryRemoveIrpAndCheckOpenHandles @ 0x1408419B0 (PipSendQueryRemoveIrpAndCheckOpenHandles.c)
 *     PipSendTargetDeviceQueryRemoveNotification @ 0x140841B28 (PipSendTargetDeviceQueryRemoveNotification.c)
 */

__int64 __fastcall PipProcessQueryRemovalInKernelMode(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  int v10; // ebx

  if ( (int)PipSendTargetDeviceQueryRemoveNotification(a2, a5, a4, a6) >= 0 )
  {
    v10 = PipSendQueryRemoveIrpAndCheckOpenHandles(a1, a2, a3, a4, a5, a6);
    if ( v10 < 0 )
      PiSendTargetDeviceRemoveCanceledNotification(a5, a4);
  }
  else
  {
    return (unsigned int)-2147483608;
  }
  return (unsigned int)v10;
}
