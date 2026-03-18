/*
 * XREFs of ?_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C0296054
 * Callers:
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C029878C (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0298900 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?_CleanupRegistryOverridedMonitorDescriptors@DXGMONITOR@@AEAAJXZ @ 0x1C0133B3C (-_CleanupRegistryOverridedMonitorDescriptors@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadOneBlockMonitorDescriptorFromRegistry@DXGMONITOR@@CAJPEAXIPEAPEAU_MONITORDESCRIPTOR@1@@Z @ 0x1C0295218 (-_ReadOneBlockMonitorDescriptorFromRegistry@DXGMONITOR@@CAJPEAXIPEAPEAU_MONITORDESCRIPTOR@1@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorDescriptorsFromRegistry(DXGMONITOR *this)
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
  __int64 v11; // rsi
  __int64 v12; // rax
  NTSTATUS v13; // eax
  __int64 v14; // rdi
  int v15; // eax
  struct DXGMONITOR::_MONITORDESCRIPTOR *v16; // r14
  __int64 v17; // rax
  struct DXGMONITOR::_MONITORDESCRIPTOR *v18; // r14
  int v19; // eax
  struct DXGMONITOR::_MONITORDESCRIPTOR *v20; // r15
  __int64 v21; // rax
  unsigned int v22; // edi
  __int64 v23; // rax
  SIZE_T v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // r15
  __int64 v27; // rax
  __int64 i; // r8
  int v29; // edx
  struct DXGMONITOR::_MONITORDESCRIPTOR *v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  struct DXGMONITOR::_MONITORDESCRIPTOR *v34; // [rsp+20h] [rbp-49h] BYREF
  void *KeyHandle; // [rsp+28h] [rbp-41h] BYREF
  void *DeviceRegKey; // [rsp+30h] [rbp-39h] BYREF
  int v37; // [rsp+38h] [rbp-31h] BYREF
  __int128 *v38; // [rsp+40h] [rbp-29h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-21h] BYREF
  __int128 v40; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v41; // [rsp+88h] [rbp+1Fh]
  int v42; // [rsp+90h] [rbp+27h]

  if ( (*((_BYTE *)this + 40) & 1) == 0 )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v2);
  }
  if ( !*((_QWORD *)this + 7) )
  {
    v3 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v3);
  }
  if ( *((_DWORD *)this + 108) != 1 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = (struct _DEVICE_OBJECT *)*((_QWORD *)this + 7);
  DeviceRegKey = 0LL;
  KeyHandle = 0LL;
  v42 = *(_DWORD *)L"E";
  v40 = *(_OWORD *)L"EDID_OVERRIDE";
  v38 = &v40;
  v41 = *(_QWORD *)L"RRIDE";
  v37 = 1835034;
  v6 = IoOpenDeviceRegistryKey(v5, 1u, 0xF003Fu, &DeviceRegKey);
  v11 = v6;
  if ( v6 < 0 )
    goto LABEL_8;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ObjectAttributes.RootDirectory = DeviceRegKey;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v37;
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
    goto LABEL_39;
  }
  v14 = 0LL;
  if ( *((_DWORD *)this + 32) )
  {
    while ( 1 )
    {
      v34 = 0LL;
      v15 = DXGMONITOR::_ReadOneBlockMonitorDescriptorFromRegistry(KeyHandle, v14, &v34);
      LODWORD(v11) = v15;
      if ( v15 == -1073741801 )
        break;
      if ( v15 >= 0 )
      {
        v16 = v34;
        if ( !v34 )
        {
          v17 = WdLogNewEntry5_WdAssertion(v8);
          WdLogEvent5_WdAssertion(v17);
        }
        v8 = *(_QWORD *)(*((_QWORD *)this + 17) + 8 * v14);
        *(_QWORD *)v16 = v8;
        *(_QWORD *)(*((_QWORD *)this + 17) + 8 * v14) = v16;
        ++*((_DWORD *)this + 33);
      }
      v14 = (unsigned int)(v14 + 1);
      if ( (unsigned int)v14 >= *((_DWORD *)this + 32) )
        goto LABEL_17;
    }
  }
  else
  {
LABEL_17:
    v18 = 0LL;
    while ( (unsigned int)v14 <= 0xFE )
    {
      v34 = 0LL;
      v19 = DXGMONITOR::_ReadOneBlockMonitorDescriptorFromRegistry(KeyHandle, v14, &v34);
      LODWORD(v14) = v14 + 1;
      LODWORD(v11) = v19;
      if ( v19 < 0 )
      {
        LODWORD(v11) = 0;
        break;
      }
      v20 = v34;
      if ( !v34 )
      {
        v21 = WdLogNewEntry5_WdAssertion(v8);
        WdLogEvent5_WdAssertion(v21);
      }
      *(_QWORD *)v20 = v18;
      v18 = v20;
    }
    v22 = v14 - 1;
    if ( v18 )
    {
      if ( v22 <= *((_DWORD *)this + 32) )
      {
        v23 = WdLogNewEntry5_WdAssertion(v8);
        WdLogEvent5_WdAssertion(v23);
      }
      v24 = 8LL * v22;
      if ( !is_mul_ok(v22, 8uLL) )
        v24 = -1LL;
      v26 = operator new(v24, 0x4D677844u, PagedPool);
      if ( !v26 )
      {
        v27 = WdLogNewEntry5_WdError(v25);
        WdLogEvent5_WdError(v27);
        LODWORD(v11) = -1073741801;
        goto LABEL_39;
      }
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 32); i = (unsigned int)(i + 1) )
        v26[i] = *(_QWORD *)(*((_QWORD *)this + 17) + 8 * i);
      v29 = 1;
      do
      {
        v30 = v18;
        v31 = v22 - v29++;
        v26[v31] = v18;
        v18 = *(struct DXGMONITOR::_MONITORDESCRIPTOR **)v18;
        *(_QWORD *)v30 = 0LL;
        ++*((_DWORD *)this + 32);
        ++*((_DWORD *)this + 33);
      }
      while ( v18 );
      operator delete[](*((void **)this + 17));
      *((_QWORD *)this + 17) = v26;
    }
    if ( v22 != *((_DWORD *)this + 32) )
    {
      v32 = WdLogNewEntry5_WdAssertion(v8);
      WdLogEvent5_WdAssertion(v32);
    }
  }
LABEL_39:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( DeviceRegKey )
    ZwClose(DeviceRegKey);
  if ( (int)v11 < 0 )
    DXGMONITOR::_CleanupRegistryOverridedMonitorDescriptors(this);
  return (unsigned int)v11;
}
