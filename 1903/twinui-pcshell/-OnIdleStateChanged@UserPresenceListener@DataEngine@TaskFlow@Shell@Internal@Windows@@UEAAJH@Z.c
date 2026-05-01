/*
 * XREFs of ?OnIdleStateChanged@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJH@Z @ 0x1801FAD60
 * Callers:
 *     <none>
 * Callees:
 *     ??1ListenerTelemetrySignalTracker@@QEAA@XZ @ 0x18007CC98 (--1ListenerTelemetrySignalTracker@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$GetActivationFactory@UIUserPresenceDataFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIUserPresenceDataFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1801FA48C (--$GetActivationFactory@UIUserPresenceDataFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@w.c)
 *     ??$UserPresenceDataCreated@AEAW4UserPresenceState@DataEngine@TaskFlow@Shell@Internal@Windows@@AEA_J@TaskFlowDataEngineTelemetry@@SAXAEAW4UserPresenceState@DataEngine@TaskFlow@Shell@Internal@Windows@@AEA_J@Z @ 0x1801FA6C0 (--$UserPresenceDataCreated@AEAW4UserPresenceState@DataEngine@TaskFlow@Shell@Internal@Windows@@AE.c)
 *     ??$UserPresenceIdleState@AEAH@TaskFlowDataEngineTelemetry@@SAXAEAH@Z @ 0x1801FA968 (--$UserPresenceIdleState@AEAH@TaskFlowDataEngineTelemetry@@SAXAEAH@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener::OnIdleStateChanged(
        Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener *this,
        int a2)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  int v5; // eax
  int v6; // eax
  const char *v7; // r9
  __int64 result; // rax
  __int64 v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v10; // [rsp+38h] [rbp-20h] BYREF
  __int64 v11[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v13; // [rsp+68h] [rbp+10h] BYREF
  int v14; // [rsp+70h] [rbp+18h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+78h] [rbp+20h] BYREF

  v13 = a2;
  v11[1] = -2LL;
  LOWORD(v14) = 0;
  TaskFlowDataEngineTelemetry::UserPresenceIdleState<int &>((__int64)&v13);
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v3 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
  v11[0] = v3;
  try
  {
    wil::GetActivationFactory<Windows::Internal::Shell::TaskFlow::DataEngine::IUserPresenceDataFactory>((const WCHAR *)&v10);
    SystemTimeAsFileTime.dwLowDateTime = v13 != 0;
    v9 = 0LL;
    v4 = *v10;
    v9 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64 *, bool, unsigned __int64, __int64 *))(v4 + 48))(v10, v13 != 0, v3, &v9);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        109LL,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\userpresencelistener.cpp",
        (const char *)(unsigned int)v5);
    TaskFlowDataEngineTelemetry::UserPresenceDataCreated<enum Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceState &,__int64 &>(
      (int *)&SystemTimeAsFileTime,
      v11);
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 7) + 64LL))(*((_QWORD *)this + 7), v9);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        113LL,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\userpresencelistener.cpp",
        (const char *)(unsigned int)v6);
    LOBYTE(v14) = 1;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    if ( v10 )
      (*(void (__fastcall **)(__int64 *))(*v10 + 16))(v10);
    ListenerTelemetrySignalTracker::~ListenerTelemetrySignalTracker((ListenerTelemetrySignalTracker *)&v14);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x76,
                           (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\userpresencelistener.cpp",
                           v7);
  }
  return result;
}
