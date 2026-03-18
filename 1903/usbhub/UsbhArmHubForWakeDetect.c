/*
 * XREFs of UsbhArmHubForWakeDetect @ 0x1C0007828
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C00033E0 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhArmHubWakeOnConnect @ 0x1C0007588 (UsbhArmHubWakeOnConnect.c)
 * Callees:
 *     UsbhDisarmHubForWakeDetect @ 0x1C0007630 (UsbhDisarmHubForWakeDetect.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001C210 (UsbhEtwLogHubIrpEvent.c)
 */

LONG __fastcall UsbhArmHubForWakeDetect(PDEVICE_OBJECT DeviceObject)
{
  __int64 v2; // rdi
  int v3; // r9d
  __int64 v4; // r9
  int v5; // r10d
  NTSTATUS v6; // eax
  LONG result; // eax
  int Timeouta; // [rsp+20h] [rbp-18h]
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-18h]
  int v10; // [rsp+28h] [rbp-10h]

  v2 = FdoExt(DeviceObject);
  Log((_DWORD)DeviceObject, 16, 1750554411, 0, 0LL);
  UsbhEtwLogHubIrpEvent(DeviceObject, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_WAIT_WAKE_START, v3 & Timeouta, v3 & v10);
  while ( 1 )
  {
    Log(
      (_DWORD)DeviceObject,
      16,
      1750554488,
      0,
      _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 4884), 2, 1));
    if ( v5 == 1 )
      break;
    result = v5 - 2;
    if ( ((v5 - 2) & 0xFFFFFFFD) == 0 )
      return result;
    UsbhDisarmHubForWakeDetect((__int64)DeviceObject);
  }
  KeWaitForSingleObject((PVOID)(v2 + 4896), Executive, 0, v4, (PLARGE_INTEGER)(v4 & (unsigned __int64)Timeout));
  Log((_DWORD)DeviceObject, 16, 1750554480, 0, 0LL);
  KeResetEvent((PRKEVENT)(v2 + 4896));
  v6 = PoRequestPowerIrp(
         DeviceObject,
         0,
         *(POWER_STATE *)(v2 + 5036),
         (PREQUEST_POWER_COMPLETE)UsbhFdoWakePoComplete_Action,
         0LL,
         0LL);
  if ( v6 == 259 )
    return Log((_DWORD)DeviceObject, 16, 1749111373, 0, 0LL);
  Log((_DWORD)DeviceObject, 16, 1463896944, v6, 0LL);
  *(_DWORD *)(v2 + 4884) = 1;
  return KeSetEvent((PRKEVENT)(v2 + 4896), 0, 0);
}
