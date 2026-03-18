/*
 * XREFs of ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C006C68C
 * Callers:
 *     xxxDesktopWndProc @ 0x1C006C620 (xxxDesktopWndProc.c)
 * Callees:
 *     xxxSetThreadDesktop @ 0x1C000EEA8 (xxxSetThreadDesktop.c)
 *     SetRITTimer @ 0x1C0019A20 (SetRITTimer.c)
 *     xxxSetWindowLong @ 0x1C0025120 (xxxSetWindowLong.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     xxxRedrawWindow @ 0x1C002AA30 (xxxRedrawWindow.c)
 *     xxxBeginPaint @ 0x1C0037D64 (xxxBeginPaint.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C005AD04 (xxxMakeWindowForegroundWithState.c)
 *     xxxSendNotifyMessage @ 0x1C0060D20 (xxxSendNotifyMessage.c)
 *     xxxDefWindowProc @ 0x1C006CD90 (xxxDefWindowProc.c)
 *     xxxDWP_UpdateUIState @ 0x1C00C32A4 (xxxDWP_UpdateUIState.c)
 *     xxxEndPaint @ 0x1C00E2444 (xxxEndPaint.c)
 *     SetDesktopPattern @ 0x1C00E9288 (SetDesktopPattern.c)
 *     GreRealizeDefaultPalette @ 0x1C010A74C (GreRealizeDefaultPalette.c)
 *     GreGetSystemPaletteUse @ 0x1C010C184 (GreGetSystemPaletteUse.c)
 *     xxxInternalPaintDesktop @ 0x1C010C1E8 (xxxInternalPaintDesktop.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     xxxRealizeDesktop @ 0x1C01B32AC (xxxRealizeDesktop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02AFC0C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxDesktopWndProcWorker(struct tagWND *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v5; // r8
  __int64 v6; // r14
  unsigned int v7; // ebx
  __int16 v9; // ax
  __int64 v10; // r8
  int v12; // r12d
  __int64 v13; // r13
  __int64 v14; // rcx
  unsigned int v15; // r8d
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 i; // rbx
  ULONG_PTR v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  ULONG_PTR v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 ProfileUserName; // rbx
  unsigned int CurrentProcessId; // eax
  unsigned int CurrentThreadId; // eax
  char v30[8]; // [rsp+50h] [rbp-89h] BYREF
  __int64 v31; // [rsp+58h] [rbp-81h] BYREF
  ULONG_PTR v32; // [rsp+60h] [rbp-79h]
  _BYTE v33[32]; // [rsp+70h] [rbp-69h] BYREF
  char v34[80]; // [rsp+90h] [rbp-49h] BYREF

  v5 = *((_QWORD *)a1 + 5);
  v6 = a4;
  v7 = a2;
  if ( (*(_DWORD *)(v5 + 232) & 0x800) != 0 )
    return 0LL;
  v9 = *(_WORD *)(v5 + 42);
  if ( v9 != 669 )
  {
    if ( v9 )
      return 0LL;
    if ( (_DWORD)a2 != 1 )
    {
LABEL_5:
      v10 = a3;
      return xxxDefWindowProc(a1, a2, (HWND)v10, a4);
    }
    a2 = *(unsigned int *)(v5 + 252);
    a4 = *(unsigned __int16 *)(gpsi + 334LL);
    if ( (int)a2 + 312 >= (unsigned int)a4 )
    {
      v5 = *((_QWORD *)a1 + 34);
      if ( v5 )
      {
        v17 = 0LL;
        if ( (_DWORD)a2 )
        {
          while ( !*(_BYTE *)((unsigned int)v17 + v5) )
          {
            v17 = (unsigned int)(v17 + 1);
            if ( (unsigned int)v17 >= (unsigned int)a2 )
              goto LABEL_24;
          }
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v17);
        }
LABEL_24:
        memset(*((void **)a1 + 34), 0, *(unsigned int *)(*((_QWORD *)a1 + 5) + 252LL));
      }
    }
    else
    {
      if ( *(_DWORD *)(v5 + 200) + (int)a2 + 312 < (unsigned int)a4 )
        return 0LL;
      v12 = a4 - 312;
      v13 = Win32AllocPoolZInit((unsigned int)(a4 - 312), 1937208149LL);
      if ( !v13 )
        return 0LL;
      a2 = *((_QWORD *)a1 + 34);
      if ( a2 )
      {
        v14 = 0LL;
        v15 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 252LL);
        if ( v15 )
        {
          while ( !*(_BYTE *)(v14 + a2) )
          {
            v14 = (unsigned int)(v14 + 1);
            if ( (unsigned int)v14 >= v15 )
              goto LABEL_16;
          }
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v14);
        }
LABEL_16:
        Win32FreePool(*((_QWORD *)a1 + 34));
      }
      v16 = *((_QWORD *)a1 + 5);
      *((_QWORD *)a1 + 34) = v13;
      *(_DWORD *)(v16 + 252) = v12;
    }
    *(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) = 669;
  }
  if ( !*((_QWORD *)a1 + 10) )
  {
    if ( v7 != 128 )
    {
      v10 = a3;
      LODWORD(a2) = v7;
LABEL_78:
      a4 = v6;
      return xxxDefWindowProc(a1, a2, (HWND)v10, a4);
    }
    return 0LL;
  }
  if ( v7 > 0x80 )
  {
    switch ( v7 )
    {
      case 0xA1u:
        return 0LL;
      case 0x112u:
        v10 = 61760LL;
        if ( a3 == 61760 )
        {
          LODWORD(a2) = 274;
          goto LABEL_78;
        }
        return 0LL;
      case 0x128u:
        return xxxDWP_UpdateUIState(a1, a3, v6);
      case 0x203u:
        v7 = 274;
        a3 = 61744LL;
        goto LABEL_74;
      case 0x30Fu:
        goto LABEL_72;
    }
    if ( v7 != 785 )
    {
      if ( v7 == 1025 )
      {
        if ( !gProtocolType && gMouseTrails && !gtmridMouseTrails )
          gtmridMouseTrails = SetRITTimer(0, 20, (int)HideMouseTrails, 0);
        return 0LL;
      }
      goto LABEL_74;
    }
    if ( *(_QWORD *)a1 != a3 )
LABEL_72:
      xxxRealizeDesktop(a1);
    return 0LL;
  }
  switch ( v7 )
  {
    case 0x80u:
      return 0LL;
    case 1u:
      ProfileUserName = CreateProfileUserName(v33, a2, v5, a4);
      SetDesktopPattern(ProfileUserName, 0LL);
      FreeProfileUserName(ProfileUserName, v33);
      xxxSendNotifyMessage(a1, 0x15u, 0LL, 0LL, 1);
      xxxRealizeDesktop(a1);
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      xxxSetWindowLong(a1, 0, CurrentProcessId, 0LL, 0);
      CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
      xxxSetWindowLong(a1, 4, CurrentThreadId, 0LL, 0);
      return 0LL;
    case 0xFu:
      xxxBeginPaint(a1, (__int64)v34);
      xxxEndPaint(a1);
      return 0LL;
    case 0x10u:
      return 0LL;
  }
  if ( v7 != 20 )
  {
    if ( v7 != 21 )
    {
      switch ( v7 )
      {
        case ':':
          v19 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
          v31 = *(_QWORD *)(gptiCurrent + 408LL);
          *(_QWORD *)(gptiCurrent + 408LL) = &v31;
          v32 = v19;
          if ( v19 )
            _InterlockedAdd((volatile signed __int32 *)(v19 + 8), 1u);
          xxxMakeWindowForegroundWithState(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL), 2);
          ThreadUnlock1(v21, v20, v22);
          v23 = gspwndAltTab;
          if ( gspwndAltTab )
          {
            v31 = *(_QWORD *)(gptiCurrent + 408LL);
            *(_QWORD *)(gptiCurrent + 408LL) = &v31;
            v32 = v23;
            _InterlockedAdd((volatile signed __int32 *)(v23 + 8), 1u);
            _InterlockedAdd(&glSendMessage, 1u);
            xxxSendTransformableMessageTimeout((__int64 *)gspwndAltTab, 0x3Au, 0LL, 0LL, 0, 0, 0LL, 1, 1);
            ThreadUnlock1(v25, v24, v26);
          }
          return 0LL;
        case 'F':
          if ( (*(_DWORD *)(v6 + 32) & 4) == 0 && !*(_QWORD *)(v6 + 8) )
          {
            xxxSetThreadDesktop(0LL, grpdeskRitInput);
            if ( (unsigned int)GreGetSystemPaletteUse(*(HDC *)(gpDispInfo + 56LL)) != 1 )
              GreRealizeDefaultPalette(*(HDC *)(gpDispInfo + 56LL));
            if ( (*(_DWORD *)(grpdeskRitInput + 48LL) & 1) != 0 )
            {
              xxxSendNotifyMessage((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, 0x311u, *(_QWORD *)a1, 0LL, 1);
              *(_DWORD *)(grpdeskRitInput + 48LL) &= ~1u;
            }
          }
          return 0LL;
        case 'Q':
          UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v30);
          for ( i = *((_QWORD *)a1 + 11); i; i = *(_QWORD *)(i + 64) )
            xxxSendNotifyMessage((struct tagWND *)i, 0x51u, a3, (struct _LARGE_STRING *)v6, 1);
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v30);
          return 0LL;
      }
LABEL_74:
      a4 = v6;
      LODWORD(a2) = v7;
      goto LABEL_5;
    }
    xxxRedrawWindow(a1, 0LL, 0LL, 133);
    return 0LL;
  }
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    xxxInternalPaintDesktop(a1, a3, 1LL);
  return 1LL;
}
