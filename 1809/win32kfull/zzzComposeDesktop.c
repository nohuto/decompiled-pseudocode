/*
 * XREFs of zzzComposeDesktop @ 0x1C00C8E7C
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C00C8200 (zzzDwmStartRedirection.c)
 *     xxxCreateDesktopEx @ 0x1C00EFCF4 (xxxCreateDesktopEx.c)
 * Callees:
 *     ComposeWindow @ 0x1C000D698 (ComposeWindow.c)
 *     GreUpdateSpriteVisRgn @ 0x1C003C0E0 (GreUpdateSpriteVisRgn.c)
 *     IsWindowContentProtected @ 0x1C00722D4 (IsWindowContentProtected.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z @ 0x1C0079ED4 (-ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z.c)
 *     ComposeWindowIfNeeded @ 0x1C007A504 (ComposeWindowIfNeeded.c)
 *     IsDesktopWindow @ 0x1C007A740 (IsDesktopWindow.c)
 *     IsWindowBeingDestroyed @ 0x1C007C6F4 (IsWindowBeingDestroyed.c)
 *     MapDesktop @ 0x1C00B24C0 (MapDesktop.c)
 *     zzzEnableDwmPointerSupport @ 0x1C00BD2C0 (zzzEnableDwmPointerSupport.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C00C83F0 (GreTransferSpriteStateToDwmState.c)
 *     ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C00C913C (-ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     ??$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x1C00C9194 (--$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z.c)
 *     ??$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z @ 0x1C00C9620 (--$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z.c)
 *     DwmAsyncShellWindowChange @ 0x1C00C96C4 (DwmAsyncShellWindowChange.c)
 *     GreRemoveDisplayDriverRealizations @ 0x1C00C9C24 (GreRemoveDisplayDriverRealizations.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C00CC540 (GreTransferDwmStateToSpriteState.c)
 *     ?IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C00CC7EC (-IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1C00CC818 (-BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z.c)
 *     PostEventMessageEx @ 0x1C00D4C3C (PostEventMessageEx.c)
 *     ?NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z @ 0x1C01538A4 (-NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z @ 0x1C022B8B4 (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z.c)
 *     DwmAsyncMagnCreate @ 0x1C0258184 (DwmAsyncMagnCreate.c)
 *     DwmAsyncMagnSetDesktopColorTransform @ 0x1C0258314 (DwmAsyncMagnSetDesktopColorTransform.c)
 *     DwmAsyncMagnSetWindowColorTransform @ 0x1C025879C (DwmAsyncMagnSetWindowColorTransform.c)
 *     DwmAsyncMagnSetWindowFilterList @ 0x1C025889C (DwmAsyncMagnSetWindowFilterList.c)
 *     DwmAsyncMagnSetWindowSharedTextures @ 0x1C02589AC (DwmAsyncMagnSetWindowSharedTextures.c)
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
  unsigned int v9; // r14d
  __int64 v10; // rdx
  __int64 v11; // r8
  struct tagWND **v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rdx
  void *v16; // rax
  __int64 v18; // rdi
  struct tagDESKTOP *v19; // rax
  __int64 v20; // rcx
  int v21; // eax
  struct tagWND *v22; // rcx
  ULONG v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  void *v27; // rax
  __int64 v28; // r13
  CompositionObject *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // rax
  CompositionObject *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
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
  v4 = *(_DWORD *)(v3 + 64);
  if ( (v4 & 1) != 0 )
    return 0;
  *(_DWORD *)(v3 + 64) = v4 | 1;
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
      UserSetLastError(v23, v24, v25, v26);
      *(_DWORD *)(**((_QWORD **)a1 + 1) + 64LL) &= ~1u;
      DereferenceDwmProcess(v6);
      return 3221225473LL;
    }
    DereferenceDwmProcess(v6);
  }
  if ( !(unsigned int)GreTransferSpriteStateToDwmState(*(_QWORD *)(gpDispInfo + 40LL), ***((_QWORD ***)a1 + 1)) )
  {
    v2 = -1073741823;
LABEL_11:
    v12 = (struct tagWND **)*((_QWORD *)a1 + 1);
    if ( v2 < 0 )
    {
      *((_DWORD *)*v12 + 16) &= ~1u;
    }
    else
    {
      ReorderChildrenSpriteList(v12[3], 0LL);
      v14 = *((_QWORD *)a1 + 29);
      v47 = *(_QWORD *)&gMagnContext;
      if ( v14 )
      {
        v40 = (void *)ReferenceDwmApiPort(**((_QWORD **)a1 + 1), v13);
        DwmAsyncMagnSetDesktopColorTransform(v40);
      }
      BroadcastCompositionChange(a1);
    }
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    GreUpdateSpriteVisRgn(*(_QWORD *)(gpDispInfo + 40LL), 0);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    if ( v2 >= 0 )
    {
      v16 = (void *)ReferenceDwmApiPort(*((_QWORD *)a1 + 1), v15);
      DwmAsyncShellWindowChange(v16);
    }
    return (unsigned int)v2;
  }
  if ( *(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL) )
  {
    v9 = 0;
    while ( 1 )
    {
      v10 = 32LL * v9;
      v11 = v9;
      if ( *(_BYTE *)(v10 + gSharedInfo[1] + 24) == 1 )
      {
        v18 = *(_QWORD *)(gpKernelHandleTable + 24LL * v9);
        if ( (unsigned int)ShouldComposeWindow((struct tagWND *const)v18, a1) )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(v18 + 40) + 31LL) & 1) != 0 )
            PostEventMessageEx(*(struct tagTHREADINFO **)(v18 + 16), 0, 0LL, 0LL, 0LL);
          LOBYTE(v21) = IsDesktopWindow(v18);
          v2 = ComposeWindow(v22, v21 != 0 ? 5 : 1);
          if ( v2 < 0 )
            break;
        }
        if ( (unsigned int)IsWindowContentProtected(v18) )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(v18 + 40) + 27LL) & 0x20) == 0 )
            ComposeWindowIfNeeded(v18, 1);
          ChangeWindowTreeProtection((struct tagWND *)v18, 1);
        }
        v19 = *(struct tagDESKTOP **)(v18 + 24);
        if ( v19 && v19 == a1 && !(unsigned int)IsWindowBeingDestroyed(v18) )
        {
          if ( (unsigned int)CWindowProp::GetProp<CHwndTargetProp>(v20, &v47) )
          {
            v28 = v47;
            v29 = *(CompositionObject **)(v47 + 16);
            if ( v29 && (int)CompositionObject::OpenDwmHandle(v29, &v46) >= 0 )
            {
              v32 = *(_QWORD *)v18;
              v33 = ReferenceDwmApiPort(v31, v30);
              DwmAsyncCreateDCompositionHwndTarget(v33, v32, 1LL, v46);
            }
            v34 = *(CompositionObject **)(v28 + 24);
            if ( v34 && (int)CompositionObject::OpenDwmHandle(v34, &v46) >= 0 )
            {
              v37 = *(_QWORD *)v18;
              v38 = ReferenceDwmApiPort(v36, v35);
              DwmAsyncCreateDCompositionHwndTarget(v38, v37, 0LL, v46);
            }
          }
          if ( (!(unsigned int)UserIsRemoteAndNotDisconnectConnection()
             || (unsigned int)UserIsRemoteAndNotDisconnectConnection())
            && (unsigned int)CWindowProp::GetProp<CSwapChainProp>(v18, &v48) )
          {
            CSwapChainProp::NotifyDwm(v48, (struct tagWND *const)v18);
          }
        }
        if ( v2 < 0 )
          break;
      }
      if ( ++v9 > giheLast )
      {
        if ( v2 >= 0 )
          goto LABEL_11;
        break;
      }
    }
    while ( v9 <= giheLast )
    {
      v10 = 32LL * v9;
      v11 = v9;
      if ( *(_BYTE *)(v10 + gSharedInfo[1] + 24) == 1
        && (unsigned int)IsWindowComposedOnDesktop(*(struct tagWND *const *)(gpKernelHandleTable + 24LL * v9), a1) )
      {
        ComposeWindow(v39, 2);
      }
      --v9;
    }
    GreRemoveDisplayDriverRealizations(*(_QWORD *)(gpDispInfo + 40LL), v10, v11);
    zzzEnableDwmPointerSupport(0, 0);
    GreTransferDwmStateToSpriteState(*(HDEV *)(gpDispInfo + 40LL));
    goto LABEL_11;
  }
  v27 = (void *)ReferenceDwmApiPort(v8, v7);
  DwmAsyncShellWindowChange(v27);
  return 0LL;
}
