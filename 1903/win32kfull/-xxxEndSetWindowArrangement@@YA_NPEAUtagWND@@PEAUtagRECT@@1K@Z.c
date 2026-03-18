/*
 * XREFs of ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C01FD388
 * Callers:
 *     ?xxxGetShellShowWindowAction@@YAEPEAUtagWND@@EPEAH@Z @ 0x1C002E44C (-xxxGetShellShowWindowAction@@YAEPEAUtagWND@@EPEAH@Z.c)
 *     xxxProcessEventMessage @ 0x1C00CFC24 (xxxProcessEventMessage.c)
 * Callees:
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C0018C90 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     ?IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z @ 0x1C002E774 (-IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C0091D38 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     _MonitorFromRect @ 0x1C0091E40 (_MonitorFromRect.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50 (PopAndFreeAlwaysW32ThreadLock.c)
 *     GetMonitorWorkRectForWindow @ 0x1C00970A8 (GetMonitorWorkRectForWindow.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     IntersectRect @ 0x1C00C7044 (IntersectRect.c)
 *     _GetProp @ 0x1C00C7C1C (_GetProp.c)
 *     xxxSetWindowPos @ 0x1C00CB0E4 (xxxSetWindowPos.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?DisableStackSwap@CKernelStackSwap@@QEAAXXZ @ 0x1C0164300 (-DisableStackSwap@CKernelStackSwap@@QEAAXXZ.c)
 *     ?TryEnableStackSwap@CKernelStackSwap@@QEAAXXZ @ 0x1C016436C (-TryEnableStackSwap@CKernelStackSwap@@QEAAXXZ.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z @ 0x1C01F9BEC (-ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z.c)
 *     ?EvaluateArrangeState@@YA?AW4_WARR_STATES@@PEAUtagWND@@@Z @ 0x1C01FA1E8 (-EvaluateArrangeState@@YA-AW4_WARR_STATES@@PEAUtagWND@@@Z.c)
 *     ?GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z @ 0x1C01FA2FC (-GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z.c)
 *     ?IsEqualRectToArrangedWindow@@YAHPEAUtagWND@@QEBUtagRECT@@@Z @ 0x1C01FAAB8 (-IsEqualRectToArrangedWindow@@YAHPEAUtagWND@@QEBUtagRECT@@@Z.c)
 *     ?IsLeftOrRightArranged@@YA_NPEBUtagWND@@@Z @ 0x1C01FAB54 (-IsLeftOrRightArranged@@YA_NPEBUtagWND@@@Z.c)
 *     ?TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@3PEAUtagWND@@33@Z @ 0x1C01FBA54 (-TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIR.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FC310 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C01FCA7C (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C01FE164 (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATE.c)
 *     ?ArrangementCompleted@NotifyShell@@YA_NPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x1C023A5D8 (-ArrangementCompleted@NotifyShell@@YA_NPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C023A744 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 */

bool __fastcall xxxEndSetWindowArrangement(struct tagWND *a1, struct tagRECT *a2, struct tagRECT *a3, __int64 a4)
{
  unsigned int v4; // r12d
  const struct tagWND *v7; // rax
  char v8; // bl
  bool v9; // r15
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // edx
  __int64 v15; // rax
  struct tagRECT v16; // xmm0
  char OverlapCoordinatesForArrangement; // al
  int v18; // ebx
  __int64 v19; // r9
  __int64 v20; // r9
  __int64 v21; // rcx
  unsigned int v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  int v27; // ebx
  __int64 v28; // rcx
  bool v29; // cf
  int v30; // eax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r9
  struct tagMONITOR *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  char v44; // al
  __int64 v45; // rbx
  struct tagRECT *Prop; // rax
  struct tagWND *v47; // rdx
  bool v48; // r8
  char v50; // [rsp+40h] [rbp-C0h]
  unsigned int v51; // [rsp+44h] [rbp-BCh]
  int v52; // [rsp+48h] [rbp-B8h]
  unsigned int v53; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v54; // [rsp+50h] [rbp-B0h]
  __int64 v55; // [rsp+58h] [rbp-A8h]
  const struct tagWND *v56; // [rsp+60h] [rbp-A0h]
  _BYTE v57[8]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v58; // [rsp+70h] [rbp-90h]
  struct tagRECT *v59; // [rsp+78h] [rbp-88h]
  _QWORD v60[3]; // [rsp+80h] [rbp-80h] BYREF
  struct tagRECT v61; // [rsp+98h] [rbp-68h] BYREF
  __int64 v62; // [rsp+A8h] [rbp-58h] BYREF
  const struct tagWND *v63; // [rsp+B0h] [rbp-50h]
  __int64 v64; // [rsp+B8h] [rbp-48h]
  __int64 v65; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v66; // [rsp+C8h] [rbp-38h]
  __int64 v67; // [rsp+D0h] [rbp-30h]
  __int128 v68; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v69[44]; // [rsp+F0h] [rbp-10h] BYREF
  struct tagRECT v70; // [rsp+250h] [rbp+150h] BYREF
  __int64 v71; // [rsp+260h] [rbp+160h] BYREF
  __int64 v72; // [rsp+268h] [rbp+168h]
  __int64 v73; // [rsp+270h] [rbp+170h] BYREF
  __int64 v74; // [rsp+278h] [rbp+178h]

  v4 = 2;
  v59 = a2;
  v55 = gptiCurrent;
  v7 = *(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 448LL) + 328LL);
  v56 = v7;
  if ( (a4 & 4) != 0 )
  {
    v8 = 1;
    v9 = 0;
  }
  else
  {
    v50 = 1;
    v8 = 0;
    v9 = !(a4 & 1);
    if ( (a4 & 2) == 0 )
      goto LABEL_5;
  }
  v50 = 0;
