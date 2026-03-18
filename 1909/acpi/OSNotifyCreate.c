/*
 * XREFs of OSNotifyCreate @ 0x1C000E770
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001B40 (WPP_RECORDER_SF_D.c)
 *     OSNotifyCreateOperationRegion @ 0x1C000CE20 (OSNotifyCreateOperationRegion.c)
 *     WPP_RECORDER_SF_qsL @ 0x1C000E8A8 (WPP_RECORDER_SF_qsL.c)
 *     OSNotifyCreateDevice @ 0x1C000FFB4 (OSNotifyCreateDevice.c)
 *     OSNotifyCreateProcessor @ 0x1C002C634 (OSNotifyCreateProcessor.c)
 *     OSNotifyCreatePowerResource @ 0x1C002D764 (OSNotifyCreatePowerResource.c)
 *     OSNotifyCreateThermalZone @ 0x1C002F62C (OSNotifyCreateThermalZone.c)
 */

__int64 __fastcall OSNotifyCreate(int a1, ULONG_PTR a2)
{
  KIRQL v4; // si
  char Device; // al
  char v6; // bl
  int v7; // edx

  v4 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  switch ( a1 )
  {
    case 6:
      Device = OSNotifyCreateDevice(a2);
LABEL_3:
      v6 = Device;
      goto LABEL_4;
    case 10:
      Device = OSNotifyCreateOperationRegion(a2);
      goto LABEL_3;
    case 11:
      Device = OSNotifyCreatePowerResource(a2);
      goto LABEL_3;
    case 12:
      Device = OSNotifyCreateProcessor(a2, 0LL);
      goto LABEL_3;
    case 13:
      Device = OSNotifyCreateThermalZone(a2, 0LL);
      goto LABEL_3;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x15u,
      0xAu,
      (__int64)&WPP_2b07ff94468e36517e02013b54d392f0_Traceguids,
      a1);
  v6 = 0;
LABEL_4:
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    dword_1C00826D4 = *(_DWORD *)(*(_QWORD *)a2 + 40LL);
    byte_1C00826D8 = 0;
    WPP_RECORDER_SF_qsL(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      6,
      11,
      (__int64)&WPP_2b07ff94468e36517e02013b54d392f0_Traceguids,
      a2,
      (__int64)&dword_1C00826D4,
      v6);
  }
  return 0LL;
}
