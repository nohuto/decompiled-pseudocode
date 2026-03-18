/*
 * XREFs of MonitorGetDeviceObject @ 0x1C0142A34
 * Callers:
 *     ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C01428D0 (-DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetDeviceObject@DXGMONITOR@@QEBAJPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C0019BD4 (-_GetDeviceObject@DXGMONITOR@@QEBAJPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00EC628 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetDeviceObject(
        DXGADAPTER *this,
        __int64 a2,
        struct _FILE_OBJECT **a3,
        struct _DEVICE_OBJECT **a4)
{
  __int64 v5; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  struct _FAST_MUTEX *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  DXGMONITOR *v20; // rbx
  unsigned int DeviceObject; // eax
  struct _ERESOURCE *v22; // rcx
  unsigned int v23; // ebx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  DXGMONITOR *v33; // [rsp+40h] [rbp+8h] BYREF

  v5 = (unsigned int)a2;
  v8 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v8 + 24) = v5;
  *(_QWORD *)(v8 + 32) = this;
  if ( !this || (_DWORD)v5 == -1 )
  {
    v27 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v27 + 24) = -1073741811LL;
    goto LABEL_16;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v25 = WdLogNewEntry5_WdAssertion(v13, v12);
    WdLogEvent5_WdAssertion(v25);
  }
  v15 = *((_QWORD *)this + 319);
  if ( !v15 )
  {
    v26 = WdLogNewEntry5_WdAssertion(v13, v12);
    WdLogEvent5_WdAssertion(v26);
    v15 = *((_QWORD *)this + 319);
  }
  v16 = *(struct _FAST_MUTEX **)(v15 + 96);
  if ( !v16 )
  {
    v27 = WdLogNewEntry5_WdError(0LL, v12, v14);
    *(_QWORD *)(v27 + 24) = this;
LABEL_16:
    WdLogEvent5_WdError(v27);
    return 3221225485LL;
  }
  v33 = 0LL;
  if ( (int)MONITOR_MGR::_GetMonitorInstance(v16, (unsigned int)v5, 1, &v33) < 0 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17, v19);
    v28[4] = this;
    v23 = -1073741275;
    v28[5] = -1073741275LL;
    v28[3] = v5;
    WdLogEvent5_WdError(v28);
  }
  else
  {
    v20 = v33;
    if ( !v33 )
    {
      v29 = WdLogNewEntry5_WdAssertion(v18, v17);
      WdLogEvent5_WdAssertion(v29);
      v32 = WdLogNewEntry5_WdAssertion(v31, v30);
      WdLogEvent5_WdAssertion(v32);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v20 + 296), 1u);
    DeviceObject = DXGMONITOR::_GetDeviceObject(v20, a3, a4);
    v22 = (struct _ERESOURCE *)((char *)v20 + 296);
    v23 = DeviceObject;
    ExReleaseResourceLite(v22);
    KeLeaveCriticalRegion();
  }
  return v23;
}
