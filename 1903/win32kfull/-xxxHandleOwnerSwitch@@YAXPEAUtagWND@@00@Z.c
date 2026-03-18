/*
 * XREFs of ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C0010D60
 * Callers:
 *     xxxSetWindowData @ 0x1C0061928 (xxxSetWindowData.c)
 * Callees:
 *     zzzAttachThreadInput @ 0x1C00123D8 (zzzAttachThreadInput.c)
 *     PostIAMShellHookMessageEx @ 0x1C0015240 (PostIAMShellHookMessageEx.c)
 *     PostShellHookMessagesEx @ 0x1C0017CD4 (PostShellHookMessagesEx.c)
 *     DwmAsyncOwnerChange @ 0x1C0095C18 (DwmAsyncOwnerChange.c)
 *     IsTrayWindow @ 0x1C009B9D4 (IsTrayWindow.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00A4180 (-xxxCallHook@@YAHH_K_JH@Z.c)
 */

void __fastcall xxxHandleOwnerSwitch(struct tagWND *a1, struct tagWND *a2, struct tagWND *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // r14
  int v9; // r12d
  int v10; // r15d
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  void *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx

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
  if ( !gpqForeground || (v10 = 1, *(struct tagWND **)(gpqForeground + 128LL) != a1) )
    v10 = 0;
  if ( !a3 )
  {
    if ( !a2 )
      goto LABEL_17;
    if ( v9 )
    {
      xxxCallHook(2, v8, 0LL, 10);
      PostShellHookMessagesEx(2uLL, v8, 0LL);
    }
    v11 = 25LL;
    v12 = *(_QWORD *)(gptiCurrent + 448LL);
    if ( !v10 )
      v11 = 28LL;
    v13 = v8;
    goto LABEL_16;
  }
  if ( a2 )
  {
    if ( a3 != a2 )
    {
      v13 = v8;
      v12 = *(_QWORD *)(gptiCurrent + 448LL);
      if ( v10 )
        v11 = 27LL;
      else
        v11 = 30LL;
LABEL_16:
      PostIAMShellHookMessageEx(v12, v11, v13);
    }
  }
  else
  {
    v21 = 26LL;
    if ( !v10 )
      v21 = 29LL;
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), v21, v8);
    if ( v9 )
    {
      xxxCallHook(1, v8, 0LL, 10);
      PostShellHookMessagesEx(1uLL, v8, 0LL);
    }
  }
LABEL_17:
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v17 = (void *)ReferenceDwmApiPort(v15, v14, v16);
    DwmAsyncOwnerChange(v17);
  }
}
