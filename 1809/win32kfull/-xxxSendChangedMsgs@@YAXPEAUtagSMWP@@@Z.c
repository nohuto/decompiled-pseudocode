/*
 * XREFs of ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C003839C
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C0038714 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0018330 (xxxWindowEvent.c)
 *     xxxRemoveShadow @ 0x1C001CC1C (xxxRemoveShadow.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C0038368 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     ?PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C00386A8 (-PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     xxxNotifyMonitorChanged @ 0x1C006F8AC (xxxNotifyMonitorChanged.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C006FDDC (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     CalcWindowFullScreen @ 0x1C0079A8C (CalcWindowFullScreen.c)
 *     WindowHasShadow @ 0x1C0079DF8 (WindowHasShadow.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C0079E2C (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     DwmChildRectChange @ 0x1C00A746C (DwmChildRectChange.c)
 *     ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x1C0107FB4 (-PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z.c)
 *     ShouldHaveShadow @ 0x1C011C424 (ShouldHaveShadow.c)
 *     xxxAddShadow @ 0x1C0139D34 (xxxAddShadow.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C013B2B4 (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     xxxUpdateShadowZorder @ 0x1C0222B78 (xxxUpdateShadowZorder.c)
 *     zzzMoveShadow @ 0x1C0222CF8 (zzzMoveShadow.c)
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
  const struct tagCVR *v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD v17[4]; // [rsp+60h] [rbp-48h] BYREF
  __int64 v18; // [rsp+B0h] [rbp+8h] BYREF

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
    if ( !IsStillWindowC(*(_QWORD *)(v2 + 8), a2) )
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
      v17[0] = *(_QWORD *)(v8 + 416);
      *(_QWORD *)(v8 + 416) = v17;
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
      if ( (*(_DWORD *)(gptiCurrent + 1208LL) & 0x40000) == 0 || gptiCurrent == *(_QWORD *)(v5 + 16) )
      {
        _InterlockedAdd(&glSendMessage, 1u);
        xxxSendTransformableMessageTimeout((__int64 *)v5, 0x47u, 0LL, v2, 0, 0, 0LL, 1, 0);
      }
      else if ( *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 392LL) != 1 )
      {
        xxxSendTransformableMessageTimeout((__int64 *)v5, 0x47u, 0LL, v2, 2, 100, &v18, 1, 0);
      }
      if ( (*(_DWORD *)(v2 + 156) & 0x40) != 0 )
      {
        ValidateHmonitorNoRip(*(_QWORD *)(v2 + 128));
        xxxNotifyMonitorChanged((struct tagWND *)v5);
      }
      PostIAMPosChangedNotification((struct tagCVR *)v2, (struct tagWND *)v5);
      NotifyShell::PositioningChanged((NotifyShell *)v5, (struct tagWND *)v2, v14);
      CalcWindowFullScreen((struct tagWND *)v5);
      if ( v13 != 6144 )
        xxxWindowEvent(0x800Bu, v5, 0, 0, 1u);
      ThreadUnlock1(v16, v15);
    }
LABEL_39:
    v2 += 168LL;
  }
  if ( (*gpsi & 4) != 0 )
    xxxImeWindowPosChanged(a1);
}
