/*
 * XREFs of ?OnMessage@TabViewManager@@UEAAJI_K_J@Z @ 0x180252AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x18003B698 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnGetUnmetTabRequirementsResult@TabViewManager@@AEAAXPEAUHWND__@@W4DWM_TAB_WINDOW_REQUIREMENTS@@@Z @ 0x180252A28 (-OnGetUnmetTabRequirementsResult@TabViewManager@@AEAAXPEAUHWND__@@W4DWM_TAB_WINDOW_REQUIREMENTS@.c)
 *     ?OnTitleBarsLost@TabViewManager@@UEAAJXZ @ 0x180254670 (-OnTitleBarsLost@TabViewManager@@UEAAJXZ.c)
 *     ?OnUnmetTabRequirementsChanged@TabViewManager@@AEAAXPEAUHWND__@@W4DWM_TAB_WINDOW_REQUIREMENTS@@@Z @ 0x1802547DC (-OnUnmetTabRequirementsChanged@TabViewManager@@AEAAXPEAUHWND__@@W4DWM_TAB_WINDOW_REQUIREMENTS@@@.c)
 *     ?WatchCurrentThread@TabViewManagerTraceLogging@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x1802618E8 (-WatchCurrentThread@TabViewManagerTraceLogging@@SA-AVActivityThreadWatcher@wil@@PEBD@Z.c)
 */

__int64 __fastcall TabViewManager::OnMessage(TabViewManager *this, int a2, __int64 a3, unsigned int a4)
{
  __int64 v8; // rcx
  int v9; // eax
  LPVOID v11[4]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v12[24]; // [rsp+40h] [rbp-38h] BYREF
  int v13; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  TabViewManagerTraceLogging::WatchCurrentThread(v11, "TabViewManager_OnMessage");
  if ( a2 == 798 )
  {
    v9 = TabViewManager::OnTitleBarsLost((TabViewManager *)((char *)this - 32));
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x42B,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v9);
  }
  else if ( a2 == *((_DWORD *)this + 252) )
  {
    TabViewManager::OnGetUnmetTabRequirementsResult(v8, a3, a4);
  }
  else if ( a2 == *((_DWORD *)this + 253) )
  {
    TabViewManager::OnUnmetTabRequirementsChanged((char *)this - 200, a3, a4);
  }
  if ( v13 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v12);
  wil::details::StoredCallContextInfo::~StoredCallContextInfo(v11);
  return 0LL;
}
