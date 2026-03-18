/*
 * XREFs of ?_SaveAdvancedColorEnabledToMonitorStore@DXGMONITOR@@AEAAJ_N@Z @ 0x1C0296620
 * Callers:
 *     MonitorEnableDisableAdvancedColor @ 0x1C0290438 (MonitorEnableDisableAdvancedColor.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0298900 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C0294934 (-_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_SaveAdvancedColorEnabledToMonitorStore(DXGMONITOR *this, unsigned __int8 a2)
{
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int Data; // [rsp+60h] [rbp+18h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp+20h] BYREF

  result = DXGMONITOR::_OpenMonitorDataStore(this, 0, &KeyHandle);
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
      v7 = WdLogNewEntry5_WdError(v6);
      *(_QWORD *)(v7 + 24) = this;
      *(_QWORD *)(v7 + 32) = v5;
      WdLogEvent5_WdError(v7);
      return (unsigned int)v5;
    }
  }
  return result;
}
