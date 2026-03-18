/*
 * XREFs of ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x1C028EF00
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C001150C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memcmp @ 0x1C0022D50 (memcmp.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C00B6898 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E2274 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z @ 0x1C015D0F0 (-DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0298900 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleMonitorPnPNotification(_QWORD *NotificationStructure, PVOID Context)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // rcx
  __int64 v9; // rax
  UNICODE_STRING *v10; // rsi
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // r13
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  struct DXGADAPTER *v24; // r15
  __int64 v25; // r12
  int v26; // r8d
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rax
  struct _FAST_MUTEX *v33; // rdi
  __int64 v34; // rax
  int MonitorInstance; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  struct DXGMONITOR *v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  int v43; // eax
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-C0h] BYREF
  PFILE_OBJECT FileObject; // [rsp+50h] [rbp-B8h] BYREF
  struct DXGMONITOR *v46; // [rsp+58h] [rbp-B0h] BYREF
  struct DXGADAPTER *InputBuffer[5]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v48; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v49[32]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v50[40]; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD v51[10]; // [rsp+D8h] [rbp-30h] BYREF

  memset(v51, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v51[1]);
  v51[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v51[3]) = 2;
  LOBYTE(v51[6]) = -1;
  WdLogNewEntry5_WdTrace(v4, v3, v5, v6);
  if ( !NotificationStructure )
    return 3221225485LL;
  v8 = *(_QWORD *)&GUID_DEVINTERFACE_MONITOR_DRIVER.Data1 - *(_QWORD *)((char *)NotificationStructure + 20);
  if ( *(_QWORD *)&GUID_DEVINTERFACE_MONITOR_DRIVER.Data1 == *(_QWORD *)((char *)NotificationStructure + 20) )
    v8 = *(_QWORD *)GUID_DEVINTERFACE_MONITOR_DRIVER.Data4 - *(_QWORD *)((char *)NotificationStructure + 28);
  if ( v8 )
  {
    v9 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v9 + 24) = (char *)NotificationStructure + 20;
    WdLogEvent5_WdError(v9);
    return 3221225485LL;
  }
  v10 = (UNICODE_STRING *)NotificationStructure[5];
  DeviceObject = 0LL;
  FileObject = 0LL;
  DeviceObjectPointer = IoGetDeviceObjectPointer(v10, 0x80000000, &FileObject, &DeviceObject);
  v16 = DeviceObjectPointer;
  if ( DeviceObjectPointer == -1073741772 )
  {
    v17 = WdLogNewEntry5_WdDmmEvent(v13, v12, v14, v15);
    *(_QWORD *)(v17 + 24) = v10->Buffer;
    WdLogEvent5_WdDmmEvent(v17);
    return 3221225524LL;
  }
  if ( DeviceObjectPointer >= 0 )
  {
    DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(DeviceObject);
    ObfDereferenceObject(DeviceAttachmentBaseRef);
    memset(InputBuffer, 0, sizeof(InputBuffer));
    v16 = (int)DxgkCallDriverIoControl(DeviceObject, 0x232407u, InputBuffer, 0x28u, InputBuffer, 0x28u, 1u, 0LL);
    ObfDereferenceObject(FileObject);
    if ( (int)v16 < 0 )
    {
      v23 = WdLogNewEntry5_WdWarning(v21, v20, v22);
      *(_QWORD *)(v23 + 24) = v10->Buffer;
      *(_QWORD *)(v23 + 32) = v16;
      WdLogEvent5_WdWarning(v23);
      return (unsigned int)v16;
    }
    v24 = InputBuffer[0];
    v25 = LODWORD(InputBuffer[2]);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v48, InputBuffer[0], 0LL);
    v27 = COREADAPTERACCESS::AcquireExclusive(&v48, (unsigned int)(v26 + 1));
    LODWORD(v16) = v27;
    if ( v27 < 0 )
    {
      if ( v27 != -1073741130 )
      {
        v29 = WdLogNewEntry5_WdAssertion(v28);
        WdLogEvent5_WdAssertion(v29);
      }
      v30 = (_QWORD *)WdLogNewEntry5_WdError(v28);
      goto LABEL_36;
    }
    v31 = *((_QWORD *)v24 + 315);
    if ( !v31 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v28);
      WdLogEvent5_WdAssertion(v32);
      v31 = *((_QWORD *)v24 + 315);
    }
    v33 = *(struct _FAST_MUTEX **)(v31 + 96);
    if ( !v33 )
    {
      v34 = WdLogNewEntry5_WdAssertion(v28);
      WdLogEvent5_WdAssertion(v34);
    }
    v46 = 0LL;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v33, v25, 1, &v46);
    v16 = MonitorInstance;
    if ( MonitorInstance < 0 )
    {
      if ( MonitorInstance != -1073741275 )
      {
        v30 = (_QWORD *)WdLogNewEntry5_WdError(v37);
        v30[3] = v25;
        v30[4] = v33;
        v30[5] = v16;
LABEL_36:
        WdLogEvent5_WdError(v30);
        goto LABEL_37;
      }
      v41 = WdLogNewEntry5_WdWarning(v37, v36, v38);
      *(_QWORD *)(v41 + 24) = v25;
      *(_QWORD *)(v41 + 32) = v33;
    }
    else
    {
      v39 = v46;
      if ( !v46 )
      {
        v40 = WdLogNewEntry5_WdAssertion(v37);
        WdLogEvent5_WdAssertion(v40);
      }
      if ( *((PDEVICE_OBJECT *)v39 + 7) == DeviceAttachmentBaseRef )
      {
        v42 = *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1 - *(_QWORD *)((char *)NotificationStructure + 4);
        if ( *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1 == *(_QWORD *)((char *)NotificationStructure + 4) )
          v42 = *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4 - *(_QWORD *)((char *)NotificationStructure + 12);
        if ( v42 )
        {
          LODWORD(v16) = memcmp(&GUID_DEVICE_INTERFACE_REMOVAL, (char *)NotificationStructure + 4, 0x10uLL) != 0
                       ? 0xC000000D
                       : 0;
LABEL_37:
          COREACCESS::~COREACCESS((COREACCESS *)v50);
          COREACCESS::~COREACCESS((COREACCESS *)v49);
          return (unsigned int)v16;
        }
        v43 = DXGMONITOR::_OnMonitorFunctionDriverArrival(v39, v10, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v51);
        MONITOR_MGR::_LogMonitorPresentEvent((__int64)v33, 3, v25, v43, 0LL);
LABEL_34:
        LODWORD(v16) = 0;
        goto LABEL_37;
      }
      v41 = WdLogNewEntry5_WdWarning(v37, v36, v38);
      *(_QWORD *)(v41 + 24) = v33;
    }
    WdLogEvent5_WdWarning(v41);
    goto LABEL_34;
  }
  v18 = WdLogNewEntry5_WdError(v13);
  *(_QWORD *)(v18 + 24) = v10->Buffer;
  *(_QWORD *)(v18 + 32) = v16;
  WdLogEvent5_WdError(v18);
  return (unsigned int)v16;
}
