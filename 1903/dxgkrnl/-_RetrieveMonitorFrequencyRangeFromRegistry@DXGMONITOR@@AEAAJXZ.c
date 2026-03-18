/*
 * XREFs of ?_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C0173FC0
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C016FB9C (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0173C00 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?DxgkRetrieveSubkeyInfoFromRegistry@@YAJPEAXKPEAPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1C0174164 (-DxgkRetrieveSubkeyInfoFromRegistry@@YAJPEAXKPEAPEAU_KEY_BASIC_INFORMATION@@@Z.c)
 *     ?_ProcessMonitorResolutionKey@DXGMONITOR@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1C0174230 (-_ProcessMonitorResolutionKey@DXGMONITOR@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorFrequencyRangeFromRegistry(struct _DEVICE_OBJECT **this, __int64 a2)
{
  struct _DEVICE_OBJECT *v3; // rcx
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  NTSTATUS v8; // eax
  ULONG v9; // esi
  char i; // r14
  int v11; // eax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  void *KeyHandle; // [rsp+28h] [rbp-29h] BYREF
  struct _KEY_BASIC_INFORMATION *v18; // [rsp+30h] [rbp-21h] BYREF
  void *DeviceRegKey; // [rsp+38h] [rbp-19h] BYREF
  _QWORD v20[2]; // [rsp+40h] [rbp-11h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-1h] BYREF
  __int64 v22; // [rsp+80h] [rbp+2Fh] BYREF
  int v23; // [rsp+88h] [rbp+37h]

  if ( ((_BYTE)this[5] & 1) == 0 )
  {
    v13 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !this[7] )
  {
    v14 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v14);
  }
  if ( *((_DWORD *)this + 108) != 1 )
  {
    v15 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v15);
  }
  v3 = this[7];
  v23 = *(_DWORD *)L"S";
  v20[1] = &v22;
  DeviceRegKey = 0LL;
  KeyHandle = 0LL;
  v22 = *(_QWORD *)L"MODES";
  v20[0] = 786442LL;
  v4 = IoOpenDeviceRegistryKey(v3, 2u, 0xF003Fu, &DeviceRegKey);
  v7 = v4;
  if ( v4 < 0
    || (ObjectAttributes.RootDirectory = DeviceRegKey,
        *(_QWORD *)&ObjectAttributes.Length = 48LL,
        ObjectAttributes.ObjectName = (PUNICODE_STRING)v20,
        *(_QWORD *)&ObjectAttributes.Attributes = 576LL,
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        v8 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes),
        v7 = v8,
        v8 < 0) )
  {
    v16 = WdLogNewEntry5_WdDmmEvent(v6, v5);
    *(_QWORD *)(v16 + 24) = v7;
    WdLogEvent5_WdDmmEvent(v16);
  }
  else
  {
    v9 = 0;
    for ( i = 0; ; i = 1 )
    {
      v18 = 0LL;
      v11 = DxgkRetrieveSubkeyInfoFromRegistry(KeyHandle, v9++, &v18);
      LODWORD(v7) = v11;
      if ( v11 < 0 )
        break;
      LODWORD(v7) = DXGMONITOR::_ProcessMonitorResolutionKey((DXGMONITOR *)this, KeyHandle, v18);
      operator delete[](v18);
      if ( (int)v7 < 0 )
        break;
    }
    if ( i )
      LODWORD(v7) = 0;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( DeviceRegKey )
    ZwClose(DeviceRegKey);
  return (unsigned int)v7;
}
