/*
 * XREFs of ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C00CD9E0
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C00CEBD0 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     CalcWindowFullScreen @ 0x1C002C8AC (CalcWindowFullScreen.c)
 *     ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x1C002D8D4 (-PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z.c)
 *     WindowHasShadow @ 0x1C008C214 (WindowHasShadow.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C008C248 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     DwmChildRectChange @ 0x1C0092168 (DwmChildRectChange.c)
 *     xxxRemoveShadow @ 0x1C0096C5C (xxxRemoveShadow.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 *     xxxWindowEvent @ 0x1C00AC2F0 (xxxWindowEvent.c)
 *     xxxNotifyMonitorChanged @ 0x1C00C7C8C (xxxNotifyMonitorChanged.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C00CCA68 (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     ?PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C00CDDC4 (-PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     ShouldHaveShadow @ 0x1C0124350 (ShouldHaveShadow.c)
 *     xxxAddShadow @ 0x1C01456C4 (xxxAddShadow.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C0146010 (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     xxxUpdateShadowZorder @ 0x1C023B1C8 (xxxUpdateShadowZorder.c)
 *     zzzMoveShadow @ 0x1C023B380 (zzzMoveShadow.c)
 */

void __fastcall xxxSendChangedMsgs(struct tagSMWP *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r15d
  __int64 *v5; // rbx
  struct tagSMWP *v6; // r13
  unsigned __int64 v7; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v9; // rsi
  unsigned __int64 v10; // rdi
  unsigned __int64 *v11; // r14
  unsigned __int64 v12; // rdi
  struct _KTHREAD *v13; // rbp
  __int64 v14; // rsi
  __int64 *ThreadWin32Thread; // rax
  int v16; // r8d
  char v17; // r8
  struct tagWND **Shadow; // rax
  int v19; // esi
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  struct tagRECT v23; // xmm0
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned __int16 v26; // cx
  const struct tagCVR *v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  struct tagRECT v31; // [rsp+50h] [rbp-58h] BYREF
  __int64 v32; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int64 v33; // [rsp+68h] [rbp-40h]
  __int64 i; // [rsp+70h] [rbp-38h]
  __int64 BugCheckParameter3; // [rsp+B0h] [rbp+8h] BYREF

  v4 = *((_DWORD *)a1 + 7) - 1;
  v5 = (__int64 *)*((_QWORD *)a1 + 5);
  v6 = a1;
  v32 = 0LL;
  v33 = 0LL;
  for ( i = 0LL; v4 >= 0; --v4 )
  {
    v7 = *v5;
    if ( *v5 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
        PsGetThreadWin32Thread(CurrentThread);
      a2 = (unsigned __int16)v7;
      a1 = (struct tagSMWP *)gpsi;
      if ( (unsigned __int64)(unsigned __int16)v7 < *(_QWORD *)(gpsi + 8LL)
        && ((v9 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v7 * LODWORD(gSharedInfo[2]),
             v10 = v7 >> 16,
             v11 = (unsigned __int64 *)HMPkheFromPhe(v9),
             (_WORD)v10 == *(_WORD *)(v9 + 26))
         || (_WORD)v10 == 0xFFFF
         || !(_WORD)v10 && PsGetCurrentProcessWow64Process(a1))
        && (*(_BYTE *)(v9 + 25) & 1) == 0
        && *(_BYTE *)(v9 + 24) == 1
        && (v12 = *v11) != 0 )
      {
        a1 = (struct tagSMWP *)v5[1];
        if ( (unsigned __int64)a1 - 2 > 0xFFFFFFFFFFFFFFFBuLL || (LOBYTE(a2) = 1, HMValidateHandleNoSecure(a1, a2)) )
        {
          if ( (v5[4] & 0x40000) != 0 || (v5[4] & 0x18E7) == 0x1807 )
          {
            PostIAMPosChangedNotification((struct tagCVR *)v5, (struct tagWND *)v12);
          }
          else
          {
            v13 = KeGetCurrentThread();
            v14 = 0LL;
            if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
            {
              ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(v13);
              if ( ThreadWin32Thread )
                v14 = *ThreadWin32Thread;
            }
            v32 = *(_QWORD *)(v14 + 408);
            *(_QWORD *)(v14 + 408) = &v32;
            v33 = v12;
            HMLockObject(v12);
            v16 = *((_DWORD *)v5 + 8);
            if ( (v16 & 0x80u) != 0 )
            {
              xxxRemoveShadow(v12);
              v16 = *((_DWORD *)v5 + 8);
            }
            if ( (v16 & 0x40) != 0 )
            {
              if ( (unsigned int)ShouldHaveShadow(v12) )
                xxxAddShadow((struct tagWND *)v12);
            }
            else if ( (unsigned int)WindowHasShadow(v12) )
            {
              if ( (v17 & 0x21) == 1 )
              {
                if ( (v17 & 2) == 0 )
                  zzzMoveShadow(v12);
              }
              else
              {
                Shadow = (struct tagWND **)FindShadow((struct tagWND *)v12);
                if ( Shadow )
                  zzzApplyShadow(*Shadow, Shadow[1]);
              }
              if ( (v5[4] & 4) == 0 )
                xxxUpdateShadowZorder(v12);
            }
            v19 = v5[4] & 0x9820;
            if ( (unsigned int)IsWindowDesktopComposed(v12) && v19 != 6144 )
              DwmChildRectChange(v12, v20, v21, v22);
            if ( (*(_DWORD *)(gptiCurrent + 1224LL) & 0x40000) == 0 || gptiCurrent == *(_QWORD *)(v12 + 16) )
            {
              _InterlockedIncrement(&glSendMessage);
              xxxSendTransformableMessageTimeout(
                (__int64 *)v12,
                0x47u,
                0LL,
                (struct _LARGE_STRING *)v5,
                0,
                0,
                0LL,
                1u,
                0);
            }
            else if ( *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 400LL) != 1 )
            {
              xxxSendTransformableMessageTimeout(
                (__int64 *)v12,
                0x47u,
                0LL,
                (struct _LARGE_STRING *)v5,
                2u,
                0x64u,
                &BugCheckParameter3,
                1u,
                0);
            }
            if ( (*((_DWORD *)v5 + 39) & 0x40) != 0 )
            {
              if ( (v5[4] & 0x80000) != 0 )
                v23 = *(struct tagRECT *)(*(_QWORD *)(v12 + 40) + 88LL);
              else
                v23 = *(struct tagRECT *)(v5 + 17);
              v24 = v5[16];
              v31 = v23;
              v25 = ValidateHmonitorNoRip(v24);
              if ( v25 )
                v26 = *(_WORD *)(*(_QWORD *)(v25 + 40) + 64LL);
              else
                v26 = 0;
              xxxNotifyMonitorChanged((struct tagWND *)v12, &v31, (struct tagBWL *)v5[20], v26);
            }
            PostIAMPosChangedNotification((struct tagCVR *)v5, (struct tagWND *)v12);
            NotifyShell::PositioningChanged((NotifyShell *)v12, (struct tagWND *)v5, v27);
            CalcWindowFullScreen((struct tagWND *)v12);
            if ( v19 != 6144 )
              xxxWindowEvent(0x800Bu, (struct tagWND *)v12, 0LL, 0LL, 1);
            ThreadUnlock1(v29, v28, v30);
          }
          goto LABEL_55;
        }
      }
      else
      {
        *((_DWORD *)v5 + 8) = 6159;
      }
      *v5 = 0LL;
    }
LABEL_55:
    v5 += 21;
  }
  if ( (*gpsi & 4) != 0 )
    xxxImeWindowPosChanged(v6, a2, a3, a4);
}
