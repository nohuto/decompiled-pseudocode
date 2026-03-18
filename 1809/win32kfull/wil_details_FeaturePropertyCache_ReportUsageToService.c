/*
 * XREFs of wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C015C07C
 * Callers:
 *     ?UpdateProcessPriorityWhenComponentAdded@@YAXPEAUtagWND@@0@Z @ 0x1C0008D6C (-UpdateProcessPriorityWhenComponentAdded@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C00CE80C (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ?UpdateProcessPriorityWhenEnableStateIsChanging@@YAXPEAUtagWND@@H@Z @ 0x1C00CEE18 (-UpdateProcessPriorityWhenEnableStateIsChanging@@YAXPEAUtagWND@@H@Z.c)
 *     xxxDoHotKeyStuff @ 0x1C00DFB30 (xxxDoHotKeyStuff.c)
 *     InitProcessSystemDpi @ 0x1C0104840 (InitProcessSystemDpi.c)
 *     ??0InkProcessor@@AEAA@XZ @ 0x1C0133074 (--0InkProcessor@@AEAA@XZ.c)
 *     InitRotationManager @ 0x1C0135770 (InitRotationManager.c)
 *     DispBrokerGetCurrentModeImpl @ 0x1C01366E0 (DispBrokerGetCurrentModeImpl.c)
 *     ?UpdateProcessPriorityWhenComponentRemoved@@YAXPEAUtagWND@@0@Z @ 0x1C01FB0C0 (-UpdateProcessPriorityWhenComponentRemoved@@YAXPEAUtagWND@@0@Z.c)
 *     DCompSessionInitialize @ 0x1C036ED30 (DCompSessionInitialize.c)
 * Callees:
 *     wil_details_FeaturePropertyCache_ReportUsageToServiceDirect @ 0x1C015C10C (wil_details_FeaturePropertyCache_ReportUsageToServiceDirect.c)
 *     wil_details_MapReportingKind @ 0x1C015C1E8 (wil_details_MapReportingKind.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall wil_details_FeaturePropertyCache_ReportUsageToService(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        int a5))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  unsigned int v8; // eax
  __int64 v9; // r10
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  char v11; // [rsp+30h] [rbp-28h]

  a5 = 3;
  v8 = wil_details_MapReportingKind(3LL, a4);
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
                                                                                                     v9,
                                                                                                     a2,
                                                                                                     v8);
  if ( (_DWORD)result )
  {
    result = g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
    {
      v11 = 0;
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))g_wil_details_pfnFeatureLoggingHook(a2, a3, 0LL, a4, &a5, 0LL, v11, 1LL);
    }
  }
  return result;
}
