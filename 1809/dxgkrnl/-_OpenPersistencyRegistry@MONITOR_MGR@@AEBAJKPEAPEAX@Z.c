/*
 * XREFs of ?_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z @ 0x1C0147060
 * Callers:
 *     ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0146FCC (-_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C028E1CC (-_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 *     ?_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C028E6C0 (-_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C01471F4 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     ?DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C029448C (-DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_OpenPersistencyRegistry(MONITOR_MGR *this, ACCESS_MASK a2, void **a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRef; // r15
  __int64 v9; // rbx
  __int64 v10; // rcx
  void *v11; // r8
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  void *DeviceRegKey; // [rsp+20h] [rbp-50h] BYREF
  struct _UNICODE_STRING v30; // [rsp+28h] [rbp-48h] BYREF
  _OWORD v31[2]; // [rsp+38h] [rbp-38h] BYREF
  int v32; // [rsp+58h] [rbp-18h]
  wchar_t v33; // [rsp+5Ch] [rbp-14h]

  if ( a2 != 131097 && a2 != 131078 && a2 != 983103 )
  {
    v19 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v19);
  }
  if ( !a3 )
  {
    v20 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v20);
  }
  v6 = *((_QWORD *)this + 1);
  DeviceRegKey = 0LL;
  if ( !*(_QWORD *)(v6 + 16) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v21);
    v6 = *((_QWORD *)this + 1);
  }
  if ( !*(_QWORD *)(*(_QWORD *)(v6 + 16) + 192LL) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v22);
    v6 = *((_QWORD *)this + 1);
  }
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(*(_QWORD *)(v6 + 16) + 192LL));
  if ( !DeviceAttachmentBaseRef )
  {
    v23 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v23);
  }
  v9 = IoOpenDeviceRegistryKey(DeviceAttachmentBaseRef, 1u, a2, &DeviceRegKey);
  ObfDereferenceObject(DeviceAttachmentBaseRef);
  if ( (int)v9 < 0 )
  {
    v28 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v28 + 24) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    *(_QWORD *)(v28 + 32) = v9;
    WdLogEvent5_WdError(v28);
    return (unsigned int)v9;
  }
  v11 = DeviceRegKey;
  if ( !DeviceRegKey )
  {
    v24 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v24);
    v11 = DeviceRegKey;
  }
  v32 = *(_DWORD *)L"cy";
  *a3 = 0LL;
  v33 = aMonitorpersist[18];
  v30.Buffer = (wchar_t *)v31;
  v31[0] = *(_OWORD *)L"MonitorPersistency";
  *(_DWORD *)&v30.Length = 2490404;
  v31[1] = *(_OWORD *)L"ersistency";
  v12 = DxgkOpenRegistrySubkey(a3, a2, v11, &v30);
  v9 = v12;
  if ( v12 != -1073741772 )
  {
    if ( v12 >= 0 )
    {
      if ( !*a3 )
      {
        v27 = WdLogNewEntry5_WdAssertion(v14);
        WdLogEvent5_WdAssertion(v27);
      }
      goto LABEL_17;
    }
    goto LABEL_23;
  }
  if ( a2 == 131078 || a2 == 983103 )
  {
    v25 = DxgkCreateRegistrySubkey(a3, a2, DeviceRegKey, &v30);
    v9 = v25;
    if ( v25 >= 0 )
      goto LABEL_17;
LABEL_23:
    v26 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v26 + 24) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    *(_QWORD *)(v26 + 32) = v9;
    WdLogEvent5_WdError(v26);
    goto LABEL_17;
  }
  v17 = WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
  *(_QWORD *)(v17 + 24) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  *(_QWORD *)(v17 + 32) = -1073741772LL;
LABEL_17:
  ZwClose(DeviceRegKey);
  return (unsigned int)v9;
}
