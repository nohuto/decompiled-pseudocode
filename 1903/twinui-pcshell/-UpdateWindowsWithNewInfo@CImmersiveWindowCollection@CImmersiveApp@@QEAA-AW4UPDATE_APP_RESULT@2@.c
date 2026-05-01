/*
 * XREFs of ?UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4UPDATE_APP_RESULT@2@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x180031658
 * Callers:
 *     ?OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x180012194 (-OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?OnFramePositionChanged@CImmersiveApp@@UEAAJXZ @ 0x180031590 (-OnFramePositionChanged@CImmersiveApp@@UEAAJXZ.c)
 *     ?SetForceActiveWindowAppearance@CImmersiveApp@@UEAAJH@Z @ 0x1801495F0 (-SetForceActiveWindowAppearance@CImmersiveApp@@UEAAJH@Z.c)
 * Callees:
 *     ?AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x18002E830 (-AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z.c)
 *     McTemplateU0q @ 0x18003152C (McTemplateU0q.c)
 *     McTemplateU0qq @ 0x180031BD4 (McTemplateU0qq.c)
 *     ?OnSizeChanged@CSplashScreen@@QEAAXPEBUtagRECT@@@Z @ 0x180032208 (-OnSizeChanged@CSplashScreen@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::UpdateWindowsWithNewInfo(__int64 a1, _OWORD *a2, char a3)
{
  __int64 result; // rax
  _DWORD *v7; // rdi
  const struct APPLICATION_VIEW_DATA *v8; // r8
  unsigned __int64 v9; // rsi
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned int v17; // r14d
  int v18; // eax
  __int128 v19; // xmm1
  __int64 v20; // xmm0_8
  RECT rcSrc; // [rsp+20h] [rbp-58h] BYREF
  _OWORD v22[3]; // [rsp+30h] [rbp-48h] BYREF

  if ( (*(int (__fastcall **)(_QWORD, RECT *))(**(_QWORD **)(a1 + 152) + 128LL))(*(_QWORD *)(a1 + 152), &rcSrc) >= 0 )
    CopyRect((LPRECT)(a1 + 16), &rcSrc);
  if ( a2 )
  {
    *(_OWORD *)(a1 + 76) = *a2;
    *(_OWORD *)(a1 + 92) = a2[1];
    *(_OWORD *)(a1 + 108) = a2[2];
  }
  result = 2LL;
  if ( *(_QWORD *)(a1 + 176) && (a3 & 1) != 0 )
  {
    v7 = (_DWORD *)(a1 + 16);
    if ( (EqualRect((const RECT *)a1, (const RECT *)(a1 + 16))
       || *v7 > *(_DWORD *)(a1 + 24)
       || *(_DWORD *)(a1 + 20) > *(_DWORD *)(a1 + 28))
      && ImmersiveApplicationLayout::AreAppViewDataEqual(
           (ImmersiveApplicationLayout *)(a1 + 32),
           (const struct APPLICATION_VIEW_DATA *)(a1 + 76),
           v8)
      || *v7 > *(_DWORD *)(a1 + 24)
      || *(_DWORD *)(a1 + 20) > *(_DWORD *)(a1 + 28) )
    {
      return 0LL;
    }
    else
    {
      if ( !EqualRect((const RECT *)a1, (const RECT *)(a1 + 16))
        && *v7 <= *(_DWORD *)(a1 + 24)
        && *(_DWORD *)(a1 + 20) <= *(_DWORD *)(a1 + 28) )
      {
        CSplashScreen::OnSizeChanged(*(CSplashScreen **)(a1 + 248), (const struct tagRECT *)(a1 + 16));
      }
      v9 = 0LL;
      v10 = *(_OWORD *)(a1 + 92);
      v22[0] = *(_OWORD *)(a1 + 76);
      v11 = *(_OWORD *)(a1 + 108);
      v22[1] = v10;
      for ( v22[2] = v11; v9 < *(_QWORD *)(a1 + 176); ++v9 )
      {
        v12 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8 * v9);
        (*(void (__fastcall **)(__int64, __int64, _OWORD *))(*(_QWORD *)v12 + 64LL))(v12, a1 + 16, v22);
        if ( !EqualRect((const RECT *)a1, (const RECT *)(a1 + 16))
          && *v7 <= *(_DWORD *)(a1 + 24)
          && *(_DWORD *)(a1 + 20) <= *(_DWORD *)(a1 + 28)
          && (Microsoft_Windows_Immersive_ShellEnableBits & 4) != 0 )
        {
          v13 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8 * v9);
          v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 32LL))(v13);
          McTemplateU0q(v15, (__int64)&WindowLayoutChange_Start, v14);
          if ( (Microsoft_Windows_Immersive_ShellEnableBits & 4) != 0 )
          {
            v16 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8 * v9);
            v17 = ~(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v16 + 32LL))(v16);
            if ( (Microsoft_Windows_Immersive_ShellEnableBits & 4) != 0 )
            {
              McTemplateU0qq(
                (unsigned int)Microsoft_Windows_Immersive_ShellEnableBits,
                &PerfTrack_ModernApp_ResizeVisibleComplete_Start,
                0LL,
                v17);
              if ( (Microsoft_Windows_Immersive_ShellEnableBits & 4) != 0 )
                McTemplateU0qq(
                  (unsigned int)Microsoft_Windows_Immersive_ShellEnableBits,
                  &PerfTrack_ModernApp_ResizeResponsive_Start,
                  0LL,
                  v17);
            }
          }
        }
      }
      v18 = *(_DWORD *)(a1 + 116);
      v19 = *(_OWORD *)(a1 + 92);
      *(_OWORD *)(a1 + 32) = *(_OWORD *)(a1 + 76);
      v20 = *(_QWORD *)(a1 + 108);
      *(_OWORD *)(a1 + 48) = v19;
      *(_QWORD *)(a1 + 64) = v20;
      *(_DWORD *)(a1 + 72) = v18;
      CopyRect((LPRECT)a1, (const RECT *)(a1 + 16));
      return 1LL;
    }
  }
  return result;
}
