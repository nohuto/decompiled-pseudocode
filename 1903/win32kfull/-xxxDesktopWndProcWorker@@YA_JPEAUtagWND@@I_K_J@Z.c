/*
 * XREFs of ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00B387C
 * Callers:
 *     xxxDesktopWndProc @ 0x1C00B3810 (xxxDesktopWndProc.c)
 * Callees:
 *     xxxSetThreadDesktop @ 0x1C00189F8 (xxxSetThreadDesktop.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C001B1CC (xxxMakeWindowForegroundWithState.c)
 *     xxxSendNotifyMessage @ 0x1C001CE70 (xxxSendNotifyMessage.c)
 *     xxxDWP_UpdateUIState @ 0x1C00915B4 (xxxDWP_UpdateUIState.c)
 *     xxxBeginPaint @ 0x1C00986B0 (xxxBeginPaint.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 *     xxxDefWindowProc @ 0x1C00B3E60 (xxxDefWindowProc.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxRedrawWindow @ 0x1C00C3908 (xxxRedrawWindow.c)
 *     xxxSetWindowLong @ 0x1C01007C4 (xxxSetWindowLong.c)
 *     xxxEndPaint @ 0x1C01040B0 (xxxEndPaint.c)
 *     SetDesktopPattern @ 0x1C0108934 (SetDesktopPattern.c)
 *     SetRITTimer @ 0x1C011E2C0 (SetRITTimer.c)
 *     GreRealizeDefaultPalette @ 0x1C0136858 (GreRealizeDefaultPalette.c)
 *     GreGetSystemPaletteUse @ 0x1C0138644 (GreGetSystemPaletteUse.c)
 *     xxxInternalPaintDesktop @ 0x1C0138D90 (xxxInternalPaintDesktop.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     xxxRealizeDesktop @ 0x1C01EB170 (xxxRealizeDesktop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxDesktopWndProcWorker(struct tagWND *a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int16 v11; // ax
  __int64 v12; // r8
  unsigned int v13; // edx
  unsigned int v15; // r9d
  unsigned int v16; // r12d
  __int64 v17; // r13
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned int v20; // r9d
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 i; // rbx
  ULONG_PTR v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  ULONG_PTR v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 ProfileUserName; // rbx
  __int64 v33; // [rsp+50h] [rbp-89h] BYREF
  ULONG_PTR v34; // [rsp+58h] [rbp-81h]
  __int64 v35; // [rsp+60h] [rbp-79h]
  char v36[8]; // [rsp+68h] [rbp-71h] BYREF
  _QWORD v37[4]; // [rsp+70h] [rbp-69h] BYREF
  _BYTE v38[80]; // [rsp+90h] [rbp-49h] BYREF

  memset(v38, 0, 0x48uLL);
  v10 = *((_QWORD *)a1 + 5);
  if ( (*(_DWORD *)(v10 + 232) & 0x800) != 0 )
    return 0LL;
  v11 = *(_WORD *)(v10 + 42);
  if ( v11 != 669 )
  {
    if ( v11 )
      return 0LL;
    if ( a2 != 1 )
    {
LABEL_5:
      v12 = a3;
      v13 = a2;
      return xxxDefWindowProc(a1, v13, (HWND)v12, a4);
    }
    v8 = *(unsigned int *)(v10 + 252);
    v15 = *(unsigned __int16 *)(gpsi + 334LL);
    if ( (int)v8 + 320 >= v15 )
    {
      v9 = *((_QWORD *)a1 + 35);
      if ( v9 )
      {
        v22 = 0LL;
        if ( (_DWORD)v8 )
        {
          while ( !*(_BYTE *)((unsigned int)v22 + v9) )
          {
            v22 = (unsigned int)(v22 + 1);
            if ( (unsigned int)v22 >= (unsigned int)v8 )
              goto LABEL_24;
          }
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v22);
          v10 = *((_QWORD *)a1 + 5);
        }
LABEL_24:
        memset(*((void **)a1 + 35), 0, *(unsigned int *)(v10 + 252));
      }
    }
    else
    {
      if ( *(_DWORD *)(v10 + 200) + (int)v8 + 320 < v15 )
        return 0LL;
      v16 = v15 - 320;
      v17 = Win32AllocPoolZInit(v15 - 320, 1937208149LL);
      if ( !v17 )
        return 0LL;
      v8 = *((_QWORD *)a1 + 35);
      if ( v8 )
      {
        v18 = *((_QWORD *)a1 + 5);
        v19 = 0LL;
        v20 = *(_DWORD *)(v18 + 252);
        if ( v20 )
        {
          while ( !*(_BYTE *)(v19 + v8) )
          {
            v19 = (unsigned int)(v19 + 1);
            if ( (unsigned int)v19 >= v20 )
              goto LABEL_16;
          }
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v18);
        }
LABEL_16:
        Win32FreePool(*((_QWORD *)a1 + 35));
      }
      v21 = *((_QWORD *)a1 + 5);
      *((_QWORD *)a1 + 35) = v17;
      *(_DWORD *)(v21 + 252) = v16;
    }
    *(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) = 669;
  }
  if ( !*((_QWORD *)a1 + 13) )
  {
    if ( a2 != 128 )
      goto LABEL_5;
    return 0LL;
  }
  if ( a2 > 0x80 )
  {
    if ( a2 != 161 )
    {
      switch ( a2 )
      {
        case 0x112u:
          v12 = 61760LL;
          if ( a3 == 61760 )
          {
            v13 = 274;
            return xxxDefWindowProc(a1, v13, (HWND)v12, a4);
          }
          break;
        case 0x128u:
          return xxxDWP_UpdateUIState((__int64)a1, a3, a4);
        case 0x203u:
          a2 = 274;
          a3 = 61744LL;
          goto LABEL_5;
        case 0x30Fu:
          goto LABEL_71;
        case 0x311u:
          if ( *(_QWORD *)a1 != a3 )
LABEL_71:
            xxxRealizeDesktop(a1);
          break;
        case 0x401u:
          if ( !gProtocolType && LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) && !WPP_MAIN_CB.Dpc.SystemArgument2 )
            WPP_MAIN_CB.Dpc.SystemArgument2 = (PVOID)SetRITTimer(0LL, 20LL, HideMouseTrails, 0LL);
          return 0LL;
        default:
          goto LABEL_5;
      }
    }
    return 0LL;
  }
  switch ( a2 )
  {
    case 0x80u:
      return 0LL;
    case 1u:
      memset(v37, 0, 24);
      ProfileUserName = CreateProfileUserName(v37);
      SetDesktopPattern(ProfileUserName, 0LL);
      FreeProfileUserName(ProfileUserName, v37);
      xxxSendNotifyMessage(a1, 0x15u, 0LL, 0LL, 1);
      xxxRealizeDesktop(a1);
      PsGetCurrentProcessId();
      xxxSetWindowLong(a1, 0);
      PsGetCurrentThreadId();
      xxxSetWindowLong(a1, 0);
      return 0LL;
    case 0xFu:
      xxxBeginPaint(a1, (__int64)v38);
      xxxEndPaint(a1);
      return 0LL;
    case 0x10u:
      return 0LL;
  }
  if ( a2 != 20 )
  {
    switch ( a2 )
    {
      case 0x15u:
        xxxRedrawWindow(a1);
        break;
      case 0x3Au:
        v33 = 0LL;
        v34 = 0LL;
        v35 = 0LL;
        v24 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
        v33 = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = &v33;
        v34 = v24;
        if ( v24 )
          HMLockObject(v24);
        xxxMakeWindowForegroundWithState(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL), 2);
        ThreadUnlock1(v26, v25, v27);
        v28 = gspwndAltTab;
        if ( gspwndAltTab )
        {
          v33 = *(_QWORD *)(gptiCurrent + 408LL);
          *(_QWORD *)(gptiCurrent + 408LL) = &v33;
          v34 = v28;
          HMLockObject(v28);
          _InterlockedAdd(&glSendMessage, 1u);
          xxxSendTransformableMessageTimeout((__int64 *)gspwndAltTab, 0x3Au, 0LL, 0LL, 0, 0, 0LL, 1u, 1);
          ThreadUnlock1(v30, v29, v31);
        }
        break;
      case 0x46u:
        if ( (*(_DWORD *)(a4 + 32) & 4) == 0 && !*(_QWORD *)(a4 + 8) )
        {
          xxxSetThreadDesktop(0LL, grpdeskRitInput, v8, v9);
          if ( (unsigned int)GreGetSystemPaletteUse(*(HDC *)(gpDispInfo + 56LL)) != 1 )
            GreRealizeDefaultPalette(*(HDC *)(gpDispInfo + 56LL));
          if ( (*(_DWORD *)(grpdeskRitInput + 48LL) & 1) != 0 )
          {
            xxxSendNotifyMessage((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, 0x311u, *(_QWORD *)a1, 0LL, 1);
            *(_DWORD *)(grpdeskRitInput + 48LL) &= ~1u;
          }
        }
        break;
      case 0x51u:
        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v36);
        for ( i = *((_QWORD *)a1 + 14); i; i = *(_QWORD *)(i + 88) )
          xxxSendNotifyMessage((struct tagWND *)i, 0x51u, a3, (struct _LARGE_STRING *)a4, 1);
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v36);
        break;
      default:
        goto LABEL_5;
    }
    return 0LL;
  }
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    xxxInternalPaintDesktop(a1, a3, 1LL);
  return 1LL;
}