LABEL_5:
  v62 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  if ( !v7 )
    return (char)v7;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, (__int64)a3, a4);
  v62 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v62;
  v63 = v56;
  HMLockObject(v56);
  if ( !*(_QWORD *)(v55 + 664) )
  {
    if ( v8 )
    {
      LOBYTE(v12) = *(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 3;
      if ( (_BYTE)v12 )
      {
        if ( (_BYTE)v12 != 3 )
        {
LABEL_13:
          v4 = 0;
          goto LABEL_65;
        }
        v14 = 19;
      }
      else
      {
        v14 = 18;
      }
      xxxArrangeWindow((__int64)a1, v14);
      goto LABEL_13;
    }
    v15 = MonitorFromRect(v59, 0, 0x12u);
    v55 = v15;
    if ( !v15 )
      goto LABEL_65;
    v16 = (struct tagRECT)*GetMonitorWorkRectForWindow(&v68, v15, v56);
    v71 = 0LL;
    v61 = v16;
    v72 = 0LL;
    if ( !(unsigned int)IntersectRect(&v71, &v59->left, &v61.left) )
      goto LABEL_65;
    v12 = v71 - *(_QWORD *)&v59->left;
    if ( v71 == *(_QWORD *)&v59->left )
      v12 = v72 - *(_QWORD *)&v59->right;
    if ( v12 )
      goto LABEL_65;
    OverlapCoordinatesForArrangement = GetOverlapCoordinatesForArrangement(&v61, v59, 1);
    v11 = 55553LL;
    if ( (OverlapCoordinatesForArrangement & 3) != 3 )
      v11 = 0LL;
    if ( (OverlapCoordinatesForArrangement & 9) == 9 )
      v11 = 55553LL;
    v12 = (unsigned int)v11 | 0xD902;
    if ( (OverlapCoordinatesForArrangement & 6) != 6 )
      v12 = (unsigned int)v11;
    v13 = OverlapCoordinatesForArrangement & 0xC;
    v18 = v12 | 0xD902;
    if ( (_BYTE)v13 != 12 )
      v18 = v12;
    v52 = v18;
    if ( !v18 )
      goto LABEL_65;
    if ( v18 == 55555 )
      goto LABEL_65;
    v54 = (v18 != 55553) + 4;
    if ( !(unsigned int)ArrangeActionCompatibleWithStyle((__int64)a1, v54) )
      goto LABEL_65;
    v51 = EvaluateArrangeState((__int64)a1);
    if ( v51 == 6 )
      goto LABEL_65;
    v12 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v12 + 31) & 0x10) == 0 )
      goto LABEL_65;
    if ( a3 )
    {
      v73 = 0LL;
      v74 = 0LL;
      if ( !(unsigned int)IntersectRect(&v73, &a3->left, &v61.left) )
        goto LABEL_65;
      v12 = v73 - *(_QWORD *)&a3->left;
      if ( v73 == *(_QWORD *)&a3->left )
        v12 = v74 - *(_QWORD *)&a3->right;
      if ( v12 )
        goto LABEL_65;
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v13, v20) + 472) + 224LL) & 1) == 0 )
      {
        v21 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v13, v19) + 472);
        if ( (*(_BYTE *)(v21 + 224) & 0x20) == 0 )
        {
          v22 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL);
          if ( (((unsigned __int16)(v22 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                   v21,
                                                                                   v11,
                                                                                   v13,
                                                                                   v19) >> 8)) & 0x1FF) != 0 )
            goto LABEL_47;
          v26 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL);
          if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) != 2 || (v27 = 1, (v26 & 0x20000000) == 0) )
            v27 = 0;
          if ( (W32GetCurrentThreadDpiAwarenessContext(v26, v23, v24, v25) & 0xF) != 2
            || (v29 = (W32GetCurrentThreadDpiAwarenessContext(v28, v11, v13, v19) & 0x20000000) != 0, v30 = 1, !v29) )
          {
            v30 = 0;
          }
          if ( v27 != v30 )
          {
LABEL_47:
            if ( !(unsigned int)TransformRectBetweenCoordinateSpaces(a3, a3, a1, v56) )
              goto LABEL_65;
          }
          v18 = v52;
        }
      }
    }
    v31 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v13, v19);
    v65 = *(_QWORD *)(v31 + 408);
    *(_QWORD *)(v31 + 408) = &v65;
    v66 = v55;
    HMLockObject(v55);
    memset(&v69[2], 0, 0x148uLL);
    v53 = 0;
    memset(v60, 0, sizeof(v60));
    v57[0] = 0;
    v58 = 0LL;
    CKernelStackSwap::DisableStackSwap((CKernelStackSwap *)v57, v32, v33, v34);
    if ( *(__int64 **)(gActiveMoveSizeDataList + 8) != &gActiveMoveSizeDataList )
      __fastfail(3u);
    v69[1] = &gActiveMoveSizeDataList;
    v69[0] = gActiveMoveSizeDataList;
    *(_QWORD *)(gActiveMoveSizeDataList + 8) = v69;
    gActiveMoveSizeDataList = (__int64)v69;
    PushW32ThreadLock((__int64)v69, v60, (__int64)EditionRemoveFromMsdList, v35);
    xxxInitializeMoveSizeDataProgrammaticArrangement(a1, v54, v51, 1LL, v69, &v53);
    v70 = *v59;
    TransformShellProvidedRectangles((__int64)v69, v55, (v18 != 55553) + 1, &v70, 0LL, (__int64)v56, &v70.left, 0LL);
    v36 = _MonitorFromWindowInternal(a1, 2, 0);
    if ( (struct tagMONITOR *)v55 == v36 )
    {
      if ( v51 == 2 && v18 == 55553 || v51 == 3 && v18 != 55553 )
      {
        if ( !(unsigned int)IsEqualRectToArrangedWindow(a1, &v70) )
          xxxSetWindowPos(
            a1,
            0LL,
            (unsigned int)v70.left,
            (unsigned int)v70.top,
            v70.right - v70.left,
            v70.bottom - v70.top,
            16 * !v9 + 3146244);
        goto LABEL_56;
      }
    }
    else
    {
      v69[29] = v55;
    }
    *(struct tagRECT *)&v69[31] = v70;
    if ( !v9 )
      HIDWORD(v69[42]) |= 0x20u;
    xxxApplyArrangeAction(a1, v51, v54, v53, (struct _MOVESIZEDATA *)v69);
