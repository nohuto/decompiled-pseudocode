/*
 * XREFs of zzzComposeDesktop @ 0x1C00836A0
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C00D92C4 (zzzDwmStartRedirection.c)
 *     xxxCreateDesktopEx @ 0x1C00DE64C (xxxCreateDesktopEx.c)
 * Callees:
 *     DwmAsyncShellWindowChange @ 0x1C000B3CC (DwmAsyncShellWindowChange.c)
 *     MapDesktop @ 0x1C0019DE0 (MapDesktop.c)
 *     ComposeWindowIfNeeded @ 0x1C0022350 (ComposeWindowIfNeeded.c)
 *     IsDesktopWindow @ 0x1C002477C (IsDesktopWindow.c)
 *     PostEventMessageEx @ 0x1C0025670 (PostEventMessageEx.c)
 *     ?ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z @ 0x1C002717C (-ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z.c)
 *     ComposeWindow @ 0x1C0045458 (ComposeWindow.c)
 *     IsWindowBeingDestroyed @ 0x1C0048A98 (IsWindowBeingDestroyed.c)
 *     IsWindowContentProtected @ 0x1C0049068 (IsWindowContentProtected.c)
 *     zzzEnableDwmPointerSupport @ 0x1C0081918 (zzzEnableDwmPointerSupport.c)
 *     ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C0083958 (-ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     ??$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x1C00839B0 (--$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z.c)
 *     ??$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z @ 0x1C0085FC8 (--$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     GreUpdateSpriteVisRgn @ 0x1C00C4520 (GreUpdateSpriteVisRgn.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C013E734 (GreTransferSpriteStateToDwmState.c)
 *     ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1C013ED60 (-BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z.c)
 *     ?NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z @ 0x1C0159E64 (-NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z.c)
 *     ?IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C015E624 (-IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C015E650 (GreTransferDwmStateToSpriteState.c)
 *     GreRemoveDisplayDriverRealizations @ 0x1C015E784 (GreRemoveDisplayDriverRealizations.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z @ 0x1C02448F8 (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z.c)
 *     DwmAsyncMagnCreate @ 0x1C0271A50 (DwmAsyncMagnCreate.c)
 *     DwmAsyncMagnSetDesktopColorTransform @ 0x1C0271BE0 (DwmAsyncMagnSetDesktopColorTransform.c)
 *     DwmAsyncMagnSetWindowColorTransform @ 0x1C0272124 (DwmAsyncMagnSetWindowColorTransform.c)
 *     DwmAsyncMagnSetWindowFilterList @ 0x1C0272224 (DwmAsyncMagnSetWindowFilterList.c)
 *     DwmAsyncMagnSetWindowSharedTextures @ 0x1C0272334 (DwmAsyncMagnSetWindowSharedTextures.c)
 */

