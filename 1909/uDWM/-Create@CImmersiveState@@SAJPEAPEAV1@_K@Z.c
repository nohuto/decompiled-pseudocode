/*
 * XREFs of ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x180029BC8
 * Callers:
 *     ?ShouldAnimateShowWindow@CStoryboard@@SA_NPEBVCWindowData@@@Z @ 0x180004470 (-ShouldAnimateShowWindow@CStoryboard@@SA_NPEBVCWindowData@@@Z.c)
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x1800282B0 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x180039EBC (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 *     ?_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z @ 0x18004CAB4 (-_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z.c)
 *     ?OnBeginTransitionRequest@CAppLaunchSwitch@@UEAAJXZ @ 0x1800A8560 (-OnBeginTransitionRequest@CAppLaunchSwitch@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CAppArrangementImmediate@@EEAAJXZ @ 0x1800A87B0 (-OnEndTransitionRequest@CAppArrangementImmediate@@EEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CImmersiveState@@AEAAJ_K@Z @ 0x180029CEC (-Initialize@CImmersiveState@@AEAAJ_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveState::Create(struct CImmersiveState **a1, unsigned __int64 a2)
{
  __int64 v4; // rax
  volatile signed __int32 *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  void *v9; // [rsp+28h] [rbp-10h]

  *a1 = 0LL;
  v4 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         88LL);
  v5 = (volatile signed __int32 *)v4;
  if ( v4 )
  {
    *(_DWORD *)(v4 + 8) = 1;
    *(_QWORD *)v4 = &CImmersiveState::`vftable';
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_QWORD *)(v4 + 24) = 0LL;
    *(_DWORD *)(v4 + 32) = 0;
    *(_DWORD *)(v4 + 36) = 0;
    *(_DWORD *)(v4 + 40) = 0;
    *(_QWORD *)(v4 + 48) = 0LL;
    *(_QWORD *)(v4 + 64) = 0LL;
    *(_BYTE *)(v4 + 56) = 0;
    *(_QWORD *)(v4 + 72) = 0LL;
    *(_QWORD *)(v4 + 80) = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = CImmersiveState::Initialize((CImmersiveState *)v5, a2);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x1Au, v9);
    }
    else
    {
      *a1 = (struct CImmersiveState *)v5;
      _InterlockedIncrement(v5 + 2);
    }
    CBaseObject::Release((CBaseObject *)v5);
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x18u, v9);
  }
  return v7;
}
