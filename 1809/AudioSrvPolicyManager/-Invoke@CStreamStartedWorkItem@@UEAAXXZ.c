/*
 * XREFs of ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18002B680
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x180008188 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008498 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z @ 0x180010864 (-GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z.c)
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x180011F40 (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 *     ?SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x1800121C8 (-SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z.c)
 *     ?CleanupGoodFaithExemptionTimer@CApplication@@QEAAJXZ @ 0x1800126FC (-CleanupGoodFaithExemptionTimer@CApplication@@QEAAJXZ.c)
 *     ?RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ @ 0x180012E70 (-RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x1800132D8 (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ @ 0x18001334C (-IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ.c)
 *     ?IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x1800133C0 (-IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x180013434 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ?HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z @ 0x1800134D4 (-HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z.c)
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x1800137D8 (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x180015FFC (-UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z.c)
 *     ?DeleteInactivityTimer@CProcess@@QEAAXXZ @ 0x180016384 (-DeleteInactivityTimer@CProcess@@QEAAXXZ.c)
 *     ?GetActiveRenderStreamCount@CProcess@@QEAAIK@Z @ 0x18001725C (-GetActiveRenderStreamCount@CProcess@@QEAAIK@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18001EBF8 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x18001EE3C (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x18001EF3C (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ @ 0x180021408 (-SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ.c)
 *     WPP_SF_dSd @ 0x1800233CC (WPP_SF_dSd.c)
 *     ?TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAH@Z @ 0x180029780 (-TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAH@Z.c)
 *     ?TS_SessionIdStreamStarted@@YAJKPEAUIAudioStreamInfo@@PEBG@Z @ 0x18002A840 (-TS_SessionIdStreamStarted@@YAJKPEAUIAudioStreamInfo@@PEBG@Z.c)
 *     McTemplateU0zqq @ 0x18002B518 (McTemplateU0zqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CStreamStartedWorkItem::Invoke(CStreamStartedWorkItem *this)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  __int64 v4; // rbx
  unsigned int v5; // eax
  const wchar_t *v6; // rbp
  unsigned int v7; // ebx
  unsigned int v8; // eax
  CApplicationManager *v9; // rcx
  unsigned int v10; // ebp
  int PBMRelatedAudioStreamCategory; // r14d
  const unsigned __int16 *v12; // r12
  int ActiveRenderStreamCount; // r15d
  int v14; // r15d
  int v15; // r15d
  int v16; // r15d
  unsigned __int8 v17; // al
  __int64 v18; // rax
  CApplicationManager *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  DWORD v22; // ebx
  struct IAudioStreamInfo *v23; // rdx
  const unsigned __int16 *v24; // r8
  int v25; // [rsp+28h] [rbp-50h]
  unsigned int v26; // [rsp+80h] [rbp+8h] BYREF
  int v27; // [rsp+88h] [rbp+10h] BYREF

  v1 = *((_QWORD *)this + 3);
  v27 = 0;
  v3 = *(_QWORD *)(v1 + 256);
  v4 = v1;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 56LL))(*((_QWORD *)this + 1));
    if ( v5 > 2 )
      v6 = L"unknown";
    else
      v6 = off_18003D128[v5];
    v7 = *(_DWORD *)(*((_QWORD *)this + 3) + 192LL);
    v25 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 48LL))(*((_QWORD *)this + 1));
    WPP_SF_dSd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xCu, &WPP_ddae050dd73e37d577adf215a51a3607_Traceguids, v7, v6, v25);
    v4 = *((_QWORD *)this + 3);
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 48LL))(*((_QWORD *)this + 1));
  LOBYTE(v10) = 0;
  v26 = 0;
  if ( v8 < 0x15 )
  {
    PBMRelatedAudioStreamCategory = GetPBMRelatedAudioStreamCategory(
                                      (struct IAudioProcess *)((v4 + 16) & -(__int64)(v4 != 0)),
                                      v8,
                                      &v26);
    if ( PBMRelatedAudioStreamCategory < 0 )
    {
      LOBYTE(v10) = v26;
    }
    else
    {
      v12 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 72LL))(*((_QWORD *)this + 2));
      ActiveRenderStreamCount = CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 0xBu);
      v14 = CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 0xAu) + ActiveRenderStreamCount;
      v15 = CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 2u) + v14;
      v16 = CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 1u) + v15;
      v17 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 64LL))(*((_QWORD *)this + 1));
      v10 = v26;
      CProcess::UpdateStreamCountAndProcessCategory(*((CProcess **)this + 3), v12, v26, 1, v17, 0LL, 0LL);
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 64LL))(*((_QWORD *)this + 1))
        || v10 == 2
        || (unsigned int)CApplication::IsBackgroundAudioCapable((CApplication *)v3)
        && !(unsigned int)CApplication::IsRestrictedBackgroundAudioCapable((CApplication *)v3)
        && (unsigned int)CApplication::HasSmtcSubscription(v3, 1) )
      {
        v18 = *((_QWORD *)this + 3);
        if ( *(_DWORD *)(v18 + 504) == 3 )
        {
          *(_QWORD *)(v18 + 504) = 0LL;
          *(_DWORD *)(v18 + 512) = 4;
        }
        CApplication::RemoveAudioPlaybackRestriction((CApplication *)v3);
        CProcess::DeleteInactivityTimer(*((CProcess **)this + 3));
        CApplication::CleanupBCMStartupLatencyGracePeriod((const wchar_t **)v3);
      }
      if ( v10 == 2 )
        CApplication::ApplySmtcRelatedPolicy((CApplication *)v3);
      if ( *(_DWORD *)(*((_QWORD *)this + 3) + 456LL)
        && (v10 == 2
         || (unsigned int)CApplication::IsBackgroundAudioCapable((CApplication *)v3)
         && !(unsigned int)CApplication::IsRestrictedBackgroundAudioCapable((CApplication *)v3)
         && (unsigned int)CApplication::HasSmtcSubscription(v3, 1))
        && *(_DWORD *)(v3 + 432) )
      {
        CApplication::CleanupGoodFaithExemptionTimer((CApplication *)v3);
        if ( *(_DWORD *)(v3 + 564) == 2 )
        {
          *(_QWORD *)(v3 + 564) = 0LL;
          *(_QWORD *)(v3 + 572) = 0LL;
          *(_QWORD *)(v3 + 580) = 0LL;
          *(_DWORD *)(v3 + 588) = 1;
        }
        v19 = g_ApplicationManager;
        *(_DWORD *)(v3 + 432) = 0;
        CApplicationManager::ApplyPBMPolicy(v19, (struct CApplication *)v3, 209, 0);
      }
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 64LL))(*((_QWORD *)this + 1)) )
      {
        if ( (unsigned int)CApplication::IsBackgroundMediaRecordingCapable((CApplication *)v3) )
          PBMRelatedAudioStreamCategory = CApplicationManager::ApplyPBMPolicyForAllAppsInSession(
                                            g_ApplicationManager,
                                            *(_DWORD *)(v3 + 212),
                                            0);
      }
      else
      {
        v21 = *((_QWORD *)this + 3);
        if ( !*(_DWORD *)(v21 + 448) )
        {
          if ( *(_DWORD *)(v3 + 216) )
          {
            v22 = *(_DWORD *)(v21 + 196);
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 64LL))(*((_QWORD *)this + 1));
            TsSessionIdUpdateStreamClassPolicyGains(v22, v12, v10, 0, &v27);
            if ( v27 )
              CApplicationManager::UpdateVolumeForAllAppsInSession(
                (__int64)g_ApplicationManager,
                *(_DWORD *)(v3 + 212),
                3u);
          }
        }
        PBMRelatedAudioStreamCategory = CApplicationManager::ApplyPBMPolicyForAllAppsInSession(
                                          g_ApplicationManager,
                                          *(_DWORD *)(v3 + 212),
                                          0);
        if ( (v10 - 10 <= 1 || v10 - 1 <= 1) && !v16 )
          CApplication::SendTrackStateNotification(v3);
        if ( v10 - 10 <= 1 || v10 <= 2 )
          TS_SessionIdStreamStarted(*(_DWORD *)(*((_QWORD *)this + 3) + 196LL), v23, v24);
        if ( (unsigned int)CApplication::HasBackgroundAudioTask((CApplication *)v3) )
          CApplicationManager::SendBackgroundStreamStateChangedNotifiction(v9);
      }
    }
  }
  else
  {
    PBMRelatedAudioStreamCategory = -2147024809;
  }
  v20 = *((_QWORD *)this + 3);
  if ( *(_DWORD *)(v20 + 456) && Microsoft_Windows_AudioEnableBits < 0 )
    McTemplateU0zqq((__int64)v9, &EVT_PBM_STREAM_STARTED, *(_QWORD *)(v3 + 24), *(_DWORD *)(v20 + 192), v10);
  if ( PBMRelatedAudioStreamCategory < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xDu,
        &WPP_ddae050dd73e37d577adf215a51a3607_Traceguids,
        PBMRelatedAudioStreamCategory);
    }
    AudPolicyLogError("CStreamStartedWorkItem::Invoke", 261, PBMRelatedAudioStreamCategory);
  }
}
