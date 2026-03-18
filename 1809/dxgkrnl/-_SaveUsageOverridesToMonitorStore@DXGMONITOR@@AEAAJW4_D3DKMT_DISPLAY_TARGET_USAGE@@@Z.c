/*
 * XREFs of ?_SaveUsageOverridesToMonitorStore@DXGMONITOR@@AEAAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C0296880
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0298900 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C0294934 (-_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_SaveUsageOverridesToMonitorStore(DXGMONITOR *a1, int a2)
{
  __int64 result; // rax
  NTSTATUS v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rbx
  NTSTATUS v8; // eax
  __int64 v9; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-30h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-28h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+48h] [rbp-18h] BYREF
  BOOL Data; // [rsp+90h] [rbp+30h] BYREF
  BOOL v14; // [rsp+98h] [rbp+38h] BYREF

  RtlInitUnicodeString(&DestinationString, L"HMDDevicePresent");
  RtlInitUnicodeString(&ValueName, L"SpecialUseDevicePresent");
  result = DXGMONITOR::_OpenMonitorDataStore(a1, 0, &KeyHandle);
  if ( (int)result >= 0 )
  {
    Data = a2 == 1;
    v5 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
    v7 = v5;
    if ( v5 < 0 || (v14 = a2 == 2, v8 = ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &v14, 4u), v7 = v8, v8 < 0) )
    {
      v9 = WdLogNewEntry5_WdError(v6);
      *(_QWORD *)(v9 + 24) = a1;
      *(_QWORD *)(v9 + 32) = v7;
      WdLogEvent5_WdError(v9);
    }
    ZwClose(KeyHandle);
    return (unsigned int)v7;
  }
  return result;
}
