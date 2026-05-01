/*
 * XREFs of ?PerformDelayedInitialization@TabViewManager@@UEAAJXZ @ 0x1801E2D30
 * Callers:
 *     <none>
 * Callees:
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x18002FA48 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$wnf_query_nothrow@I@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAIPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1801D38A0 (--$wnf_query_nothrow@I@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAIPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 *     ?CreateHotKeyHandler@TabViewManager@@AEAAJXZ @ 0x1801D961C (-CreateHotKeyHandler@TabViewManager@@AEAAJXZ.c)
 *     ?RegisterForTabTransferEvents@TabViewManager@@AEAAJXZ @ 0x1801E3A38 (-RegisterForTabTransferEvents@TabViewManager@@AEAAJXZ.c)
 *     ?WatchCurrentThread@TabViewManagerTraceLogging@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x1801EFC44 (-WatchCurrentThread@TabViewManagerTraceLogging@@SA-AVActivityThreadWatcher@wil@@PEBD@Z.c)
 */

__int64 __fastcall TabViewManager::PerformDelayedInitialization(TabViewManager *this)
{
  __int64 v2; // rsi
  __int64 v3; // rcx
  int HotKeyHandler; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  TabViewManager *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // r9
  int v10; // eax
  LPVOID v12[4]; // [rsp+48h] [rbp-9h] BYREF
  _BYTE v13[24]; // [rsp+68h] [rbp+17h] BYREF
  int v14; // [rsp+80h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]
  char v16; // [rsp+B8h] [rbp+67h] BYREF
  int v17; // [rsp+C0h] [rbp+6Fh] BYREF

  TabViewManagerTraceLogging::WatchCurrentThread(v12, "TabViewManager_PerformDelayedInitialization");
  v2 = *((_QWORD *)this + 166);
  if ( v2 )
  {
    v3 = *((_QWORD *)this + 167);
    *((_QWORD *)this + 167) = 0LL;
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    HotKeyHandler = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v2 + 24LL))(v2, (char *)this + 1336);
    v5 = HotKeyHandler;
    if ( HotKeyHandler < 0 )
    {
      v6 = 843LL;
      goto LABEL_8;
    }
    v7 = (TabViewManager *)((char *)this - 48);
    HotKeyHandler = TabViewManager::RegisterForTabTransferEvents(v7);
    v5 = HotKeyHandler;
    if ( HotKeyHandler < 0 )
    {
      v6 = 844LL;
      goto LABEL_8;
    }
  }
  else
  {
    v7 = (TabViewManager *)((char *)this - 48);
  }
  HotKeyHandler = TabViewManager::CreateHotKeyHandler(v7);
  v5 = HotKeyHandler;
  if ( HotKeyHandler < 0 )
  {
    v6 = 848LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)HotKeyHandler);
    if ( v14 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v13);
    goto LABEL_18;
  }
  v17 = 0;
  wil::wnf_query_nothrow<unsigned int>(v8, &v16, &v17, v9);
  ++v17;
  v10 = RtlPublishWnfStateData(WNF_SHEL_TAB_SHELL_INIT_COMPLETE, 0LL, &v17, 4LL) | 0x10000000;
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      857LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v10);
  if ( v14 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v13);
  v5 = 0;
LABEL_18:
  wil::details::StoredCallContextInfo::~StoredCallContextInfo(v12);
  return v5;
}
