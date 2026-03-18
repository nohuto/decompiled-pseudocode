/*
 * XREFs of ?_UpdatePnPDeviceProperties@DXGMONITOR@@AEAAJXZ @ 0x1C0173CA0
 * Callers:
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0173C00 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DXGMONITOR::_UpdatePnPDeviceProperties(DXGMONITOR *this)
{
  int v2; // ebx
  struct _DEVICE_OBJECT *v3; // rcx
  __int64 v4; // rdx
  NTSTATUS result; // eax
  NTSTATUS v6; // eax
  int v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 Data; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  v3 = (struct _DEVICE_OBJECT *)*((_QWORD *)this + 7);
  if ( !v3 || (*((_DWORD *)this + 10) & 0x10) == 0 )
    return -1073741275;
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL) + 276LL);
  v7 = *((_DWORD *)this + 11);
  Data = v4;
  result = IoSetDevicePropertyData(v3, &DEVPKEY_Monitor_AdapterLuid, 0, 0, 8u, 8u, &Data);
  if ( result >= 0 )
  {
    v6 = IoSetDevicePropertyData(*((PDEVICE_OBJECT *)this + 7), &DEVPKEY_Monitor_TargetId, 0, 0, 7u, 4u, &v7);
    if ( v6 < 0 )
      return v6;
    return v2;
  }
  return result;
}
