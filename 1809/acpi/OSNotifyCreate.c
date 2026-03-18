/*
 * XREFs of OSNotifyCreate @ 0x1C001CF10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002680 (WPP_RECORDER_SF_D.c)
 *     OSNotifyCreateProcessor @ 0x1C0015E8C (OSNotifyCreateProcessor.c)
 *     OSNotifyCreateOperationRegion @ 0x1C0017F78 (OSNotifyCreateOperationRegion.c)
 *     OSNotifyCreateDevice @ 0x1C001AF60 (OSNotifyCreateDevice.c)
 *     WPP_RECORDER_SF_qsL @ 0x1C001D0D4 (WPP_RECORDER_SF_qsL.c)
 *     OSNotifyCreatePowerResource @ 0x1C002CD14 (OSNotifyCreatePowerResource.c)
 *     OSNotifyCreateThermalZone @ 0x1C002EAB0 (OSNotifyCreateThermalZone.c)
 */

__int64 __fastcall OSNotifyCreate(int a1, __int64 a2)
{
  KIRQL v4; // si
  char Device; // al
  char v6; // di
  int v7; // edx

  v4 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  switch ( a1 )
  {
    case 6:
      Device = OSNotifyCreateDevice(a2, 0LL);
      break;
    case 10:
      Device = OSNotifyCreateOperationRegion(a2);
      break;
    case 11:
      Device = OSNotifyCreatePowerResource(a2);
      break;
    case 12:
      Device = OSNotifyCreateProcessor(a2, 0LL);
      break;
    case 13:
      Device = OSNotifyCreateThermalZone(a2, 0LL);
      break;
    default:
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x15u,
        0xAu,
        (__int64)&WPP_2b07ff94468e36517e02013b54d392f0_Traceguids,
        a1);
      v6 = 0;
      goto LABEL_4;
  }
  v6 = Device;
LABEL_4:
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v4);
  dword_1C00806E0 = *(_DWORD *)(*(_QWORD *)a2 + 40LL);
  byte_1C00806E4 = 0;
  WPP_RECORDER_SF_qsL(
    WPP_GLOBAL_Control->DeviceExtension,
    v7,
    6,
    11,
    (__int64)&WPP_2b07ff94468e36517e02013b54d392f0_Traceguids,
    a2,
    (__int64)&dword_1C00806E0,
    v6);
  return 0LL;
}
