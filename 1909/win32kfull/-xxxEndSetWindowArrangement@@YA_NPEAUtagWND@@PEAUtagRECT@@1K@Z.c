/*
 * XREFs of ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C01FD0D8
 * Callers:
 *     ?xxxGetShellShowWindowAction@@YAEPEAUtagWND@@EPEAH@Z @ 0x1C0023B6C (-xxxGetShellShowWindowAction@@YAEPEAUtagWND@@EPEAH@Z.c)
 *     xxxProcessEventMessage @ 0x1C00712F4 (xxxProcessEventMessage.c)
 * Callees:
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C00146C4 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     _MonitorFromRect @ 0x1C00147D0 (_MonitorFromRect.c)
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     ?IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z @ 0x1C0023E94 (-IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0037780 (PopAndFreeAlwaysW32ThreadLock.c)
 *     GetMonitorWorkRectForWindow @ 0x1C0037DD8 (GetMonitorWorkRectForWindow.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     IntersectRect @ 0x1C0068714 (IntersectRect.c)
 *     _GetProp @ 0x1C00692EC (_GetProp.c)
 *     xxxSetWindowPos @ 0x1C006C7B4 (xxxSetWindowPos.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C0133E20 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?DisableStackSwap@CKernelStackSwap@@QEAAXXZ @ 0x1C0165594 (-DisableStackSwap@CKernelStackSwap@@QEAAXXZ.c)
 *     ?TryEnableStackSwap@CKernelStackSwap@@QEAAXXZ @ 0x1C0165600 (-TryEnableStackSwap@CKernelStackSwap@@QEAAXXZ.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z @ 0x1C01F993C (-ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z.c)
 *     ?EvaluateArrangeState@@YA?AW4_WARR_STATES@@PEAUtagWND@@@Z @ 0x1C01F9F38 (-EvaluateArrangeState@@YA-AW4_WARR_STATES@@PEAUtagWND@@@Z.c)
 *     ?GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z @ 0x1C01FA04C (-GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z.c)
 *     ?IsEqualRectToArrangedWindow@@YAHPEAUtagWND@@QEBUtagRECT@@@Z @ 0x1C01FA808 (-IsEqualRectToArrangedWindow@@YAHPEAUtagWND@@QEBUtagRECT@@@Z.c)
 *     ?IsLeftOrRightArranged@@YA_NPEBUtagWND@@@Z @ 0x1C01FA8A4 (-IsLeftOrRightArranged@@YA_NPEBUtagWND@@@Z.c)
 *     ?TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@3PEAUtagWND@@33@Z @ 0x1C01FB7A4 (-TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIR.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FC060 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C01FC7CC (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C01FDEB4 (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATE.c)
 *     ?ArrangementCompleted@NotifyShell@@YA_NPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x1C0239FB8 (-ArrangementCompleted@NotifyShell@@YA_NPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C023A124 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 */

