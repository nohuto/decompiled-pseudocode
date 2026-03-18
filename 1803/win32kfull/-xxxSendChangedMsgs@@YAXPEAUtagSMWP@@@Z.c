/*
 * XREFs of ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0026C8C
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C0026608 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C0027084 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C0028CEC (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxNotifyMonitorChanged @ 0x1C00304E4 (xxxNotifyMonitorChanged.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     CalcWindowFullScreen @ 0x1C007290C (CalcWindowFullScreen.c)
 *     DwmChildRectChange @ 0x1C0072D4C (DwmChildRectChange.c)
 *     ?xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z @ 0x1C0073BD0 (-xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z.c)
 *     ?PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C0073C6C (-PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     WindowHasShadow @ 0x1C007CCEC (WindowHasShadow.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C007CD20 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     xxxRemoveShadow @ 0x1C00F6BA8 (xxxRemoveShadow.c)
 *     ShouldHaveShadow @ 0x1C00FEA18 (ShouldHaveShadow.c)
 *     xxxAddShadow @ 0x1C0119F60 (xxxAddShadow.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C011A754 (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     xxxUpdateShadowZorder @ 0x1C01FABB4 (xxxUpdateShadowZorder.c)
 *     zzzMoveShadow @ 0x1C01FAD2C (zzzMoveShadow.c)
 */

void __fastcall xxxSendChangedMsgs(struct tagSMWP *a1, __int64 a2)
{
  __int64 v2; // rbx
  int v4; // r14d
  __int64 v5; // rdi
  __int64 v6; // rcx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v8; // rsi
  __int64 *ThreadWin32Thread; // rax
  int v10; // r8d
  char v11; // r8
  struct tagWND **Shadow; // rax
  int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  _QWORD v17[4]; // [rsp+60h] [rbp-48h] BYREF
  char v18; // [rsp+B0h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 5);
  v4 = *((_DWORD *)a1 + 7);
  while ( --v4 >= 0 )
  {
    if ( !*(_QWORD *)v2 )
      goto LABEL_39;
    LOBYTE(a2) = 1;
    v5 = HMValidateHandleNoSecure(*(_QWORD *)v2, a2);
    if ( !v5 )
    {
      *(_DWORD *)(v2 + 32) = 6159;
LABEL_5:
      *(_QWORD *)v2 = 0LL;
      goto LABEL_39;
    }
    if ( !(unsigned int)IsStillWindowC(*(HWND *)(v2 + 8)) )
      goto LABEL_5;
    if ( (*(_DWORD *)(v2 + 32) & 0x40000) != 0 || (*(_DWORD *)(v2 + 32) & 0x18E7) == 0x1807 )
    {
      PostIAMPosChangedNotification((struct tagCVR *)v2, (struct tagWND *)v5);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      v8 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v6, a2) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v8 = *ThreadWin32Thread;
      }
      v17[0] = *(_QWORD *)(v8 + 408);
      *(_QWORD *)(v8 + 408) = v17;
      v17[1] = v5;
      _InterlockedAdd((volatile signed __int32 *)(v5 + 8), 1u);
      v10 = *(_DWORD *)(v2 + 32);
      if ( (v10 & 0x80u) != 0 )
      {
        xxxRemoveShadow(v5);
        v10 = *(_DWORD *)(v2 + 32);
      }
      if ( (v10 & 0x40) != 0 )
      {
        if ( (unsigned int)ShouldHaveShadow(v5) )
          xxxAddShadow((struct tagWND *)v5);
      }
      else if ( (unsigned int)WindowHasShadow(v5) )
      {
        if ( (v11 & 0x21) == 1 )
        {
          if ( (v11 & 2) == 0 )
            zzzMoveShadow(v5);
        }
        else
        {
          Shadow = (struct tagWND **)FindShadow((struct tagWND *)v5);
          if ( Shadow )
            zzzApplyShadow(*Shadow, Shadow[1]);
        }
        if ( (*(_DWORD *)(v2 + 32) & 4) == 0 )
          xxxUpdateShadowZorder(v5);
      }
      v13 = *(_DWORD *)(v2 + 32) & 0x9820;
      if ( (unsigned int)IsWindowDesktopComposed(v5) && v13 != 6144 )
        DwmChildRectChange(v5);
      if ( (*(_DWORD *)(gptiCurrent + 1200LL) & 0x40000) == 0 || gptiCurrent == *(_QWORD *)(v5 + 16) )
      {
        _InterlockedAdd(&glSendMessage, 1u);
        xxxSendTransformableMessageTimeout(v5, 0, 0, 0LL, 1, 0);
      }
      else if ( *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 392LL) != 1 )
      {
        xxxSendTransformableMessageTimeout(v5, 2, 100, (ULONG_PTR)&v18, 1, 0);
      }
      if ( (*(_DWORD *)(v2 + 156) & 0x40) != 0 )
      {
        ValidateHmonitorNoRip(*(_QWORD *)(v2 + 128));
        xxxNotifyMonitorChanged((struct tagWND *)v5);
      }
      xxxNotifyShellPositioningChanged((struct tagWND *)v5, (struct tagCVR *const)v2);
      CalcWindowFullScreen((struct tagWND *)v5);
      if ( v13 != 6144 )
        xxxWindowEvent(0x800Bu, v5, 0, 0, 1);
      ThreadUnlock1(v15, v14, v16);
    }
LABEL_39:
    v2 += 168LL;
  }
  if ( (*gpsi & 4) != 0 )
    xxxImeWindowPosChanged(a1);
}
