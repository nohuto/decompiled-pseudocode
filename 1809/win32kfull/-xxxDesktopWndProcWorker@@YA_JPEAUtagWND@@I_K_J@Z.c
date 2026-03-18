/*
 * XREFs of ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00B4ADC
 * Callers:
 *     xxxDesktopWndProc @ 0x1C00B4A70 (xxxDesktopWndProc.c)
 * Callees:
 *     xxxBeginPaint @ 0x1C001DEFC (xxxBeginPaint.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     xxxSetWindowLong @ 0x1C006782C (xxxSetWindowLong.c)
 *     GreRealizeDefaultPalette @ 0x1C0095C74 (GreRealizeDefaultPalette.c)
 *     xxxDWP_UpdateUIState @ 0x1C00ABB00 (xxxDWP_UpdateUIState.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C00B0710 (xxxMakeWindowForegroundWithState.c)
 *     xxxSetThreadDesktop @ 0x1C00B0F18 (xxxSetThreadDesktop.c)
 *     xxxDefWindowProc @ 0x1C00B4F70 (xxxDefWindowProc.c)
 *     xxxRedrawWindow @ 0x1C00C7520 (xxxRedrawWindow.c)
 *     xxxSendNotifyMessage @ 0x1C00D14F0 (xxxSendNotifyMessage.c)
 *     xxxEndPaint @ 0x1C00FD91C (xxxEndPaint.c)
 *     SetDesktopPattern @ 0x1C0101590 (SetDesktopPattern.c)
 *     SetRITTimer @ 0x1C01153C0 (SetRITTimer.c)
 *     xxxInternalPaintDesktop @ 0x1C012D518 (xxxInternalPaintDesktop.c)
 *     GreGetSystemPaletteUse @ 0x1C012D764 (GreGetSystemPaletteUse.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     xxxValidateClassAndSize @ 0x1C015D924 (xxxValidateClassAndSize.c)
 *     xxxRealizeDesktop @ 0x1C01D5A68 (xxxRealizeDesktop.c)
 */

__int64 __fastcall xxxDesktopWndProcWorker(struct tagWND *a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 i; // rbx
  int v13; // edx
  ULONG_PTR v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  ULONG_PTR v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 ProfileUserName; // rbx
  unsigned int CurrentProcessId; // eax
  unsigned int CurrentThreadId; // eax
  __int64 v23; // [rsp+50h] [rbp-89h] BYREF
  char v24[8]; // [rsp+58h] [rbp-81h] BYREF
  __int64 v25; // [rsp+60h] [rbp-79h] BYREF
  ULONG_PTR v26; // [rsp+68h] [rbp-71h]
  _BYTE v27[24]; // [rsp+78h] [rbp-61h] BYREF
  char v28[80]; // [rsp+90h] [rbp-49h] BYREF

  if ( !(unsigned int)xxxValidateClassAndSize(a1, 669, 1, (__int64)&v23) )
    return v23;
  if ( !*((_QWORD *)a1 + 10) )
  {
    if ( a2 != 128 )
      return xxxDefWindowProc(a1);
    return 0LL;
  }
  if ( a2 > 0x80 )
  {
    if ( a2 != 161 )
    {
      switch ( a2 )
      {
        case 0x112u:
          if ( a3 == 61760 )
            return xxxDefWindowProc(a1);
          break;
        case 0x128u:
          return xxxDWP_UpdateUIState((__int64)a1, a3, a4);
        case 0x203u:
          return xxxDefWindowProc(a1);
        case 0x30Fu:
          goto LABEL_49;
        case 0x311u:
          if ( *(_QWORD *)a1 != a3 )
LABEL_49:
            xxxRealizeDesktop(a1);
          break;
        case 0x401u:
          if ( !gProtocolType && gMouseTrails && !gtmridMouseTrails )
            gtmridMouseTrails = SetRITTimer(0LL, 20LL, HideMouseTrails, 0LL);
          return 0LL;
        default:
          return xxxDefWindowProc(a1);
      }
    }
    return 0LL;
  }
  switch ( a2 )
  {
    case 0x80u:
      return 0LL;
    case 1u:
      ProfileUserName = CreateProfileUserName(v27, v8, v9, v10);
      SetDesktopPattern(ProfileUserName, 0LL);
      FreeProfileUserName(ProfileUserName, v27);
      xxxSendNotifyMessage(a1, 21LL, 0LL, 0LL, 1);
      xxxRealizeDesktop(a1);
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      xxxSetWindowLong(a1, 0, CurrentProcessId, 0, 0);
      CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
      xxxSetWindowLong(a1, 4, CurrentThreadId, 0, 0);
      return 0LL;
    case 0xFu:
      xxxBeginPaint(a1, (__int64)v28);
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
        v14 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
        v25 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v25;
        v26 = v14;
        if ( v14 )
          _InterlockedAdd((volatile signed __int32 *)(v14 + 8), 1u);
        xxxMakeWindowForegroundWithState(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL), 2);
        ThreadUnlock1(v16, v15);
        v17 = gspwndAltTab;
        if ( gspwndAltTab )
        {
          v25 = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = &v25;
          v26 = v17;
          _InterlockedAdd((volatile signed __int32 *)(v17 + 8), 1u);
          _InterlockedAdd(&glSendMessage, 1u);
          xxxSendTransformableMessageTimeout((__int64 *)gspwndAltTab, 0x3Au, 0LL, 0LL, 0, 0, 0LL, 1, 1);
          ThreadUnlock1(v19, v18);
        }
        break;
      case 0x46u:
        if ( (*(_DWORD *)(a4 + 32) & 4) == 0 && !*(_QWORD *)(a4 + 8) )
        {
          xxxSetThreadDesktop(0LL, grpdeskRitInput, v9, v10);
          if ( (unsigned int)GreGetSystemPaletteUse(*(HDC *)(gpDispInfo + 56LL)) != 1 )
            GreRealizeDefaultPalette(*(HDC *)(gpDispInfo + 56LL), v13);
          if ( (*(_DWORD *)(grpdeskRitInput + 48LL) & 1) != 0 )
          {
            xxxSendNotifyMessage(-1LL, 785LL, *(_QWORD *)a1, 0LL, 1);
            *(_DWORD *)(grpdeskRitInput + 48LL) &= ~1u;
          }
        }
        break;
      case 0x51u:
        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v24);
        for ( i = *((_QWORD *)a1 + 11); i; i = *(_QWORD *)(i + 64) )
          xxxSendNotifyMessage(i, 81LL, a3, a4, 1);
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v24);
        break;
      default:
        return xxxDefWindowProc(a1);
    }
    return 0LL;
  }
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    xxxInternalPaintDesktop(a1, a3, 1LL);
  return 1LL;
}
