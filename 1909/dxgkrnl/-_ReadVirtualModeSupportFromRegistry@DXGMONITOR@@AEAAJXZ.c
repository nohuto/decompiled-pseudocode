/*
 * XREFs of ?_ReadVirtualModeSupportFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C0178B90
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0178698 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C01790B0 (-_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z.c)
 */

int __fastcall DXGMONITOR::_ReadVirtualModeSupportFromRegistry(DXGMONITOR *this)
{
  int result; // eax
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-40h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+50h] [rbp-20h] BYREF
  int v13; // [rsp+54h] [rbp-1Ch]
  int v14; // [rsp+58h] [rbp-18h]
  int v15; // [rsp+5Ch] [rbp-14h]

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  result = DXGMONITOR::_OpenMonitorDataStore(this, 1u, &KeyHandle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"VMSDisabled");
    v3 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x13u,
           &ResultLength);
    ZwClose(KeyHandle);
    if ( (int)v3 >= 0 )
    {
      if ( v13 == 4 && v14 == 4 )
      {
        *((_DWORD *)this + 10) = *((_DWORD *)this + 10) & 0xFFFFFF7F | (v15 != 0 ? 0x80 : 0);
        return 0;
      }
      else
      {
        v8 = WdLogNewEntry5_WdError(v5, v4, v6);
        *(_QWORD *)(v8 + 24) = this;
        *(_QWORD *)(v8 + 32) = -1073741823LL;
        WdLogEvent5_WdError(v8);
        return -1073741823;
      }
    }
    else
    {
      v7 = WdLogNewEntry5_WdError(v5, v4, v6);
      *(_QWORD *)(v7 + 24) = this;
      *(_QWORD *)(v7 + 32) = v3;
      WdLogEvent5_WdError(v7);
      return v3;
    }
  }
  return result;
}
