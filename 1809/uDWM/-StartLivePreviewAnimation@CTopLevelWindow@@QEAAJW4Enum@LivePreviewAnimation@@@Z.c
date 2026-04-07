/*
 * XREFs of ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x180088088
 * Callers:
 *     ?_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z @ 0x180075E74 (-_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z.c)
 *     ?_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ @ 0x1800766A8 (-_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ.c)
 *     ?_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV?$DynArray@PEAVCWindowData@@$0A@@@_N@Z @ 0x1800767CC (-_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV-$DynArray@PEAVCWindowData@@$0A@@@_N@Z.c)
 * Callees:
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x180039D38 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180039E24 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ??0CLivePreviewTimeline@@QEAA@XZ @ 0x18003DD5C (--0CLivePreviewTimeline@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z @ 0x18007422C (-GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z.c)
 *     ?RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z @ 0x180077AF8 (-RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z.c)
 *     ?HasAnimation@CTopLevelWindow@@AEAA_NXZ @ 0x18008769C (-HasAnimation@CTopLevelWindow@@AEAA_NXZ.c)
 */

__int64 __fastcall CTopLevelWindow::StartLivePreviewAnimation(__int64 a1, int a2)
{
  unsigned int v3; // edi
  int v4; // edx
  struct CVisual *v5; // rcx
  double v6; // xmm6_8
  float AnimationDuration; // xmm0_4
  int v8; // r9d
  int v9; // r9d
  CLivePreviewTimeline *v10; // rax
  CLivePreviewTimeline *v11; // rax

  v3 = 0;
  *(_DWORD *)(a1 + 248) = a2;
  if ( !CTopLevelWindow::HasAnimation((CTopLevelWindow *)a1) )
  {
    CDesktopManager::RegisterForGlobalTimeChangeNotification(v5);
    v4 = *(_DWORD *)(a1 + 248);
  }
  ++*(_DWORD *)(a1 + 244);
  v6 = 0.0;
  if ( v4 == 3 )
  {
    AnimationDuration = CLivePreview::GetAnimationDuration(2);
    v4 = v9;
  }
  else
  {
    if ( v4 != 4 )
      goto LABEL_8;
    AnimationDuration = CLivePreview::GetAnimationDuration(3);
    v4 = v8 + 1;
  }
  v6 = AnimationDuration;
LABEL_8:
  v10 = *(CLivePreviewTimeline **)(a1 + 672);
  if ( v10 )
  {
LABEL_15:
    CLivePreviewTimeline::RestartTimeline((__int64)v10, v4, v6);
    return v3;
  }
  v11 = (CLivePreviewTimeline *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 16LL))(
                                  WPF::g_pProcessHeap,
                                  96LL);
  if ( v11 )
    v10 = CLivePreviewTimeline::CLivePreviewTimeline(v11);
  else
    v10 = 0LL;
  *(_QWORD *)(a1 + 672) = v10;
  if ( v10 )
  {
    v4 = *(_DWORD *)(a1 + 248);
    goto LABEL_15;
  }
  v3 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x11CFu);
  CTopLevelWindow::StopLivePreviewAnimation((CTopLevelWindow *)a1);
  return v3;
}
