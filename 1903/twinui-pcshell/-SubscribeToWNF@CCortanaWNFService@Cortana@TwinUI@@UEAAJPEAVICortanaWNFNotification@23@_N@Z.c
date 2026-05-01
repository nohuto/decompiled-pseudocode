/*
 * XREFs of ?SubscribeToWNF@CCortanaWNFService@Cortana@TwinUI@@UEAAJPEAVICortanaWNFNotification@23@_N@Z @ 0x1801D27A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$AsWeak@UIDWMStoryboardListener@@@WRL@Microsoft@@YAJPEAUIDWMStoryboardListener@@PEAVWeakRef@01@@Z @ 0x180012394 (--$AsWeak@UIDWMStoryboardListener@@@WRL@Microsoft@@YAJPEAUIDWMStoryboardListener@@PEAVWeakRef@01.c)
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x1800550FC (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18010916C (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18014E0A0 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x1801D23B8 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_RealtimeEnticement@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801D24B8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_RealtimeEnticement@@@wil@@CAX_NW4Rep.c)
 *     ?UpdateFromCurrentWNFState@CCortanaWNFService@Cortana@TwinUI@@AEAAJ_N@Z @ 0x1801D2B0C (-UpdateFromCurrentWNFState@CCortanaWNFService@Cortana@TwinUI@@AEAAJ_N@Z.c)
 */

__int64 __fastcall TwinUI::Cortana::CCortanaWNFService::SubscribeToWNF(
        struct DiagnosticsInfo *this,
        struct TwinUI::Cortana::ICortanaWNFNotification *a2,
        bool a3)
{
  __int64 *v6; // rax
  int v7; // esi
  __int64 v8; // rdx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  bool v15; // dl
  int v16; // eax
  int v17[2]; // [rsp+40h] [rbp-30h] BYREF
  int v18; // [rsp+4Ch] [rbp-24h]
  unsigned int v19[2]; // [rsp+50h] [rbp-20h] BYREF
  const char *v20; // [rsp+58h] [rbp-18h]
  __int64 v21; // [rsp+60h] [rbp-10h]
  __int16 v22; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  struct DiagnosticsInfo *v24; // [rsp+A0h] [rbp+30h] BYREF

  (*(void (__fastcall **)(struct DiagnosticsInfo *))(*(_QWORD *)this + 8LL))(this);
  v24 = this + 7;
  v6 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&v24);
  v7 = Microsoft::WRL::AsWeak<IDWMStoryboardListener>((__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2, v6);
  if ( v7 < 0 )
  {
    v8 = 18LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanawnfservice.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v10 = RtlSubscribeWnfStateChangeNotification(
          &this[1],
          WNF_TMCN_ISTABLETMODE,
          0LL,
          TwinUI::Cortana::CCortanaWNFService::ShellModeWNFCallback);
  if ( v10 < 0 )
  {
    v11 = 29LL;
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)v11,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanawnfservice.cpp",
             (const char *)(unsigned int)v10);
  }
  if ( !a3 )
  {
    v10 = RtlSubscribeWnfStateChangeNotification(
            &this[2],
            WNF_SHEL_LOGON_COMPLETE,
            0LL,
            TwinUI::Cortana::CCortanaWNFService::ShellReadyWNFCallback);
    if ( v10 < 0 )
    {
      v11 = 43LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v11,
               (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanawnfservice.cpp",
               (const char *)(unsigned int)v10);
    }
    v10 = RtlSubscribeWnfStateChangeNotification(
            &this[3],
            WNF_SHEL_LOCKSCREEN_ACTIVE,
            0LL,
            TwinUI::Cortana::CCortanaWNFService::LockScreenActiveWNFCallback);
    if ( v10 < 0 )
    {
      v11 = 54LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v11,
               (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanawnfservice.cpp",
               (const char *)(unsigned int)v10);
    }
    v10 = RtlSubscribeWnfStateChangeNotification(
            &this[4],
            WNF_SHEL_ABOVE_LOCK_APP_ACTIVE,
            0LL,
            TwinUI::Cortana::CCortanaWNFService::AboveLockAppActiveWNFCallback);
    if ( v10 < 0 )
    {
      v11 = 65LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v11,
               (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanawnfservice.cpp",
               (const char *)(unsigned int)v10);
    }
    v10 = RtlSubscribeWnfStateChangeNotification(
            &this[5],
            WNF_SHEL_ABOVE_LOCK_BIO_ACTIVE,
            0LL,
            TwinUI::Cortana::CCortanaWNFService::WindowsHelloActiveWNFCallback);
    if ( v10 < 0 )
    {
      v11 = 76LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v11,
               (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanawnfservice.cpp",
               (const char *)(unsigned int)v10);
    }
    *(_QWORD *)v19 = retaddr;
    v20 = "pcshell\\twinui\\experiencemanagers\\lib\\cortanawnfservice.cpp";
    v22 = 92;
    v21 = 0LL;
    wil::Feature<__WilFeatureTraits_Feature_RealtimeEnticement>::ReportUsageToService(v13, v12, v14);
    wil::ThreadErrorContext::ThreadErrorContext((wil::ThreadErrorContext *)v17, v15);
    v16 = RtlSubscribeWnfStateChangeNotification(
            &this[6],
            WNF_SHEL_APPLICATION_STARTED,
            0LL,
            TwinUI::Cortana::CCortanaWNFService::ShellAppLaunchWNFCallback);
    if ( v16 >= 0 )
      v7 = 0;
    else
      v7 = wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0x5C,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanawnfservice.cpp",
             (const char *)(unsigned int)v16);
    if ( v7 < 0 )
      wil::details::ReportFeatureError(
        (wil::details *)(unsigned int)v7,
        (__int64)v17,
        (struct wil::ThreadErrorContext *)0x9853BD,
        (__int64)v19);
    if ( *(_QWORD *)v17 )
      *(_DWORD *)(*(_QWORD *)v17 + 16LL) = v18;
    if ( v7 < 0 )
    {
      v8 = 92LL;
      goto LABEL_3;
    }
  }
  TwinUI::Cortana::CCortanaWNFService::UpdateFromCurrentWNFState((TwinUI::Cortana::CCortanaWNFService *)this, a3);
  return 0LL;
}
