/*
 * XREFs of ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C006F0B0
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C00702A0 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     WindowHasShadow @ 0x1C001A824 (WindowHasShadow.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C001A858 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x1C0022FF4 (-PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z.c)
 *     CalcWindowFullScreen @ 0x1C0032BBC (CalcWindowFullScreen.c)
 *     DwmChildRectChange @ 0x1C0032E90 (DwmChildRectChange.c)
 *     xxxRemoveShadow @ 0x1C003798C (xxxRemoveShadow.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     xxxWindowEvent @ 0x1C004D110 (xxxWindowEvent.c)
 *     xxxNotifyMonitorChanged @ 0x1C006935C (xxxNotifyMonitorChanged.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C006E138 (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     ?PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C006F494 (-PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     ShouldHaveShadow @ 0x1C00FED24 (ShouldHaveShadow.c)
 *     xxxAddShadow @ 0x1C0146474 (xxxAddShadow.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C0146DC0 (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     xxxUpdateShadowZorder @ 0x1C023ABA8 (xxxUpdateShadowZorder.c)
 *     zzzMoveShadow @ 0x1C023AD60 (zzzMoveShadow.c)
 */

void __fastcall xxxSendChangedMsgs(struct tagSMWP *a1, __int64 a2, __int64 a3)
{
  int v3; // r15d
  __int64 *v4; // rbx
  struct tagSMWP *v5; // r13
  unsigned __int64 v6; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  unsigned __int64 *v10; // r14
  unsigned __int64 v11; // rdi
  struct _KTHREAD *v12; // rbp
  __int64 v13; // rsi
  __int64 *ThreadWin32Thread; // rax
  int v15; // r8d
  char v16; // r8
  struct tagWND **Shadow; // rax
  int v18; // esi
  __int64 v19; // rdx
  __int64 v20; // r8
  struct tagRECT v21; // xmm0
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int16 v24; // cx
  const struct tagCVR *v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  struct tagRECT v29; // [rsp+50h] [rbp-58h] BYREF
  __int64 v30; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int64 v31; // [rsp+68h] [rbp-40h]
  __int64 i; // [rsp+70h] [rbp-38h]
  __int64 BugCheckParameter3; // [rsp+B0h] [rbp+8h] BYREF

  v3 = *((_DWORD *)a1 + 7) - 1;
  v4 = (__int64 *)*((_QWORD *)a1 + 5);
  v5 = a1;
  v30 = 0LL;
  v31 = 0LL;
  for ( i = 0LL; v3 >= 0; --v3 )
  {
    v6 = *v4;
    if ( *v4 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3) )
        PsGetThreadWin32Thread(CurrentThread);
      a2 = (unsigned __int16)v6;
      a1 = (struct tagSMWP *)gpsi;
      if ( (unsigned __int64)(unsigned __int16)v6 < *(_QWORD *)(gpsi + 8LL)
        && ((v8 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v6 * LODWORD(gSharedInfo[2]),
             v9 = v6 >> 16,
             v10 = (unsigned __int64 *)HMPkheFromPhe(v8),
             (_WORD)v9 == *(_WORD *)(v8 + 26))
         || (_WORD)v9 == 0xFFFF
         || !(_WORD)v9 && PsGetCurrentProcessWow64Process(a1))
        && (*(_BYTE *)(v8 + 25) & 1) == 0
        && *(_BYTE *)(v8 + 24) == 1
        && (v11 = *v10) != 0 )
      {
        a1 = (struct tagSMWP *)v4[1];
        if ( (unsigned __int64)a1 - 2 > 0xFFFFFFFFFFFFFFFBuLL || (LOBYTE(a2) = 1, HMValidateHandleNoSecure(a1, a2)) )
        {
          if ( (v4[4] & 0x40000) != 0 || (v4[4] & 0x18E7) == 0x1807 )
          {
            PostIAMPosChangedNotification((struct tagCVR *)v4, (struct tagWND *)v11);
          }
          else
          {
            v12 = KeGetCurrentThread();
            v13 = 0LL;
            if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3) )
            {
              ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(v12);
              if ( ThreadWin32Thread )
                v13 = *ThreadWin32Thread;
            }
            v30 = *(_QWORD *)(v13 + 408);
            *(_QWORD *)(v13 + 408) = &v30;
            v31 = v11;
            HMLockObject(v11);
            v15 = *((_DWORD *)v4 + 8);
            if ( (v15 & 0x80u) != 0 )
            {
              xxxRemoveShadow(v11);
              v15 = *((_DWORD *)v4 + 8);
            }
            if ( (v15 & 0x40) != 0 )
            {
              if ( (unsigned int)ShouldHaveShadow(v11) )
                xxxAddShadow((struct tagWND *)v11);
            }
            else if ( (unsigned int)WindowHasShadow(v11) )
            {
              if ( (v16 & 0x21) == 1 )
              {
                if ( (v16 & 2) == 0 )
                  zzzMoveShadow(v11);
              }
              else
              {
                Shadow = (struct tagWND **)FindShadow((struct tagWND *)v11);
                if ( Shadow )
                  zzzApplyShadow(*Shadow, Shadow[1]);
              }
              if ( (v4[4] & 4) == 0 )
                xxxUpdateShadowZorder(v11);
            }
            v18 = v4[4] & 0x9820;
            if ( (unsigned int)IsWindowDesktopComposed(v11) && v18 != 6144 )
              DwmChildRectChange(v11, v19, v20);
            if ( (*(_DWORD *)(gptiCurrent + 1224LL) & 0x40000) == 0 || gptiCurrent == *(_QWORD *)(v11 + 16) )
            {
              _InterlockedIncrement(&glSendMessage);
              xxxSendTransformableMessageTimeout(
                (__int64 *)v11,
                0x47u,
                0LL,
                (struct _LARGE_STRING *)v4,
                0,
                0,
                0LL,
                1u,
                0);
            }
            else if ( *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 400LL) != 1 )
            {
              xxxSendTransformableMessageTimeout(
                (__int64 *)v11,
                0x47u,
                0LL,
                (struct _LARGE_STRING *)v4,
                2u,
                0x64u,
                &BugCheckParameter3,
                1u,
                0);
            }
            if ( (*((_DWORD *)v4 + 39) & 0x40) != 0 )
            {
              if ( (v4[4] & 0x80000) != 0 )
                v21 = *(struct tagRECT *)(*(_QWORD *)(v11 + 40) + 88LL);
              else
                v21 = *(struct tagRECT *)(v4 + 17);
              v22 = v4[16];
              v29 = v21;
              v23 = ValidateHmonitorNoRip(v22);
              if ( v23 )
                v24 = *(_WORD *)(*(_QWORD *)(v23 + 40) + 64LL);
              else
                v24 = 0;
              xxxNotifyMonitorChanged((struct tagWND *)v11, &v29, (struct tagBWL *)v4[20], v24);
            }
            PostIAMPosChangedNotification((struct tagCVR *)v4, (struct tagWND *)v11);
            NotifyShell::PositioningChanged((NotifyShell *)v11, (struct tagWND *)v4, v25);
            CalcWindowFullScreen((struct tagWND *)v11);
            if ( v18 != 6144 )
              xxxWindowEvent(0x800Bu, (struct tagWND *)v11, 0LL, 0, 1);
            ThreadUnlock1(v27, v26, v28);
          }
          goto LABEL_55;
        }
      }
      else
      {
        *((_DWORD *)v4 + 8) = 6159;
      }
      *v4 = 0LL;
    }
LABEL_55:
    v4 += 21;
  }
  if ( (*gpsi & 4) != 0 )
    xxxImeWindowPosChanged(v5, a2, a3);
}
