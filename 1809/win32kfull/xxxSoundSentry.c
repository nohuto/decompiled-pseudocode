/*
 * XREFs of xxxSoundSentry @ 0x1C0154BE0
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0037588 (xxxProcessEventMessage.c)
 *     xxxMessageBeep @ 0x1C0154B50 (xxxMessageBeep.c)
 *     xxxOldMessageBeep @ 0x1C01B9364 (xxxOldMessageBeep.c)
 *     UserBeep @ 0x1C01B9414 (UserBeep.c)
 *     NtUserSoundSentry @ 0x1C021E490 (NtUserSoundSentry.c)
 * Callees:
 *     InternalSetTimer @ 0x1C0017750 (InternalSetTimer.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     NtGdiPatBlt @ 0x1C0056440 (NtGdiPatBlt.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     GetScreenRectForDpi @ 0x1C007ABA4 (GetScreenRectForDpi.c)
 *     GetPrimaryMonitorRect @ 0x1C00BA848 (GetPrimaryMonitorRect.c)
 *     xxxFlashWindow @ 0x1C00DE38C (xxxFlashWindow.c)
 *     GreTransformPoints @ 0x1C00F6EBC (GreTransformPoints.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     GreEnableAppContainerRestriction @ 0x1C0257658 (GreEnableAppContainerRestriction.c)
 */

__int64 __fastcall xxxSoundSentry(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  __int64 v6; // rbx
  signed int v7; // r8d
  __int64 v8; // rax
  HDC v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 DesktopWindow; // rax
  HDC DCEx; // rbx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  HDC v18; // rcx
  __m128i v19; // xmm0
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD v25[3]; // [rsp+30h] [rbp-50h] BYREF
  __m128i v26; // [rsp+48h] [rbp-38h] BYREF
  __m128i v27; // [rsp+58h] [rbp-28h] BYREF
  __m128i v28; // [rsp+68h] [rbp-18h] BYREF

  if ( (HIDWORD(gSoundSentry) & 1) == 0 )
  {
    v4 = 50LL;
LABEL_3:
    UserSetLastError(v4, a2, a3, a4);
    return 0LL;
  }
  if ( gpqForeground )
  {
    v6 = *(_QWORD *)(gpqForeground + 120LL);
    if ( v6 )
    {
      if ( !gtmridSoundSentry )
      {
        if ( (unsigned int)(*((_DWORD *)&gSoundSentry + 8) - 1) <= 2 )
        {
          v7 = *(_DWORD *)(gpsi + 4984LL);
          gdwCurrentEffect = *((_DWORD *)&gSoundSentry + 8);
          if ( v7 < 1 )
            v7 = 1200;
          ghwndSoundSentry = *(HWND *)v6;
          gtmridSoundSentry = InternalSetTimer(0LL, 0LL, v7, (__int64)SoundSentryTimer, 0, 20);
          if ( !gtmridSoundSentry )
          {
            v4 = 170LL;
            goto LABEL_3;
          }
        }
        switch ( *((_DWORD *)&gSoundSentry + 8) )
        {
          case 1:
            ThreadWin32Thread = W32GetThreadWin32Thread(
                                  (__int64)KeGetCurrentThread(),
                                  (unsigned int)(*((_DWORD *)&gSoundSentry + 8) - 1));
            v25[0] = *(_QWORD *)(ThreadWin32Thread + 416);
            *(_QWORD *)(ThreadWin32Thread + 416) = v25;
            v25[1] = v6;
            _InterlockedAdd((volatile signed __int32 *)(v6 + 8), 1u);
            xxxFlashWindow((unsigned __int64 *)v6, 3u, 0);
            ThreadUnlock1(v24, v23);
            return 1LL;
          case 2:
            if ( (unsigned int)IsWindowDesktopComposed(v6) )
            {
              v28 = *(__m128i *)(*(_QWORD *)(v6 + 40) + 88LL);
              LogicalToPhysicalDPIRect(&v28, &v28, *(unsigned int *)(*(_QWORD *)(v6 + 40) + 288LL), 0LL);
              grcScreenFlash = (struct tagRECT)v28;
              DesktopWindow = GetDesktopWindow(v6);
              DCEx = (HDC)_GetDCEx(DesktopWindow, 0LL, 3LL);
              GreEnableAppContainerRestriction(0LL);
              if ( gdwInAtomicOperation )
              {
                v15 = gdwExtraInstrumentations;
                if ( (gdwExtraInstrumentations & 1) != 0 )
                  KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
              }
              UserSessionSwitchLeaveCrit(v15, gdwInAtomicOperation, v16, v17);
              NtGdiPatBlt(
                DCEx,
                v28.m128i_i32[0],
                v28.m128i_i32[1],
                v28.m128i_i32[2] - v28.m128i_i32[0],
                v28.m128i_i32[3] - v28.m128i_i32[1],
                5570569);
              EnterCrit(0LL, 1LL);
              GreEnableAppContainerRestriction(1LL);
              v18 = DCEx;
              goto LABEL_29;
            }
            v20 = _GetDCEx(v6, 0LL, 65537LL);
            v21 = *(_QWORD *)(v6 + 40);
            v9 = (HDC)v20;
            if ( (*(_WORD *)(v21 + 42) & 0x2FFF) == 0x29D )
              v19 = *GetPrimaryMonitorRect(&v27, v21);
            else
              v19 = *(__m128i *)(v21 + 88);
            v28.m128i_i32[2] = v19.m128i_i32[2] - v19.m128i_i32[0];
            v28.m128i_i32[3] = v19.m128i_i32[3] - v19.m128i_i32[1];
            v28.m128i_i64[0] = 0LL;
            GreTransformPoints(v9, (struct _POINTL *)&v28, (struct _POINTL *)&v28, 2, 0);
            GreEnableAppContainerRestriction(0LL);
            goto LABEL_27;
          case 3:
            v8 = GetDesktopWindow(v6);
            v9 = (HDC)_GetDCEx(v8, 0LL, 3LL);
            v28 = *GetScreenRectForDpi(&v26, 0);
            GreEnableAppContainerRestriction(0LL);
            if ( (unsigned int)IsWindowDesktopComposed(v6) )
            {
              if ( gdwInAtomicOperation )
              {
                v10 = gdwExtraInstrumentations;
                if ( (gdwExtraInstrumentations & 1) != 0 )
                  KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
              }
              UserSessionSwitchLeaveCrit(v10, gdwInAtomicOperation, v11, v12);
              NtGdiPatBlt(
                v9,
                v28.m128i_i32[0],
                v28.m128i_i32[1],
                v28.m128i_i32[2] - v28.m128i_i32[0],
                v28.m128i_i32[3] - v28.m128i_i32[1],
                5570569);
              EnterCrit(0LL, 1LL);
              goto LABEL_28;
            }
LABEL_27:
            NtGdiPatBlt(
              v9,
              v28.m128i_i32[0],
              v28.m128i_i32[1],
              v28.m128i_i32[2] - v28.m128i_i32[0],
              v28.m128i_i32[3] - v28.m128i_i32[1],
              5570569);
LABEL_28:
            GreEnableAppContainerRestriction(1LL);
            v18 = v9;
LABEL_29:
            _ReleaseDC(v18);
            break;
        }
      }
    }
  }
  return 1LL;
}
