/*
 * XREFs of ?_ReadScaleFactorFromMonitorStore@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C029577C
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B44E8 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C0294934 (-_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_ReadScaleFactorFromMonitorStore(DXGMONITOR *this, unsigned int *a2)
{
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-48h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-40h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+50h] [rbp-28h] BYREF
  unsigned int v16; // [rsp+54h] [rbp-24h]
  int v17; // [rsp+58h] [rbp-20h]
  unsigned int v18; // [rsp+5Ch] [rbp-1Ch]

  *a2 = 0;
  result = DXGMONITOR::_OpenMonitorDataStore(this, 1, &KeyHandle);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"PreferredScaleFactor");
    v5 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x13u,
           &ResultLength);
    ZwClose(KeyHandle);
    if ( (_DWORD)v5 == -1073741772 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v7, v6, v8, v9) + 24) = this;
      return 3221225524LL;
    }
    else if ( (int)v5 >= 0 )
    {
      if ( v16 == 4 && v17 == 4 )
      {
        *a2 = v18;
        return 0LL;
      }
      else
      {
        v11 = WdLogNewEntry5_WdError(v7);
        *(_QWORD *)(v11 + 24) = this;
        *(_QWORD *)(v11 + 32) = v16;
        WdLogEvent5_WdError(v11);
        return 3221225473LL;
      }
    }
    else
    {
      v10 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v10 + 24) = this;
      *(_QWORD *)(v10 + 32) = v5;
      WdLogEvent5_WdError(v10);
      return (unsigned int)v5;
    }
  }
  return result;
}
