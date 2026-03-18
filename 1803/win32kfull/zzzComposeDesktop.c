/*
 * XREFs of zzzComposeDesktop @ 0x1C00C0DD4
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C0008494 (zzzDwmStartRedirection.c)
 *     xxxCreateDesktopEx @ 0x1C00B91B4 (xxxCreateDesktopEx.c)
 * Callees:
 *     GreRemoveDisplayDriverRealizations @ 0x1C0009EA4 (GreRemoveDisplayDriverRealizations.c)
 *     ?IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C000A3E4 (-IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1C000A410 (-BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C000A474 (GreTransferDwmStateToSpriteState.c)
 *     zzzEnableDwmPointerSupport @ 0x1C000A9EC (zzzEnableDwmPointerSupport.c)
 *     ??$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z @ 0x1C000C544 (--$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z.c)
 *     MapDesktop @ 0x1C0011B90 (MapDesktop.c)
 *     PostEventMessageEx @ 0x1C001C3FC (PostEventMessageEx.c)
 *     GreUpdateSpriteVisRgn @ 0x1C0034050 (GreUpdateSpriteVisRgn.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ?ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z @ 0x1C0074BE4 (-ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z.c)
 *     ComposeWindowIfNeeded @ 0x1C0075FC4 (ComposeWindowIfNeeded.c)
 *     IsDesktopWindow @ 0x1C0076580 (IsDesktopWindow.c)
 *     ??$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x1C00C0B34 (--$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z.c)
 *     ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C00C0D7C (-ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     ComposeWindow @ 0x1C00C3B30 (ComposeWindow.c)
 *     IsWindowContentProtected @ 0x1C00C4740 (IsWindowContentProtected.c)
 *     IsWindowBeingDestroyed @ 0x1C00C476C (IsWindowBeingDestroyed.c)
 *     DwmAsyncShellWindowChange @ 0x1C00F17E8 (DwmAsyncShellWindowChange.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C0110A0C (GreTransferSpriteStateToDwmState.c)
 *     ?NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z @ 0x1C0132684 (-NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z @ 0x1C0202ECC (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z.c)
 *     DwmAsyncMagnCreate @ 0x1C02408AC (DwmAsyncMagnCreate.c)
 *     DwmAsyncMagnSetDesktopColorTransform @ 0x1C0240A1C (DwmAsyncMagnSetDesktopColorTransform.c)
 *     DwmAsyncMagnSetWindowColorTransform @ 0x1C0240E50 (DwmAsyncMagnSetWindowColorTransform.c)
 *     DwmAsyncMagnSetWindowFilterList @ 0x1C0240F3C (DwmAsyncMagnSetWindowFilterList.c)
 *     DwmAsyncMagnSetWindowSharedTextures @ 0x1C0241038 (DwmAsyncMagnSetWindowSharedTextures.c)
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
  struct tagWND **v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  void *v17; // rax
  __int64 v19; // rdi
  struct tagDESKTOP *v20; // rax
  __int64 v21; // rcx
  struct tagWND *v22; // rcx
  ULONG v23; // eax
  __int64 v24; // rdx
  void *v25; // rax
  __int64 v26; // r13
  CompositionObject *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rbx
  __int64 v32; // rax
  CompositionObject *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rbx
  __int64 v38; // rax
  struct tagWND *v39; // r9
  void *v40; // rax
  int v41; // [rsp+40h] [rbp-20h] BYREF
  __int64 v42; // [rsp+48h] [rbp-18h]
  struct tagDESKTOP *v43; // [rsp+50h] [rbp-10h]
  int v44; // [rsp+58h] [rbp-8h]
  int v45; // [rsp+5Ch] [rbp-4h]
  void *v46; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v47; // [rsp+A8h] [rbp+48h] BYREF
  CSwapChainProp *v48; // [rsp+B0h] [rbp+50h] BYREF

  v2 = -1073741823;
  v3 = **((_QWORD **)a1 + 1);
  v4 = *(_DWORD *)(v3 + 52);
  if ( (v4 & 1) != 0 )
    return 0;
  *(_DWORD *)(v3 + 52) = v4 | 1;
  v5 = ReferenceDwmProcess();
  v6 = v5;
  if ( v5 )
  {
    v41 = 1;
    v42 = v5;
    v43 = a1;
    v44 = 0;
    v45 = 1;
    v2 = MapDesktop((__int64)&v41);
    if ( v2 < 0 )
    {
      v23 = RtlNtStatusToDosError(-1073741790);
      UserSetLastError(v23, v24);
      *(_DWORD *)(**((_QWORD **)a1 + 1) + 52LL) &= ~1u;
      DereferenceDwmProcess(v6);
      return 3221225473LL;
    }
    DereferenceDwmProcess(v6);
  }
  if ( !(unsigned int)GreTransferSpriteStateToDwmState(*(HDEV *)(gpDispInfo + 40LL), ***((_QWORD ***)a1 + 1)) )
  {
    v2 = -1073741823;
LABEL_11:
    v11 = (struct tagWND **)*((_QWORD *)a1 + 1);
    if ( v2 < 0 )
    {
      *((_DWORD *)*v11 + 13) &= ~1u;
    }
    else
    {
      ReorderChildrenSpriteList(v11[3], 0LL);
      v14 = *((_QWORD *)a1 + 29);
      v47 = *(_QWORD *)&gMagnContext;
      if ( v14 )
      {
        v40 = (void *)ReferenceDwmApiPort(**((_QWORD **)a1 + 1), v12, v13);
        DwmAsyncMagnSetDesktopColorTransform(v40);
      }
      BroadcastCompositionChange(a1);
    }
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    GreUpdateSpriteVisRgn(*(_QWORD *)(gpDispInfo + 40LL), 0);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    if ( v2 >= 0 )
    {
      v17 = (void *)ReferenceDwmApiPort(*((_QWORD *)a1 + 1), v15, v16);
      DwmAsyncShellWindowChange(v17);
    }
    return (unsigned int)v2;
  }
  if ( *(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL) )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( *(_BYTE *)(32LL * v10 + gSharedInfo[1] + 24) == 1 )
      {
        v19 = *(_QWORD *)(gpKernelHandleTable + 24LL * v10);
        if ( (unsigned int)ShouldComposeWindow((struct tagWND *const)v19, a1) )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(v19 + 40) + 31LL) & 1) != 0 )
            PostEventMessageEx(
              *(struct tagTHREADINFO **)(v19 + 16),
              *(_QWORD *)(*(_QWORD *)(v19 + 16) + 424LL),
              0x10u,
              v19,
              0,
              0LL,
              0LL,
              0LL);
          IsDesktopWindow(v19);
          v2 = ComposeWindow(v22);
          if ( v2 < 0 )
            break;
        }
        if ( (unsigned int)IsWindowContentProtected(v19) )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(v19 + 40) + 27LL) & 0x20) == 0 )
            ComposeWindowIfNeeded((struct tagWND *)v19);
          ChangeWindowTreeProtection((struct tagWND *)v19, 1);
        }
        v20 = *(struct tagDESKTOP **)(v19 + 24);
        if ( v20 && v20 == a1 && !(unsigned int)IsWindowBeingDestroyed(v19) )
        {
          if ( CWindowProp::GetProp<CHwndTargetProp>(v21, &v47) )
          {
            v26 = v47;
            v27 = *(CompositionObject **)(v47 + 16);
            if ( v27 && (int)CompositionObject::OpenDwmHandle(v27, &v46) >= 0 )
            {
              v31 = *(_QWORD *)v19;
              v32 = ReferenceDwmApiPort(v29, v28, v30);
              DwmAsyncCreateDCompositionHwndTarget(v32, v31, 1LL, v46);
            }
            v33 = *(CompositionObject **)(v26 + 24);
            if ( v33 && (int)CompositionObject::OpenDwmHandle(v33, &v46) >= 0 )
            {
              v37 = *(_QWORD *)v19;
              v38 = ReferenceDwmApiPort(v35, v34, v36);
              DwmAsyncCreateDCompositionHwndTarget(v38, v37, 0LL, v46);
            }
          }
          if ( (!(unsigned int)UserIsRemoteAndNotDisconnectConnection()
             || (unsigned int)UserIsRemoteAndNotDisconnectConnection())
            && CWindowProp::GetProp<CSwapChainProp>(v19, (__int64 *)&v48) )
          {
            CSwapChainProp::NotifyDwm(v48, (struct tagWND *const)v19);
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
      if ( *(_BYTE *)(32LL * v10 + gSharedInfo[1] + 24) == 1
        && IsWindowComposedOnDesktop(*(struct tagWND *const *)(gpKernelHandleTable + 24LL * v10), a1) )
      {
        ComposeWindow(v39);
      }
      --v10;
    }
    GreRemoveDisplayDriverRealizations(*(_QWORD *)(gpDispInfo + 40LL));
    zzzEnableDwmPointerSupport(0, 0);
    GreTransferDwmStateToSpriteState(*(HDEV *)(gpDispInfo + 40LL), ***((_QWORD ***)a1 + 1));
    goto LABEL_11;
  }
  v25 = (void *)ReferenceDwmApiPort(v8, v7, v9);
  DwmAsyncShellWindowChange(v25);
  return 0LL;
}
