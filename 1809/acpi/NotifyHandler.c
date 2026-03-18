/*
 * XREFs of NotifyHandler @ 0x1C002E080
 * Callers:
 *     AcpiNativeNotifyEventHandler @ 0x1C0059340 (AcpiNativeNotifyEventHandler.c)
 * Callees:
 *     DispatchNotification @ 0x1C002E170 (DispatchNotification.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C002E1E0 (WPP_RECORDER_SF_DDD.c)
 *     OSNotifyDeviceEnum @ 0x1C002E2C4 (OSNotifyDeviceEnum.c)
 *     OSNotifyDeviceCheck @ 0x1C0056C14 (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceEject @ 0x1C0056D8C (OSNotifyDeviceEject.c)
 *     OSNotifyDeviceWake @ 0x1C0056E10 (OSNotifyDeviceWake.c)
 */

__int64 __fastcall NotifyHandler(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // esi
  __int64 v5; // rdi
  KIRQL v6; // al
  __int64 v7; // r8
  char v9; // [rsp+30h] [rbp-18h]

  v4 = a2;
  v9 = a2;
  LOBYTE(a2) = 4;
  WPP_RECORDER_SF_DDD(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    2,
    10,
    (__int64)&WPP_4b880bb8951430c9af1b6a6df9ba6007_Traceguids,
    a3,
    v9,
    *(_WORD *)(*(_QWORD *)a3 + 66LL));
  if ( v4 )
  {
    switch ( v4 )
    {
      case 1u:
        OSNotifyDeviceCheck(a3);
        break;
      case 2u:
        OSNotifyDeviceWake(a3);
        break;
      case 3u:
        OSNotifyDeviceEject(a3);
        break;
    }
  }
  else
  {
    OSNotifyDeviceEnum(a3);
  }
  v5 = 0LL;
  v6 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v7 = *(_QWORD *)(*(_QWORD *)a3 + 104LL);
  if ( v7 && *(_DWORD *)(v7 + 16) == 1599293264 )
    v5 = v7 + 328;
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v6);
  if ( v5 )
    DispatchNotification(v5 - 328, v4);
  return 0LL;
}
