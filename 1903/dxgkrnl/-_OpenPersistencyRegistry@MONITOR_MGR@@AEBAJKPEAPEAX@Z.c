/*
 * XREFs of ?_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z @ 0x1C017512C
 * Callers:
 *     ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0175098 (-_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C02C7704 (-_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 *     ?_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C02C7B9C (-_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C0175448 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     ?DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C02CAAD0 (-DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_OpenPersistencyRegistry(MONITOR_MGR *this, __int64 a2, void **a3)
{
  ACCESS_MASK v4; // edi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRef; // r15
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  void *v14; // r8
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  void *DeviceRegKey; // [rsp+20h] [rbp-50h] BYREF
  struct _UNICODE_STRING v32; // [rsp+28h] [rbp-48h] BYREF
  _OWORD v33[2]; // [rsp+38h] [rbp-38h] BYREF
  int v34; // [rsp+58h] [rbp-18h]
  wchar_t v35; // [rsp+5Ch] [rbp-14h]

  v4 = a2;
  if ( (_DWORD)a2 != 131097 && (_DWORD)a2 != 131078 && (_DWORD)a2 != 983103 )
  {
    v21 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v21);
  }
  if ( !a3 )
  {
    v22 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v22);
  }
  v6 = *((_QWORD *)this + 1);
  DeviceRegKey = 0LL;
  if ( !*(_QWORD *)(v6 + 16) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v6, a2);
    WdLogEvent5_WdAssertion(v23);
    v6 = *((_QWORD *)this + 1);
  }
  if ( !*(_QWORD *)(*(_QWORD *)(v6 + 16) + 192LL) )
  {
    v24 = WdLogNewEntry5_WdAssertion(v6, a2);
    WdLogEvent5_WdAssertion(v24);
    v6 = *((_QWORD *)this + 1);
  }
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(*(_QWORD *)(v6 + 16) + 192LL));
  if ( !DeviceAttachmentBaseRef )
  {
    v25 = WdLogNewEntry5_WdAssertion(v8, v7);
    WdLogEvent5_WdAssertion(v25);
  }
  v10 = IoOpenDeviceRegistryKey(DeviceAttachmentBaseRef, 1u, v4, &DeviceRegKey);
  ObfDereferenceObject(DeviceAttachmentBaseRef);
  if ( (int)v10 < 0 )
  {
    v30 = WdLogNewEntry5_WdError(v12, v11, v13);
    *(_QWORD *)(v30 + 24) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    *(_QWORD *)(v30 + 32) = v10;
    WdLogEvent5_WdError(v30);
    return (unsigned int)v10;
  }
  v14 = DeviceRegKey;
  if ( !DeviceRegKey )
  {
    v26 = WdLogNewEntry5_WdAssertion(v12, v11);
    WdLogEvent5_WdAssertion(v26);
    v14 = DeviceRegKey;
  }
  v34 = *(_DWORD *)L"cy";
  *a3 = 0LL;
  v35 = aMonitorpersist[18];
  v32.Buffer = (wchar_t *)v33;
  v33[0] = *(_OWORD *)L"MonitorPersistency";
  *(_QWORD *)&v32.Length = 2490404LL;
  v33[1] = *(_OWORD *)L"ersistency";
  v15 = DxgkOpenRegistrySubkey(a3, v4, v14, &v32);
  v10 = v15;
  if ( v15 != -1073741772 )
  {
    if ( v15 >= 0 )
    {
      if ( !*a3 )
      {
        v29 = WdLogNewEntry5_WdAssertion(v17, v16);
        WdLogEvent5_WdAssertion(v29);
      }
      goto LABEL_17;
    }
    goto LABEL_23;
  }
  if ( v4 == 131078 || v4 == 983103 )
  {
    v27 = DxgkCreateRegistrySubkey(a3, v4, DeviceRegKey, &v32);
    v10 = v27;
    if ( v27 >= 0 )
      goto LABEL_17;
LABEL_23:
    v28 = WdLogNewEntry5_WdError(v17, v16, v18);
    *(_QWORD *)(v28 + 24) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    *(_QWORD *)(v28 + 32) = v10;
    WdLogEvent5_WdError(v28);
    goto LABEL_17;
  }
  v19 = WdLogNewEntry5_WdTrace(v17, v16);
  *(_QWORD *)(v19 + 24) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  *(_QWORD *)(v19 + 32) = -1073741772LL;
LABEL_17:
  ZwClose(DeviceRegKey);
  return (unsigned int)v10;
}
