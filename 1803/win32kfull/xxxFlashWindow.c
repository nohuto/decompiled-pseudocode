/*
 * XREFs of xxxFlashWindow @ 0x1C006312C
 * Callers:
 *     xxxSystemTimerProc @ 0x1C0062FE0 (xxxSystemTimerProc.c)
 *     xxxSetForegroundWindow @ 0x1C006E2C4 (xxxSetForegroundWindow.c)
 *     xxxSoundSentry @ 0x1C010FD10 (xxxSoundSentry.c)
 *     xxxFlashEnabledPopup @ 0x1C0133950 (xxxFlashEnabledPopup.c)
 *     ?SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01C8440 (-SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     NtUserFlashWindowEx @ 0x1C01ED810 (NtUserFlashWindowEx.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     IsTrayWindow @ 0x1C0044B0C (IsTrayWindow.c)
 *     _SetSystemTimer @ 0x1C00647F0 (_SetSystemTimer.c)
 *     PostShellHookMessages @ 0x1C006E990 (PostShellHookMessages.c)
 *     FindTimer @ 0x1C00BA330 (FindTimer.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C013B040 (-xxxCallHook@@YAHH_K_JH@Z.c)
 */

__int64 __fastcall xxxFlashWindow(unsigned __int64 *BugCheckParameter2, unsigned int a2, int a3)
{
  _QWORD *v3; // r13
  int v4; // ebp
  unsigned int v7; // r15d
  int v8; // r12d
  unsigned int Prop; // eax
  unsigned int v10; // edi
  unsigned int v11; // ebx
  BOOL v12; // esi
  unsigned __int64 v13; // r13
  int v14; // ebp
  unsigned int v15; // edi
  unsigned int v16; // edi
  unsigned __int64 v18; // rcx
  unsigned int v19; // [rsp+90h] [rbp+8h]
  ULONG_PTR BugCheckParameter3; // [rsp+A8h] [rbp+20h] BYREF

  v3 = BugCheckParameter2 + 15;
  v4 = a3;
  v7 = 0;
  v8 = 1;
  Prop = RealGetProp(BugCheckParameter2[15], (unsigned __int16)gaFlashWState, 1LL);
  v10 = Prop;
  if ( Prop == 2048 )
  {
    v10 = 18432;
    v19 = 0;
    v11 = 0;
    goto LABEL_45;
  }
  if ( Prop )
  {
    if ( a2 == 1024 )
      a2 = Prop;
  }
  else
  {
    v18 = BugCheckParameter2[5];
    if ( (*(_BYTE *)(v18 + 16) & 0x40) != 0 || (a2 & 1) != 0 && (*(_BYTE *)(v18 + 30) & 0xC0) != 0 )
      v10 = 36864;
  }
  v11 = a2 & 0xFFFF000F;
  v7 = v10 & 0x8000;
  if ( BugCheckParameter2 != (unsigned __int64 *)gspwndAltTab )
  {
    if ( (v10 & 8) != 0 && gpqForeground == *(_QWORD *)(BugCheckParameter2[2] + 424) )
      v11 = 0;
    v19 = v11;
    if ( v11 )
    {
      v12 = v7 == 0;
      goto LABEL_11;
    }
LABEL_45:
    if ( gpqForeground && *(unsigned __int64 **)(gpqForeground + 120LL) == BugCheckParameter2 )
    {
      v12 = 1;
      goto LABEL_35;
    }
    v12 = 0;
LABEL_11:
    v8 = v12;
    if ( v11 && (v11 & 1) == 0 )
    {
LABEL_13:
      if ( (!v11 || (v11 & 2) != 0) && (unsigned int)IsTrayWindow(BugCheckParameter2) )
      {
        v13 = *BugCheckParameter2;
        if ( (v10 & 0x800) != 0 )
          v14 = !v12;
        else
          v14 = v11 != 0 ? v8 : 0;
        xxxCallHook(6, *BugCheckParameter2, v14, 10);
        PostShellHookMessages(v14 != 0 ? 32774 : 6, v13);
        v4 = a3;
        v3 = BugCheckParameter2 + 15;
      }
      if ( v11 )
      {
        if ( HIWORD(v11) )
        {
          v10 |= 0x2000u;
          v11 = v19 - 0x10000;
          if ( ((v10 >> 12) & 1) != v12 )
            v11 = v19;
          if ( (v10 & 0x4000) == 0 )
            v11 |= 4u;
        }
        if ( (v11 & 4) == 0 )
          goto LABEL_27;
        v10 |= 0x4000u;
        if ( !v4 )
          v4 = *(_DWORD *)(gpsi + 4984LL);
        if ( SetSystemTimer((_DWORD)BugCheckParameter2, 65528, v4, (unsigned int)xxxSystemTimerProc, 1) )
        {
LABEL_27:
          if ( (v10 & 0x2000) != 0 && !HIWORD(v11) )
          {
            v16 = 2048;
          }
          else
          {
            if ( v12 )
              v15 = v10 | 0x8000;
            else
              v15 = v10 & 0xFFFF7FFF;
            v16 = (v11 ^ v15) & 0xFFFF000B ^ v15;
          }
          RealInternalSetProp(v3, (unsigned __int16)gaFlashWState, v16, 5LL);
        }
      }
      else
      {
        if ( (v10 & 0x4000) != 0 )
          FindTimer((_DWORD)BugCheckParameter2, 65528, 2, 1, 0LL);
        RealInternalRemoveProp(*v3, (unsigned __int16)gaFlashWState, 1LL);
      }
      return v7;
    }
LABEL_35:
    xxxSendTransformableMessageTimeout(
      (__int64 *)BugCheckParameter2,
      0x86u,
      (HWND)v12,
      0LL,
      0,
      100,
      (__int64 *)&BugCheckParameter3,
      1,
      0);
    goto LABEL_13;
  }
  return v7;
}
