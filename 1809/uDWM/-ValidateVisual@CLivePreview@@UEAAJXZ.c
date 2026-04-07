/*
 * XREFs of ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x180074500
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180014C30 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180020378 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?SendRoundTripRequest@CDesktopManager@@QEAAJPEAI@Z @ 0x180033BA4 (-SendRoundTripRequest@CDesktopManager@@QEAAJPEAI@Z.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x180037974 (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ @ 0x180074D88 (-_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ.c)
 *     ?_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ @ 0x180074E48 (-_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x180074F08 (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ @ 0x18007619C (-_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ.c)
 *     ?GetCurrentOpacity@CLivePreviewTimeline@@QEAANXZ @ 0x180077AB0 (-GetCurrentOpacity@CLivePreviewTimeline@@QEAANXZ.c)
 */

__int64 __fastcall CLivePreview::ValidateVisual(CLivePreview *this)
{
  int v2; // eax
  unsigned int v3; // edi
  CLivePreviewTimeline *v4; // rcx
  int v5; // eax
  int v6; // eax
  CBaseObject *v7; // rcx
  int v8; // eax
  int v9; // eax
  unsigned int i; // edi
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // eax

  v2 = CVisual::ValidateVisual(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x690u);
    return v3;
  }
  if ( (*((_DWORD *)this + 20) & 0x2000) != 0 )
  {
    if ( !*((_DWORD *)this + 141)
      && *((_DWORD *)this + 146) == 3
      && (unsigned __int8)EtwEventEnabled(
                            Microsoft_Windows_Dwm_Udwm_Provider_Context,
                            &PerfTrack_UdwmLivePreviewAnimation_FirstFrameFinished_Info)
      && !GetSystemMetrics(8193) )
    {
      CDesktopManager::SendRoundTripRequest(CDesktopManager::s_pDesktopManagerInstance, (unsigned int *)this + 145);
    }
    v4 = (CLivePreviewTimeline *)*((_QWORD *)this + 58);
    if ( *((_BYTE *)v4 + 72) )
    {
      if ( *((_DWORD *)this + 82)
        && (unsigned __int8)EtwEventEnabled(Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmLivePreviewAnimation_Stop) )
      {
        CDesktopManager::SendRoundTripRequest(CDesktopManager::s_pDesktopManagerInstance, (unsigned int *)this + 144);
      }
      if ( *((_DWORD *)this + 146) == 4 )
      {
        CLivePreview::_ClearAnimatedVisuals(this);
        v5 = CLivePreview::_CleanupClonedVisualTree(this);
        v3 = v5;
        if ( v5 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x6A7u);
          return v3;
        }
        v6 = CLivePreview::_ClearAnimationOpaqueVisuals(this);
        v3 = v6;
        if ( v6 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x6A8u);
          return v3;
        }
        CLivePreview::_ReleasePerMonitorResources(this);
        v7 = (CBaseObject *)*((_QWORD *)this + 69);
        if ( v7 )
        {
          CBaseObject::Release(v7);
          *((_QWORD *)this + 69) = 0LL;
        }
        v8 = CRenderDataVisual::ClearInstructions(this);
        v3 = v8;
        if ( v8 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x6ADu);
          return v3;
        }
      }
      *((_DWORD *)this + 141) = 0;
      CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
      v4 = (CLivePreviewTimeline *)*((_QWORD *)this + 58);
    }
    else
    {
      ++*((_DWORD *)this + 141);
    }
    CLivePreviewTimeline::GetCurrentOpacity(v4);
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 59) + 16LL) + 304LL))(
           *(_QWORD *)(*((_QWORD *)this + 59) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 59) + 24LL));
    v3 = v9;
    if ( v9 >= 0 )
    {
      if ( *((_BYTE *)this + 281) )
      {
        for ( i = 0; i < *((_DWORD *)this + 114); ++i )
        {
          v11 = *((_QWORD *)this + 54);
          v12 = 32LL * i;
          if ( *(_BYTE *)(v12 + v11 + 24) )
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v12 + v11) + 104LL))(*(_QWORD *)(v12 + v11));
        }
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 65) + 104LL))(*((_QWORD *)this + 65));
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 63) + 64LL))(*((_QWORD *)this + 63));
      }
      v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 60) + 16LL) + 304LL))(
              *(_QWORD *)(*((_QWORD *)this + 60) + 16LL),
              *(unsigned int *)(*((_QWORD *)this + 60) + 24LL));
      v3 = v13;
      if ( v13 >= 0 )
        *((_DWORD *)this + 20) &= ~0x2000u;
      else
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x6D1u);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x6BCu);
    }
  }
  return v3;
}
