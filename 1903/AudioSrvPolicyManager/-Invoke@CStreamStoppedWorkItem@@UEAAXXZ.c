/*
 * XREFs of ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x180028710
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x1800041E0 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180004B98 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z @ 0x18000D584 (-GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z.c)
 *     ?GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ @ 0x18000EECC (-GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ.c)
 *     ?SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18000EFE0 (-SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z.c)
 *     ?RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ @ 0x18000FBEC (-RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x1800100BC (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ @ 0x180010130 (-IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ.c)
 *     ?IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x1800101A4 (-IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x180010218 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ?HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z @ 0x1800102B8 (-HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z.c)
 *     ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x180012E8C (-UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z.c)
 *     ?StartInactivityTimer@CProcess@@QEAAXXZ @ 0x18001309C (-StartInactivityTimer@CProcess@@QEAAXXZ.c)
 *     ?GetActiveRenderStreamCount@CProcess@@QEAAIK@Z @ 0x1800140DC (-GetActiveRenderStreamCount@CProcess@@QEAAIK@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18001BAD4 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x18001BE24 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ @ 0x18001E358 (-SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ.c)
 *     WPP_SF_dSd @ 0x18001FA7C (WPP_SF_dSd.c)
 *     ?TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAH@Z @ 0x1800260D0 (-TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAH@Z.c)
 *     ?TS_SessionIdStreamStopped@@YAJKPEAUIAudioStreamInfo@@PEBG@Z @ 0x180027260 (-TS_SessionIdStreamStopped@@YAJKPEAUIAudioStreamInfo@@PEBG@Z.c)
 *     McTemplateU0zqq @ 0x18002805C (McTemplateU0zqq.c)
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CStreamStoppedWorkItem::Invoke(CStreamStoppedWorkItem *this)
{
  __int64 v1; // rax
  __int64 v3; // rsi
  __int64 v4; // rbx
  unsigned int v5; // eax
  const wchar_t *v6; // rbp
  unsigned int v7; // ebx
  unsigned int v8; // ebp
  unsigned int v9; // edx
  CApplicationManager *v10; // rcx
  int PBMRelatedAudioStreamCategory; // ebx
  const unsigned __int16 *v12; // r14
  unsigned __int8 v13; // al
  _DWORD *v14; // rax
  int v15; // edx
  int v16; // ecx
  _DWORD *v17; // rax
  CProcess *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  DWORD v21; // ebx
  struct IAudioStreamInfo *v22; // rdx
  const unsigned __int16 *v23; // r8
  int v24; // [rsp+28h] [rbp-50h]
  unsigned int v25; // [rsp+80h] [rbp+8h] BYREF
  int v26; // [rsp+88h] [rbp+10h] BYREF
  int v27; // [rsp+90h] [rbp+18h] BYREF
  int v28; // [rsp+98h] [rbp+20h] BYREF

  v1 = *((_QWORD *)this + 3);
  v26 = 0;
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
      v6 = off_18003B468[v5];
    v7 = *(_DWORD *)(*((_QWORD *)this + 3) + 192LL);
    v24 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 48LL))(*((_QWORD *)this + 1));
    WPP_SF_dSd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x10u,
      &WPP_ddae050dd73e37d577adf215a51a3607_Traceguids,
      v7,
      v6,
      v24);
    v4 = *((_QWORD *)this + 3);
  }
  LOBYTE(v8) = 0;
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 48LL))(*((_QWORD *)this + 1));
  v25 = 0;
  if ( v9 < 0x15 )
  {
    PBMRelatedAudioStreamCategory = GetPBMRelatedAudioStreamCategory(
                                      (struct IAudioProcess *)((v4 + 16) & -(__int64)(v4 != 0)),
                                      v9,
                                      &v25);
    if ( PBMRelatedAudioStreamCategory < 0 )
    {
      LOBYTE(v8) = v25;
    }
    else
    {
      v12 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 72LL))(*((_QWORD *)this + 2));
      v13 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 64LL))(*((_QWORD *)this + 1));
      v8 = v25;
      CProcess::UpdateStreamCountAndProcessCategory(
        *((CProcess **)this + 3),
        v12,
        v25,
        0,
        v13,
        &v27,
        (enum _APPLICATION_CATEGORY *)&v28);
      if ( v27 && v28 == 1 )
      {
        v14 = (_DWORD *)*((_QWORD *)this + 3);
        v15 = v14[128];
        v16 = v15 ? v14[129] : v14[86];
        if ( v16 != 1
          && !v15
          && !v14[112]
          && !(unsigned int)CApplication::GetTotalActiveCaptureStreamCount((CApplication *)v3) )
        {
          v17 = (_DWORD *)*((_QWORD *)this + 3);
          if ( v17[127] != 3 )
          {
            v17[127] = 3;
            v17[128] = 1;
            v17[129] = 1;
          }
          if ( !*(_DWORD *)(v3 + 208) && *(_DWORD *)(v3 + 216) )
            CApplication::RestrictAudioPlaybackToPrimaryCategories((CApplication *)v3);
          CProcess::StartInactivityTimer(*((CProcess **)this + 3));
        }
      }
      if ( ((unsigned int)CApplication::IsBackgroundAudioCapable((CApplication *)v3)
         && !(unsigned int)CApplication::IsRestrictedBackgroundAudioCapable((CApplication *)v3)
         && (unsigned int)CApplication::HasSmtcSubscription(v3, 1)
         || (unsigned int)CApplication::IsBackgroundMediaRecordingCapable((CApplication *)v3))
        && !*(_DWORD *)(v3 + 208) )
      {
        v18 = (CProcess *)*((_QWORD *)this + 3);
        if ( !*((_DWORD *)v18 + 112) )
          CProcess::StartInactivityTimer(v18);
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
        if ( (v8 - 10 <= 1 || v8 - 1 <= 1)
          && !(unsigned int)CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 0xBu)
          && !(unsigned int)CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 0xAu)
          && !(unsigned int)CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 2u)
          && !(unsigned int)CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 1u) )
        {
          CApplication::SendTrackStateNotification(v3);
        }
        v20 = *((_QWORD *)this + 3);
        if ( !*(_DWORD *)(v20 + 448) )
        {
          if ( *(_DWORD *)(v3 + 216) )
          {
            v21 = *(_DWORD *)(v20 + 196);
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 64LL))(*((_QWORD *)this + 1));
            TsSessionIdUpdateStreamClassPolicyGains(v21, v12, v8, 1, &v26);
            if ( v26 )
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
        if ( v8 - 10 <= 1 || v8 <= 2 )
          TS_SessionIdStreamStopped(*(_DWORD *)(*((_QWORD *)this + 3) + 196LL), v22, v23);
        if ( (unsigned int)CApplication::HasBackgroundAudioTask((CApplication *)v3) )
          CApplicationManager::SendBackgroundStreamStateChangedNotifiction(v10);
      }
    }
  }
  else
  {
    PBMRelatedAudioStreamCategory = -2147024809;
  }
  v19 = *((_QWORD *)this + 3);
  if ( *(_DWORD *)(v19 + 456) && Microsoft_Windows_AudioEnableBits < 0 )
    McTemplateU0zqq((__int64)v10, &EVT_PBM_STREAM_STOPPED, *(_QWORD *)(v3 + 24), *(_DWORD *)(v19 + 192), v8);
  if ( PBMRelatedAudioStreamCategory < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x11u,
        &WPP_ddae050dd73e37d577adf215a51a3607_Traceguids,
        PBMRelatedAudioStreamCategory);
    }
    AudPolicyLogError("CStreamStoppedWorkItem::Invoke", 479, PBMRelatedAudioStreamCategory);
  }
}
