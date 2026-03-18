/*
 * XREFs of ?_UpdateMonitorEDIDRegistryForGDI@DXGMONITOR@@AEAAJXZ @ 0x1C01776CC
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0173E0C (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01779F0 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1C0021BF0 (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 */

__int64 __fastcall DXGMONITOR::_UpdateMonitorEDIDRegistryForGDI(struct _DEVICE_OBJECT **this, __int64 a2)
{
  __int64 v3; // rbx
  struct _DEVICE_OBJECT *v4; // rax
  struct _DEVICE_OBJECT *v5; // rcx
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdi
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  NTSTATUS v15; // ebx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  void *DeviceRegKey; // [rsp+40h] [rbp+8h] BYREF

  if ( ((_DWORD)this[5] & 0x10) == 0 )
  {
    v17 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v17);
  }
  v3 = 0LL;
  if ( *((_DWORD *)this + 32) )
  {
    v4 = this[17];
    if ( v4 )
    {
      v3 = *(_QWORD *)&v4->Type;
      if ( *(_QWORD *)&v4->Type )
      {
        if ( (int)EDIDV1_IsEDIDBaseBlock((unsigned __int8 *)(v3 + 24)) < 0 )
          v3 = 0LL;
      }
    }
  }
  v5 = this[7];
  DeviceRegKey = 0LL;
  v6 = IoOpenDeviceRegistryKey(v5, 1u, 0xF003Fu, &DeviceRegKey);
  v10 = v6;
  if ( v6 < 0 )
  {
    v18 = WdLogNewEntry5_WdError(v8, v7, v9);
    *(_QWORD *)(v18 + 24) = v10;
    WdLogEvent5_WdError(v18);
    return (unsigned int)v10;
  }
  else
  {
    if ( v3 )
    {
      RtlDeleteRegistryValue(0x40000000u, (PCWSTR)DeviceRegKey, L"BAD_EDID");
      v11 = RtlWriteRegistryValue(
              0x40000000u,
              (PCWSTR)DeviceRegKey,
              L"EDID",
              3u,
              (PVOID)(v3 + 24),
              *(_DWORD *)(v3 + 16));
    }
    else
    {
      RtlDeleteRegistryValue(0x40000000u, (PCWSTR)DeviceRegKey, L"EDID");
      v11 = RtlWriteRegistryValue(0x40000000u, (PCWSTR)DeviceRegKey, L"BAD_EDID", 3u, 0LL, 0);
    }
    v15 = v11;
    if ( v11 < 0 )
    {
      v19 = WdLogNewEntry5_WdError(v13, v12, v14);
      *(_QWORD *)(v19 + 24) = v15;
      WdLogEvent5_WdError(v19);
    }
    ZwClose(DeviceRegKey);
    return (unsigned int)v15;
  }
}
