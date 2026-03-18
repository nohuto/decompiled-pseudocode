/*
 * XREFs of zzzComposeDesktop @ 0x1C0010708
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C0010444 (zzzDwmStartRedirection.c)
 *     xxxCreateDesktopEx @ 0x1C007E33C (xxxCreateDesktopEx.c)
 * Callees:
 *     GreTransferSpriteStateToDwmState @ 0x1C0010634 (GreTransferSpriteStateToDwmState.c)
 *     ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C00109C0 (-ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     ??$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x1C0010A18 (--$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z.c)
 *     DwmAsyncShellWindowChange @ 0x1C0010A4C (DwmAsyncShellWindowChange.c)
 *     ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1C0011034 (-BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z.c)
 *     ??$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z @ 0x1C00163A8 (--$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z.c)
 *     MapDesktop @ 0x1C0021C00 (MapDesktop.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ComposeWindowIfNeeded @ 0x1C00287CC (ComposeWindowIfNeeded.c)
 *     IsDesktopWindow @ 0x1C002ABEC (IsDesktopWindow.c)
 *     PostEventMessageEx @ 0x1C002BAE0 (PostEventMessageEx.c)
 *     ?ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z @ 0x1C002D5EC (-ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z.c)
 *     GreUpdateSpriteVisRgn @ 0x1C0065BF0 (GreUpdateSpriteVisRgn.c)
 *     ComposeWindow @ 0x1C0089E28 (ComposeWindow.c)
 *     IsWindowBeingDestroyed @ 0x1C008D558 (IsWindowBeingDestroyed.c)
 *     IsWindowContentProtected @ 0x1C008DB28 (IsWindowContentProtected.c)
 *     zzzEnableDwmPointerSupport @ 0x1C013992C (zzzEnableDwmPointerSupport.c)
 *     ?NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z @ 0x1C015AE14 (-NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z.c)
 *     ?IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C015F744 (-IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C015F770 (GreTransferDwmStateToSpriteState.c)
 *     GreRemoveDisplayDriverRealizations @ 0x1C015F8A4 (GreRemoveDisplayDriverRealizations.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z @ 0x1C02441B8 (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z.c)
 *     DwmAsyncMagnCreate @ 0x1C0271340 (DwmAsyncMagnCreate.c)
 *     DwmAsyncMagnSetDesktopColorTransform @ 0x1C02714D0 (DwmAsyncMagnSetDesktopColorTransform.c)
 *     DwmAsyncMagnSetWindowColorTransform @ 0x1C0271A14 (DwmAsyncMagnSetWindowColorTransform.c)
 *     DwmAsyncMagnSetWindowFilterList @ 0x1C0271B14 (DwmAsyncMagnSetWindowFilterList.c)
 *     DwmAsyncMagnSetWindowSharedTextures @ 0x1C0271C24 (DwmAsyncMagnSetWindowSharedTextures.c)
 */

