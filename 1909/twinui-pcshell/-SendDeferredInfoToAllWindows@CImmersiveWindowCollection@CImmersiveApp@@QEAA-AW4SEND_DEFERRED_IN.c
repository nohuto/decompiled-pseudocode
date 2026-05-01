/*
 * XREFs of ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x18003CB1C
 * Callers:
 *     ?GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAUHWND__@@@Z @ 0x180010A80 (-GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAU.c)
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x1800395E0 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z @ 0x18003C3E0 (-HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z.c)
 *     ?_UpdateApplication@CImmersiveApp@@AEAA?AW4UPDATE_APP_RESULT@1@PEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x18003CA3C (-_UpdateApplication@CImmersiveApp@@AEAA-AW4UPDATE_APP_RESULT@1@PEAUIApplicationViewPosition@@QEB.c)
 *     ?HandleSessionIdleStateChanged@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@@Z @ 0x180164C00 (-HandleSessionIdleStateChanged@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@@Z.c)
 *     ?SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSITION_TYPE@@@Z @ 0x180168020 (-SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSI.c)
 *     ?_OnDeferredGhostBitsClear@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x18016A56C (-_OnDeferredGhostBitsClear@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 *     ?_UpdateZOrderActivation@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K_N@Z @ 0x18016AC50 (-_UpdateZOrderActivation@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K_N@Z.c)
 * Callees:
 *     ?AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x180037580 (-AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z.c)
 *     McTemplateU0q @ 0x180039F5C (McTemplateU0q.c)
 *     McTemplateU0qq @ 0x18003A604 (McTemplateU0qq.c)
 *     ?OnSizeChanged@CSplashScreen@@QEAAXPEBUtagRECT@@@Z @ 0x18003AC38 (-OnSizeChanged@CSplashScreen@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?HasNewPositionInfo@CAppLocalCache@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180164EB4 (-HasNewPositionInfo@CAppLocalCache@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::SendDeferredInfoToAllWindows(__int64 a1)
{
  unsigned int v1; // r14d
  const RECT *v3; // rdi
  const struct APPLICATION_VIEW_DATA *v4; // r8
  unsigned __int64 v6; // rsi
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned int v14; // r15d
  int v15; // r8d
  __int128 v16; // xmm1
  __int64 v17; // xmm0_8
  _OWORD v18[3]; // [rsp+20h] [rbp-58h] BYREF

  v1 = 0;
  if ( *(_QWORD *)(a1 + 176) )
  {
    if ( (v3 = (const RECT *)(a1 + 16), !EqualRect((const RECT *)a1, (const RECT *)(a1 + 16)))
      && v3->left <= v3->right
      && v3->top <= v3->bottom
      || !ImmersiveApplicationLayout::AreAppViewDataEqual(
            (ImmersiveApplicationLayout *)(a1 + 32),
            (const struct APPLICATION_VIEW_DATA *)(a1 + 76),
            v4) )
    {
      if ( v3->left <= v3->right && v3->top <= v3->bottom )
      {
        v1 = 1;
        if ( CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache::HasNewPositionInfo((CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache *)a1) )
          CSplashScreen::OnSizeChanged(*(CSplashScreen **)(a1 + 248), v3);
        v6 = 0LL;
        v7 = *(_OWORD *)(a1 + 92);
        v18[0] = *(_OWORD *)(a1 + 76);
        v8 = *(_OWORD *)(a1 + 108);
        v18[1] = v7;
        for ( v18[2] = v8; v6 < *(_QWORD *)(a1 + 176); ++v6 )
        {
          v9 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8 * v6);
          (*(void (__fastcall **)(__int64, const RECT *, _OWORD *))(*(_QWORD *)v9 + 64LL))(v9, v3, v18);
          if ( CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache::HasNewPositionInfo((CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache *)a1)
            && (Microsoft_Windows_Immersive_ShellEnableBits & 4) != 0 )
          {
            v10 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8 * v6);
            v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10);
            McTemplateU0q(v12, (__int64)&WindowLayoutChange_Start, v11);
            if ( (Microsoft_Windows_Immersive_ShellEnableBits & 4) != 0 )
            {
              v13 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8 * v6);
              v14 = ~(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v13 + 32LL))(v13);
              if ( (Microsoft_Windows_Immersive_ShellEnableBits & 4) != 0 )
              {
                McTemplateU0qq(
                  (unsigned int)Microsoft_Windows_Immersive_ShellEnableBits,
                  (__int64)&PerfTrack_ModernApp_ResizeVisibleComplete_Start,
                  0LL,
                  v14);
                if ( (Microsoft_Windows_Immersive_ShellEnableBits & 4) != 0 )
                  McTemplateU0qq(
                    (unsigned int)Microsoft_Windows_Immersive_ShellEnableBits,
                    (__int64)&PerfTrack_ModernApp_ResizeResponsive_Start,
                    0LL,
                    v14);
              }
            }
          }
        }
        v15 = *(_DWORD *)(a1 + 116);
        v16 = *(_OWORD *)(a1 + 92);
        *(_OWORD *)(a1 + 32) = *(_OWORD *)(a1 + 76);
        v17 = *(_QWORD *)(a1 + 108);
        *(_OWORD *)(a1 + 48) = v16;
        *(_QWORD *)(a1 + 64) = v17;
        *(_DWORD *)(a1 + 72) = v15;
        CopyRect((LPRECT)a1, v3);
      }
    }
  }
  return v1;
}
