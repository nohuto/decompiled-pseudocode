/*
 * XREFs of ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x180009F88
 * Callers:
 *     ?LaunchUriAsync@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z @ 0x18000CA20 (-LaunchUriAsync@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAPEAU-$IAsyncOperation@_.c)
 *     ?LaunchDefaultEntryPointForPackage@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x18000D330 (-LaunchDefaultEntryPointForPackage@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?UninstallApp@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x1800562B0 (-UninstallApp@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?StartProductInstallWithOverrides@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@EE0000@Z @ 0x180056980 (-StartProductInstallWithOverrides@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@EE0000@Z.c)
 *     ?StartProductInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0EE00@Z @ 0x180056F40 (-StartProductInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0EE00@Z.c)
 *     ?RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_STATE_NAME@@PEBEIW4TaskConditionFlags@12@W4TaskOptionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x1800ABE38 (-RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_S.c)
 * Callees:
 *     ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x180003E2C (-SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z.c)
 *     ?GetLastError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IJ@Z @ 0x18000409C (-GetLastError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IJ@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180004314 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?RecordFeatureError@details@wil@@YAXIAEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x180009644 (-RecordFeatureError@details@wil@@YAXIAEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z.c)
 *     memset_0 @ 0x1800CB119 (memset_0.c)
 */

void __fastcall wil::details::ReportFeatureError(
        wil::details *this,
        __int64 a2,
        struct wil::ThreadErrorContext *a3,
        const struct wil::FailureInfo *a4)
{
  int v4; // esi
  wil::details_abi::ThreadLocalData *v6; // rcx
  unsigned int v7; // ebp
  char LastError; // al
  DWORD CurrentThreadId; // eax
  wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  wil::details_abi::ThreadLocalData *v12; // rcx
  unsigned int v13[12]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v14; // [rsp+50h] [rbp-68h]
  int v15; // [rsp+58h] [rbp-60h]
  __int64 v16; // [rsp+A0h] [rbp-18h]

  v4 = (int)this;
  v6 = *(wil::details_abi::ThreadLocalData **)a2;
  v7 = (unsigned int)a3;
  if ( *(_QWORD *)a2 && *((_QWORD *)v6 + 3) )
    LastError = wil::details_abi::ThreadLocalData::GetLastError(
                  v6,
                  (struct wil::FailureInfo *)v13,
                  *(_DWORD *)(a2 + 8),
                  v4);
  else
    LastError = 0;
  if ( !LastError )
  {
    memset_0(v13, 0, 0x90uLL);
    v15 = *((unsigned __int16 *)a4 + 12);
    v14 = *((_QWORD *)a4 + 1);
    v16 = *(_QWORD *)a4;
    v13[1] = v4;
    CurrentThreadId = GetCurrentThreadId();
    if ( `wil::SetLastError'::`2'::lastThread != CurrentThreadId )
    {
      if ( _InterlockedIncrement(&`wil::SetLastError'::`5'::depth) < 4 )
      {
        `wil::SetLastError'::`2'::lastThread = CurrentThreadId;
        ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(0LL);
        if ( ThreadLocalDataCache )
          wil::details_abi::ThreadLocalData::SetLastError(ThreadLocalDataCache, (const struct wil::FailureInfo *)v13);
        `wil::SetLastError'::`2'::lastThread = 0;
      }
      _InterlockedDecrement(&`wil::SetLastError'::`5'::depth);
    }
    v12 = *(wil::details_abi::ThreadLocalData **)a2;
    if ( *(_QWORD *)a2 && *((_QWORD *)v12 + 3) )
      wil::details_abi::ThreadLocalData::GetLastError(v12, (struct wil::FailureInfo *)v13, *(_DWORD *)(a2 + 8), v4);
  }
  wil::details::RecordFeatureError((wil::details *)v7, (__int64)v13, a4, (const struct DiagnosticsInfo *)a4);
}
