/*
 * XREFs of ?ShowFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJUPoint@Foundation@Windows@@@Z @ 0x1801642F0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001432C (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x180018C04 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180161A10 (--0-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflecto_ea_180161A10.c)
 *     ??0ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA@XZ @ 0x180161CA0 (--0ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA@XZ.c)
 *     ??1ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA@XZ @ 0x180161F24 (--1ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA@XZ.c)
 *     ??4ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801620FC (--4ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?CanShow@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAA_NXZ @ 0x1801625F0 (-CanShow@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAA_NXZ.c)
 *     ?SendFocusToTray@CPeopleBarFlyoutExperienceManager@@AEAAJXZ @ 0x180164214 (-SendFocusToTray@CPeopleBarFlyoutExperienceManager@@AEAAJXZ.c)
 *     ?Split@ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA?AV12@XZ @ 0x180164538 (-Split@ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA-AV12@XZ.c)
 *     ?StartActivity@ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAAXUPoint@Foundation@Windows@@@Z @ 0x1801646A4 (-StartActivity@ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAAXUPoint@Foundation@Windows@@@Z.c)
 *     ?Stop@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801647D4 (-Stop@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPeopleBarFlyoutExperienceManager::ShowFlyout(__int64 a1, __int64 a2)
{
  CPeopleBarFlyoutExperienceManager *v4; // rcx
  char v5; // r14
  char v6; // di
  __int64 v7; // rax
  struct _TP_TIMER **v8; // rsi
  struct _TP_TIMER *ThreadpoolTimer; // rax
  struct _TP_TIMER *v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // r9
  __int64 v13; // rdx
  unsigned int v14; // eax
  int v15; // eax
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v19; // [rsp+38h] [rbp-D0h]
  _QWORD v20[40]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v21[40]; // [rsp+188h] [rbp+80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+300h] [rbp+1F8h]

  v19 = -2LL;
  if ( CPeopleBarFlyoutExperienceManager::DebounceDetection::CanShow((CPeopleBarFlyoutExperienceManager::DebounceDetection *)(a1 + 648)) )
  {
    CommonPeopleTelemetry::ShowPeopleBarFlyout::ShowPeopleBarFlyout((CommonPeopleTelemetry::ShowPeopleBarFlyout *)v21);
    v5 = 0;
    v6 = 1;
    if ( **(_DWORD **)(a1 + 368) != 1 )
    {
      wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)v20,
        (__int64)"ShowPeopleBarFlyout");
      v20[0] = &CommonPeopleTelemetry::ShowPeopleBarFlyout::`vftable';
      CommonPeopleTelemetry::ShowPeopleBarFlyout::StartActivity(v20, a2);
      CommonPeopleTelemetry::ShowPeopleBarFlyout::operator=(v21, (__int64)v20);
      CommonPeopleTelemetry::ShowPeopleBarFlyout::~ShowPeopleBarFlyout((CommonPeopleTelemetry::ShowPeopleBarFlyout *)v20);
      v7 = CommonPeopleTelemetry::ShowPeopleBarFlyout::Split(v21, v20);
      CommonPeopleTelemetry::ShowPeopleBarFlyout::operator=((_QWORD *)(a1 + 320), v7);
      CommonPeopleTelemetry::ShowPeopleBarFlyout::~ShowPeopleBarFlyout((CommonPeopleTelemetry::ShowPeopleBarFlyout *)v20);
      v5 = 1;
    }
    v8 = (struct _TP_TIMER **)(a1 + 672);
    if ( !*(_QWORD *)(a1 + 672) )
    {
      ThreadpoolTimer = CreateThreadpoolTimer(
                          (PTP_TIMER_CALLBACK)lambda_af9c226e51ef70d6407fc4289fcde3cb_::_lambda_invoker_cdecl_,
                          (PVOID)a1,
                          0LL);
      wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
        (struct _TP_TIMER **)(a1 + 672),
        ThreadpoolTimer);
      v10 = *v8;
      if ( !*v8 )
      {
        v11 = -2147024882;
        v12 = 2147942414LL;
        v13 = 171LL;
LABEL_15:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
          (const char *)v12);
        CommonPeopleTelemetry::ShowPeopleBarFlyout::~ShowPeopleBarFlyout((CommonPeopleTelemetry::ShowPeopleBarFlyout *)v21);
        return v11;
      }
      pftDueTime = (struct _FILETIME)-50000000LL;
      SetThreadpoolTimer(v10, &pftDueTime, 0, 0x3E8u);
    }
    v14 = CPeopleBarFlyoutExperienceManager::SendFocusToTray(v4);
    if ( (int)(v14 + 0x80000000) < 0 || v14 == -2147467259 )
      v6 = 0;
    if ( v6 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        185LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
        (const char *)v14);
    *(_QWORD *)(a1 + 304) = a2;
    v15 = CSingleViewShellExperience::Show(a1 + 112, 0LL);
    v11 = v15;
    if ( v15 < 0 )
    {
      v12 = (unsigned int)v15;
      v13 = 191LL;
      goto LABEL_15;
    }
    if ( v5 )
      wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
        v21,
        0LL);
    CommonPeopleTelemetry::ShowPeopleBarFlyout::~ShowPeopleBarFlyout((CommonPeopleTelemetry::ShowPeopleBarFlyout *)v21);
  }
  return 0LL;
}
