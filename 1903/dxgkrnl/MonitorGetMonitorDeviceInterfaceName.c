/*
 * XREFs of MonitorGetMonitorDeviceInterfaceName @ 0x1C012A360
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C0129540 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     ?Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z @ 0x1C015B334 (-Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?RtlStringCchCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x1C0019538 (-RtlStringCchCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E8240 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetMonitorDeviceInterfaceName(DXGADAPTER *this, __int64 a2, unsigned int a3, char *a4)
{
  __int64 v5; // rbp
  __int64 v6; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  struct _FAST_MUTEX *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct DXGMONITOR *v16; // rbx
  struct _ERESOURCE *v17; // rsi
  int v18; // ebx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  struct DXGMONITOR *v26; // [rsp+30h] [rbp+8h] BYREF

  v5 = a3;
  v6 = (unsigned int)a2;
  v8 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v8 + 24) = v6;
  *(_QWORD *)(v8 + 32) = this;
  if ( !this || (_DWORD)v6 == -1 || !a4 )
    return 3221225485LL;
  DXGADAPTER::IsCoreResourceSharedOwner(this);
  v12 = *((_QWORD *)this + 319);
  if ( !v12 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v10, v9);
    WdLogEvent5_WdAssertion(v20);
    v12 = *((_QWORD *)this + 319);
  }
  v13 = *(struct _FAST_MUTEX **)(v12 + 96);
  if ( !v13 )
  {
    v21 = WdLogNewEntry5_WdError(0LL, v9, v11);
    *(_QWORD *)(v21 + 24) = this;
    WdLogEvent5_WdError(v21);
    return 3221225485LL;
  }
  v26 = 0LL;
  if ( (int)MONITOR_MGR::_GetMonitorInstance(v13, (unsigned int)v6, 1, &v26) < 0 )
    return 3221225664LL;
  v16 = v26;
  if ( !v26 )
  {
    v22 = WdLogNewEntry5_WdAssertion(v15, v14);
    WdLogEvent5_WdAssertion(v22);
    v25 = WdLogNewEntry5_WdAssertion(v24, v23);
    WdLogEvent5_WdAssertion(v25);
  }
  KeEnterCriticalRegion();
  v17 = (struct _ERESOURCE *)((char *)v16 + 296);
  ExAcquireResourceSharedLite((PERESOURCE)((char *)v16 + 296), 1u);
  v18 = RtlStringCchCopyUnicodeString(a4, v5, (const struct _UNICODE_STRING *)((char *)v16 + 88));
  if ( v18 >= 0 )
    *((_WORD *)a4 + 1) = 92;
  ExReleaseResourceLite(v17);
  KeLeaveCriticalRegion();
  return (unsigned int)v18;
}
