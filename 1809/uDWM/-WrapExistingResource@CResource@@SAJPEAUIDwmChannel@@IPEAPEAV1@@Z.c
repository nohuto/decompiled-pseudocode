/*
 * XREFs of ?WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x18001B8E4
 * Callers:
 *     ?GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001AE30 (-GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?Initialize@CClientArea@@MEAAJPEAUIDwmChannel@@I@Z @ 0x180021AF0 (-Initialize@CClientArea@@MEAAJPEAUIDwmChannel@@I@Z.c)
 *     ?InitializeFromExistingResource@CVisual@@MEAAJPEAUIDwmChannel@@I@Z @ 0x180021FC0 (-InitializeFromExistingResource@CVisual@@MEAAJPEAUIDwmChannel@@I@Z.c)
 *     ?SendTopLevelWindowCommand@CTopLevelWindow@@QEAAJPEAUHWND__@@PEAVCWindowData@@_N@Z @ 0x180022B44 (-SendTopLevelWindowCommand@CTopLevelWindow@@QEAAJPEAUHWND__@@PEAVCWindowData@@_N@Z.c)
 *     ?_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x18002EAE0 (-_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?_TriggerAnimation@CAnimationClock@@AEAAJXZ @ 0x180039610 (-_TriggerAnimation@CAnimationClock@@AEAAJXZ.c)
 *     ?EnsureDesktopRenderTarget@CDesktopManager@@AEAAJXZ @ 0x180049F04 (-EnsureDesktopRenderTarget@CDesktopManager@@AEAAJXZ.c)
 *     ?Initialize@CHolographicSlate@@AEAAJQEAUHWND__@@PEAVCVisual@@II@Z @ 0x18007AF5C (-Initialize@CHolographicSlate@@AEAAJQEAUHWND__@@PEAVCVisual@@II@Z.c)
 *     ?RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z @ 0x180087DB0 (-RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CResource::WrapExistingResource(struct IDwmChannel *a1, unsigned int a2, struct CResource **a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // eax
  unsigned int v9; // edi

  v6 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         32LL);
  v7 = v6;
  if ( v6 )
  {
    *(_QWORD *)(v6 + 16) = 0LL;
    *(_DWORD *)(v6 + 8) = 1;
    *(_QWORD *)v6 = &CResource::`vftable';
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    *(_DWORD *)(v7 + 24) = a2;
    *(_QWORD *)(v7 + 16) = a1;
    v8 = (*(__int64 (__fastcall **)(struct IDwmChannel *, _QWORD))(*(_QWORD *)a1 + 88LL))(a1, a2);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x66u);
    }
    else
    {
      *a3 = (struct CResource *)v7;
      v7 = 0LL;
    }
    if ( v7 )
      CBaseObject::Release((CBaseObject *)v7);
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x61u);
  }
  return v9;
}
