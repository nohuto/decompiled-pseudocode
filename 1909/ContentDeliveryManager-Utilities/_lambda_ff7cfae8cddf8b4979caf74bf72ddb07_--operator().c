/*
 * XREFs of _lambda_ff7cfae8cddf8b4979caf74bf72ddb07_::operator() @ 0x1800479C0
 * Callers:
 *     wil::details::functor_wrapper_void__lambda_ff7cfae8cddf8b4979caf74bf72ddb07__&_::Run @ 0x18004BFA0 (wil--details--functor_wrapper_void__lambda_ff7cfae8cddf8b4979caf74bf72ddb07__-_--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x1800451A8 (-Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     ??1HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@QEAA@XZ @ 0x180045B38 (--1HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperie.c)
 *     ?StartActivity@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@QEAAXU_GUID@@PEBGPEBD@Z @ 0x180045C8C (-StartActivity@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@Mob.c)
 *     ?Stop@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@QEAAXPEBD@Z @ 0x180045E90 (-Stop@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExpe.c)
 *     ?FindAllUserAccounts@CDPActivityHelper@MobilityExperience@@YA?AV?$com_ptr_t@U?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1800464EC (-FindAllUserAccounts@CDPActivityHelper@MobilityExperience@@YA-AV-$com_ptr_t@U-$IVectorView@PEAVW.c)
 *     ?GetActivityStoresForSupportedWebAccounts@CDPActivityHelper@MobilityExperience@@YA?AV?$vector@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Z @ 0x180046950 (-GetActivityStoresForSupportedWebAccounts@CDPActivityHelper@MobilityExperience@@YA-AV-$vector@V-.c)
 *     ?GetNotificationParameters@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEBGPEAPEAUHSTRING__@@PEAU_GUID@@PEAW4CDPActivityType@@PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18004807C (-GetNotificationParameters@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEBGPEAPEAU.c)
 *     ?GetUrisFromActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@MobilityExperience@@PEAPEAUHSTRING__@@1@Z @ 0x180048824 (-GetUrisFromActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@.c)
 *     ?LaunchUriWithFallback@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEAUHSTRING__@@0@Z @ 0x180048A48 (-LaunchUriWithFallback@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEAUHSTRING__@@.c)
 *     ?PublishCompletedActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@MobilityExperience@@PEAVICDPActivityStore@@@Z @ 0x180048D5C (-PublishCompletedActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWra.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     memset_0 @ 0x1800CB2A9 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
HRESULT __fastcall lambda_ff7cfae8cddf8b4979caf74bf72ddb07_::operator()(__int64 *a1)
{
  __int64 *v2; // rsi
  __int64 v3; // rcx
  const char *v4; // rdi
  const unsigned __int16 *StringRawBuffer; // rbx
  char v6; // r13
  int v7; // eax
  __int64 v8; // rbx
  _QWORD *v9; // rdi
  __int64 **i; // r14
  __int64 **v11; // r15
  unsigned __int128 v12; // kr10_16
  __int64 *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // r14
  unsigned int v17; // edi
  HSTRING v18; // rcx
  __int64 v19; // rcx
  ToastNotification::ActivityToastNotificationCallback *v20; // rcx
  __int64 v21; // r14
  LSTATUS v22; // eax
  unsigned __int64 v23; // r9
  const char *v24; // rdx
  HRESULT result; // eax
  const char *lpData; // [rsp+20h] [rbp-298h]
  HSTRING v27; // [rsp+40h] [rbp-278h] BYREF
  HSTRING v28; // [rsp+48h] [rbp-270h] BYREF
  struct _GUID v29; // [rsp+50h] [rbp-268h] BYREF
  __int64 v30; // [rsp+60h] [rbp-258h] BYREF
  HSTRING string; // [rsp+68h] [rbp-250h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+70h] [rbp-248h] BYREF
  __int64 v33; // [rsp+78h] [rbp-240h]
  int v34; // [rsp+80h] [rbp-238h] BYREF
  __int64 v35; // [rsp+88h] [rbp-230h]
  __int64 *v36; // [rsp+90h] [rbp-228h]
  unsigned __int128 v37; // [rsp+98h] [rbp-220h] BYREF
  __int64 v38; // [rsp+A8h] [rbp-210h]
  __int64 v39; // [rsp+B0h] [rbp-208h]
  char *v40[2]; // [rsp+B8h] [rbp-200h] BYREF
  __int64 v41; // [rsp+C8h] [rbp-1F0h]
  unsigned __int64 v42; // [rsp+D0h] [rbp-1E8h]
  GUID rguid; // [rsp+E0h] [rbp-1D8h] BYREF
  _QWORD v44[4]; // [rsp+F0h] [rbp-1C8h] BYREF
  int v45; // [rsp+110h] [rbp-1A8h]
  int *v46; // [rsp+118h] [rbp-1A0h]
  int *v47; // [rsp+120h] [rbp-198h]
  int v48; // [rsp+128h] [rbp-190h] BYREF
  char v49; // [rsp+12Ch] [rbp-18Ch]
  int v50; // [rsp+150h] [rbp-168h] BYREF
  const char *v51; // [rsp+158h] [rbp-160h]
  __int64 v52; // [rsp+160h] [rbp-158h]
  char v53; // [rsp+168h] [rbp-150h]
  __int64 v54; // [rsp+170h] [rbp-148h]
  _BYTE v55[144]; // [rsp+178h] [rbp-140h] BYREF
  __int64 v56; // [rsp+208h] [rbp-B0h]
  __int64 v57; // [rsp+210h] [rbp-A8h]
  __int64 v58; // [rsp+218h] [rbp-A0h]
  __int64 v59; // [rsp+220h] [rbp-98h]
  OLECHAR sz[40]; // [rsp+230h] [rbp-88h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2B8h] [rbp+0h]

  v39 = -2LL;
  v2 = 0LL;
  string = 0LL;
  v42 = 15LL;
  v41 = 0LL;
  LOBYTE(v40[0]) = 0;
  WindowsDeleteString(0LL);
  try
  {
    string = 0LL;
    ToastNotification::ActivityToastNotificationCallback::GetNotificationParameters(
      v3,
      *(_QWORD *)a1[1],
      &string,
      &rguid,
      &v34,
      v40);
    v4 = (const char *)v40;
    if ( v42 >= 0x10 )
      v4 = v40[0];
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    v44[1] = 0LL;
    v44[2] = v44;
    v44[3] = 0LL;
    v45 = 0;
    v46 = &v50;
    v47 = &v48;
    v48 = 0;
    v49 = 0;
    v53 = 0;
    v50 = 0;
    v51 = "HandleResumableTaskNotificationActivity";
    v52 = 0LL;
    v6 = 1;
    v54 = 1LL;
    v56 = 0LL;
    memset_0(v55, 0, sizeof(v55));
    v57 = 0LL;
    v58 = 0LL;
    v59 = 0LL;
    v44[0] = &MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity::`vftable';
    v29 = rguid;
    MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity::StartActivity(
      (MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity *)v44,
      &v29,
      StringRawBuffer,
      v4);
    v7 = CDPInitialize();
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x7C,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
        (const char *)(unsigned int)v7);
      JUMPOUT(0x180047FDFLL);
    }
    StringFromGUID2(&rguid, sz, 39);
    v36 = 0LL;
    v35 = 0LL;
    MobilityExperience::CDPActivityHelper::FindAllUserAccounts(&SystemTimeAsFileTime);
    MobilityExperience::CDPActivityHelper::GetActivityStoresForSupportedWebAccounts(
      &v37,
      *(_QWORD *)&SystemTimeAsFileTime);
    v8 = 0LL;
    v35 = 0LL;
    v36 = 0LL;
    v12 = v37;
    v11 = (__int64 **)(v12 >> 64);
    v9 = (_QWORD *)v12;
    for ( i = (__int64 **)v37; i != v11; ++i )
    {
      v13 = *i;
      *(_QWORD *)&v29.Data1 = v13;
      if ( v13 )
        (*(void (__fastcall **)(__int64 *))(*v13 + 8))(v13);
      v30 = 0LL;
      v14 = *v13;
      v30 = 0LL;
      if ( (*(int (__fastcall **)(__int64 *, GUID *, __int64 *))(v14 + 48))(v13, &rguid, &v30) >= 0 )
      {
        v15 = v30;
        v30 = 0LL;
        v35 = v15;
        v36 = v13;
        v6 = 0;
        v8 = v15;
        v2 = v13;
        v9 = (_QWORD *)v37;
        break;
      }
      if ( v30 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
      (*(void (__fastcall **)(__int64 *))(*v13 + 16))(v13);
      v9 = (_QWORD *)v37;
    }
    if ( v9 )
    {
      v16 = (_QWORD *)*((_QWORD *)&v37 + 1);
      if ( v9 != *((_QWORD **)&v37 + 1) )
      {
        do
        {
          if ( *v9 )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 16LL))(*v9);
          ++v9;
        }
        while ( v9 != v16 );
        v9 = (_QWORD *)v37;
      }
      operator delete(v9);
      v37 = 0LL;
      v38 = 0LL;
    }
    if ( SystemTimeAsFileTime )
      (*(void (__fastcall **)(struct _FILETIME))(**(_QWORD **)&SystemTimeAsFileTime + 16LL))(SystemTimeAsFileTime);
    wil::details::in1diag3::Throw_HrIfMsg(
      retaddr,
      (void *)0x83,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)0x80070490LL,
      v6,
      (__int64)"Unable to find activity [GUID = %ls]",
      (const char *)sz);
    v17 = v34;
    SystemTimeAsFileTime.dwLowDateTime = v34;
    v33 = v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    v28 = 0LL;
    v18 = 0LL;
    v27 = 0LL;
    v29.Data1 = v17;
    *(_QWORD *)v29.Data4 = v8;
    if ( v8 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      v18 = v27;
    }
    WindowsDeleteString(v18);
    v27 = 0LL;
    WindowsDeleteString(v28);
    v28 = 0LL;
    ToastNotification::ActivityToastNotificationCallback::GetUrisFromActivity(v19, &v29, &v28, &v27);
    ToastNotification::ActivityToastNotificationCallback::LaunchUriWithFallback(v20, v28, v27);
    v21 = *a1;
    v29.Data1 = v17;
    *(_QWORD *)v29.Data4 = v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    ToastNotification::ActivityToastNotificationCallback::PublishCompletedActivity(v21, &v29, v2);
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    SystemTimeAsFileTime = (struct _FILETIME)(SystemTimeAsFileTime.dwLowDateTime
                                            + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32));
    v22 = RegSetKeyValueW(
            HKEY_CURRENT_USER,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Mobility",
            L"LastResumeOnPCInteractionTime",
            0xBu,
            &SystemTimeAsFileTime,
            8u);
    v23 = (unsigned __int16)v22 | 0x80070000;
    if ( v22 <= 0 )
      v23 = (unsigned int)v22;
    if ( (v23 & 0x80000000) != 0LL )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9A,
        (__int64)"internal\\onecoreuapshell\\inc\\mobilityexperiencesettings.h",
        (const char *)v23);
    v24 = (const char *)v40;
    if ( v42 >= 0x10 )
      v24 = v40[0];
    MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity::Stop(
      (MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity *)v44,
      v24);
    WindowsDeleteString(v27);
    v27 = 0LL;
    WindowsDeleteString(v28);
    v28 = 0LL;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    if ( v2 )
      (*(void (__fastcall **)(__int64 *))(*v2 + 16))(v2);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity::~HandleResumableTaskNotificationActivity((MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity *)v44);
    if ( v42 >= 0x10 )
      operator delete(v40[0]);
    v42 = 15LL;
    v41 = 0LL;
    LOBYTE(v40[0]) = 0;
    result = WindowsDeleteString(string);
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtExceptionMsg(
             retaddr,
             (void *)0x93,
             (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
             "Failed to handle an Activity Toast Notification",
             lpData);
  }
  return result;
}
