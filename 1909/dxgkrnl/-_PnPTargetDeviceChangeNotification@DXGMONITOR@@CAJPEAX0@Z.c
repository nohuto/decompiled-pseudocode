/*
 * XREFs of ?_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z @ 0x1C02CE350
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000281C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFI.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00EC628 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C0145694 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z @ 0x1C01732A8 (-DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z.c)
 *     ?_OnMonitorFunctionDriverDeparture@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02CE2B0 (-_OnMonitorFunctionDriverDeparture@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_UnregisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ @ 0x1C02CEB98 (-_UnregisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ.c)
 */

__int64 __fastcall DXGMONITOR::_PnPTargetDeviceChangeNotification(
        char *NotificationStructure,
        struct _DEVICE_OBJECT *Context)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdi
  __int64 v13; // rax
  struct DXGADAPTER *v15; // rdi
  __int64 v16; // r12
  int v17; // r8d
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  struct _FAST_MUTEX *v26; // r13
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  PERESOURCE v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rcx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // r15
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // rax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v44; // rdx
  PVOID Reserved2; // rcx
  __int64 v46; // rcx
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rcx
  int v55; // eax
  PERESOURCE Resource; // [rsp+40h] [rbp-C0h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-B8h] BYREF
  struct DXGADAPTER *InputBuffer[16]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v59; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v60[64]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v61[72]; // [rsp+118h] [rbp+18h] BYREF

  memset(&InputBuffer[6], 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&InputBuffer[7]);
  InputBuffer[14] = (struct DXGADAPTER *)MEMORY[0xFFFFF78000000014];
  LODWORD(InputBuffer[9]) = 3;
  LOBYTE(InputBuffer[12]) = -1;
  v6 = WdLogNewEntry5_WdTrace(v5, v4);
  v7 = 0;
  *(_QWORD *)(v6 + 24) = Context;
  *(_QWORD *)(v6 + 32) = NotificationStructure;
  if ( NotificationStructure && Context )
  {
    memset(InputBuffer, 0, 0x28uLL);
    v8 = DxgkCallDriverIoControl(Context, 2302983LL, InputBuffer, 0x28u, InputBuffer, 0x28u, 1u, 0LL);
    v12 = v8;
    if ( v8 < 0 )
    {
      v13 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      *(_QWORD *)(v13 + 24) = Context;
      *(_QWORD *)(v13 + 32) = v12;
      WdLogEvent5_WdWarning(v13);
      return 0LL;
    }
    v15 = InputBuffer[0];
    v16 = LODWORD(InputBuffer[2]);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v59, InputBuffer[0], 0LL);
    v18 = COREADAPTERACCESS::AcquireExclusive(&v59, (unsigned int)(v17 + 1));
    if ( v18 >= 0 )
    {
      v24 = *((_QWORD *)v15 + 319);
      if ( !v24 )
      {
        v25 = WdLogNewEntry5_WdAssertion(v20, v19);
        WdLogEvent5_WdAssertion(v25);
        v24 = *((_QWORD *)v15 + 319);
      }
      v26 = *(struct _FAST_MUTEX **)(v24 + 96);
      if ( !v26 )
      {
        v27 = WdLogNewEntry5_WdAssertion(v20, v19);
        WdLogEvent5_WdAssertion(v27);
      }
      Resource = 0LL;
      if ( (int)MONITOR_MGR::_GetMonitorInstance(v26, (unsigned int)v16, 1, (struct DXGMONITOR **)&Resource) >= 0 )
      {
        v31 = Resource;
        if ( !Resource )
        {
          v32 = WdLogNewEntry5_WdAssertion(v29, v28);
          WdLogEvent5_WdAssertion(v32);
        }
        if ( LODWORD(v31[4].OwnerTable) != 1 )
        {
          v33 = WdLogNewEntry5_WdAssertion(v29, v28);
          WdLogEvent5_WdAssertion(v33);
        }
        LODWORD(v34) = 0;
        Resource = (PERESOURCE)((char *)v31 + 296);
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v31 + 296), 1u);
        DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(Context);
        if ( !DeviceAttachmentBaseRef )
        {
          v38 = WdLogNewEntry5_WdAssertion(v36, v35);
          WdLogEvent5_WdAssertion(v38);
        }
        ObfDereferenceObject(DeviceAttachmentBaseRef);
        if ( DeviceAttachmentBaseRef == *(PDEVICE_OBJECT *)&v31->OwnerEntry.0 )
        {
          v43 = *(_QWORD *)(NotificationStructure + 4);
          v44 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)(*(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1 - v43);
          if ( *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1 == v43 )
            v44 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)(*(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4
                                                          - *(_QWORD *)(NotificationStructure + 12));
          if ( v44 )
          {
            v46 = *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1 - v43;
            if ( *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1 == v43 )
              v46 = *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4 - *(_QWORD *)(NotificationStructure + 12);
            if ( v46 )
            {
              v54 = *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1 - v43;
              if ( *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1 == v43 )
                v54 = *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4 - *(_QWORD *)(NotificationStructure + 12);
              if ( v54 )
              {
                LODWORD(v34) = -1073741811;
              }
              else
              {
                DXGMONITOR::_OnMonitorFunctionDriverDeparture((DXGMONITOR *)v31, v44);
                v55 = DXGMONITOR::_UnregisterPnPTargetDeviceNotification((DXGMONITOR *)v31);
                MONITOR_MGR::_LogMonitorPresentEvent((__int64)v26, 6LL, v16, v55, 0LL);
              }
            }
            else
            {
              MONITOR_MGR::_LogMonitorPresentEvent((__int64)v26, 5LL, v16, 0, 0LL);
              DeviceObject = 0LL;
              DeviceObjectPointer = IoGetDeviceObjectPointer(
                                      (PUNICODE_STRING)&v31[1],
                                      0x80000000,
                                      (PFILE_OBJECT *)&v31->Reserved2,
                                      &DeviceObject);
              v34 = DeviceObjectPointer;
              if ( DeviceObjectPointer < 0 )
              {
                v51 = WdLogNewEntry5_WdError(v49, v48, v50);
                *(_QWORD *)(v51 + 24) = v31[1].SystemResourcesList.Blink;
                *(_QWORD *)(v51 + 32) = v34;
                WdLogEvent5_WdError(v51);
              }
              if ( !v31->Reserved2 )
              {
                v52 = WdLogNewEntry5_WdAssertion(v49, v48);
                WdLogEvent5_WdAssertion(v52);
              }
              if ( !DeviceObject )
              {
                v53 = WdLogNewEntry5_WdAssertion(v49, v48);
                WdLogEvent5_WdAssertion(v53);
              }
            }
          }
          else
          {
            MONITOR_MGR::_LogMonitorPresentEvent((__int64)v26, 4LL, v16, 0, 0LL);
            Reserved2 = v31->Reserved2;
            if ( Reserved2 )
            {
              ObfDereferenceObject(Reserved2);
              v31->Reserved2 = 0LL;
            }
          }
          v7 = v34;
        }
        else
        {
          v42 = WdLogNewEntry5_WdError(v40, v39, v41);
          *(_QWORD *)(v42 + 24) = v16;
          WdLogEvent5_WdError(v42);
        }
        ExReleaseResourceLite(Resource);
        KeLeaveCriticalRegion();
        goto LABEL_45;
      }
      v23 = WdLogNewEntry5_WdError(v29, v28, v30);
      *(_QWORD *)(v23 + 24) = v16;
    }
    else
    {
      if ( v18 != -1073741130 )
      {
        v22 = WdLogNewEntry5_WdAssertion(v20, v19);
        WdLogEvent5_WdAssertion(v22);
      }
      v23 = WdLogNewEntry5_WdError(v20, v19, v21);
    }
    WdLogEvent5_WdError(v23);
LABEL_45:
    COREACCESS::~COREACCESS((COREACCESS *)v61);
    COREACCESS::~COREACCESS((COREACCESS *)v60);
    return v7;
  }
  return 3221225485LL;
}
