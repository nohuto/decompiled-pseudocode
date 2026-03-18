/*
 * XREFs of ?_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C0296410
 * Callers:
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C029878C (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0298900 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?DxgkRetrieveSubkeyInfoFromRegistry@@YAJPEAXKPEAPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1C0294538 (-DxgkRetrieveSubkeyInfoFromRegistry@@YAJPEAXKPEAPEAU_KEY_BASIC_INFORMATION@@@Z.c)
 *     ?_ProcessMonitorResolutionKey@DXGMONITOR@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1C0294BA8 (-_ProcessMonitorResolutionKey@DXGMONITOR@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorFrequencyRangeFromRegistry(struct _DEVICE_OBJECT **this)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  struct _DEVICE_OBJECT *v5; // rcx
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rax
  NTSTATUS v13; // eax
  ULONG v14; // esi
  char i; // r14
  int v16; // eax
  void *KeyHandle; // [rsp+28h] [rbp-29h] BYREF
  struct _KEY_BASIC_INFORMATION *v19; // [rsp+30h] [rbp-21h] BYREF
  void *DeviceRegKey; // [rsp+38h] [rbp-19h] BYREF
  int v21; // [rsp+40h] [rbp-11h] BYREF
  __int64 *v22; // [rsp+48h] [rbp-9h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-1h] BYREF
  __int64 v24; // [rsp+80h] [rbp+2Fh] BYREF
  int v25; // [rsp+88h] [rbp+37h]

  if ( ((_BYTE)this[5] & 1) == 0 )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v2);
  }
  if ( !this[7] )
  {
    v3 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v3);
  }
  if ( *((_DWORD *)this + 108) != 1 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = this[7];
  v25 = *(_DWORD *)L"S";
  v22 = &v24;
  DeviceRegKey = 0LL;
  KeyHandle = 0LL;
  v24 = *(_QWORD *)L"MODES";
  v21 = 786442;
  v6 = IoOpenDeviceRegistryKey(v5, 2u, 0xF003Fu, &DeviceRegKey);
  v11 = v6;
  if ( v6 < 0 )
    goto LABEL_8;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ObjectAttributes.RootDirectory = DeviceRegKey;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v21;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v13 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v11 = v13;
  if ( v13 < 0 )
  {
LABEL_8:
    v12 = WdLogNewEntry5_WdDmmEvent(v8, v7, v9, v10);
    *(_QWORD *)(v12 + 24) = v11;
    WdLogEvent5_WdDmmEvent(v12);
  }
  else
  {
    v14 = 0;
    for ( i = 0; ; i = 1 )
    {
      v19 = 0LL;
      v16 = DxgkRetrieveSubkeyInfoFromRegistry(KeyHandle, v14++, &v19);
      LODWORD(v11) = v16;
      if ( v16 < 0 )
        break;
      LODWORD(v11) = DXGMONITOR::_ProcessMonitorResolutionKey((DXGMONITOR *)this, KeyHandle, v19);
      operator delete[](v19);
      if ( (int)v11 < 0 )
        break;
    }
    if ( i )
      LODWORD(v11) = 0;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( DeviceRegKey )
    ZwClose(DeviceRegKey);
  return (unsigned int)v11;
}
