/*
 * XREFs of ?_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C029921C
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0298900 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ?_UpdatePnPDeviceInterfaceProperties@DXGMONITOR@@AEAAJXZ @ 0x1C0296DAC (-_UpdatePnPDeviceInterfaceProperties@DXGMONITOR@@AEAAJXZ.c)
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0297AA0 (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SC.c)
 */

__int64 __fastcall DXGMONITOR::_RegisterPnPTargetDeviceNotification(
        DXGMONITOR *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  PVOID *v12; // rbx
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  struct _DEVICE_OBJECT *v22; // rcx
  __int64 v23; // rax
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  struct _DRIVER_OBJECT *v25; // r9
  PVOID v26; // r8
  NTSTATUS v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rax
  NTSTATUS v30; // eax
  __int64 v31; // rcx
  int updated; // eax
  NTSTATUS v33; // eax
  __int64 v34; // rax
  DXGMONITOR *v35; // rbp
  __int64 v36; // rax
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp+8h] BYREF

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( *((_QWORD *)this + 8) )
  {
    v10 = WdLogNewEntry5_WdDmmEvent(v7, v6, v8, v9);
    *(_QWORD *)(v10 + 24) = this;
    WdLogEvent5_WdDmmEvent(v10);
    return 0LL;
  }
  else
  {
    DeviceObject = 0LL;
    v12 = (PVOID *)((char *)this + 80);
    DeviceObjectPointer = IoGetDeviceObjectPointer(
                            (PUNICODE_STRING)((char *)this + 104),
                            0x80000000,
                            (PFILE_OBJECT *)this + 10,
                            &DeviceObject);
    v18 = DeviceObjectPointer;
    if ( DeviceObjectPointer == -1073741772 )
    {
      v19 = WdLogNewEntry5_WdDmmEvent(v15, v14, v16, v17);
      *(_QWORD *)(v19 + 24) = *((_QWORD *)this + 14);
      WdLogEvent5_WdDmmEvent(v19);
    }
    else if ( DeviceObjectPointer >= 0 )
    {
      if ( !*v12 )
      {
        v21 = WdLogNewEntry5_WdAssertion(v15);
        WdLogEvent5_WdAssertion(v21);
      }
      v22 = DeviceObject;
      if ( !DeviceObject )
      {
        v23 = WdLogNewEntry5_WdAssertion(0LL);
        WdLogEvent5_WdAssertion(v23);
        v22 = DeviceObject;
      }
      AttachedDeviceReference = IoGetAttachedDeviceReference(v22);
      v25 = g_pDriverObject;
      v26 = *v12;
      *((_QWORD *)this + 9) = AttachedDeviceReference;
      v27 = IoRegisterPlugPlayNotification(
              EventCategoryTargetDeviceChange,
              0,
              v26,
              v25,
              (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)DXGMONITOR::_PnPTargetDeviceChangeNotification,
              DeviceObject,
              (PVOID *)this + 8);
      v18 = v27;
      if ( v27 >= 0 )
      {
        v30 = IoRegisterDeviceInterface(
                *((PDEVICE_OBJECT *)this + 7),
                &GUID_DEVINTERFACE_MONITOR,
                0LL,
                (PUNICODE_STRING)((char *)this + 88));
        v18 = v30;
        if ( v30 < 0
          || (updated = DXGMONITOR::_UpdatePnPDeviceInterfaceProperties(this), v18 = updated, updated < 0)
          || (v33 = IoSetDeviceInterfaceState((PUNICODE_STRING)((char *)this + 88), 1u), v18 = v33, v33 < 0) )
        {
          v34 = WdLogNewEntry5_WdError(v31);
          *(_QWORD *)(v34 + 24) = *((unsigned int *)this + 11);
          *(_QWORD *)(v34 + 32) = v18;
          WdLogEvent5_WdError(v34);
        }
        v35 = this;
        if ( *((_DWORD *)this + 108) != 1 && *((_QWORD *)this + 55) )
          v35 = (DXGMONITOR *)*((_QWORD *)this + 55);
        if ( !v35 )
        {
          v36 = WdLogNewEntry5_WdAssertion(v31);
          WdLogEvent5_WdAssertion(v36);
        }
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite((PERESOURCE)((char *)v35 + 296), 1u);
        DXGMONITOR::_MonitorTelemetry((GUID *)v35, (*((_DWORD *)this + 10) & 0x40) == 0, (__int64)a2);
        ExReleaseResourceLite((PERESOURCE)((char *)v35 + 296));
        KeLeaveCriticalRegion();
      }
      else
      {
        v29 = WdLogNewEntry5_WdError(v28);
        *(_QWORD *)(v29 + 24) = *((unsigned int *)this + 11);
        *(_QWORD *)(v29 + 32) = v18;
        WdLogEvent5_WdError(v29);
        ObfDereferenceObject(*v12);
        *v12 = 0LL;
      }
    }
    else
    {
      v20 = WdLogNewEntry5_WdError(v15);
      *(_QWORD *)(v20 + 24) = *((_QWORD *)this + 14);
      *(_QWORD *)(v20 + 32) = v18;
      WdLogEvent5_WdError(v20);
    }
    return (unsigned int)v18;
  }
}
