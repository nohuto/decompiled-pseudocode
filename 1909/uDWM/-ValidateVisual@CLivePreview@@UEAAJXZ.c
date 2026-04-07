/*
 * XREFs of ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x18007AAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x1800212F4 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x1800216A0 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SendRoundTripRequest@CDesktopManager@@QEAAJPEAI@Z @ 0x180033854 (-SendRoundTripRequest@CDesktopManager@@QEAAJPEAI@Z.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x1800380E8 (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180077E80 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ @ 0x18007B35C (-_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ.c)
 *     ?_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ @ 0x18007B41C (-_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x18007B4DC (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ @ 0x18007C794 (-_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ.c)
 *     ?GetCurrentOpacity@CLivePreviewTimeline@@QEAANXZ @ 0x18007E070 (-GetCurrentOpacity@CLivePreviewTimeline@@QEAANXZ.c)
 */

__int64 __fastcall CLivePreview::ValidateVisual(CLivePreview *this)
{
  int v2; // edi
  __int64 v3; // rdx
  CLivePreviewTimeline *v5; // rcx
  CBaseObject *v6; // rcx
  unsigned int i; // edi
  __int64 v8; // rax
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = CVisual::ValidateVisual(this);
  if ( v2 < 0 )
  {
    v3 = 1666LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"windows\\dwm\\udwm\\livepreview.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
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
    v5 = (CLivePreviewTimeline *)*((_QWORD *)this + 58);
    if ( *((_BYTE *)v5 + 72) )
    {
      if ( *((_DWORD *)this + 82)
        && (unsigned __int8)EtwEventEnabled(Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmLivePreviewAnimation_Stop) )
      {
        CDesktopManager::SendRoundTripRequest(CDesktopManager::s_pDesktopManagerInstance, (unsigned int *)this + 144);
      }
      if ( *((_DWORD *)this + 146) == 4 )
      {
        CLivePreview::_ClearAnimatedVisuals(this);
        v2 = CLivePreview::_CleanupClonedVisualTree(this);
        if ( v2 < 0 )
        {
          v3 = 1689LL;
          goto LABEL_3;
        }
        v2 = CLivePreview::_ClearAnimationOpaqueVisuals(this);
        if ( v2 < 0 )
        {
          v3 = 1690LL;
          goto LABEL_3;
        }
        CLivePreview::_ReleasePerMonitorResources(this);
        v6 = (CBaseObject *)*((_QWORD *)this + 69);
        if ( v6 )
        {
          CBaseObject::Release(v6);
          *((_QWORD *)this + 69) = 0LL;
        }
        v2 = CRenderDataVisual::ClearInstructions(this);
        if ( v2 < 0 )
        {
          v3 = 1695LL;
          goto LABEL_3;
        }
      }
      *((_DWORD *)this + 141) = 0;
      CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
      v5 = (CLivePreviewTimeline *)*((_QWORD *)this + 58);
    }
    else
    {
      ++*((_DWORD *)this + 141);
    }
    CLivePreviewTimeline::GetCurrentOpacity(v5);
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 59) + 16LL) + 312LL))(
           *(_QWORD *)(*((_QWORD *)this + 59) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 59) + 24LL));
    if ( v2 < 0 )
    {
      v3 = 1710LL;
      goto LABEL_3;
    }
    if ( *((_BYTE *)this + 281) )
    {
      for ( i = 0; i < *((_DWORD *)this + 114); ++i )
      {
        v8 = *((_QWORD *)this + 54);
        v9 = 32LL * i;
        if ( *(_BYTE *)(v9 + v8 + 24) )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v9 + v8) + 104LL))(*(_QWORD *)(v9 + v8));
      }
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 65) + 104LL))(*((_QWORD *)this + 65));
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 63) + 64LL))(*((_QWORD *)this + 63));
    }
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 60) + 16LL) + 312LL))(
           *(_QWORD *)(*((_QWORD *)this + 60) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 60) + 24LL));
    if ( v2 < 0 )
    {
      v3 = 1731LL;
      goto LABEL_3;
    }
    *((_DWORD *)this + 20) &= ~0x2000u;
  }
  return 0LL;
}
