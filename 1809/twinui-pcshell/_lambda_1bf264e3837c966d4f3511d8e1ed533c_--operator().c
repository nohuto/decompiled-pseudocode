/*
 * XREFs of _lambda_1bf264e3837c966d4f3511d8e1ed533c_::operator() @ 0x1800566D0
 * Callers:
 *     ?SessionCreated@TaskFlowImmersiveShellBroker@@UEAAJ_KU_GUID@@PEAU?$IVector@PEAVUserActivityAppId@UserActivities@Internal@ApplicationModel@Windows@@@Collections@Foundation@Windows@@PEAUHSTRING__@@1UDateTime@56@3@Z @ 0x1800565A0 (-SessionCreated@TaskFlowImmersiveShellBroker@@UEAAJ_KU_GUID@@PEAU-$IVector@PEAVUserActivityAppId.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryGetApplicationViewViewIdForCoreWindow@TaskFlowImmersiveShellBroker@@AEAAJ_KPEA_K@Z @ 0x180056804 (-TryGetApplicationViewViewIdForCoreWindow@TaskFlowImmersiveShellBroker@@AEAAJ_KPEA_K@Z.c)
 *     ?FailedToRetreiveWindowHandle@TaskFlowDataEngineTelemetry@@SAXXZ @ 0x18006E870 (-FailedToRetreiveWindowHandle@TaskFlowDataEngineTelemetry@@SAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_1bf264e3837c966d4f3511d8e1ed533c_::operator()(__int64 a1)
{
  __int64 v2; // rbx
  int ApplicationViewViewIdForCoreWindow; // eax
  unsigned int v4; // edi
  __int64 v6; // rdx
  __int128 v7; // [rsp+60h] [rbp-28h] BYREF
  __int128 v8; // [rsp+70h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  unsigned __int64 v10; // [rsp+90h] [rbp+8h] BYREF
  __int64 v11; // [rsp+98h] [rbp+10h]

  if ( *(_DWORD *)(*(_QWORD *)a1 + 200LL) != 1 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x189,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)0x80004004LL);
    return 2147500036LL;
  }
  v2 = *(_QWORD *)(*(_QWORD *)a1 + 256LL);
  v11 = v2;
  if ( !v2 )
    goto LABEL_6;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  ApplicationViewViewIdForCoreWindow = TaskFlowImmersiveShellBroker::TryGetApplicationViewViewIdForCoreWindow(
                                         *(TaskFlowImmersiveShellBroker **)a1,
                                         **(_QWORD **)(a1 + 8),
                                         &v10);
  v4 = ApplicationViewViewIdForCoreWindow;
  if ( ApplicationViewViewIdForCoreWindow < 0 )
  {
    v6 = 399LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)(unsigned int)ApplicationViewViewIdForCoreWindow);
    goto LABEL_7;
  }
  if ( !v10 )
  {
    TaskFlowDataEngineTelemetry::FailedToRetreiveWindowHandle();
    _InterlockedIncrement((volatile signed __int32 *)&ListenerTelemetryReport::m_knownFailureCounter);
    v2 = v11;
    goto LABEL_6;
  }
  v7 = *(_OWORD *)*(_QWORD *)(a1 + 40);
  v8 = *(_OWORD *)*(_QWORD *)(a1 + 16);
  ApplicationViewViewIdForCoreWindow = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int128 *, _QWORD, _QWORD, __int128 *, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 256LL) + 48LL))(
                                         *(_QWORD *)(*(_QWORD *)a1 + 256LL),
                                         v10,
                                         &v8,
                                         **(_QWORD **)(a1 + 24),
                                         **(_QWORD **)(a1 + 32),
                                         &v7,
                                         **(_QWORD **)(a1 + 48),
                                         **(_QWORD **)(a1 + 56));
  v4 = ApplicationViewViewIdForCoreWindow;
  if ( ApplicationViewViewIdForCoreWindow < 0 )
  {
    v6 = 407LL;
    goto LABEL_14;
  }
LABEL_6:
  v4 = 0;
LABEL_7:
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return v4;
}
