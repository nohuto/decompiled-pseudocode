/*
 * XREFs of DpiIsDriverUpdateInProgress @ 0x1C00C51A0
 * Callers:
 *     ?GetDriverUpdateStatus@DXGADAPTER@@QEAAEPEAE@Z @ 0x1C00C5170 (-GetDriverUpdateStatus@DXGADAPTER@@QEAAEPEAE@Z.c)
 * Callees:
 *     DpiGetDevicePropertyDataBoolean @ 0x1C00C523C (DpiGetDevicePropertyDataBoolean.c)
 */

char __fastcall DpiIsDriverUpdateInProgress(__int64 a1, _BYTE *a2)
{
  __int64 v2; // rdi
  __int64 v4; // rsi
  int DevicePropertyDataBoolean; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  char v10; // bl
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  char v19; // [rsp+40h] [rbp+8h] BYREF
  char v20; // [rsp+50h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  v19 = 0;
  v20 = 0;
  v4 = *(_QWORD *)(v2 + 40);
  DevicePropertyDataBoolean = DpiGetDevicePropertyDataBoolean(
                                *(_QWORD *)(v2 + 152),
                                &DEVPKEY_Device_InstallInProgress,
                                &v19);
  v9 = DevicePropertyDataBoolean;
  if ( DevicePropertyDataBoolean < 0 )
  {
    v17 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v17 + 24) = v9;
    WdLogEvent5_WdError(v17);
  }
  v10 = v19;
  if ( !v19 && *(_DWORD *)(v4 + 28) < 0x6000u )
  {
    v11 = DpiGetDevicePropertyDataBoolean(*(_QWORD *)(v2 + 152), &DEVPKEY_Device_IsRebootRequired, &v20);
    v15 = v11;
    if ( v11 < 0 )
    {
      v18 = WdLogNewEntry5_WdError(v13, v12, v14);
      *(_QWORD *)(v18 + 24) = v15;
      WdLogEvent5_WdError(v18);
    }
    if ( v20 )
    {
      v10 = 1;
      *a2 = 1;
    }
  }
  return v10;
}
