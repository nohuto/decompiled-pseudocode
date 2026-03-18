/*
 * XREFs of xxxEndSetWindowArrangement @ 0x1C01C6954
 * Callers:
 *     xxxProcessEventMessage @ 0x1C003C798 (xxxProcessEventMessage.c)
 *     xxxShowWindowEx @ 0x1C0075774 (xxxShowWindowEx.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001B160 (PopAndFreeAlwaysW32ThreadLock.c)
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C0021CE4 (IsWindowSubjectToShellWindowBehavior.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     IntersectRect @ 0x1C002D204 (IntersectRect.c)
 *     xxxSetWindowPos @ 0x1C0034CE4 (xxxSetWindowPos.c)
 *     GetMonitorWorkRectForWindow @ 0x1C0035A78 (GetMonitorWorkRectForWindow.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C00602A4 (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 *     xxxActivateWindow @ 0x1C006D170 (xxxActivateWindow.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C0072A9C (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     _MonitorFromRect @ 0x1C0072BA0 (_MonitorFromRect.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     xxxNotifyShellTrackedWindowPosChanged @ 0x1C01A59E4 (xxxNotifyShellTrackedWindowPosChanged.c)
 *     ?ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z @ 0x1C01C0220 (-ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z.c)
 *     ?GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z @ 0x1C01C07FC (-GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z.c)
 *     ?IsEqualRectToArrangedWindow@@YAHPEAUtagWND@@QEBUtagRECT@@@Z @ 0x1C01C0F78 (-IsEqualRectToArrangedWindow@@YAHPEAUtagWND@@QEBUtagRECT@@@Z.c)
 *     ?IsLeftOrRightArranged@@YAEPEBUtagWND@@@Z @ 0x1C01C1010 (-IsLeftOrRightArranged@@YAEPEBUtagWND@@@Z.c)
 *     ?TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@3PEAUtagWND@@33@Z @ 0x1C01C19D8 (-TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIR.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01C2254 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C01C336C (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATE.c)
 *     EvaluateArrangeState @ 0x1C01C56C8 (EvaluateArrangeState.c)
 */

