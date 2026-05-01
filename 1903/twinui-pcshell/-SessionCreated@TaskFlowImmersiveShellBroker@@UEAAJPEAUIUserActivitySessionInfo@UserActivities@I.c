/*
 * XREFs of ?SessionCreated@TaskFlowImmersiveShellBroker@@UEAAJPEAUIUserActivitySessionInfo@UserActivities@Internal@ApplicationModel@Windows@@@Z @ 0x180061B80
 * Callers:
 *     <none>
 * Callees:
 *     ?TryGetApplicationViewViewIdForCoreWindow@TaskFlowImmersiveShellBroker@@AEAAJ_KPEA_K@Z @ 0x180061C8C (-TryGetApplicationViewViewIdForCoreWindow@TaskFlowImmersiveShellBroker@@AEAAJ_KPEA_K@Z.c)
 *     ?FailedToRetreiveWindowHandle@TaskFlowDataEngineTelemetry@@SAXXZ @ 0x180070014 (-FailedToRetreiveWindowHandle@TaskFlowDataEngineTelemetry@@SAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskFlowImmersiveShellBroker::SessionCreated(
        TaskFlowImmersiveShellBroker *this,
        struct Windows::ApplicationModel::Internal::UserActivities::IUserActivitySessionInfo *a2)
{
  __int64 v4; // rbx
  int ApplicationViewViewIdForCoreWindow; // eax
  unsigned int v6; // edi
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v11; // [rsp+60h] [rbp+18h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h]

  if ( *((_DWORD *)this + 50) != 1 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x193,
      (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)0x80004004LL,
      -2);
    return 2147500036LL;
  }
  v4 = *((_QWORD *)this + 33);
  v12 = v4;
  if ( !v4 )
    goto LABEL_8;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v10 = 0LL;
  ApplicationViewViewIdForCoreWindow = (*(__int64 (__fastcall **)(struct Windows::ApplicationModel::Internal::UserActivities::IUserActivitySessionInfo *, unsigned __int64 *))(*(_QWORD *)a2 + 80LL))(
                                         a2,
                                         &v10);
  v6 = ApplicationViewViewIdForCoreWindow;
  if ( ApplicationViewViewIdForCoreWindow < 0 )
  {
    v8 = 409LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)(unsigned int)ApplicationViewViewIdForCoreWindow,
      -2);
    goto LABEL_9;
  }
  ApplicationViewViewIdForCoreWindow = TaskFlowImmersiveShellBroker::TryGetApplicationViewViewIdForCoreWindow(
                                         this,
                                         v10,
                                         &v11);
  v6 = ApplicationViewViewIdForCoreWindow;
  if ( ApplicationViewViewIdForCoreWindow < 0 )
  {
    v8 = 412LL;
    goto LABEL_18;
  }
  if ( !v11 )
  {
    TaskFlowDataEngineTelemetry::FailedToRetreiveWindowHandle();
    _InterlockedIncrement((volatile signed __int32 *)&ListenerTelemetryReport::m_knownFailureCounter);
    v4 = v12;
    goto LABEL_8;
  }
  ApplicationViewViewIdForCoreWindow = (*(__int64 (__fastcall **)(struct Windows::ApplicationModel::Internal::UserActivities::IUserActivitySessionInfo *))(*(_QWORD *)a2 + 88LL))(a2);
  v6 = ApplicationViewViewIdForCoreWindow;
  if ( ApplicationViewViewIdForCoreWindow < 0 )
  {
    v8 = 421LL;
    goto LABEL_18;
  }
  ApplicationViewViewIdForCoreWindow = (*(__int64 (__fastcall **)(_QWORD, struct Windows::ApplicationModel::Internal::UserActivities::IUserActivitySessionInfo *))(**((_QWORD **)this + 33) + 48LL))(
                                         *((_QWORD *)this + 33),
                                         a2);
  v6 = ApplicationViewViewIdForCoreWindow;
  if ( ApplicationViewViewIdForCoreWindow < 0 )
  {
    v8 = 423LL;
    goto LABEL_18;
  }
LABEL_8:
  v6 = 0;
LABEL_9:
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v6;
}
