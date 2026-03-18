/*
 * XREFs of ?_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z @ 0x1C0298D60
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C001150C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C00B6898 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E2274 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z @ 0x1C015D0F0 (-DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z.c)
 *     ?_OnMonitorFunctionDriverDeparture@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0298CC8 (-_OnMonitorFunctionDriverDeparture@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_UnregisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ @ 0x1C0299A20 (-_UnregisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ.c)
 */

__int64 __fastcall DXGMONITOR::_PnPTargetDeviceChangeNotification(
        char *NotificationStructure,
        struct _DEVICE_OBJECT *Context)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdi
  __int64 v15; // rax
  struct DXGADAPTER *v17; // rdi
  __int64 v18; // r12
  int v19; // r8d
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  struct _FAST_MUTEX *v26; // r13
  __int64 v27; // rax
  __int64 v28; // rcx
  PERESOURCE v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rsi
  __int64 v33; // rcx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // r15
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v40; // rax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v41; // rdx
  PVOID Reserved2; // rcx
  __int64 v43; // rcx
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rcx
  int v50; // eax
  PERESOURCE Resource; // [rsp+48h] [rbp-C0h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-B8h] BYREF
  struct DXGADAPTER *InputBuffer[6]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v54; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v55[32]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v56[120]; // [rsp+B0h] [rbp-58h] BYREF

  memset(&v56[40], 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v56[48]);
  *(_QWORD *)&v56[104] = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)&v56[64] = 3;
  v56[88] = -1;
  v8 = WdLogNewEntry5_WdTrace(v5, v4, v6, v7);
  v9 = 0;
  *(_QWORD *)(v8 + 24) = Context;
  *(_QWORD *)(v8 + 32) = NotificationStructure;
  if ( NotificationStructure && Context )
  {
    memset(InputBuffer, 0, 0x28uLL);
    v10 = DxgkCallDriverIoControl(Context, 0x232407u, InputBuffer, 0x28u, InputBuffer, 0x28u, 1u, 0LL);
    v14 = v10;
    if ( v10 < 0 )
    {
      v15 = WdLogNewEntry5_WdWarning(v12, v11, v13);
      *(_QWORD *)(v15 + 24) = Context;
      *(_QWORD *)(v15 + 32) = v14;
      WdLogEvent5_WdWarning(v15);
      return 0LL;
    }
    v17 = InputBuffer[0];
    v18 = LODWORD(InputBuffer[2]);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v54, InputBuffer[0], 0LL);
    v20 = COREADAPTERACCESS::AcquireExclusive(&v54, (unsigned int)(v19 + 1));
    if ( v20 >= 0 )
    {
      v24 = *((_QWORD *)v17 + 315);
      if ( !v24 )
      {
        v25 = WdLogNewEntry5_WdAssertion(v21);
        WdLogEvent5_WdAssertion(v25);
        v24 = *((_QWORD *)v17 + 315);
      }
      v26 = *(struct _FAST_MUTEX **)(v24 + 96);
      if ( !v26 )
      {
        v27 = WdLogNewEntry5_WdAssertion(v21);
        WdLogEvent5_WdAssertion(v27);
      }
      Resource = 0LL;
      if ( (int)MONITOR_MGR::_GetMonitorInstance(v26, v18, 1, (struct DXGMONITOR **)&Resource) >= 0 )
      {
        v29 = Resource;
        if ( !Resource )
        {
          v30 = WdLogNewEntry5_WdAssertion(v28);
          WdLogEvent5_WdAssertion(v30);
        }
        if ( LODWORD(v29[4].OwnerTable) != 1 )
        {
          v31 = WdLogNewEntry5_WdAssertion(v28);
          WdLogEvent5_WdAssertion(v31);
        }
        LODWORD(v32) = 0;
        Resource = (PERESOURCE)((char *)v29 + 296);
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v29 + 296), 1u);
        DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(Context);
        if ( !DeviceAttachmentBaseRef )
        {
          v35 = WdLogNewEntry5_WdAssertion(v33);
          WdLogEvent5_WdAssertion(v35);
        }
        ObfDereferenceObject(DeviceAttachmentBaseRef);
        if ( DeviceAttachmentBaseRef == *(PDEVICE_OBJECT *)&v29->OwnerEntry.0 )
        {
          v40 = *(_QWORD *)(NotificationStructure + 4);
          v41 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)(*(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1 - v40);
          if ( *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1 == v40 )
            v41 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)(*(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4
                                                          - *(_QWORD *)(NotificationStructure + 12));
          if ( v41 )
          {
            v43 = *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1 - v40;
            if ( *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1 == v40 )
              v43 = *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4 - *(_QWORD *)(NotificationStructure + 12);
            if ( v43 )
            {
              v49 = *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1 - v40;
              if ( *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1 == v40 )
                v49 = *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4 - *(_QWORD *)(NotificationStructure + 12);
              if ( v49 )
              {
                LODWORD(v32) = -1073741811;
              }
              else
              {
                DXGMONITOR::_OnMonitorFunctionDriverDeparture((DXGMONITOR *)v29, v41, v37, v38);
                v50 = DXGMONITOR::_UnregisterPnPTargetDeviceNotification((DXGMONITOR *)v29);
                MONITOR_MGR::_LogMonitorPresentEvent((__int64)v26, 6, v18, v50, 0LL);
              }
            }
            else
            {
              MONITOR_MGR::_LogMonitorPresentEvent((__int64)v26, 5, v18, 0, 0LL);
              DeviceObject = 0LL;
              DeviceObjectPointer = IoGetDeviceObjectPointer(
                                      (PUNICODE_STRING)&v29[1],
                                      0x80000000,
                                      (PFILE_OBJECT *)&v29->Reserved2,
                                      &DeviceObject);
              v32 = DeviceObjectPointer;
              if ( DeviceObjectPointer < 0 )
              {
                v46 = WdLogNewEntry5_WdError(v45);
                *(_QWORD *)(v46 + 24) = v29[1].SystemResourcesList.Blink;
                *(_QWORD *)(v46 + 32) = v32;
                WdLogEvent5_WdError(v46);
              }
              if ( !v29->Reserved2 )
              {
                v47 = WdLogNewEntry5_WdAssertion(v45);
                WdLogEvent5_WdAssertion(v47);
              }
              if ( !DeviceObject )
              {
                v48 = WdLogNewEntry5_WdAssertion(v45);
                WdLogEvent5_WdAssertion(v48);
              }
            }
          }
          else
          {
            MONITOR_MGR::_LogMonitorPresentEvent((__int64)v26, 4, v18, 0, 0LL);
            Reserved2 = v29->Reserved2;
            if ( Reserved2 )
            {
              ObfDereferenceObject(Reserved2);
              v29->Reserved2 = 0LL;
            }
          }
          v9 = v32;
        }
        else
        {
          v39 = WdLogNewEntry5_WdError(v36);
          *(_QWORD *)(v39 + 24) = v18;
          WdLogEvent5_WdError(v39);
        }
        ExReleaseResourceLite(Resource);
        KeLeaveCriticalRegion();
        goto LABEL_45;
      }
      v23 = WdLogNewEntry5_WdError(v28);
      *(_QWORD *)(v23 + 24) = v18;
    }
    else
    {
      if ( v20 != -1073741130 )
      {
        v22 = WdLogNewEntry5_WdAssertion(v21);
        WdLogEvent5_WdAssertion(v22);
      }
      v23 = WdLogNewEntry5_WdError(v21);
    }
    WdLogEvent5_WdError(v23);
LABEL_45:
    COREACCESS::~COREACCESS((COREACCESS *)v56);
    COREACCESS::~COREACCESS((COREACCESS *)v55);
    return v9;
  }
  return 3221225485LL;
}
