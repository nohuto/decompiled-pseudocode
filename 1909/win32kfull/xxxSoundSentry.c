/*
 * XREFs of xxxSoundSentry @ 0x1C015BAE0
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00712F4 (xxxProcessEventMessage.c)
 *     xxxMessageBeep @ 0x1C015BA50 (xxxMessageBeep.c)
 *     xxxOldMessageBeep @ 0x1C01CD164 (xxxOldMessageBeep.c)
 *     UserBeep @ 0x1C01CD214 (UserBeep.c)
 *     NtUserSoundSentry @ 0x1C0236170 (NtUserSoundSentry.c)
 * Callees:
 *     GetPrimaryMonitorRect @ 0x1C001161C (GetPrimaryMonitorRect.c)
 *     xxxFlashWindow @ 0x1C0015284 (xxxFlashWindow.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     GetScreenRectForDpi @ 0x1C0034948 (GetScreenRectForDpi.c)
 *     InternalSetTimer @ 0x1C004C470 (InternalSetTimer.c)
 *     _GetDesktopWindow @ 0x1C006C4B0 (_GetDesktopWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     NtGdiPatBlt @ 0x1C00BB170 (NtGdiPatBlt.c)
 *     GreTransformPoints @ 0x1C00D963C (GreTransformPoints.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     GreEnableAppContainerRestriction @ 0x1C0270868 (GreEnableAppContainerRestriction.c)
 */

__int64 __fastcall xxxSoundSentry(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  unsigned __int64 *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // rax
  HDC v9; // rdi
  __int64 v10; // rcx
  __int64 DesktopWindow; // rax
  HDC DCEx; // rbx
  __int64 v13; // rcx
  HDC v14; // rcx
  __int128 v15; // xmm0
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 *v23; // [rsp+38h] [rbp-48h]
  __int64 v24; // [rsp+40h] [rbp-40h]
  __int128 v25; // [rsp+48h] [rbp-38h] BYREF
  __int128 v26; // [rsp+58h] [rbp-28h] BYREF
  struct tagRECT v27; // [rsp+68h] [rbp-18h] BYREF

  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v27 = (struct tagRECT)0LL;
  if ( (HIDWORD(gSoundSentry) & 1) == 0 )
  {
    v4 = 50LL;
LABEL_3:
    UserSetLastError(v4, a2, a3, a4);
    return 0LL;
  }
  if ( gpqForeground )
  {
    v6 = *(unsigned __int64 **)(gpqForeground + 128LL);
    if ( v6 )
    {
      if ( !gtmridSoundSentry )
      {
        if ( (unsigned int)(*((_DWORD *)&gSoundSentry + 8) - 1) <= 2 )
        {
          gdwCurrentEffect = *((_DWORD *)&gSoundSentry + 8);
          v7 = *(unsigned int *)(gpsi + 4984LL);
          if ( (int)v7 < 1 )
            v7 = 1200LL;
          ghwndSoundSentry = (HWND)*v6;
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
                                  (unsigned int)(*((_DWORD *)&gSoundSentry + 8) - 1),
                                  a3);
            v22 = *(_QWORD *)(ThreadWin32Thread + 408);
            *(_QWORD *)(ThreadWin32Thread + 408) = &v22;
            v23 = v6;
            HMLockObject(v6);
            xxxFlashWindow(v6, 3u, 0);
            ThreadUnlock1(v20, v19, v21);
            return 1LL;
          case 2:
            if ( (unsigned int)IsWindowDesktopComposed(v6) )
            {
              v27 = *(struct tagRECT *)(v6[5] + 88);
              LogicalToPhysicalDPIRect(&v27, &v27, *(unsigned int *)(v6[5] + 288), 0LL);
              grcScreenFlash = v27;
              DesktopWindow = GetDesktopWindow((__int64)v6);
              DCEx = (HDC)_GetDCEx(DesktopWindow, 0LL, 3LL);
              GreEnableAppContainerRestriction(0LL);
              if ( gdwInAtomicOperation )
              {
                v13 = gdwExtraInstrumentations;
                if ( (gdwExtraInstrumentations & 1) != 0 )
                  KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
              }
              UserSessionSwitchLeaveCrit(v13);
              NtGdiPatBlt(DCEx, (unsigned int)v27.left, v27.top, v27.right - v27.left, v27.bottom - v27.top, 5570569);
              EnterCrit(0LL, 1LL);
              GreEnableAppContainerRestriction(1LL);
              v14 = DCEx;
              goto LABEL_29;
            }
            v16 = _GetDCEx(v6, 0LL, 65537LL);
            v17 = v6[5];
            v9 = (HDC)v16;
            if ( (*(_WORD *)(v17 + 42) & 0x3FFF) == 0x29D )
              v15 = *GetPrimaryMonitorRect(&v26);
            else
              v15 = *(_OWORD *)(v17 + 88);
            v27.right = DWORD2(v15) - v15;
            v27.bottom = HIDWORD(v15) - DWORD1(v15);
            *(_QWORD *)&v27.left = 0LL;
            GreTransformPoints((__int64)v9, (struct _POINTL *)&v27, (struct _POINTL *)&v27, 2, 0);
            GreEnableAppContainerRestriction(0LL);
            goto LABEL_27;
          case 3:
            v8 = GetDesktopWindow((__int64)v6);
            v9 = (HDC)_GetDCEx(v8, 0LL, 3LL);
            v27 = (struct tagRECT)*GetScreenRectForDpi(&v25, 0);
            GreEnableAppContainerRestriction(0LL);
            if ( (unsigned int)IsWindowDesktopComposed(v6) )
            {
              if ( gdwInAtomicOperation )
              {
                v10 = gdwExtraInstrumentations;
                if ( (gdwExtraInstrumentations & 1) != 0 )
                  KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
              }
              UserSessionSwitchLeaveCrit(v10);
              NtGdiPatBlt(v9, (unsigned int)v27.left, v27.top, v27.right - v27.left, v27.bottom - v27.top, 5570569);
              EnterCrit(0LL, 1LL);
              goto LABEL_28;
            }
LABEL_27:
            NtGdiPatBlt(v9, (unsigned int)v27.left, v27.top, v27.right - v27.left, v27.bottom - v27.top, 5570569);
LABEL_28:
            GreEnableAppContainerRestriction(1LL);
            v14 = v9;
LABEL_29:
            _ReleaseDC(v14);
            break;
        }
      }
    }
  }
  return 1LL;
}