__int64 __fastcall xxxEndSetWindowArrangement(struct tagWND *a1, struct tagRECT *a2, __int64 a3, char a4)
{
  unsigned int v4; // r13d
  BOOL v5; // r15d
  unsigned int v6; // edi
  struct tagRECT *v8; // rbx
  __int64 v10; // r12
  __int64 v12; // rdx
  __int64 ThreadWin32Thread; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  char OverlapCoordinatesForArrangement; // al
  int v18; // r13d
  __int64 v19; // rcx
  unsigned int v20; // ebx
  __int64 v21; // rax
  struct tagRECT v22; // xmm0
  struct tagMONITOR *v23; // rbx
  __int64 v24; // r9
  int v25; // edx
  struct tagMONITOR *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r8
  __int64 v31; // rax
  char v32; // al
  __int64 v33; // rbx
  __int64 v34; // r8
  _OWORD *Prop; // rax
  __int64 v36; // r8
  unsigned int v37; // [rsp+44h] [rbp-BCh]
  int v38; // [rsp+48h] [rbp-B8h] BYREF
  int v39; // [rsp+4Ch] [rbp-B4h]
  int v40; // [rsp+50h] [rbp-B0h]
  struct tagRECT *v41; // [rsp+58h] [rbp-A8h]
  __int64 v42; // [rsp+60h] [rbp-A0h]
  __int64 v43; // [rsp+68h] [rbp-98h]
  struct tagRECT v44; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v45[3]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v46[3]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v47[3]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v48; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v49[7]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v50[44]; // [rsp+110h] [rbp+10h] BYREF
  struct tagRECT v51; // [rsp+270h] [rbp+170h] BYREF
  _QWORD v52[2]; // [rsp+280h] [rbp+180h] BYREF
  _QWORD v53[2]; // [rsp+290h] [rbp+190h] BYREF

  v4 = 2;
  v41 = a2;
  v40 = a4 & 2;
  v5 = (a4 & 1) == 0;
  v43 = gptiCurrent;
  v6 = 0;
  v8 = a2;
  v10 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 328LL);
  if ( !v10 )
    return 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2);
  v46[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v46;
  v46[1] = v10;
  _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
  if ( !*(_QWORD *)(v43 + 664) )
  {
    v16 = MonitorFromRect(v8, 0LL, 18LL, v15);
    v42 = v16;
    if ( v16 )
    {
      v44 = (struct tagRECT)*GetMonitorWorkRectForWindow(&v48, v16, (const struct tagWND *)v10);
      if ( (unsigned int)IntersectRect(v52, &v8->left, &v44.left) )
      {
        ThreadWin32Thread = v52[0] - *(_QWORD *)&v8->left;
        if ( v52[0] == *(_QWORD *)&v8->left )
          ThreadWin32Thread = v52[1] - *(_QWORD *)&v8->right;
        if ( !ThreadWin32Thread )
        {
          OverlapCoordinatesForArrangement = GetOverlapCoordinatesForArrangement(&v44, v8, 1);
          v12 = 55553LL;
          if ( (OverlapCoordinatesForArrangement & 3) != 3 )
            v12 = 0LL;
          if ( (OverlapCoordinatesForArrangement & 9) == 9 )
            v12 = 55553LL;
          ThreadWin32Thread = (unsigned int)v12 | 0xD902;
          if ( (OverlapCoordinatesForArrangement & 6) != 6 )
            ThreadWin32Thread = (unsigned int)v12;
          v14 = OverlapCoordinatesForArrangement & 0xC;
          v18 = ThreadWin32Thread | 0xD902;
          if ( (_BYTE)v14 != 12 )
            v18 = ThreadWin32Thread;
          if ( v18 )
          {
            if ( v18 != 55555 )
            {
              v39 = (v18 != 55553) + 4;
              if ( (unsigned int)ArrangeActionCompatibleWithStyle((__int64)a1, v39) )
              {
                v37 = EvaluateArrangeState((__int64)a1);
                if ( v37 != 6 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
                {
                  if ( !a3 )
                    goto LABEL_32;
                  if ( (unsigned int)IntersectRect(v53, (int *)a3, &v44.left) )
                  {
                    ThreadWin32Thread = v53[0] - *(_QWORD *)a3;
                    if ( v53[0] == *(_QWORD *)a3 )
                      ThreadWin32Thread = v53[1] - *(_QWORD *)(a3 + 8);
                    if ( !ThreadWin32Thread )
                    {
                      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12) + 472)
                                     + 224LL) & 1) != 0
                        || (v19 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12) + 472),
                            (*(_BYTE *)(v19 + 224) & 0x20) != 0) )
                      {
LABEL_32:
                        v21 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12);
                        v47[0] = *(_QWORD *)(v21 + 408);
                        *(_QWORD *)(v21 + 408) = v47;
                        v47[1] = v42;
                        _InterlockedIncrement((volatile signed __int32 *)(v42 + 8));
                        memset(v50, 0, 0x158uLL);
                        v38 = 0;
                        if ( *(__int64 **)(gActiveMoveSizeDataList + 8) != &gActiveMoveSizeDataList )
                          __fastfail(3u);
                        v50[1] = &gActiveMoveSizeDataList;
                        v50[0] = gActiveMoveSizeDataList;
                        *(_QWORD *)(gActiveMoveSizeDataList + 8) = v50;
                        gActiveMoveSizeDataList = (__int64)v50;
                        PushW32ThreadLock((__int64)v50, v45, (__int64)EditionRemoveFromMsdList);
                        xxxInitializeMoveSizeDataProgrammaticArrangement((__int64)a1, v39, v37, 1, (__int64)v50, &v38);
                        v22 = *v8;
                        v23 = (struct tagMONITOR *)v42;
                        v51 = v22;
                        TransformShellProvidedRectangles(
                          (__int64)v50,
                          v42,
                          (v18 != 55553) + 1,
                          &v51,
                          0LL,
                          v10,
                          &v51.left,
                          0LL);
                        if ( v23 == _MonitorFromWindowInternal(a1, 2LL, 0LL, v24) )
                        {
                          v25 = 0;
                          if ( v37 == 2 && v18 == 55553 || v37 == 3 && v18 != 55553 )
                          {
                            if ( !(unsigned int)IsEqualRectToArrangedWindow(a1, &v51) )
                              xxxSetWindowPos(
                                a1,
                                0LL,
                                (unsigned int)v51.left,
                                (unsigned int)v51.top,
                                v51.right - v51.left,
                                v51.bottom - v51.top,
                                16 * !v5 + 3146244);
                            goto LABEL_41;
                          }
                        }
                        else
                        {
                          v25 = 1;
                        }
                        v26 = (struct tagMONITOR *)v50[29];
                        if ( v25 )
                          v26 = v23;
                        v50[29] = v26;
                        *(struct tagRECT *)&v50[31] = v51;
                        if ( !v5 )
                          HIDWORD(v50[42]) |= 0x20u;
                        xxxApplyArrangeAction(a1, v37, v39, v38, (struct _MOVESIZEDATA *)v50);
LABEL_41:
                        ThreadUnlock1(v28, v27, v29);
                        v31 = *((_QWORD *)a1 + 5);
                        if ( *(char *)(v31 + 20) >= 0 )
                        {
                          v32 = *(_BYTE *)(v31 + 233) & 3;
                          if ( v32 != 3 )
                          {
                            if ( v32 )
                            {
                              if ( v5 && (!gpqForeground || *(struct tagWND **)(gpqForeground + 120LL) != a1) )
                              {
                                *(_DWORD *)(v43 + 480) |= 0x20u;
                                xxxActivateWindow(a1, 1, v30);
                              }
                              if ( IsLeftOrRightArranged(a1) )
                              {
                                SetOrClrWF(1, (__int64)a1, 55936, 1);
                                v4 = 0;
                              }
                              else
                              {
                                v4 = 2;
                              }
                              PopAndFreeAlwaysW32ThreadLock((__int64)v45);
                              goto LABEL_60;
                            }
                          }
                        }
                        PopAndFreeAlwaysW32ThreadLock((__int64)v45);
                        goto LABEL_59;
                      }
                      v20 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL);
                      if ( (((unsigned __int16)(v20 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                               v19,
                                                                                               v12) >> 8)) & 0x1FF) == 0
                        || (unsigned int)TransformRectBetweenCoordinateSpaces(a3, a3, a1, v10) )
                      {
                        v8 = v41;
                        goto LABEL_32;
                      }
                    }
                  }
                }
              }
            }
          }
LABEL_59:
          v4 = 2;
        }
      }
    }
  }
LABEL_60:
  v33 = ThreadUnlock1(ThreadWin32Thread, v12, v14);
  if ( v33 )
  {
    if ( !v40 )
    {
      memset(v49, 0, sizeof(v49));
      v49[0] = *(_QWORD *)a1;
      v49[2] = v4;
      LODWORD(v49[1]) = 2;
      v49[3] = 0LL;
      xxxNotifyIAMWindowManagementEvent((const struct _SHELL_WINDOWMANAGEMENT_NOTIFY_INFO *const)v49);
    }
    if ( v5 )
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(v33 + 16), 0);
    if ( !v4 )
    {
      if ( a3 )
      {
        Prop = (_OWORD *)RealGetProp(*((_QWORD *)a1 + 15), (unsigned __int16)atomCheckpointProp, 1LL);
        if ( Prop )
          *Prop = *(_OWORD *)a3;
      }
    }
    if ( (unsigned int)IsWindowSubjectToShellWindowBehavior((__int64)a1, 16LL, v34) )
      xxxNotifyShellTrackedWindowPosChanged(a1, 1, v36);
  }
  LOBYTE(v6) = v4 == 0;
  return v6;
}
