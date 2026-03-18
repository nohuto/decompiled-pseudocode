/*
 * XREFs of ?_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C0174660
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C016FB9C (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0173C00 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?_CleanupRegistryOverridedMonitorDescriptors@DXGMONITOR@@AEAAJXZ @ 0x1C01747EC (-_CleanupRegistryOverridedMonitorDescriptors@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadOneBlockMonitorDescriptorFromRegistry@DXGMONITOR@@CAJPEAXIPEAPEAU_MONITORDESCRIPTOR@1@@Z @ 0x1C02CB274 (-_ReadOneBlockMonitorDescriptorFromRegistry@DXGMONITOR@@CAJPEAXIPEAPEAU_MONITORDESCRIPTOR@1@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorDescriptorsFromRegistry(DXGMONITOR *this, __int64 a2)
{
  struct _DEVICE_OBJECT *v3; // rcx
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rsi
  NTSTATUS v8; // eax
  __int64 v9; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
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
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  _QWORD *v28; // r15
  __int64 v29; // rax
  __int64 i; // r8
  int v31; // edx
  struct DXGMONITOR::_MONITORDESCRIPTOR *v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  struct DXGMONITOR::_MONITORDESCRIPTOR *v35; // [rsp+20h] [rbp-49h] BYREF
  void *KeyHandle; // [rsp+28h] [rbp-41h] BYREF
  void *DeviceRegKey; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v38[2]; // [rsp+38h] [rbp-31h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-21h] BYREF
  __int128 v40; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v41; // [rsp+88h] [rbp+1Fh]
  int v42; // [rsp+90h] [rbp+27h]

  if ( (*((_BYTE *)this + 40) & 1) == 0 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !*((_QWORD *)this + 7) )
  {
    v12 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v12);
  }
  if ( *((_DWORD *)this + 108) != 1 )
  {
    v13 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v13);
  }
  v3 = (struct _DEVICE_OBJECT *)*((_QWORD *)this + 7);
  DeviceRegKey = 0LL;
  KeyHandle = 0LL;
  v42 = *(_DWORD *)L"E";
  v40 = *(_OWORD *)L"EDID_OVERRIDE";
  v38[1] = &v40;
  v41 = *(_QWORD *)L"RRIDE";
  v38[0] = 1835034LL;
  v4 = IoOpenDeviceRegistryKey(v3, 1u, 0xF003Fu, &DeviceRegKey);
  v7 = v4;
  if ( v4 < 0 )
    goto LABEL_9;
  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = DeviceRegKey;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v38;
  ObjectAttributes.Attributes = 576;
  v8 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v7 = v8;
  if ( v8 < 0 )
  {
LABEL_9:
    v9 = WdLogNewEntry5_WdDmmEvent(v6, v5);
    *(_QWORD *)(v9 + 24) = v7;
    WdLogEvent5_WdDmmEvent(v9);
    goto LABEL_10;
  }
  v14 = 0LL;
  if ( *((_DWORD *)this + 32) )
  {
    while ( 1 )
    {
      v35 = 0LL;
      v15 = DXGMONITOR::_ReadOneBlockMonitorDescriptorFromRegistry(KeyHandle, v14, &v35);
      LODWORD(v7) = v15;
      if ( v15 == -1073741801 )
        break;
      if ( v15 >= 0 )
      {
        v16 = v35;
        if ( !v35 )
        {
          v17 = WdLogNewEntry5_WdAssertion(v6, v5);
          WdLogEvent5_WdAssertion(v17);
        }
        v6 = *(_QWORD *)(*((_QWORD *)this + 17) + 8 * v14);
        *(_QWORD *)v16 = v6;
        *(_QWORD *)(*((_QWORD *)this + 17) + 8 * v14) = v16;
        ++*((_DWORD *)this + 33);
      }
      v14 = (unsigned int)(v14 + 1);
      if ( (unsigned int)v14 >= *((_DWORD *)this + 32) )
        goto LABEL_24;
    }
  }
  else
  {
LABEL_24:
    v18 = 0LL;
    while ( (unsigned int)v14 <= 0xFE )
    {
      v35 = 0LL;
      v19 = DXGMONITOR::_ReadOneBlockMonitorDescriptorFromRegistry(KeyHandle, v14, &v35);
      LODWORD(v14) = v14 + 1;
      LODWORD(v7) = v19;
      if ( v19 < 0 )
      {
        LODWORD(v7) = 0;
        break;
      }
      v20 = v35;
      if ( !v35 )
      {
        v21 = WdLogNewEntry5_WdAssertion(v6, v5);
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
        v23 = WdLogNewEntry5_WdAssertion(v6, v5);
        WdLogEvent5_WdAssertion(v23);
      }
      v24 = 8LL * v22;
      if ( !is_mul_ok(v22, 8uLL) )
        v24 = -1LL;
      v28 = operator new[](v24, 0x4D677844u, PagedPool);
      if ( !v28 )
      {
        v29 = WdLogNewEntry5_WdError(v26, v25, v27);
        WdLogEvent5_WdError(v29);
        LODWORD(v7) = -1073741801;
        goto LABEL_10;
      }
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 32); i = (unsigned int)(i + 1) )
        v28[i] = *(_QWORD *)(*((_QWORD *)this + 17) + 8 * i);
      v31 = 1;
      do
      {
        v32 = v18;
        v33 = v22 - v31++;
        v28[v33] = v18;
        v18 = *(struct DXGMONITOR::_MONITORDESCRIPTOR **)v18;
        *(_QWORD *)v32 = 0LL;
        ++*((_DWORD *)this + 32);
        ++*((_DWORD *)this + 33);
      }
      while ( v18 );
      operator delete[](*((void **)this + 17));
      *((_QWORD *)this + 17) = v28;
    }
    if ( v22 != *((_DWORD *)this + 32) )
    {
      v34 = WdLogNewEntry5_WdAssertion(v6, v5);
      WdLogEvent5_WdAssertion(v34);
    }
  }
LABEL_10:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( DeviceRegKey )
    ZwClose(DeviceRegKey);
  if ( (int)v7 < 0 )
    DXGMONITOR::_CleanupRegistryOverridedMonitorDescriptors(this);
  return (unsigned int)v7;
}
