/*
 * XREFs of ?_ReadWCGEnforcedFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0295C44
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B44E8 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C0294934 (-_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_ReadWCGEnforcedFromMonitorStore(DXGMONITOR *this)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-48h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-40h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+50h] [rbp-28h] BYREF
  unsigned int v11; // [rsp+54h] [rbp-24h]
  int v12; // [rsp+58h] [rbp-20h]
  int v13; // [rsp+5Ch] [rbp-1Ch]

  *((_BYTE *)this + 697) = 0;
  result = DXGMONITOR::_OpenMonitorDataStore(this, 1, &KeyHandle);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"WCGEnforced");
    v3 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x13u,
           &ResultLength);
    ZwClose(KeyHandle);
    if ( (_DWORD)v3 == -1073741772 )
      return 0LL;
    if ( (int)v3 >= 0 )
    {
      if ( v11 == 4 && v12 == 4 )
      {
        *((_BYTE *)this + 697) = v13 != 0;
        return 0LL;
      }
      v6 = WdLogNewEntry5_WdError(v4);
      *(_QWORD *)(v6 + 24) = this;
      *(_QWORD *)(v6 + 32) = v11;
      WdLogEvent5_WdError(v6);
      return 3221225473LL;
    }
    else
    {
      v5 = WdLogNewEntry5_WdError(v4);
      *(_QWORD *)(v5 + 24) = this;
      *(_QWORD *)(v5 + 32) = v3;
      WdLogEvent5_WdError(v5);
      return (unsigned int)v3;
    }
  }
  return result;
}
