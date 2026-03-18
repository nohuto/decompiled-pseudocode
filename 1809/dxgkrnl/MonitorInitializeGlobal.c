/*
 * XREFs of MonitorInitializeGlobal @ 0x1C0156C88
 * Callers:
 *     DriverEntry @ 0x1C02A1904 (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 */

__int64 __fastcall MonitorInitializeGlobal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  int v12; // eax
  NTSTATUS v13; // eax
  __int64 v14; // rcx
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
  ULONG Disposition[2]; // [rsp+78h] [rbp-90h] BYREF
  void *KeyHandle; // [rsp+80h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-80h] BYREF
  int v32; // [rsp+90h] [rbp-78h] BYREF
  _OWORD *v33; // [rsp+98h] [rbp-70h]
  int v34; // [rsp+A0h] [rbp-68h] BYREF
  _OWORD *v35; // [rsp+A8h] [rbp-60h]
  GUID EventCategoryData; // [rsp+B0h] [rbp-58h] BYREF
  _OWORD v37[10]; // [rsp+C8h] [rbp-40h] BYREF
  int v38; // [rsp+168h] [rbp+60h]
  _OWORD v39[10]; // [rsp+178h] [rbp+70h] BYREF
  __int64 v40; // [rsp+218h] [rbp+110h]

  WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v32 = 10748066;
  byte_1C008EDE8 = 0;
  v4 = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v37[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v5 = *(_OWORD *)L"e\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v37[1] = v4;
  v6 = *(_OWORD *)L"\\CurrentControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v37[2] = v5;
  v7 = *(_OWORD *)L"ControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v37[3] = v6;
  v8 = *(_OWORD *)L"et\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v37[4] = v7;
  v9 = *(_OWORD *)L"ol\\GraphicsDrivers\\BreakOnBadEDID";
  v37[5] = v8;
  v10 = *(_OWORD *)L"rs\\BreakOnBadEDID";
  v37[6] = v9;
  v37[7] = *(_OWORD *)L"icsDrivers\\BreakOnBadEDID";
  v11 = *(_OWORD *)L"OnBadEDID";
  v12 = *(_DWORD *)L"D";
  v37[8] = v10;
  v37[9] = v11;
  v38 = v12;
  v33 = v37;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v32;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    byte_1C008EDE8 = 1;
    ZwClose(KeyHandle);
  }
  KeInitializeSpinLock(&MONITOR_MGR::_MonitorPendingEventTraceLock);
  qword_1C008F9B8 = (__int64)&MONITOR_MGR::_MonitorPendingEventTraceHead;
  MONITOR_MGR::_MonitorPendingEventTraceHead.Flink = &MONITOR_MGR::_MonitorPendingEventTraceHead;
  EventCategoryData = GUID_DEVINTERFACE_MONITOR_DRIVER;
  v13 = IoRegisterPlugPlayNotification(
          EventCategoryDeviceInterfaceChange,
          1u,
          &EventCategoryData,
          g_pDriverObject,
          MONITOR_MGR::_HandleMonitorPnPNotification,
          0LL,
          &MONITOR_MGR::_pInterfaceNotificationHandle);
  v15 = v13;
  if ( v13 < 0 )
  {
    v27 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v27 + 24) = v15;
    WdLogEvent5_WdError(v27);
  }
  qword_1C008FA08 = 0LL;
  KeInitializeGuardedMutex(&DXGMONITOR::_UniqueTableLock);
  v34 = 11010214;
  qword_1C008F9C8 = (__int64)&DXGMONITOR::_UniqueEntryList;
  DXGMONITOR::_UniqueEntryList.Flink = &DXGMONITOR::_UniqueEntryList;
  v16 = *(_OWORD *)(0x1C0000000LL + 432816);
  v39[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\MonitorDataStore";
  v17 = *(_OWORD *)(0x1C0000000LL + 432832);
  v39[1] = v16;
  v18 = *(_OWORD *)(0x1C0000000LL + 432848);
  v39[2] = v17;
  v19 = *(_OWORD *)(0x1C0000000LL + 432864);
  v39[3] = v18;
  v20 = *(_OWORD *)(0x1C0000000LL + 432880);
  v39[4] = v19;
  v21 = *(_OWORD *)(0x1C0000000LL + 432896);
  v39[5] = v20;
  v22 = *(_OWORD *)(0x1C0000000LL + 432912);
  v39[6] = v21;
  v23 = *(_OWORD *)(0x1C0000000LL + 432928);
  v39[7] = v22;
  v24 = *(_OWORD *)(0x1C0000000LL + 432944);
  v25 = *(_QWORD *)(0x1C0000000LL + 432960);
  v39[8] = v23;
  v39[9] = v24;
  v40 = v25;
  v35 = v39;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v34;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwCreateKey(&Handle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, Disposition) >= 0 )
    ZwClose(Handle);
  return (unsigned int)v15;
}
