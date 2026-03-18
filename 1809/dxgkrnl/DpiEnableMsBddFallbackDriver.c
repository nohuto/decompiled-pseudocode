/*
 * XREFs of DpiEnableMsBddFallbackDriver @ 0x1C026877C
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C0148060 (DpiFdoStartAdapterThread.c)
 *     DpiFdoHandleStopDevice @ 0x1C02655B0 (DpiFdoHandleStopDevice.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000F734 (DpiEnableD3Requests.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001DE80 (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00BCCF0 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00BCFB8 (DxgkAcquireAdapterCoreSync.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAXXZ @ 0x1C00F6724 (-InvalidateCache@QDC_CACHE@@QEAAXXZ.c)
 *     DxgkStartCoreDripsBlockerTracking @ 0x1C0141A18 (DxgkStartCoreDripsBlockerTracking.c)
 *     DxgkStopCoreDripsBlockerTracking @ 0x1C0141BAC (DxgkStopCoreDripsBlockerTracking.c)
 *     ?EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z @ 0x1C01BD37C (-EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z.c)
 *     DxgkAcquireAdapterStopResetSync @ 0x1C01C7CA4 (DxgkAcquireAdapterStopResetSync.c)
 *     DxgkReleaseAdapterStopResetSync @ 0x1C01C84E8 (DxgkReleaseAdapterStopResetSync.c)
 */

__int64 __fastcall DpiEnableMsBddFallbackDriver(__int64 a1)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  void (__fastcall *v7)(__int64, int *, __int64, __int64); // rax
  __int64 v8; // rcx
  NTSTATUS v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9

  if ( qword_1C008E9E0 )
  {
    v4 = *(_QWORD *)(qword_1C008E9E0 + 64);
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v4 + 483) )
    {
      DxgkStartCoreDripsBlockerTracking(*(_QWORD *)(v4 + 3816), 4023LL);
      DpiCheckForOutstandingD3Requests(v4);
    }
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v4 + 168), 1u);
    if ( *(_QWORD *)(v4 + 3792) )
    {
      v7 = *(void (__fastcall **)(__int64, int *, __int64, __int64))(v4 + 984);
      v8 = *(_QWORD *)(v4 + 48);
      *(_QWORD *)(v4 + 5400) = a1;
      LOBYTE(v6) = byte_1C008E75B;
      LOBYTE(v5) = dword_1C008EA88 == 1;
      v7(v8, &dword_1C008E9E8, v5, v6);
      *(_QWORD *)(v4 + 5400) = 0LL;
      byte_1C008E75B = 0;
      DxgkAcquireAdapterStopResetSync(*(_QWORD *)(v4 + 3792));
      DxgkAcquireAdapterCoreSync(*(_QWORD *)(v4 + 3792), 2);
      DXGADAPTER::EnableMsBddFallback(*(PERESOURCE ****)(v4 + 3792), 1);
      DxgkReleaseAdapterCoreSync(*(_QWORD *)(v4 + 3792));
      DxgkReleaseAdapterStopResetSync(*(_QWORD *)(v4 + 3792));
      v9 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v4 + 2672), 1u);
      v11 = v9;
      if ( v9 < 0 )
      {
        v12 = WdLogNewEntry5_WdError(v10);
        *(_QWORD *)(v12 + 24) = v11;
        WdLogEvent5_WdError(v12);
      }
      memset(&dword_1C008E9E8, 0, 0x20uLL);
      dword_1C008EA00 = -1;
      memset(&xmmword_1C008EA08, 0, 0x80uLL);
      qword_1C008E9D8 = qword_1C008E9E0;
      dword_1C008EA88 = 4;
      Global = DXGGLOBAL::GetGlobal(v13);
      QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)Global + 143), v15, v16, v17);
    }
    if ( *(_BYTE *)(v4 + 483) )
    {
      DxgkStopCoreDripsBlockerTracking(*(_QWORD *)(v4 + 3816), 4023LL);
      DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v4 + 168));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  else
  {
    v2 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v2 + 24) = -1073741637LL;
    WdLogEvent5_WdError(v2);
    return 3221225659LL;
  }
}
