/*
 * XREFs of ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00546DC
 * Callers:
 *     xxxDesktopWndProc @ 0x1C0054670 (xxxDesktopWndProc.c)
 * Callees:
 *     xxxSetThreadDesktop @ 0x1C000D458 (xxxSetThreadDesktop.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C001B8F4 (xxxMakeWindowForegroundWithState.c)
 *     xxxSendNotifyMessage @ 0x1C001FA80 (xxxSendNotifyMessage.c)
 *     xxxBeginPaint @ 0x1C0039480 (xxxBeginPaint.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     xxxDefWindowProc @ 0x1C0054BB0 (xxxDefWindowProc.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxRedrawWindow @ 0x1C0064FD8 (xxxRedrawWindow.c)
 *     xxxSetWindowLong @ 0x1C00A8474 (xxxSetWindowLong.c)
 *     xxxEndPaint @ 0x1C00E01C0 (xxxEndPaint.c)
 *     SetDesktopPattern @ 0x1C00E29E4 (SetDesktopPattern.c)
 *     SetRITTimer @ 0x1C00F8880 (SetRITTimer.c)
 *     GreRealizeDefaultPalette @ 0x1C0110FC8 (GreRealizeDefaultPalette.c)
 *     GreGetSystemPaletteUse @ 0x1C0112644 (GreGetSystemPaletteUse.c)
 *     xxxInternalPaintDesktop @ 0x1C0112D90 (xxxInternalPaintDesktop.c)
 *     xxxDWP_UpdateUIState @ 0x1C012C39C (xxxDWP_UpdateUIState.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     xxxValidateClassAndSize @ 0x1C0165268 (xxxValidateClassAndSize.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     xxxRealizeDesktop @ 0x1C01EAFF0 (xxxRealizeDesktop.c)
 */

__int64 __fastcall xxxDesktopWndProcWorker(struct tagWND *a1, unsigned int a2, __int64 a3, HICON a4)
{
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v11; // r8
  unsigned int v12; // edx
  __int64 i; // rbx
  ULONG_PTR v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  ULONG_PTR v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 ProfileUserName; // rbx
  __int64 v23; // [rsp+50h] [rbp-89h] BYREF
  ULONG_PTR v24; // [rsp+58h] [rbp-81h]
  __int64 v25; // [rsp+60h] [rbp-79h]
  __int64 v26; // [rsp+68h] [rbp-71h] BYREF
  char v27[8]; // [rsp+70h] [rbp-69h] BYREF
  _QWORD v28[3]; // [rsp+78h] [rbp-61h] BYREF
  _BYTE v29[80]; // [rsp+90h] [rbp-49h] BYREF

  memset(v29, 0, 0x48uLL);
  if ( !(unsigned int)xxxValidateClassAndSize((_DWORD)a1, a2, a3, (_DWORD)a4, 669, 1, (__int64)&v26) )
    return v26;
  if ( !*((_QWORD *)a1 + 13) )
  {
    if ( a2 != 128 )
    {
LABEL_5:
      v11 = a3;
      v12 = a2;
      return xxxDefWindowProc(a1, v12, v11, a4);
    }
    return 0LL;
  }
  if ( a2 > 0x80 )
  {
    if ( a2 != 161 )
    {
      switch ( a2 )
      {
        case 0x112u:
          v11 = 61760LL;
          if ( a3 == 61760 )
          {
            v12 = 274;
            return xxxDefWindowProc(a1, v12, v11, a4);
          }
          break;
        case 0x128u:
          return xxxDWP_UpdateUIState(a1, a3, a4);
        case 0x203u:
          a2 = 274;
          a3 = 61744LL;
          goto LABEL_5;
        case 0x30Fu:
          goto LABEL_50;
        case 0x311u:
          if ( *(_QWORD *)a1 != a3 )
LABEL_50:
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
      memset(v28, 0, sizeof(v28));
      ProfileUserName = CreateProfileUserName(v28);
      SetDesktopPattern(ProfileUserName, 0LL);
      FreeProfileUserName(ProfileUserName, v28);
      xxxSendNotifyMessage(a1, 0x15u, 0LL, 0LL, 1);
      xxxRealizeDesktop(a1);
      PsGetCurrentProcessId();
      xxxSetWindowLong(a1, 0);
      PsGetCurrentThreadId();
      xxxSetWindowLong(a1, 0);
      return 0LL;
    case 0xFu:
      xxxBeginPaint(a1, (__int64)v29);
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
        v23 = 0LL;
        v24 = 0LL;
        v25 = 0LL;
        v14 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
        v23 = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = &v23;
        v24 = v14;
        if ( v14 )
          HMLockObject(v14);
        xxxMakeWindowForegroundWithState(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL), 2);
        ThreadUnlock1(v16, v15, v17);
        v18 = gspwndAltTab;
        if ( gspwndAltTab )
        {
          v23 = *(_QWORD *)(gptiCurrent + 408LL);
          *(_QWORD *)(gptiCurrent + 408LL) = &v23;
          v24 = v18;
          HMLockObject(v18);
          _InterlockedAdd(&glSendMessage, 1u);
          xxxSendTransformableMessageTimeout((__int64 *)gspwndAltTab, 0x3Au, 0LL, 0LL, 0, 0, 0LL, 1u, 1);
          ThreadUnlock1(v20, v19, v21);
        }
        break;
      case 0x46u:
        if ( ((_DWORD)a4[8] & 4) == 0 && !*((_QWORD *)a4 + 1) )
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
        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v27);
        for ( i = *((_QWORD *)a1 + 14); i; i = *(_QWORD *)(i + 88) )
          xxxSendNotifyMessage((struct tagWND *)i, 0x51u, a3, (struct _LARGE_STRING *)a4, 1);
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v27);
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
