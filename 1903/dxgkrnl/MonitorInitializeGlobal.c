/*
 * XREFs of MonitorInitializeGlobal @ 0x1C016F1D4
 * Callers:
 *     DriverEntry @ 0x1C02D5158 (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 */

__int64 __fastcall MonitorInitializeGlobal(__int64 a1, __int64 a2)
{
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  int v10; // eax
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rbx
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int64 v25; // rax
  __int64 v27; // rax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v29[2]; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v30[2]; // [rsp+88h] [rbp-80h] BYREF
  ULONG Disposition; // [rsp+98h] [rbp-70h] BYREF
  void *KeyHandle; // [rsp+A0h] [rbp-68h] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp-60h] BYREF
  GUID EventCategoryData; // [rsp+B0h] [rbp-58h] BYREF
  _OWORD v35[10]; // [rsp+C8h] [rbp-40h] BYREF
  int v36; // [rsp+168h] [rbp+60h]
  _OWORD v37[10]; // [rsp+178h] [rbp+70h] BYREF
  __int64 v38; // [rsp+218h] [rbp+110h]

  WdLogNewEntry5_WdTrace(a1, a2);
  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  v2 = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v29[0] = 10748066LL;
  v35[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  byte_1C00A2E08 = 0;
  v3 = *(_OWORD *)L"e\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  ObjectAttributes.Length = 48;
  v35[1] = v2;
  ObjectAttributes.Attributes = 576;
  v4 = *(_OWORD *)L"\\CurrentControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v35[2] = v3;
  v5 = *(_OWORD *)L"ControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v35[3] = v4;
  v6 = *(_OWORD *)L"et\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v35[4] = v5;
  v7 = *(_OWORD *)L"ol\\GraphicsDrivers\\BreakOnBadEDID";
  v35[5] = v6;
  v8 = *(_OWORD *)L"rs\\BreakOnBadEDID";
  v35[6] = v7;
  v35[7] = *(_OWORD *)L"icsDrivers\\BreakOnBadEDID";
  v9 = *(_OWORD *)L"OnBadEDID";
  v10 = *(_DWORD *)L"D";
  v35[8] = v8;
  v35[9] = v9;
  v36 = v10;
  v29[1] = v35;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v29;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    byte_1C00A2E08 = 1;
    ZwClose(KeyHandle);
  }
  KeInitializeSpinLock(&MONITOR_MGR::_MonitorPendingEventTraceLock);
  qword_1C00A39E8 = (__int64)&MONITOR_MGR::_MonitorPendingEventTraceHead;
  MONITOR_MGR::_MonitorPendingEventTraceHead.Flink = &MONITOR_MGR::_MonitorPendingEventTraceHead;
  EventCategoryData = GUID_DEVINTERFACE_MONITOR_DRIVER;
  v11 = IoRegisterPlugPlayNotification(
          EventCategoryDeviceInterfaceChange,
          1u,
          &EventCategoryData,
          g_pDriverObject,
          MONITOR_MGR::_HandleMonitorPnPNotification,
          0LL,
          &MONITOR_MGR::_pInterfaceNotificationHandle);
  v15 = v11;
  if ( v11 < 0 )
  {
    v27 = WdLogNewEntry5_WdError(v13, v12, v14);
    *(_QWORD *)(v27 + 24) = v15;
    WdLogEvent5_WdError(v27);
  }
  qword_1C00A3A38 = 0LL;
  KeInitializeGuardedMutex(&DXGMONITOR::_UniqueTableLock);
  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  qword_1C00A3A30 = (__int64)&DXGMONITOR::_UniqueEntryList;
  DXGMONITOR::_UniqueEntryList.Flink = &DXGMONITOR::_UniqueEntryList;
  v30[0] = 11010214LL;
  ObjectAttributes.Length = 48;
  v16 = *(_OWORD *)(0x1C0000000LL + 452544);
  ObjectAttributes.Attributes = 576;
  v37[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\MonitorDataStore";
  v17 = *(_OWORD *)(0x1C0000000LL + 452560);
  v37[1] = v16;
  v18 = *(_OWORD *)(0x1C0000000LL + 452576);
  v37[2] = v17;
  v19 = *(_OWORD *)(0x1C0000000LL + 452592);
  v37[3] = v18;
  v20 = *(_OWORD *)(0x1C0000000LL + 452608);
  v37[4] = v19;
  v21 = *(_OWORD *)(0x1C0000000LL + 452624);
  v37[5] = v20;
  v22 = *(_OWORD *)(0x1C0000000LL + 452640);
  v37[6] = v21;
  v23 = *(_OWORD *)(0x1C0000000LL + 452656);
  v37[7] = v22;
  v24 = *(_OWORD *)(0x1C0000000LL + 452672);
  v25 = *(_QWORD *)(0x1C0000000LL + 452688);
  v37[8] = v23;
  v37[9] = v24;
  v38 = v25;
  v30[1] = v37;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v30;
  if ( ZwCreateKey(&Handle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition) >= 0 )
    ZwClose(Handle);
  return (unsigned int)v15;
}