LABEL_56:
    ThreadUnlock1(v38, v37, v39);
    v43 = *((_QWORD *)a1 + 5);
    if ( *(char *)(v43 + 20) >= 0 )
    {
      v44 = *(_BYTE *)(v43 + 233) & 3;
      if ( v44 != 3 )
      {
        if ( v44 )
        {
          if ( v9 )
            xxxSetForegroundWindowWithOptions((__int64)a1, 6u, 0, 1);
          if ( IsLeftOrRightArranged(a1) )
          {
            SetOrClrWF(1, (__int64)a1, 0xDA80u, 1);
            v4 = 0;
          }
        }
      }
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v60, v40, v41, v42);
    if ( v58 )
      CKernelStackSwap::TryEnableStackSwap((CKernelStackSwap *)v57);
  }
LABEL_65:
  v45 = ThreadUnlock1(v12, v11, v13);
  if ( v45 )
  {
    if ( v50 )
      NotifyShell::ArrangementCompleted(*(_QWORD *)a1, v4);
    if ( v9 )
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(v45 + 16), 0);
    if ( !v4 )
    {
      if ( a3 )
      {
        Prop = (struct tagRECT *)GetProp((__int64)a1, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL);
        if ( Prop )
          *Prop = *a3;
      }
    }
    if ( IsWindowSubjectToShellWindowBehavior(a1, 16LL) )
    {
      LOBYTE(v47) = 1;
      NotifyShell::TrackedWindowPosChanged(a1, v47, v48);
    }
  }
  LOBYTE(v7) = v4 == 0;
  return (char)v7;
}
