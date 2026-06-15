/*
 * XREFs of ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001D1E4
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_8fb95896ce858fa14a6982eb9316d878__void_::_Do_call @ 0x180007C80 (std--_Func_impl_no_alloc__lambda_8fb95896ce858fa14a6982eb9316d878__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_24c5fdf264dc3228e551f9760d3690dd__void_::_Do_call @ 0x180007DD0 (std--_Func_impl_no_alloc__lambda_24c5fdf264dc3228e551f9760d3690dd__void_--_Do_call.c)
 *     ?OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAU_CastingAppStateChangedContext@@@Z @ 0x18001CEA0 (-OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAU_CastingAppStateChangedContext@@@Z.c)
 *     ?OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z @ 0x18001D020 (-OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z.c)
 *     ?Invoke@CAppStateChangedWorkItem@@UEAAXXZ @ 0x180028C50 (-Invoke@CAppStateChangedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     WPP_SF_SS @ 0x18000D88C (WPP_SF_SS.c)
 *     ?Category@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x18000E584 (-Category@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     ?RawCategory@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x18000E63C (-RawCategory@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     ?GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ @ 0x18000EE30 (-GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ.c)
 *     ?GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ @ 0x18000EE9C (-GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ.c)
 *     ?AddPBMStatusOverrideToSilenceAndRevokePLMExemption@CApplication@@QEAAXXZ @ 0x18000FB7C (-AddPBMStatusOverrideToSilenceAndRevokePLMExemption@CApplication@@QEAAXXZ.c)
 *     ?RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ @ 0x18000FBBC (-RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x18001008C (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ @ 0x180010100 (-IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ.c)
 *     ?IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x180010174 (-IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x1800101E8 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ?HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z @ 0x180010288 (-HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z.c)
 *     ?BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x1800103E4 (-BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x18001058C (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x18001BD34 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x18001BE34 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z @ 0x18001CCBC (-UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplicationManager::OnApplicationInteractivityChanged(
        CApplicationManager *this,
        struct CApplication *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  const wchar_t *v5; // rax
  DWORD pcbData; // [rsp+80h] [rbp+8h] BYREF
  int pvData; // [rsp+88h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+90h] [rbp+18h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v8 = v4;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v5 = L"NOT_INTERACTIVE";
    if ( *((_DWORD *)a2 + 52) )
      v5 = (const wchar_t *)L"INTERACTIVE";
    WPP_SF_SS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x31u,
      &WPP_48f5b41a97d23634bb345404f49671c8_Traceguids,
      *((const wchar_t **)a2 + 3),
      v5);
  }
  if ( !*((_DWORD *)a2 + 52) )
  {
    *((_DWORD *)a2 + 158) = 1;
    *((_DWORD *)a2 + 159) = 1;
    if ( !(unsigned int)CApplication::HasBackgroundAudioTask(a2) )
    {
      if ( (unsigned int)CApplication::IsBackgroundAudioCapable(a2)
        && !(unsigned int)CApplication::IsRestrictedBackgroundAudioCapable(a2)
        && (unsigned int)CApplication::HasSmtcSubscription((__int64)a2, 1)
        || (unsigned int)CApplication::IsBackgroundMediaRecordingCapable(a2) )
      {
        if ( (unsigned int)CApplication::IsBackgroundAudioCapable(a2)
          && !(unsigned int)CApplication::IsRestrictedBackgroundAudioCapable(a2)
          && (unsigned int)CApplication::HasSmtcSubscription((__int64)a2, 1) )
        {
          if ( !(unsigned int)CApplication::GetTotalActiveRenderStreamCount(a2) )
            CApplication::BeginBCMStartupLatencyGracePeriod((const wchar_t **)a2);
          *((_DWORD *)a2 + 159) = 0;
        }
        if ( (unsigned int)CApplication::IsBackgroundMediaRecordingCapable(a2) )
        {
          if ( !(unsigned int)CApplication::GetTotalActiveCaptureStreamCount(a2) )
            CApplication::BeginBCMStartupLatencyGracePeriod((const wchar_t **)a2);
          *((_DWORD *)a2 + 158) = 0;
        }
        goto LABEL_38;
      }
      if ( dword_18003DE10[(int)CApplication::Category((__int64)a2)] )
      {
        if ( !dword_18003DE10[(int)CApplication::RawCategory((__int64)a2)] && *((_DWORD *)a2 + 54) )
          CApplication::RestrictAudioPlaybackToPrimaryCategories(a2);
      }
      else
      {
        if ( !(unsigned int)CApplication::IsBackgroundAudioCapable(a2) )
        {
          CApplication::AddPBMStatusOverrideToSilenceAndRevokePLMExemption(a2);
LABEL_38:
          CApplicationManager::ApplyPBMPolicy(this, a2, 209, 1);
          goto LABEL_39;
        }
        if ( (unsigned int)CApplication::HasBackgroundAudioTask(a2) )
          goto LABEL_38;
        if ( (unsigned int)CApplication::GetTotalActiveCaptureStreamCount(a2) )
          goto LABEL_38;
        pcbData = 4;
        if ( !RegGetValueW(
                HKEY_LOCAL_MACHINE,
                L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
                L"DisableExemptionForBCMStartupLatency",
                0x18u,
                0LL,
                &pvData,
                &pcbData) )
        {
          if ( pvData )
            goto LABEL_38;
        }
        CApplication::BeginBCMStartupLatencyGracePeriod((const wchar_t **)a2);
      }
    }
    *((_DWORD *)a2 + 159) = 0;
    goto LABEL_38;
  }
  *((_QWORD *)a2 + 79) = 0LL;
  if ( (unsigned int)CApplication::IsBackgroundAudioCapable(a2) )
    CApplication::CleanupBCMStartupLatencyGracePeriod((const wchar_t **)a2);
  *(_QWORD *)((char *)a2 + 564) = 0LL;
  *(_QWORD *)((char *)a2 + 572) = 0LL;
  *(_QWORD *)((char *)a2 + 580) = 0LL;
  *((_DWORD *)a2 + 147) = 1;
  CApplicationManager::ApplyPBMPolicyForAllAppsInSession(this, *((_DWORD *)a2 + 53), 1);
LABEL_39:
  CApplicationManager::UpdateActiveMediaAppForSession(this, a2, 0);
  if ( v4 )
    LeaveCriticalSection(v4);
}
