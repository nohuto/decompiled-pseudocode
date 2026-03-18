/*
 * XREFs of ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C01E79E4
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0037588 (xxxProcessEventMessage.c)
 *     xxxShowWindowEx @ 0x1C006B634 (xxxShowWindowEx.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     GetMonitorWorkRectForWindow @ 0x1C001D104 (GetMonitorWorkRectForWindow.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0023060 (PopAndFreeAlwaysW32ThreadLock.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     IntersectRect @ 0x1C003D900 (IntersectRect.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z @ 0x1C006A128 (-IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z.c)
 *     xxxSetWindowPos @ 0x1C0071C80 (xxxSetWindowPos.c)
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C007A7CC (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     _MonitorFromRect @ 0x1C007A8E0 (_MonitorFromRect.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     ?xxxActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C00D86B8 (-xxxActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1C0157414 (_anonymous_namespace_--NotifyShellSimplePayload.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?DisableStackSwap@CKernelStackSwap@@QEAAXXZ @ 0x1C015E360 (-DisableStackSwap@CKernelStackSwap@@QEAAXXZ.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z @ 0x1C01E4358 (-ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z.c)
 *     ?EvaluateArrangeState@@YA?AW4_WARR_STATES@@PEAUtagWND@@@Z @ 0x1C01E4950 (-EvaluateArrangeState@@YA-AW4_WARR_STATES@@PEAUtagWND@@@Z.c)
 *     ?GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z @ 0x1C01E4A58 (-GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z.c)
 *     ?IsEqualRectToArrangedWindow@@YAHPEAUtagWND@@QEBUtagRECT@@@Z @ 0x1C01E51C8 (-IsEqualRectToArrangedWindow@@YAHPEAUtagWND@@QEBUtagRECT@@@Z.c)
 *     ?IsLeftOrRightArranged@@YA_NPEBUtagWND@@@Z @ 0x1C01E5260 (-IsLeftOrRightArranged@@YA_NPEBUtagWND@@@Z.c)
 *     ?TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@3PEAUtagWND@@33@Z @ 0x1C01E617C (-TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIR.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01E69FC (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C01E7130 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C01E87DC (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATE.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C0221FA0 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02C1D60 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall xxxEndSetWindowArrangement(struct tagWND *a1, struct tagRECT *a2, struct tagRECT *a3, char a4)
{
  int v4; // r13d
  __int64 v7; // r14
  bool result; // al
  int v9; // ebx
  char v10; // r12
  bool v11; // si
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  char v15; // cl
  int v16; // edx
  __int64 v17; // rax
  __int64 v18; // r13
  char OverlapCoordinatesForArrangement; // al
  int v20; // r12d
  unsigned int v21; // ebx
  __int64 v22; // rcx
  unsigned int v23; // ebx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rbx
  int v31; // eax
  int v32; // eax
  char v33; // al
  __int64 v34; // rdx
  __int64 v35; // rbx
  int v36; // eax
  int v37; // eax
  __int64 v38; // rbx
  struct tagRECT *Prop; // rax
  struct tagWND *v40; // rdx
  bool v41; // r8
  unsigned __int8 v42; // [rsp+40h] [rbp-C0h]
  unsigned int v43; // [rsp+48h] [rbp-B8h]
  int v44; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v45; // [rsp+50h] [rbp-B0h]
  BOOLEAN Enable[8]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v47; // [rsp+60h] [rbp-A0h]
  struct tagRECT *v48; // [rsp+68h] [rbp-98h]
  __int64 v49; // [rsp+70h] [rbp-90h]
  struct tagRECT v50; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v51[3]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v52[3]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v53[3]; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v54; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v55[44]; // [rsp+E0h] [rbp-20h] BYREF
  struct tagRECT v56; // [rsp+240h] [rbp+140h] BYREF
  _QWORD v57[2]; // [rsp+250h] [rbp+150h] BYREF
  _QWORD v58[2]; // [rsp+260h] [rbp+160h] BYREF

  v4 = 2;
  v48 = a2;
  v49 = gptiCurrent;
  v7 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 328LL);
  result = 0;
  v9 = a4 & 4;
  if ( (a4 & 4) == 0 && (a4 & 1) == 0 )
  {
    v10 = 1;
    v42 = 1;
LABEL_4:
    v11 = (a4 & 2) == 0;
    goto LABEL_5;
  }
  v42 = 0;
  v10 = 0;
  if ( (a4 & 4) == 0 )
    goto LABEL_4;
  v11 = 0;
  v42 = 0;
LABEL_5:
  if ( !v7 )
    return result;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2);
  v52[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v52;
  v52[1] = v7;
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
  v14 = 0LL;
  if ( !*(_QWORD *)(v49 + 672) )
  {
    if ( v9 )
    {
      v15 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 3;
      if ( v15 )
      {
        if ( v15 != 3 )
        {
LABEL_15:
          v14 = 0LL;
          v4 = 0;
          goto LABEL_82;
        }
        v16 = 18;
      }
      else
      {
        v16 = 17;
      }
      xxxArrangeWindow((__int64)a1, v16);
      goto LABEL_15;
    }
    v17 = MonitorFromRect(v48, 0, 0x12u);
    v18 = v17;
    if ( !v17 )
      goto LABEL_81;
    v50 = (struct tagRECT)*GetMonitorWorkRectForWindow(&v54, v17, (const struct tagWND *)v7);
    if ( !(unsigned int)IntersectRect(v57, &v48->left, &v50.left) )
      goto LABEL_81;
    v14 = v57[0] - *(_QWORD *)&v48->left;
    if ( v57[0] == *(_QWORD *)&v48->left )
      v14 = v57[1] - *(_QWORD *)&v48->right;
    if ( v14 )
      goto LABEL_81;
    OverlapCoordinatesForArrangement = GetOverlapCoordinatesForArrangement(&v50, v48, 1);
    v13 = 55553LL;
    if ( (OverlapCoordinatesForArrangement & 3) != 3 )
      v13 = 0LL;
    if ( (OverlapCoordinatesForArrangement & 9) == 9 )
      v13 = 55553LL;
    v14 = (unsigned int)v13 | 0xD902;
    if ( (OverlapCoordinatesForArrangement & 6) != 6 )
      v14 = (unsigned int)v13;
    v20 = v14 | 0xD902;
    if ( (OverlapCoordinatesForArrangement & 0xC) != 0xC )
      v20 = v14;
    if ( v20 )
    {
      if ( v20 != 55555 )
      {
        v45 = (v20 != 55553) + 4;
        if ( (unsigned int)ArrangeActionCompatibleWithStyle((__int64)a1, v45) )
        {
          v43 = EvaluateArrangeState((__int64)a1);
          v21 = v43;
          if ( v43 != 6 )
          {
            v14 = *((_QWORD *)a1 + 5);
            if ( (*(_BYTE *)(v14 + 31) & 0x10) != 0 )
            {
              if ( !a3 )
                goto LABEL_44;
              if ( (unsigned int)IntersectRect(v58, &a3->left, &v50.left) )
              {
                v14 = v58[0] - *(_QWORD *)&a3->left;
                if ( v58[0] == *(_QWORD *)&a3->left )
                  v14 = v58[1] - *(_QWORD *)&a3->right;
                if ( !v14 )
                {
                  if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13) + 480) + 224LL) & 1) != 0
                    || (v22 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13) + 480),
                        (*(_BYTE *)(v22 + 224) & 0x20) != 0) )
                  {
LABEL_44:
                    v24 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13);
                    v53[0] = *(_QWORD *)(v24 + 416);
                    *(_QWORD *)(v24 + 416) = v53;
                    v53[1] = v18;
                    _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
                    memset(v55, 0, 0x158uLL);
                    v44 = 0;
                    Enable[0] = 0;
                    v47 = 0LL;
                    CKernelStackSwap::DisableStackSwap((CKernelStackSwap *)Enable, v25);
                    if ( *(__int64 **)(gActiveMoveSizeDataList + 8) != &gActiveMoveSizeDataList )
                      __fastfail(3u);
                    v55[1] = &gActiveMoveSizeDataList;
                    v55[0] = gActiveMoveSizeDataList;
                    *(_QWORD *)(gActiveMoveSizeDataList + 8) = v55;
                    gActiveMoveSizeDataList = (__int64)v55;
                    PushW32ThreadLock((__int64)v55, v51, (__int64)EditionRemoveFromMsdList);
                    xxxInitializeMoveSizeDataProgrammaticArrangement(a1, v45, v21, 1LL, v55, &v44);
                    v56 = *v48;
                    TransformShellProvidedRectangles(
                      (__int64)v55,
                      v18,
                      (v20 != 55553) + 1,
                      &v56,
                      0LL,
                      v7,
                      &v56.left,
                      0LL);
                    if ( (struct tagMONITOR *)v18 == _MonitorFromWindowInternal(a1, 2, 0) )
                    {
                      if ( v21 == 2 && v20 == 55553 || v21 == 3 && v20 != 55553 )
                      {
                        v4 = 0;
                        v10 = v42;
                        if ( !(unsigned int)IsEqualRectToArrangedWindow(a1, &v56) )
                          xxxSetWindowPos(
                            a1,
                            0LL,
                            (unsigned int)v56.left,
                            (unsigned int)v56.top,
                            v56.right - v56.left,
                            v56.bottom - v56.top,
                            16 * (v42 ^ 1) + 3146244);
                        goto LABEL_57;
                      }
                    }
                    else
                    {
                      v55[29] = v18;
                    }
                    v10 = v42;
                    v4 = 0;
                    *(struct tagRECT *)&v55[31] = v56;
                    if ( !v42 )
                      HIDWORD(v55[42]) |= 0x20u;
                    xxxApplyArrangeAction(a1, v21, v45, v44, (struct _MOVESIZEDATA *)v55);
LABEL_57:
                    ThreadUnlock1(v27, v26);
                    v29 = *((_QWORD *)a1 + 5);
                    if ( *(char *)(v29 + 20) >= 0 )
                    {
                      v33 = *(_BYTE *)(v29 + 233) & 3;
                      if ( v33 != 3 && v33 )
                      {
                        if ( v10 && (!gpqForeground || *(struct tagWND **)(gpqForeground + 120LL) != a1) )
                        {
                          *(_DWORD *)(v49 + 488) |= 0x20u;
                          xxxActivateWindow(a1);
                        }
                        if ( IsLeftOrRightArranged(a1) )
                          SetOrClrWF(1, (__int64)a1, 0xDA80u, 1);
                        else
                          v4 = 2;
                        PopAndFreeAlwaysW32ThreadLock((__int64)v51, v34);
                        v35 = v47;
                        if ( v47 )
                        {
                          v36 = *(_DWORD *)(v47 + 1484);
                          if ( v36 <= 0 )
                          {
                            MicrosoftTelemetryAssertTriggeredNoArgsKM(v14);
                            v36 = *(_DWORD *)(v35 + 1484);
                          }
                          v37 = v36 - 1;
                          *(_DWORD *)(v35 + 1484) = v37;
                          if ( !v37 )
                            KeSetKernelStackSwapEnable(Enable[0]);
                        }
                        goto LABEL_82;
                      }
                      PopAndFreeAlwaysW32ThreadLock((__int64)v51, v28);
                      v30 = v47;
                      if ( !v47 )
                        goto LABEL_81;
                      v31 = *(_DWORD *)(v47 + 1484);
                      if ( v31 > 0 )
                        goto LABEL_61;
LABEL_60:
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14);
                      v31 = *(_DWORD *)(v30 + 1484);
LABEL_61:
                      v32 = v31 - 1;
                      *(_DWORD *)(v30 + 1484) = v32;
                      if ( !v32 )
                        KeSetKernelStackSwapEnable(Enable[0]);
                      goto LABEL_81;
                    }
                    PopAndFreeAlwaysW32ThreadLock((__int64)v51, v28);
                    v30 = v47;
                    if ( v47 )
                    {
                      v31 = *(_DWORD *)(v47 + 1484);
                      if ( v31 > 0 )
                        goto LABEL_61;
                      goto LABEL_60;
                    }
LABEL_81:
                    v4 = 2;
                    goto LABEL_82;
                  }
                  v23 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL);
                  if ( (((unsigned __int16)(v23 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                           v22,
                                                                                           v13) >> 8)) & 0x1FF) == 0
                    || (unsigned int)TransformRectBetweenCoordinateSpaces(a3, a3, a1, v7) )
                  {
                    v21 = v43;
                    goto LABEL_44;
                  }
                }
              }
            }
          }
        }
      }
    }
    v10 = v42;
    goto LABEL_81;
  }
LABEL_82:
  v38 = ThreadUnlock1(v14, v13);
  if ( v38 )
  {
    if ( v11 )
      anonymous_namespace_::NotifyShellSimplePayload(*(_QWORD *)a1, 2, v4, 0LL);
    if ( v10 )
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(v38 + 16), 0);
    if ( !v4 )
    {
      if ( a3 )
      {
        Prop = (struct tagRECT *)GetProp((__int64)a1, (unsigned __int16)atomCheckpointProp, 1LL);
        if ( Prop )
          *Prop = *a3;
      }
    }
    if ( IsWindowSubjectToShellWindowBehavior(a1, 16LL) )
    {
      LOBYTE(v40) = 1;
      NotifyShell::TrackedWindowPosChanged(a1, v40, v41);
    }
  }
  return v4 == 0;
}
