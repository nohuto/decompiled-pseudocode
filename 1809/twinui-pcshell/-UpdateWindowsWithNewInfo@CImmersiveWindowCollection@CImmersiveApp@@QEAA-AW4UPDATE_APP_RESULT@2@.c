/*
 * XREFs of ?UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4UPDATE_APP_RESULT@2@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x18002BF20
 * Callers:
 *     ?_UpdateApplication@CImmersiveApp@@AEAA?AW4UPDATE_APP_RESULT@1@PEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x18002B2F8 (-_UpdateApplication@CImmersiveApp@@AEAA-AW4UPDATE_APP_RESULT@1@PEAUIApplicationViewPosition@@QEB.c)
 *     ?OnFramePositionChanged@CImmersiveApp@@UEAAJXZ @ 0x18002BE50 (-OnFramePositionChanged@CImmersiveApp@@UEAAJXZ.c)
 *     ?OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18004AC58 (-OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?SetForceActiveWindowAppearance@CImmersiveApp@@UEAAJH@Z @ 0x18011FFA0 (-SetForceActiveWindowAppearance@CImmersiveApp@@UEAAJH@Z.c)
 * Callees:
 *     ?AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x180015C08 (-AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z.c)
 *     McTemplateU0qq @ 0x18002B0B4 (McTemplateU0qq.c)
 *     McTemplateU0q @ 0x18002BDE4 (McTemplateU0q.c)
 *     ?OnSizeChanged@CSplashScreen@@QEAAXPEBUtagRECT@@@Z @ 0x18002CAD8 (-OnSizeChanged@CSplashScreen@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::UpdateWindowsWithNewInfo(__int64 a1, _OWORD *a2, char a3)
{
  const struct APPLICATION_VIEW_DATA *v6; // r8
  unsigned __int64 v8; // rsi
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned int v16; // r14d
  int v17; // eax
  __int128 v18; // xmm1
  __int64 v19; // xmm0_8
  RECT rcSrc; // [rsp+20h] [rbp-58h] BYREF
  _OWORD v21[3]; // [rsp+30h] [rbp-48h] BYREF

  if ( (*(int (__fastcall **)(_QWORD, RECT *))(**(_QWORD **)(a1 + 152) + 128LL))(*(_QWORD *)(a1 + 152), &rcSrc) >= 0 )
    CopyRect((LPRECT)(a1 + 16), &rcSrc);
  if ( a2 )
  {
    *(_OWORD *)(a1 + 76) = *a2;
    *(_OWORD *)(a1 + 92) = a2[1];
    *(_OWORD *)(a1 + 108) = a2[2];
  }
  if ( !*(_QWORD *)(a1 + 176) || (a3 & 1) == 0 )
    return 2LL;
  if ( (EqualRect((const RECT *)a1, (const RECT *)(a1 + 16))
     || *(_DWORD *)(a1 + 16) > *(_DWORD *)(a1 + 24)
     || *(_DWORD *)(a1 + 20) > *(_DWORD *)(a1 + 28))
    && ImmersiveApplicationLayout::AreAppViewDataEqual(
         (ImmersiveApplicationLayout *)(a1 + 32),
         (const struct APPLICATION_VIEW_DATA *)(a1 + 76),
         v6)
    || *(_DWORD *)(a1 + 16) > *(_DWORD *)(a1 + 24)
    || *(_DWORD *)(a1 + 20) > *(_DWORD *)(a1 + 28) )
  {
    return 0LL;
  }
  if ( !EqualRect((const RECT *)a1, (const RECT *)(a1 + 16))
    && *(_DWORD *)(a1 + 16) <= *(_DWORD *)(a1 + 24)
    && *(_DWORD *)(a1 + 20) <= *(_DWORD *)(a1 + 28) )
  {
    CSplashScreen::OnSizeChanged(*(CSplashScreen **)(a1 + 248), (const struct tagRECT *)(a1 + 16));
  }
  v8 = 0LL;
  v9 = *(_OWORD *)(a1 + 92);
  v21[0] = *(_OWORD *)(a1 + 76);
  v10 = *(_OWORD *)(a1 + 108);
  v21[1] = v9;
  for ( v21[2] = v10; v8 < *(_QWORD *)(a1 + 176); ++v8 )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8 * v8);
    (*(void (__fastcall **)(__int64, __int64, _OWORD *))(*(_QWORD *)v11 + 64LL))(v11, a1 + 16, v21);
    if ( !EqualRect((const RECT *)a1, (const RECT *)(a1 + 16))
      && *(_DWORD *)(a1 + 16) <= *(_DWORD *)(a1 + 24)
      && *(_DWORD *)(a1 + 20) <= *(_DWORD *)(a1 + 28)
      && (Microsoft_Windows_Immersive_ShellEnableBits & 4) != 0 )
    {
      v12 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8 * v8);
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 32LL))(v12);
      McTemplateU0q(v14, (__int64)&WindowLayoutChange_Start, v13);
      if ( (Microsoft_Windows_Immersive_ShellEnableBits & 4) != 0 )
      {
        v15 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8 * v8);
        v16 = ~(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v15 + 32LL))(v15);
        if ( (Microsoft_Windows_Immersive_ShellEnableBits & 4) != 0 )
        {
          McTemplateU0qq(
            (unsigned int)Microsoft_Windows_Immersive_ShellEnableBits,
            (__int64)&PerfTrack_ModernApp_ResizeVisibleComplete_Start,
            0LL,
            v16);
          if ( (Microsoft_Windows_Immersive_ShellEnableBits & 4) != 0 )
            McTemplateU0qq(
              (unsigned int)Microsoft_Windows_Immersive_ShellEnableBits,
              (__int64)&PerfTrack_ModernApp_ResizeResponsive_Start,
              0LL,
              v16);
        }
      }
    }
  }
  v17 = *(_DWORD *)(a1 + 116);
  v18 = *(_OWORD *)(a1 + 92);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a1 + 76);
  v19 = *(_QWORD *)(a1 + 108);
  *(_OWORD *)(a1 + 48) = v18;
  *(_QWORD *)(a1 + 64) = v19;
  *(_DWORD *)(a1 + 72) = v17;
  CopyRect((LPRECT)a1, (const RECT *)(a1 + 16));
  return 1LL;
}