__int64 __fastcall zzzComposeDesktop(struct tagDESKTOP *a1)
{
  int v2; // r12d
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // r8
  struct tagWND **v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // r8
  void *v19; // rax
  struct tagWND *v21; // rdi
  struct tagDESKTOP *v22; // rax
  __int64 v23; // rcx
  struct tagWND *v24; // rcx
  ULONG v25; // eax
  void *v26; // rax
  __int64 v27; // r13
  CompositionObject *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rbx
  __int64 v33; // rax
  CompositionObject *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rbx
  __int64 v39; // rax
  struct tagWND *v40; // r9
  void *v41; // rax
  _QWORD v42[3]; // [rsp+40h] [rbp-20h] BYREF
  int v43; // [rsp+58h] [rbp-8h]
  int v44; // [rsp+5Ch] [rbp-4h]
  void *v45; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v46; // [rsp+A8h] [rbp+48h] BYREF
  CSwapChainProp *v47; // [rsp+B0h] [rbp+50h] BYREF

  v2 = -1073741823;
  v3 = **((_QWORD **)a1 + 1);
  v4 = *(_DWORD *)(v3 + 64);
  if ( (v4 & 1) != 0 )
    return 0;
  *(_DWORD *)(v3 + 64) = v4 | 1;
  v5 = ReferenceDwmProcess();
  v6 = v5;
  if ( v5 )
  {
    v42[0] = 1LL;
    v42[1] = v5;
    v42[2] = a1;
    v43 = 0;
    v44 = 1;
    v2 = MapDesktop(v42);
    if ( v2 < 0 )
    {
      v25 = RtlNtStatusToDosError(-1073741790);
      UserSetLastError(v25);
      *(_DWORD *)(**((_QWORD **)a1 + 1) + 64LL) &= ~1u;
      DereferenceDwmProcess(v6);
      return 3221225473LL;
    }
    DereferenceDwmProcess(v6);
  }
  if ( !(unsigned int)GreTransferSpriteStateToDwmState(*(HDEV *)(gpDispInfo + 40LL), ***((_QWORD ***)a1 + 1)) )
  {
    v2 = -1073741823;
LABEL_11:
    v13 = (struct tagWND **)*((_QWORD *)a1 + 1);
    if ( v2 < 0 )
    {
      *((_DWORD *)*v13 + 16) &= ~1u;
    }
    else
    {
      ReorderChildrenSpriteList(v13[3], 0LL);
      v16 = *((_QWORD *)a1 + 29);
      v46 = *(_QWORD *)&gMagnContext;
      if ( v16 )
      {
        v41 = (void *)ReferenceDwmApiPort(**((_QWORD **)a1 + 1), v14, v15);
        DwmAsyncMagnSetDesktopColorTransform(v41);
      }
      BroadcastCompositionChange(a1);
    }
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    GreUpdateSpriteVisRgn(*(_QWORD *)(gpDispInfo + 40LL), 0LL);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    if ( v2 >= 0 )
    {
      v19 = (void *)ReferenceDwmApiPort(*((_QWORD *)a1 + 1), v17, v18);
      DwmAsyncShellWindowChange(v19);
    }
    return (unsigned int)v2;
  }
  if ( *(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL) )
  {
    v10 = 0;
    while ( 1 )
    {
      v11 = 32LL * v10;
      v12 = v10;
      if ( *(_BYTE *)(v11 + gSharedInfo[1] + 24) == 1 )
      {
        v21 = *(struct tagWND **)(gpKernelHandleTable + 24LL * v10);
        if ( (unsigned int)ShouldComposeWindow(v21, a1) )
        {
          if ( (*(_BYTE *)(*((_QWORD *)v21 + 5) + 31LL) & 1) != 0 )
            PostEventMessageEx(*((struct tagTHREADINFO **)v21 + 2), 0, 0LL, 0LL, 0LL);
          IsDesktopWindow(v21);
          v2 = ComposeWindow(v24);
          if ( v2 < 0 )
            break;
        }
        if ( (unsigned int)IsWindowContentProtected(v21) )
        {
          if ( (*(_BYTE *)(*((_QWORD *)v21 + 5) + 27LL) & 0x20) == 0 )
            ComposeWindowIfNeeded(v21);
          ChangeWindowTreeProtection(v21, 1);
        }
        v22 = (struct tagDESKTOP *)*((_QWORD *)v21 + 3);
        if ( v22 && v22 == a1 && !(unsigned int)IsWindowBeingDestroyed(v21) )
        {
          if ( (unsigned int)CWindowProp::GetProp<CHwndTargetProp>(v23, &v46) )
          {
            v27 = v46;
            v28 = *(CompositionObject **)(v46 + 16);
            if ( v28 && (int)CompositionObject::OpenDwmHandle(v28, &v45) >= 0 )
            {
              v32 = *(_QWORD *)v21;
              v33 = ReferenceDwmApiPort(v30, v29, v31);
              DwmAsyncCreateDCompositionHwndTarget(v33, v32, 1LL, v45);
            }
            v34 = *(CompositionObject **)(v27 + 24);
            if ( v34 && (int)CompositionObject::OpenDwmHandle(v34, &v45) >= 0 )
            {
              v38 = *(_QWORD *)v21;
              v39 = ReferenceDwmApiPort(v36, v35, v37);
              DwmAsyncCreateDCompositionHwndTarget(v39, v38, 0LL, v45);
            }
          }
          if ( (!(unsigned int)UserIsRemoteAndNotDisconnectConnection()
             || (unsigned int)UserIsRemoteAndNotDisconnectConnection())
            && (unsigned int)CWindowProp::GetProp<CSwapChainProp>(v21, &v47) )
          {
            CSwapChainProp::NotifyDwm(v47, v21);
          }
        }
        if ( v2 < 0 )
          break;
      }
      if ( ++v10 > giheLast )
      {
        if ( v2 >= 0 )
          goto LABEL_11;
        break;
      }
    }
    while ( v10 <= giheLast )
    {
      v11 = 32LL * v10;
      v12 = v10;
      if ( *(_BYTE *)(v11 + gSharedInfo[1] + 24) == 1
        && (unsigned int)IsWindowComposedOnDesktop(*(struct tagWND *const *)(gpKernelHandleTable + 24LL * v10), a1) )
      {
        ComposeWindow(v40);
      }
      --v10;
    }
    GreRemoveDisplayDriverRealizations(*(_QWORD *)(gpDispInfo + 40LL), v11, v12);
    zzzEnableDwmPointerSupport(0LL, 0LL);
    GreTransferDwmStateToSpriteState(*(HDEV *)(gpDispInfo + 40LL));
    goto LABEL_11;
  }
  v26 = (void *)ReferenceDwmApiPort(v8, v7, v9);
  DwmAsyncShellWindowChange(v26);
  return 0LL;
}
