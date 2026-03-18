/*
 * XREFs of ?_SaveAdvancedColorEnabledToMonitorStore@DXGMONITOR@@AEAAJ_N@Z @ 0x1C02CB660
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017398C (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     MonitorEnableDisableAdvancedColor @ 0x1C02C953C (MonitorEnableDisableAdvancedColor.c)
 * Callees:
 *     ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C01790B0 (-_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_SaveAdvancedColorEnabledToMonitorStore(DXGMONITOR *this, unsigned __int8 a2)
{
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int Data; // [rsp+60h] [rbp+18h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp+20h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  result = DXGMONITOR::_OpenMonitorDataStore(this, 0LL, &KeyHandle);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"AdvancedColorEnabled");
    Data = a2;
    v5 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
    ZwClose(KeyHandle);
    if ( (int)v5 >= 0 )
    {
      *((_DWORD *)this + 10) = (a2 << 11) | *((_DWORD *)this + 10) & 0xFFFFF7FF;
      return 0LL;
    }
    else
    {
      v9 = WdLogNewEntry5_WdError(v7, v6, v8);
      *(_QWORD *)(v9 + 24) = this;
      *(_QWORD *)(v9 + 32) = v5;
      WdLogEvent5_WdError(v9);
      return (unsigned int)v5;
    }
  }
  return result;
}
