/*
 * XREFs of xxxFlashWindow @ 0x1C00DE38C
 * Callers:
 *     ?xxxSetForegroundWindowWithOptions@@YAHPEAUtagWND@@HK@Z @ 0x1C00D77CC (-xxxSetForegroundWindowWithOptions@@YAHPEAUtagWND@@HK@Z.c)
 *     xxxSystemTimerProc @ 0x1C00DE230 (xxxSystemTimerProc.c)
 *     xxxSoundSentry @ 0x1C0154BE0 (xxxSoundSentry.c)
 *     ?SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01EC780 (-SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     NtUserFlashWindowEx @ 0x1C0213BB0 (NtUserFlashWindowEx.c)
 *     xxxFlashEnabledPopup @ 0x1C02282F8 (xxxFlashEnabledPopup.c)
 * Callees:
 *     IsTrayWindow @ 0x1C002CD08 (IsTrayWindow.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 *     InternalSetProp @ 0x1C00B3498 (InternalSetProp.c)
 *     PostShellHookMessages @ 0x1C00B3920 (PostShellHookMessages.c)
 *     _SetSystemTimer @ 0x1C00DC7D4 (_SetSystemTimer.c)
 *     FindTimer @ 0x1C00EB348 (FindTimer.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C015D880 (-xxxCallHook@@YAHH_K_JH@Z.c)
 */

__int64 __fastcall xxxFlashWindow(unsigned __int64 *BugCheckParameter2, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r14d
  unsigned int v5; // r15d
  int v7; // r13d
  unsigned int Prop; // eax
  unsigned int v9; // r12d
  unsigned int v10; // edi
  unsigned int v11; // ebx
  BOOL v12; // ebp
  int v13; // r14d
  unsigned int v14; // eax
  int v15; // edi
  unsigned int v16; // eax
  unsigned __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  __int64 v21; // [rsp+50h] [rbp-48h]
  ULONG_PTR BugCheckParameter3[8]; // [rsp+58h] [rbp-40h] BYREF
  unsigned int v24; // [rsp+B8h] [rbp+20h]

  v3 = a3;
  v5 = 0;
  v7 = 1;
  Prop = GetProp((__int64)BugCheckParameter2, (unsigned __int16)gaFlashWState, 1LL);
  v9 = 2048;
  v10 = Prop;
  if ( Prop == 2048 )
  {
    v10 = 18432;
    v24 = 0;
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
  v5 = v10 & 0x8000;
  if ( BugCheckParameter2 != (unsigned __int64 *)gspwndAltTab )
  {
    if ( (v10 & 8) != 0 && gpqForeground == *(_QWORD *)(BugCheckParameter2[2] + 432) )
      v11 = 0;
    v24 = v11;
    if ( v11 )
    {
      v12 = v5 == 0;
      goto LABEL_11;
    }
LABEL_45:
    if ( gpqForeground && *(unsigned __int64 **)(gpqForeground + 120LL) == BugCheckParameter2 )
    {
      v12 = 1;
      goto LABEL_15;
    }
    v12 = 0;
LABEL_11:
    v7 = v12;
    if ( v11 && (v11 & 1) == 0 )
    {
LABEL_16:
      if ( (!v11 || (v11 & 2) != 0) && (unsigned int)IsTrayWindow(BugCheckParameter2) )
      {
        v21 = *BugCheckParameter2;
        if ( (v10 & 0x800) != 0 )
          v13 = !v12;
        else
          v13 = v11 != 0 ? v7 : 0;
        xxxCallHook(6, *BugCheckParameter2, v13, 10);
        PostShellHookMessages(v13 != 0 ? 32774 : 6, v21);
        v3 = a3;
      }
      if ( v11 )
      {
        if ( HIWORD(v11) )
        {
          v10 |= 0x2000u;
          v11 = v24 - 0x10000;
          if ( ((v10 >> 12) & 1) != v12 )
            v11 = v24;
          if ( (v10 & 0x4000) == 0 )
            v11 |= 4u;
        }
        if ( (v11 & 4) == 0 )
          goto LABEL_30;
        v10 |= 0x4000u;
        if ( !v3 )
          v3 = *(_DWORD *)(gpsi + 4984LL);
        if ( SetSystemTimer((unsigned __int64)BugCheckParameter2, 65528LL, v3, (__int64)xxxSystemTimerProc, 1) )
        {
LABEL_30:
          if ( (v10 & 0x2000) == 0 || HIWORD(v11) )
          {
            v14 = v10;
            v15 = v10 | 0x8000;
            v16 = v14 & 0xFFFF7FFF;
            if ( !v12 )
              v15 = v16;
            v9 = v15 ^ (v11 ^ v15) & 0xFFFF000B;
          }
          InternalSetProp((__int64)BugCheckParameter2, (unsigned __int16)gaFlashWState, v9, 5u);
        }
      }
      else
      {
        if ( (v10 & 0x4000) != 0 )
          FindTimer((_DWORD)BugCheckParameter2, 65528, 2, 1, 0LL);
        v19 = (unsigned __int16)gaFlashWState;
        v20 = BugCheckParameter2[15];
        if ( gaFlashWState == word_1C0317660 )
          *(_QWORD *)(BugCheckParameter2[5] + 312) = 0LL;
        RealInternalRemoveProp(v20, v19, 1LL);
      }
      return v5;
    }
LABEL_15:
    xxxSendTransformableMessageTimeout(
      (__int64 *)BugCheckParameter2,
      0x86u,
      v12,
      0LL,
      0,
      100,
      (__int64 *)BugCheckParameter3,
      1,
      0);
    goto LABEL_16;
  }
  return v5;
}
