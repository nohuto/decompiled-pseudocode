/*
 * XREFs of DpiDisableMsBddFallbackDriver @ 0x1C029E220
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C015D260 (DpiFdoStartAdapterThread.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0008924 (DpiEnableD3Requests.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001D8BC (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C00CE98C (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C0127678 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C0127A7C (DxgkReleaseAdapterCoreSync.c)
 *     ?EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z @ 0x1C01EC96C (-EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z.c)
 *     DxgkAcquireAdapterStopResetSync @ 0x1C01F67E0 (DxgkAcquireAdapterStopResetSync.c)
 *     DxgkReleaseAdapterStopResetSync @ 0x1C01F6CF0 (DxgkReleaseAdapterStopResetSync.c)
 */

__int64 __fastcall DpiDisableMsBddFallbackDriver(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  const GUID *v9; // r8
  const GUID *v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rsi
  __int64 v18; // rax
  void (__fastcall *v19)(__int64, int *); // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct DXGGLOBAL *Global; // rax

  if ( qword_1C00A29E0 )
  {
    v6 = *(_QWORD *)(qword_1C00A29E0 + 64);
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v6 + 484) )
      DpiCheckForOutstandingD3Requests(v6);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v6 + 168), 1u);
    DxgkAcquireAdapterStopResetSync(*(_QWORD *)(v6 + 3896), v7, v8);
    DxgkAcquireAdapterCoreSync(*(_QWORD *)(v6 + 3896), 2, v9);
    DXGADAPTER::EnableMsBddFallback(*(PERESOURCE ****)(v6 + 3896), 0LL);
    DxgkReleaseAdapterCoreSync(*(_QWORD *)(v6 + 3896), 2u, v10);
    DxgkReleaseAdapterStopResetSync(*(_QWORD *)(v6 + 3896), v11, v12);
    v13 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v6 + 2744), 0);
    v17 = v13;
    if ( v13 < 0 )
    {
      v18 = WdLogNewEntry5_WdError(v15, v14, v16);
      *(_QWORD *)(v18 + 24) = v17;
      WdLogEvent5_WdError(v18);
    }
    v19 = *(void (__fastcall **)(__int64, int *))(v6 + 992);
    v20 = *(_QWORD *)(v6 + 48);
    *(_QWORD *)(v6 + 5528) = a1;
    v19(v20, &dword_1C00A29E8);
    *(_QWORD *)(v6 + 5528) = 0LL;
    if ( qword_1C00A29D8 == qword_1C00A29E0 )
      qword_1C00A29D8 = 0LL;
    dword_1C00A2A88 = 2;
    Global = DXGGLOBAL::GetGlobal(v22, v21);
    QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)Global + 139), 0LL);
    if ( *(_BYTE *)(v6 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v6 + 168));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v4 + 24) = -1073741637LL;
    WdLogEvent5_WdError(v4);
    return 3221225659LL;
  }
}
