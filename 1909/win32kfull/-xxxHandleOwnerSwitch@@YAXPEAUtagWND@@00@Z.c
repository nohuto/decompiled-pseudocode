/*
 * XREFs of ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C010A194
 * Callers:
 *     xxxSetWindowData @ 0x1C00ABB50 (xxxSetWindowData.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C0017B24 (PostShellHookMessagesEx.c)
 *     DwmAsyncOwnerChange @ 0x1C0036950 (DwmAsyncOwnerChange.c)
 *     IsTrayWindow @ 0x1C003C7A4 (IsTrayWindow.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0044F60 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     PostIAMShellHookMessageEx @ 0x1C01311C0 (PostIAMShellHookMessageEx.c)
 *     zzzAttachThreadInput @ 0x1C0135A64 (zzzAttachThreadInput.c)
 */

void __fastcall xxxHandleOwnerSwitch(struct tagWND *a1, struct tagWND *a2, struct tagWND *a3)
{
  __int64 v3; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // r14
  int v10; // r12d
  int v11; // r15d
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  void *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx

  v3 = 0LL;
  if ( a3 )
  {
    v19 = *((_QWORD *)a3 + 2);
    v20 = *((_QWORD *)a1 + 2);
    if ( v19 != v20 )
    {
      if ( !a2 || (v21 = *((_QWORD *)a2 + 2), v21 == v20) || v21 != v19 )
        zzzAttachThreadInput(v20, v19, 0LL);
    }
  }
  if ( a2 )
  {
    v7 = *((_QWORD *)a2 + 2);
    v8 = *((_QWORD *)a1 + 2);
    if ( v7 != v8 && (!a3 || v7 != *((_QWORD *)a3 + 2)) )
      zzzAttachThreadInput(v8, v7, 1LL);
  }
  v9 = 0LL;
  if ( a1 )
    v9 = *(_QWORD *)a1;
  v10 = IsTrayWindow(a1);
  if ( !gpqForeground || (v11 = 1, *(struct tagWND **)(gpqForeground + 128LL) != a1) )
    v11 = 0;
  if ( !a3 )
  {
    if ( !a2 )
      goto LABEL_17;
    if ( v10 )
    {
      xxxCallHook(2, v9, 0LL, 10);
      PostShellHookMessagesEx(2u, v9, 0LL);
    }
    v12 = 25LL;
    v13 = *(_QWORD *)(gptiCurrent + 448LL);
    if ( !v11 )
      v12 = 28LL;
    v14 = v9;
    goto LABEL_16;
  }
  if ( a2 )
  {
    if ( a3 != a2 )
    {
      v14 = v9;
      v13 = *(_QWORD *)(gptiCurrent + 448LL);
      if ( v11 )
        v12 = 27LL;
      else
        v12 = 30LL;
LABEL_16:
      PostIAMShellHookMessageEx(v13, v12, v14);
    }
  }
  else
  {
    v22 = 26LL;
    if ( !v11 )
      v22 = 29LL;
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), v22, v9);
    if ( v10 )
    {
      xxxCallHook(1, v9, 0LL, 10);
      PostShellHookMessagesEx(1u, v9, 0LL);
    }
  }
LABEL_17:
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    if ( a2 )
      v3 = *(_QWORD *)a2;
    v18 = (void *)ReferenceDwmApiPort(v16, v15, v17);
    DwmAsyncOwnerChange(v18, *(_QWORD *)a1, v3);
  }
}