bool __fastcall xxxEndSetWindowArrangement(struct tagWND *a1, struct tagRECT *a2, struct tagRECT *a3, char a4)
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
  __int64 v19; // rcx
  unsigned int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rcx
  int v24; // ebx
  __int64 v25; // rcx
  bool v26; // cf
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  struct tagMONITOR *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rax
  char v38; // al
  __int64 v39; // rbx
  __int64 v40; // r8
  struct tagRECT *Prop; // rax
  struct tagWND *v42; // rdx
  bool v43; // r8
  char v45; // [rsp+40h] [rbp-C0h]
  unsigned int v46; // [rsp+44h] [rbp-BCh]
  int v47; // [rsp+48h] [rbp-B8h]
  int v48; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v49; // [rsp+50h] [rbp-B0h]
  __int64 v50; // [rsp+58h] [rbp-A8h]
  const struct tagWND *v51; // [rsp+60h] [rbp-A0h]
  _BYTE v52[8]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v53; // [rsp+70h] [rbp-90h]
  struct tagRECT *v54; // [rsp+78h] [rbp-88h]
  _QWORD v55[3]; // [rsp+80h] [rbp-80h] BYREF
  struct tagRECT v56; // [rsp+98h] [rbp-68h] BYREF
  __int64 v57; // [rsp+A8h] [rbp-58h] BYREF
  const struct tagWND *v58; // [rsp+B0h] [rbp-50h]
  __int64 v59; // [rsp+B8h] [rbp-48h]
  __int64 v60; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v61; // [rsp+C8h] [rbp-38h]
  __int64 v62; // [rsp+D0h] [rbp-30h]
  __int128 v63; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v64[44]; // [rsp+F0h] [rbp-10h] BYREF
  struct tagRECT v65; // [rsp+250h] [rbp+150h] BYREF
  __int64 v66; // [rsp+260h] [rbp+160h] BYREF
  __int64 v67; // [rsp+268h] [rbp+168h]
  __int64 v68; // [rsp+270h] [rbp+170h] BYREF
  __int64 v69; // [rsp+278h] [rbp+178h]

  v4 = 2;
  v54 = a2;
  v50 = gptiCurrent;
  v7 = *(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 448LL) + 328LL);
  v51 = v7;
  if ( (a4 & 4) != 0 )
  {
    v8 = 1;
    v9 = 0;
  }
  else
  {
    v45 = 1;
    v8 = 0;
    v9 = !(a4 & 1);
    if ( (a4 & 2) == 0 )
      goto LABEL_5;
  }
  v45 = 0;
