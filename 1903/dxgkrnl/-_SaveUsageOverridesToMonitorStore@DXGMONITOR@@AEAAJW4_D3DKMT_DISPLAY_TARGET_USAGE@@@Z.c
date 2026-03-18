/*
 * XREFs of ?_SaveUsageOverridesToMonitorStore@DXGMONITOR@@AEAAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02CB818
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C016FB9C (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C01752C0 (-_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_SaveUsageOverridesToMonitorStore(DXGMONITOR *a1, int a2)
{
  __int64 result; // rax
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  NTSTATUS v10; // eax
  __int64 v11; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-30h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-28h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+48h] [rbp-18h] BYREF
  BOOL Data; // [rsp+90h] [rbp+30h] BYREF
  BOOL v16; // [rsp+98h] [rbp+38h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, L"HMDDevicePresent");
  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  RtlInitUnicodeString(&ValueName, L"SpecialUseDevicePresent");
  result = DXGMONITOR::_OpenMonitorDataStore(a1, 0LL, &KeyHandle);
  if ( (int)result >= 0 )
  {
    Data = a2 == 1;
    v5 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
    v9 = v5;
    if ( v5 < 0 || (v16 = a2 == 2, v10 = ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &v16, 4u), v9 = v10, v10 < 0) )
    {
      v11 = WdLogNewEntry5_WdError(v7, v6, v8);
      *(_QWORD *)(v11 + 24) = a1;
      *(_QWORD *)(v11 + 32) = v9;
      WdLogEvent5_WdError(v11);
    }
    ZwClose(KeyHandle);
    return (unsigned int)v9;
  }
  return result;
}
