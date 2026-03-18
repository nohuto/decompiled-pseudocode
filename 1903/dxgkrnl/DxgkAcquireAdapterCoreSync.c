/*
 * XREFs of DxgkAcquireAdapterCoreSync @ 0x1C0127678
 * Callers:
 *     DpiEnterSystemDisplay @ 0x1C001E0D0 (DpiEnterSystemDisplay.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0127548 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiPdoIsChildConnected @ 0x1C0157358 (DpiPdoIsChildConnected.c)
 *     DpiFdoCreateRelatedObjects @ 0x1C015F370 (DpiFdoCreateRelatedObjects.c)
 *     DpiPowerArbiterThread @ 0x1C017D7D0 (DpiPowerArbiterThread.c)
 *     DpiDisableMsBddFallbackDriver @ 0x1C029E220 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C029E3CC (DpiEnableMsBddFallbackDriver.c)
 *     DpiFdoStopAdapter @ 0x1C02A2680 (DpiFdoStopAdapter.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1C02AC494 (DpiAcpiHandleAcpiEvent.c)
 *     DpiAcpiProcessEventRequests @ 0x1C02ACA4C (DpiAcpiProcessEventRequests.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C012771C (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 */

__int64 __fastcall DxgkAcquireAdapterCoreSync(__int64 a1, int a2, const GUID *a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  const GUID *v11; // r8
  __int64 v13; // rax
  int v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+28h] [rbp-20h]
  char v16; // [rsp+30h] [rbp-18h]

  v14 = -1;
  v15 = 0LL;
  v4 = a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v16 = 1;
    v14 = 1009;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 1009);
  }
  else
  {
    v16 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v14, 1009LL);
  v8 = -1073741811;
  if ( !a1 )
  {
    v13 = WdLogNewEntry5_WdError(v6, v5, v7);
    *(_QWORD *)(v13 + 24) = -1073741811LL;
LABEL_15:
    WdLogEvent5_WdError(v13);
    goto LABEL_7;
  }
  if ( (int)v4 <= 0 || (int)v4 > 4 && (_DWORD)v4 != 6 )
  {
    v13 = WdLogNewEntry5_WdError(v6, v5, v7);
    *(_QWORD *)(v13 + 24) = v4;
    goto LABEL_15;
  }
  DXGADAPTER::AcquireCoreSync(a1, (unsigned int)v4);
  v8 = 0;
LABEL_7:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14, v9);
  if ( v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v10, &EventProfilerExit, v11, v14);
  return v8;
}
