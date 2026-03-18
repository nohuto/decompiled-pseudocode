/*
 * XREFs of UsbhEtwWrite @ 0x1C0020BB0
 * Callers:
 *     UsbhEtwLogDevicePowerEvent @ 0x1C00031F0 (UsbhEtwLogDevicePowerEvent.c)
 *     UsbhEtwLogHubPowerEvent @ 0x1C000688C (UsbhEtwLogHubPowerEvent.c)
 *     UsbhEnableTimerObject @ 0x1C000D520 (UsbhEnableTimerObject.c)
 *     UsbhDmTimerDpc @ 0x1C000DB30 (UsbhDmTimerDpc.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C000EDB8 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhBusConnectPdo @ 0x1C000F090 (UsbhBusConnectPdo.c)
 *     UsbhDisableTimerObject @ 0x1C000F740 (UsbhDisableTimerObject.c)
 *     UsbhQueryBusRelations @ 0x1C0010C30 (UsbhQueryBusRelations.c)
 *     UsbhHubProcessIsr @ 0x1C0011C70 (UsbhHubProcessIsr.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001C210 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhEtwLogDeviceDescription @ 0x1C0020660 (UsbhEtwLogDeviceDescription.c)
 *     UsbhEtwLogHubInformation @ 0x1C0020788 (UsbhEtwLogHubInformation.c)
 *     UsbhEtwLogPortInformation @ 0x1C00208A0 (UsbhEtwLogPortInformation.c)
 *     UsbhEtwLogDeviceInformation @ 0x1C005F174 (UsbhEtwLogDeviceInformation.c)
 *     UsbhEtwLogHubEventWithExtraData @ 0x1C005F2C4 (UsbhEtwLogHubEventWithExtraData.c)
 *     UsbhEtwLogHubException @ 0x1C005F3C8 (UsbhEtwLogHubException.c)
 *     UsbhEtwLogHubPastExceptions @ 0x1C005F4FC (UsbhEtwLogHubPastExceptions.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002C5B0 (__security_check_cookie.c)
 *     memset @ 0x1C002CA00 (memset.c)
 */

NTSTATUS UsbhEtwWrite(PCEVENT_DESCRIPTOR EventDescriptor, LPCGUID ActivityId, ...)
{
  va_list v4; // r8
  ULONG v5; // r9d
  unsigned __int64 v6; // rdx
  unsigned int v7; // ecx
  __int64 v8; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData[10]; // [rsp+30h] [rbp-C8h] BYREF
  va_list va; // [rsp+110h] [rbp+18h] BYREF

  va_start(va, ActivityId);
  memset(UserData, 0, sizeof(UserData));
  va_copy(v4, va);
  v5 = 0;
  while ( 1 )
  {
    v6 = *(_QWORD *)v4;
    if ( !*(_QWORD *)v4 )
      break;
    v7 = *((_DWORD *)v4 + 2);
    v4 += 16;
    if ( !v7 || v5 >= 0xA )
      break;
    v8 = v5++;
    UserData[v8].Ptr = v6;
    UserData[v8].Size = v7;
    UserData[v8].Reserved = 0;
  }
  return EtwWrite(RegHandle, EventDescriptor, ActivityId, v5, UserData);
}
