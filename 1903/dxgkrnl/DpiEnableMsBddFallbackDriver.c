/*
 * XREFs of DpiEnableMsBddFallbackDriver @ 0x1C029E3CC
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C015D260 (DpiFdoStartAdapterThread.c)
 *     DpiFdoHandleStopDevice @ 0x1C02A0D00 (DpiFdoHandleStopDevice.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0008924 (DpiEnableD3Requests.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001D8BC (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C00CE98C (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C0127678 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C0127A7C (DxgkReleaseAdapterCoreSync.c)
 *     ?EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z @ 0x1C01EC96C (-EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z.c)
 *     DxgkAcquireAdapterStopResetSync @ 0x1C01F67E0 (DxgkAcquireAdapterStopResetSync.c)
 *     DxgkReleaseAdapterStopResetSync @ 0x1C01F6CF0 (DxgkReleaseAdapterStopResetSync.c)
 */

__int64 __fastcall DpiEnableMsBddFallbackDriver(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  void (__fastcall *v9)(__int64, int *, __int64, __int64); // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  const GUID *v13; // r8
  __int64 v14; // rdx
  const GUID *v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r8
  NTSTATUS v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct DXGGLOBAL *Global; // rax

  if ( qword_1C00A29E0 )
  {
    v6 = *(_QWORD *)(qword_1C00A29E0 + 64);
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v6 + 484) )
      DpiCheckForOutstandingD3Requests(v6);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v6 + 168), 1u);
    if ( *(_QWORD *)(v6 + 3896) )
    {
      v9 = *(void (__fastcall **)(__int64, int *, __int64, __int64))(v6 + 984);
      v10 = *(_QWORD *)(v6 + 48);
      *(_QWORD *)(v6 + 5528) = a1;
      LOBYTE(v8) = byte_1C00A275B;
      LOBYTE(v7) = dword_1C00A2A88 == 1;
      v9(v10, &dword_1C00A29E8, v7, v8);
      *(_QWORD *)(v6 + 5528) = 0LL;
      byte_1C00A275B = 0;
      DxgkAcquireAdapterStopResetSync(*(_QWORD *)(v6 + 3896), v11, v12);
      DxgkAcquireAdapterCoreSync(*(_QWORD *)(v6 + 3896), 2, v13);
      LOBYTE(v14) = 1;
      DXGADAPTER::EnableMsBddFallback(*(PERESOURCE ****)(v6 + 3896), v14);
      DxgkReleaseAdapterCoreSync(*(_QWORD *)(v6 + 3896), 2u, v15);
      DxgkReleaseAdapterStopResetSync(*(_QWORD *)(v6 + 3896), v16, v17);
      v18 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v6 + 2744), 1u);
      v22 = v18;
      if ( v18 < 0 )
      {
        v23 = WdLogNewEntry5_WdError(v20, v19, v21);
        *(_QWORD *)(v23 + 24) = v22;
        WdLogEvent5_WdError(v23);
      }
      memset(&dword_1C00A29E8, 0, 0x20uLL);
      dword_1C00A2A00 = -1;
      memset(&xmmword_1C00A2A08, 0, 0x80uLL);
      qword_1C00A29D8 = qword_1C00A29E0;
      dword_1C00A2A88 = 4;
      Global = DXGGLOBAL::GetGlobal(v25, v24);
      QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)Global + 139), 0LL);
    }
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