__int64 __fastcall zzzComposeDesktop(struct tagDESKTOP *a1)
{
  int v2; // r12d
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rax
  int v6; // edx
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  unsigned int v14; // r14d
  struct tagWND **v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 **v21; // rcx
  __int64 *v22; // rax
  __int64 v23; // rbx
  void *v24; // rax
  __int64 v26; // rdi
  struct tagDESKTOP *v27; // rax
  __int64 v28; // rcx
  int v29; // eax
  struct tagWND *v30; // rcx
  ULONG v31; // eax
  __int64 v32; // rbx
  void *v33; // rax
  __int64 v34; // r13
  CompositionObject *v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rbx
  __int64 v40; // rax
  CompositionObject *v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rbx
  __int64 v46; // rax
  struct tagWND *v47; // r9
  __int64 v48; // r8
  __int64 v49; // r9
  void *v50; // rax
  _QWORD v51[3]; // [rsp+40h] [rbp-20h] BYREF
  int v52; // [rsp+58h] [rbp-8h]
  int v53; // [rsp+5Ch] [rbp-4h]
  void *v54; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v55; // [rsp+A8h] [rbp+48h] BYREF
  CSwapChainProp *v56; // [rsp+B0h] [rbp+50h] BYREF

  v2 = -1073741823;
  v3 = **((_QWORD **)a1 + 1);
  v4 = *(_DWORD *)(v3 + 64);
  if ( (v4 & 1) != 0 )
    return 0;
  *(_DWORD *)(v3 + 64) = v4 | 1;
  v5 = ReferenceDwmProcess();
  v7 = 0LL;
  v8 = v5;
  if ( v5 )
  {
    v51[0] = 1LL;
    v51[1] = v5;
    v51[2] = a1;
    v52 = 0;
    v53 = 1;
    v2 = MapDesktop((__int64)v51, v6);
    if ( v2 < 0 )
    {
      v31 = RtlNtStatusToDosError(-1073741790);
      UserSetLastError(v31);
      *(_DWORD *)(**((_QWORD **)a1 + 1) + 64LL) &= ~1u;
      DereferenceDwmProcess(v8);
      return 3221225473LL;
    }
    DereferenceDwmProcess(v8);
  }
  if ( !(unsigned int)GreTransferSpriteStateToDwmState(*(HDEV *)(gpDispInfo + 40LL), ***((_QWORD ***)a1 + 1)) )
  {
    v2 = -1073741823;
LABEL_11:
    v15 = (struct tagWND **)*((_QWORD *)a1 + 1);
    if ( v2 < 0 )
    {
      *((_DWORD *)*v15 + 16) &= ~1u;
    }
    else
    {
      ReorderChildrenSpriteList(v15[3], 0LL);
      v18 = *((_QWORD *)a1 + 29);
      v55 = *(_QWORD *)&gMagnContext;
      if ( v18 )
      {
        v50 = (void *)ReferenceDwmApiPort(**((_QWORD **)a1 + 1), v16, v17);
        DwmAsyncMagnSetDesktopColorTransform(v50);
      }
      BroadcastCompositionChange(a1);
    }
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL), v9, v11, v12);
    GreUpdateSpriteVisRgn(*(_QWORD *)(gpDispInfo + 40LL), 0LL);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    if ( v2 >= 0 )
    {
      v21 = (__int64 **)*((_QWORD *)a1 + 1);
      v22 = v21[21];
      if ( v22 )
        v7 = *v22;
      v23 = **v21;
      v24 = (void *)ReferenceDwmApiPort(v21, v19, v20);
      DwmAsyncShellWindowChange(v24, v7, v23);
    }
    return (unsigned int)v2;
  }
  v13 = *((_QWORD *)a1 + 1);
  if ( *(_QWORD *)(v13 + 24) )
  {
    v14 = 0;
    while ( 1 )
    {
      v9 = 32LL * v14;
      v11 = v14;
      if ( *(_BYTE *)(v9 + gSharedInfo[1] + 24) == 1 )
      {
        v26 = *(_QWORD *)(gpKernelHandleTable + 24LL * v14);
        if ( (unsigned int)ShouldComposeWindow((struct tagWND *const)v26, a1) )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(v26 + 40) + 31LL) & 1) != 0 )
            PostEventMessageEx(
              *(struct tagTHREADINFO **)(v26 + 16),
              *(_QWORD *)(*(_QWORD *)(v26 + 16) + 424LL),
              0x10u,
              v26,
              0,
              0LL,
              0LL,
              0LL);
          LOBYTE(v29) = IsDesktopWindow(v26);
          v2 = ComposeWindow(v30, v29 != 0 ? 5 : 1);
          if ( v2 < 0 )
            break;
        }
        if ( (unsigned int)IsWindowContentProtected(v26) )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(v26 + 40) + 27LL) & 0x20) == 0 )
            ComposeWindowIfNeeded((struct tagWND *)v26);
          ChangeWindowTreeProtection((struct tagWND *)v26, 1);
        }
        v27 = *(struct tagDESKTOP **)(v26 + 24);
        if ( v27 && v27 == a1 && !(unsigned int)IsWindowBeingDestroyed(v26) )
        {
          if ( (unsigned int)CWindowProp::GetProp<CHwndTargetProp>(v28, &v55) )
          {
            v34 = v55;
            v35 = *(CompositionObject **)(v55 + 16);
            if ( v35 && (int)CompositionObject::OpenDwmHandle(v35, &v54) >= 0 )
            {
              v39 = *(_QWORD *)v26;
              v40 = ReferenceDwmApiPort(v37, v36, v38);
              DwmAsyncCreateDCompositionHwndTarget(v40, v39, 1LL, v54);
            }
            v41 = *(CompositionObject **)(v34 + 24);
            if ( v41 && (int)CompositionObject::OpenDwmHandle(v41, &v54) >= 0 )
            {
              v45 = *(_QWORD *)v26;
              v46 = ReferenceDwmApiPort(v43, v42, v44);
              DwmAsyncCreateDCompositionHwndTarget(v46, v45, 0LL, v54);
            }
          }
          if ( (!(unsigned int)UserIsRemoteAndNotDisconnectConnection()
             || (unsigned int)UserIsRemoteAndNotDisconnectConnection())
            && (unsigned int)CWindowProp::GetProp<CSwapChainProp>(v26, &v56) )
          {
            CSwapChainProp::NotifyDwm(v56, (struct tagWND *const)v26);
          }
        }
        if ( v2 < 0 )
          break;
      }
      if ( ++v14 > giheLast )
      {
        if ( v2 >= 0 )
          goto LABEL_11;
        break;
      }
    }
    while ( v14 <= giheLast )
    {
      v9 = 32LL * v14;
      v11 = v14;
      if ( *(_BYTE *)(v9 + gSharedInfo[1] + 24) == 1
        && (unsigned int)IsWindowComposedOnDesktop(*(struct tagWND *const *)(gpKernelHandleTable + 24LL * v14), a1) )
      {
        ComposeWindow(v47, 2);
      }
      --v14;
    }
    GreRemoveDisplayDriverRealizations(*(_QWORD *)(gpDispInfo + 40LL), v9, v11);
    zzzEnableDwmPointerSupport(0, 0LL, v48, v49);
    GreTransferDwmStateToSpriteState(*(HDEV *)(gpDispInfo + 40LL));
    goto LABEL_11;
  }
  v32 = **(_QWORD **)v13;
  v33 = (void *)ReferenceDwmApiPort(v10, v9, v11);
  DwmAsyncShellWindowChange(v33, 0LL, v32);
  return 0LL;
}
