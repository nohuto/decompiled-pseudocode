/*
 * XREFs of ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C00569F0
 * Callers:
 *     xxxSetWindowData @ 0x1C0025B98 (xxxSetWindowData.c)
 * Callees:
 *     IsTrayWindow @ 0x1C0044B0C (IsTrayWindow.c)
 *     zzzAttachThreadInput @ 0x1C00581EC (zzzAttachThreadInput.c)
 *     PostIAMShellHookMessageEx @ 0x1C006D9B0 (PostIAMShellHookMessageEx.c)
 *     PostShellHookMessagesEx @ 0x1C006E9A8 (PostShellHookMessagesEx.c)
 *     DwmAsyncOwnerChange @ 0x1C006ED2C (DwmAsyncOwnerChange.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C013B040 (-xxxCallHook@@YAHH_K_JH@Z.c)
 */

void __fastcall xxxHandleOwnerSwitch(struct tagWND *a1, struct tagWND *a2, struct tagWND *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // r15
  int v9; // r12d
  int v10; // ebp
  unsigned __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  void *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax

  if ( a3 )
  {
    v18 = *((_QWORD *)a3 + 2);
    v19 = *((_QWORD *)a1 + 2);
    if ( v18 != v19 )
    {
      if ( !a2 || (v20 = *((_QWORD *)a2 + 2), v20 == v19) || v20 != v18 )
        zzzAttachThreadInput(v19, v18, 0LL);
    }
  }
  if ( a2 )
  {
    v6 = *((_QWORD *)a2 + 2);
    v7 = *((_QWORD *)a1 + 2);
    if ( v6 != v7 && (!a3 || v6 != *((_QWORD *)a3 + 2)) )
      zzzAttachThreadInput(v7, v6, 1LL);
  }
  v8 = 0LL;
  if ( a1 )
    v8 = *(_QWORD *)a1;
  v9 = IsTrayWindow(a1);
  if ( !gpqForeground || (v10 = 1, *(struct tagWND **)(gpqForeground + 120LL) != a1) )
    v10 = 0;
  if ( !a3 )
  {
    if ( !a2 )
      goto LABEL_15;
    if ( v9 )
    {
      xxxCallHook(2, v8, 0LL, 10);
      PostShellHookMessagesEx(2uLL, v8, 0LL);
    }
    v11 = v8;
    v12 = v10 != 0 ? 25 : 28;
    v13 = *(_QWORD *)(gptiCurrent + 448LL);
    goto LABEL_14;
  }
  if ( a2 )
  {
    if ( a3 != a2 )
    {
      v11 = v8;
      v13 = *(_QWORD *)(gptiCurrent + 448LL);
      if ( v10 )
        v12 = 27LL;
      else
        v12 = 30LL;
LABEL_14:
      PostIAMShellHookMessageEx(v13, v12, v11);
    }
  }
  else
  {
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), v10 != 0 ? 26 : 29, v8);
    if ( v9 )
    {
      xxxCallHook(1, v8, 0LL, 10);
      PostShellHookMessagesEx(1uLL, v8, 0LL);
    }
  }
LABEL_15:
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v17 = (void *)ReferenceDwmApiPort(v15, v14, v16);
    DwmAsyncOwnerChange(v17);
  }
}