LABEL_5:
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  if ( !v7 )
    return (char)v7;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, (__int64)a3);
  v57 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v57;
  v58 = v51;
  HMLockObject(v51);
  if ( !*(_QWORD *)(v50 + 664) )
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
    v15 = MonitorFromRect(v54, 0, 0x12u);
    v50 = v15;
    if ( !v15 )
      goto LABEL_65;
    v16 = (struct tagRECT)*GetMonitorWorkRectForWindow(&v63, v15, v51);
    v66 = 0LL;
    v56 = v16;
    v67 = 0LL;
    if ( !(unsigned int)IntersectRect(&v66, &v54->left, &v56.left) )
      goto LABEL_65;
    v12 = v66 - *(_QWORD *)&v54->left;
    if ( v66 == *(_QWORD *)&v54->left )
      v12 = v67 - *(_QWORD *)&v54->right;
    if ( v12 )
      goto LABEL_65;
    OverlapCoordinatesForArrangement = GetOverlapCoordinatesForArrangement(&v56, v54, 1);
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
    v47 = v18;
    if ( !v18 )
      goto LABEL_65;
    if ( v18 == 55555 )
      goto LABEL_65;
    v49 = (v18 != 55553) + 4;
    if ( !(unsigned int)ArrangeActionCompatibleWithStyle((__int64)a1, v49) )
      goto LABEL_65;
    v46 = EvaluateArrangeState((__int64)a1);
    if ( v46 == 6 )
      goto LABEL_65;
    v12 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v12 + 31) & 0x10) == 0 )
      goto LABEL_65;
    if ( a3 )
    {
      v68 = 0LL;
      v69 = 0LL;
      if ( !(unsigned int)IntersectRect(&v68, &a3->left, &v56.left) )
        goto LABEL_65;
      v12 = v68 - *(_QWORD *)&a3->left;
      if ( v68 == *(_QWORD *)&a3->left )
        v12 = v69 - *(_QWORD *)&a3->right;
      if ( v12 )
        goto LABEL_65;
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v13) + 472) + 224LL) & 1) == 0 )
      {
        v19 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v13) + 472);
        if ( (*(_BYTE *)(v19 + 224) & 0x20) == 0 )
        {
          v20 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL);
          if ( (((unsigned __int16)(v20 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                   v19,
                                                                                   v11,
                                                                                   v13) >> 8)) & 0x1FF) != 0 )
            goto LABEL_47;
          v23 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL);
          if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) != 2 || (v24 = 1, (v23 & 0x20000000) == 0) )
            v24 = 0;
          if ( (W32GetCurrentThreadDpiAwarenessContext(v23, v21, v22) & 0xF) != 2
            || (v26 = (W32GetCurrentThreadDpiAwarenessContext(v25, v11, v13) & 0x20000000) != 0, v27 = 1, !v26) )
          {
            v27 = 0;
          }
          if ( v24 != v27 )
          {
LABEL_47:
            if ( !(unsigned int)TransformRectBetweenCoordinateSpaces(a3, a3, a1, v51) )
              goto LABEL_65;
          }
          v18 = v47;
        }
      }
    }
    v28 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v13);
    v60 = *(_QWORD *)(v28 + 408);
    *(_QWORD *)(v28 + 408) = &v60;
    v61 = v50;
    HMLockObject(v50);
    memset(&v64[2], 0, 0x148uLL);
    v48 = 0;
    memset(v55, 0, sizeof(v55));
    v52[0] = 0;
    v53 = 0LL;
    CKernelStackSwap::DisableStackSwap((CKernelStackSwap *)v52, v29, v30);
    if ( *(__int64 **)(gActiveMoveSizeDataList + 8) != &gActiveMoveSizeDataList )
      __fastfail(3u);
    v64[1] = &gActiveMoveSizeDataList;
    v64[0] = gActiveMoveSizeDataList;
    *(_QWORD *)(gActiveMoveSizeDataList + 8) = v64;
    gActiveMoveSizeDataList = (__int64)v64;
    PushW32ThreadLock((__int64)v64, v55, (__int64)EditionRemoveFromMsdList);
    xxxInitializeMoveSizeDataProgrammaticArrangement(a1, v49, v46, 1LL, v64, &v48);
    v65 = *v54;
    TransformShellProvidedRectangles((__int64)v64, v50, (v18 != 55553) + 1, &v65, 0LL, (__int64)v51, &v65.left, 0LL);
    v31 = _MonitorFromWindowInternal(a1, 2, 0);
    if ( (struct tagMONITOR *)v50 == v31 )
    {
      if ( v46 == 2 && v18 == 55553 || v46 == 3 && v18 != 55553 )
      {
        if ( !(unsigned int)IsEqualRectToArrangedWindow(a1, &v65) )
          xxxSetWindowPos(
            a1,
            0LL,
            (unsigned int)v65.left,
            (unsigned int)v65.top,
            v65.right - v65.left,
            v65.bottom - v65.top,
            16 * !v9 + 3146244);
        goto LABEL_56;
      }
    }
    else
    {
      v64[29] = v50;
    }
    *(struct tagRECT *)&v64[31] = v65;
    if ( !v9 )
      HIDWORD(v64[42]) |= 0x20u;
    xxxApplyArrangeAction(a1, v46, v49, v48, (struct _MOVESIZEDATA *)v64);
LABEL_56:
    ThreadUnlock1(v33, v32, v34);
    v37 = *((_QWORD *)a1 + 5);
    if ( *(char *)(v37 + 20) >= 0 )
    {
      v38 = *(_BYTE *)(v37 + 233) & 3;
      if ( v38 != 3 )
      {
        if ( v38 )
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
    PopAndFreeAlwaysW32ThreadLock((__int64)v55, v35, v36);
    if ( v53 )
      CKernelStackSwap::TryEnableStackSwap((CKernelStackSwap *)v52);
  }
LABEL_65:
  v39 = ThreadUnlock1(v12, v11, v13);
  if ( v39 )
  {
    if ( v45 )
      NotifyShell::ArrangementCompleted(*(_QWORD *)a1, v4);
    if ( v9 )
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(v39 + 16), 0);
    if ( !v4 )
    {
      if ( a3 )
      {
        Prop = (struct tagRECT *)GetProp((__int64)a1, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL);
        if ( Prop )
          *Prop = *a3;
      }
    }
    if ( IsWindowSubjectToShellWindowBehavior(a1, 16LL, v40) )
    {
      LOBYTE(v42) = 1;
      NotifyShell::TrackedWindowPosChanged(a1, v42, v43);
    }
  }
  LOBYTE(v7) = v4 == 0;
  return (char)v7;
}
