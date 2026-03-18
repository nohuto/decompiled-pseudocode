/*
 * XREFs of ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x1C01733E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000281C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFI.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memcmp @ 0x1C0024FC0 (memcmp.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00EC628 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C0145694 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z @ 0x1C01732A8 (-DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017398C (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleMonitorPnPNotification(_QWORD *NotificationStructure, PVOID Context)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  UNICODE_STRING *v8; // rsi
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // r13
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct DXGADAPTER *v18; // r15
  __int64 v19; // r12
  int v20; // r8d
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdi
  struct _FAST_MUTEX *v26; // rdi
  int MonitorInstance; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  struct DXGMONITOR *v31; // rbx
  __int64 v32; // rdx
  int v33; // eax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  PDEVICE_OBJECT DeviceObject; // [rsp+40h] [rbp-C0h] BYREF
  PFILE_OBJECT FileObject; // [rsp+48h] [rbp-B8h] BYREF
  struct DXGMONITOR *v47; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGADAPTER *InputBuffer[5]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v49[10]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v50; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v51[64]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v52[72]; // [rsp+118h] [rbp+18h] BYREF

  memset(v49, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v49[1]);
  v49[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v49[3]) = 2;
  LOBYTE(v49[6]) = -1;
  WdLogNewEntry5_WdTrace(v4, v3);
  if ( !NotificationStructure )
    return 3221225485LL;
  v7 = *(_QWORD *)&GUID_DEVINTERFACE_MONITOR_DRIVER.Data1 - *(_QWORD *)((char *)NotificationStructure + 20);
  if ( *(_QWORD *)&GUID_DEVINTERFACE_MONITOR_DRIVER.Data1 == *(_QWORD *)((char *)NotificationStructure + 20) )
    v7 = *(_QWORD *)GUID_DEVINTERFACE_MONITOR_DRIVER.Data4 - *(_QWORD *)((char *)NotificationStructure + 28);
  if ( v7 )
  {
    v35 = WdLogNewEntry5_WdError(v7, v5, v6);
    *(_QWORD *)(v35 + 24) = (char *)NotificationStructure + 20;
    WdLogEvent5_WdError(v35);
    return 3221225485LL;
  }
  v8 = (UNICODE_STRING *)NotificationStructure[5];
  DeviceObject = 0LL;
  FileObject = 0LL;
  DeviceObjectPointer = IoGetDeviceObjectPointer(v8, 0x80000000, &FileObject, &DeviceObject);
  v13 = DeviceObjectPointer;
  if ( DeviceObjectPointer != -1073741772 )
  {
    if ( DeviceObjectPointer < 0 )
    {
      v37 = WdLogNewEntry5_WdError(v11, v10, v12);
      *(_QWORD *)(v37 + 24) = v8->Buffer;
      *(_QWORD *)(v37 + 32) = v13;
      WdLogEvent5_WdError(v37);
      return (unsigned int)v13;
    }
    DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(DeviceObject);
    ObfDereferenceObject(DeviceAttachmentBaseRef);
    memset(InputBuffer, 0, sizeof(InputBuffer));
    v13 = (int)DxgkCallDriverIoControl(DeviceObject, 2302983LL, InputBuffer, 0x28u, InputBuffer, 0x28u, 1u, 0LL);
    ObfDereferenceObject(FileObject);
    if ( (int)v13 < 0 )
    {
      v38 = WdLogNewEntry5_WdWarning(v16, v15, v17);
      *(_QWORD *)(v38 + 24) = v8->Buffer;
      *(_QWORD *)(v38 + 32) = v13;
      WdLogEvent5_WdWarning(v38);
      return (unsigned int)v13;
    }
    v18 = InputBuffer[0];
    v19 = LODWORD(InputBuffer[2]);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v50, InputBuffer[0], 0LL);
    v21 = COREADAPTERACCESS::AcquireExclusive(&v50, (unsigned int)(v20 + 1));
    LODWORD(v13) = v21;
    if ( v21 < 0 )
    {
      if ( v21 != -1073741130 )
      {
        v39 = WdLogNewEntry5_WdAssertion(v23, v22);
        WdLogEvent5_WdAssertion(v39);
      }
      v40 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22, v24);
    }
    else
    {
      v25 = *((_QWORD *)v18 + 319);
      if ( !v25 )
      {
        v41 = WdLogNewEntry5_WdAssertion(v23, v22);
        WdLogEvent5_WdAssertion(v41);
        v25 = *((_QWORD *)v18 + 319);
      }
      v26 = *(struct _FAST_MUTEX **)(v25 + 96);
      if ( !v26 )
      {
        v42 = WdLogNewEntry5_WdAssertion(v23, v22);
        WdLogEvent5_WdAssertion(v42);
      }
      v47 = 0LL;
      MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v26, (unsigned int)v19, 1, &v47);
      v13 = MonitorInstance;
      if ( MonitorInstance >= 0 )
      {
        v31 = v47;
        if ( !v47 )
        {
          v43 = WdLogNewEntry5_WdAssertion(v29, v28);
          WdLogEvent5_WdAssertion(v43);
        }
        if ( *((PDEVICE_OBJECT *)v31 + 7) == DeviceAttachmentBaseRef )
        {
          v32 = *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1 - *(_QWORD *)((char *)NotificationStructure + 4);
          if ( *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1 == *(_QWORD *)((char *)NotificationStructure + 4) )
            v32 = *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4 - *(_QWORD *)((char *)NotificationStructure + 12);
          if ( v32 )
          {
            LODWORD(v13) = memcmp(&GUID_DEVICE_INTERFACE_REMOVAL, (char *)NotificationStructure + 4, 0x10uLL) != 0
                         ? 0xC000000D
                         : 0;
            goto LABEL_22;
          }
          v33 = DXGMONITOR::_OnMonitorFunctionDriverArrival(v31, v8, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v49);
          MONITOR_MGR::_LogMonitorPresentEvent((__int64)v26, 3LL, v19, v33, 0LL);
LABEL_21:
          LODWORD(v13) = 0;
LABEL_22:
          COREACCESS::~COREACCESS((COREACCESS *)v52);
          COREACCESS::~COREACCESS((COREACCESS *)v51);
          return (unsigned int)v13;
        }
        v44 = WdLogNewEntry5_WdWarning(v29, v28, v30);
        *(_QWORD *)(v44 + 24) = v26;
LABEL_36:
        WdLogEvent5_WdWarning(v44);
        goto LABEL_21;
      }
      if ( MonitorInstance == -1073741275 )
      {
        v44 = WdLogNewEntry5_WdWarning(v29, v28, v30);
        *(_QWORD *)(v44 + 24) = v19;
        *(_QWORD *)(v44 + 32) = v26;
        goto LABEL_36;
      }
      v40 = (_QWORD *)WdLogNewEntry5_WdError(v29, v28, v30);
      v40[3] = v19;
      v40[4] = v26;
      v40[5] = v13;
    }
    WdLogEvent5_WdError(v40);
    goto LABEL_22;
  }
  v36 = WdLogNewEntry5_WdDmmEvent(v11, v10);
  *(_QWORD *)(v36 + 24) = v8->Buffer;
  WdLogEvent5_WdDmmEvent(v36);
  return 3221225524LL;
}
