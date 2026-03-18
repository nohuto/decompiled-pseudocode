/*
 * XREFs of xxxSoundSentry @ 0x1C010FD10
 * Callers:
 *     NtUserSoundSentry @ 0x1C0007D50 (NtUserSoundSentry.c)
 *     xxxProcessEventMessage @ 0x1C003C798 (xxxProcessEventMessage.c)
 *     xxxMessageBeep @ 0x1C01339F0 (xxxMessageBeep.c)
 *     xxxOldMessageBeep @ 0x1C0198324 (xxxOldMessageBeep.c)
 *     UserBeep @ 0x1C01983C4 (UserBeep.c)
 * Callees:
 *     InternalSetTimer @ 0x1C001A1B0 (InternalSetTimer.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     xxxFlashWindow @ 0x1C006312C (xxxFlashWindow.c)
 *     GetPrimaryMonitorRect @ 0x1C00650A4 (GetPrimaryMonitorRect.c)
 *     NtGdiPatBlt @ 0x1C009DAD0 (NtGdiPatBlt.c)
 *     GreTransformPoints @ 0x1C00E552C (GreTransformPoints.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     GetScreenRect @ 0x1C022B0B4 (GetScreenRect.c)
 *     GreEnableAppContainerRestriction @ 0x1C023FF68 (GreEnableAppContainerRestriction.c)
 */

__int64 __fastcall xxxSoundSentry(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v4; // rbx
  signed int v5; // r8d
  __m128i v6; // xmm6
  __int64 v7; // rax
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
  __int64 v19; // rax
  __int64 v20; // rdx
  __int128 v21; // xmm0
  __int64 ThreadWin32Thread; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  _QWORD v26[3]; // [rsp+38h] [rbp-9h] BYREF
  _BYTE v27[16]; // [rsp+50h] [rbp+Fh] BYREF
  __int128 v28; // [rsp+60h] [rbp+1Fh] BYREF
  struct tagRECT v29; // [rsp+70h] [rbp+2Fh] BYREF

  if ( (HIDWORD(gSoundSentry) & 1) == 0 )
  {
    v2 = 50LL;
LABEL_3:
    UserSetLastError(v2, a2);
    return 0LL;
  }
  if ( gpqForeground )
  {
    v4 = *(_QWORD *)(gpqForeground + 120LL);
    if ( v4 )
    {
      if ( !gtmridSoundSentry )
      {
        if ( (unsigned int)(*((_DWORD *)&gSoundSentry + 8) - 1) <= 2 )
        {
          v5 = *(_DWORD *)(gpsi + 4984LL);
          gdwCurrentEffect = *((_DWORD *)&gSoundSentry + 8);
          if ( v5 < 1 )
            v5 = 1200;
          ghwndSoundSentry = *(HWND *)v4;
          gtmridSoundSentry = InternalSetTimer(0LL, 0LL, v5, (__int64)SoundSentryTimer, 0, 20);
          if ( !gtmridSoundSentry )
          {
            v2 = 170LL;
            goto LABEL_3;
          }
        }
        switch ( *((_DWORD *)&gSoundSentry + 8) )
        {
          case 1:
            ThreadWin32Thread = W32GetThreadWin32Thread(
                                  (__int64)KeGetCurrentThread(),
                                  (unsigned int)(*((_DWORD *)&gSoundSentry + 8) - 1));
            v26[0] = *(_QWORD *)(ThreadWin32Thread + 408);
            *(_QWORD *)(ThreadWin32Thread + 408) = v26;
            v26[1] = v4;
            _InterlockedAdd((volatile signed __int32 *)(v4 + 8), 1u);
            xxxFlashWindow((unsigned __int64 *)v4, 3u, 0);
            ThreadUnlock1(v24, v23, v25);
            return 1LL;
          case 2:
            if ( (unsigned int)IsWindowDesktopComposed(v4) )
            {
              v29 = *(struct tagRECT *)(*(_QWORD *)(v4 + 40) + 88LL);
              LogicalToPhysicalDPIRect(&v29, &v29, *(unsigned int *)(*(_QWORD *)(v4 + 40) + 288LL), 0LL);
              grcScreenFlash = v29;
              DesktopWindow = GetDesktopWindow(v4);
              DCEx = (HDC)_GetDCEx(DesktopWindow, 0LL, 3LL);
              GreEnableAppContainerRestriction(0LL);
              if ( gdwInAtomicOperation )
              {
                v15 = gdwExtraInstrumentations;
                if ( (gdwExtraInstrumentations & 1) != 0 )
                  KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
              }
              UserSessionSwitchLeaveCrit(v15, gdwInAtomicOperation, v16, v17);
              NtGdiPatBlt(DCEx, (unsigned int)v29.left, v29.top, v29.right - v29.left, v29.bottom - v29.top, 5570569);
              EnterCrit(0LL, 1LL);
              GreEnableAppContainerRestriction(1LL);
              v18 = DCEx;
              goto LABEL_31;
            }
            v19 = _GetDCEx(v4, 0LL, 65537LL);
            v20 = *(_QWORD *)(v4 + 40);
            v9 = (HDC)v19;
            if ( (*(_WORD *)(v20 + 42) & 0x3FFF) == 0x29D )
              v21 = *GetPrimaryMonitorRect(&v28);
            else
              v21 = *(_OWORD *)(v20 + 88);
            v29.right = DWORD2(v21) - v21;
            v29.bottom = HIDWORD(v21) - DWORD1(v21);
            *(_QWORD *)&v29.left = 0LL;
            GreTransformPoints(v9, (struct _POINTL *)&v29, (struct _POINTL *)&v29, 2, 0);
            GreEnableAppContainerRestriction(0LL);
            goto LABEL_29;
          case 3:
            v6 = *(__m128i *)GetScreenRect(v27);
            v7 = GetDesktopWindow(v4);
            v8 = _GetDCEx(v7, 0LL, 3LL);
            *(_QWORD *)&v29.left = 0LL;
            v9 = (HDC)v8;
            v29.right = _mm_cvtsi128_si32(_mm_srli_si128(v6, 8)) - _mm_cvtsi128_si32(v6);
            v29.bottom = _mm_cvtsi128_si32(_mm_srli_si128(v6, 12)) - _mm_cvtsi128_si32(_mm_srli_si128(v6, 4));
            GreEnableAppContainerRestriction(0LL);
            if ( (unsigned int)IsWindowDesktopComposed(v4) )
            {
              if ( gdwInAtomicOperation )
              {
                v10 = gdwExtraInstrumentations;
                if ( (gdwExtraInstrumentations & 1) != 0 )
                  KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
              }
              UserSessionSwitchLeaveCrit(v10, gdwInAtomicOperation, v11, v12);
              NtGdiPatBlt(v9, (unsigned int)v29.left, v29.top, v29.right - v29.left, v29.bottom - v29.top, 5570569);
              EnterCrit(0LL, 1LL);
              goto LABEL_30;
            }
LABEL_29:
            NtGdiPatBlt(v9, (unsigned int)v29.left, v29.top, v29.right - v29.left, v29.bottom - v29.top, 5570569);
LABEL_30:
            GreEnableAppContainerRestriction(1LL);
            v18 = v9;
LABEL_31:
            _ReleaseDC(v18);
            break;
        }
      }
    }
  }
  return 1LL;
}
