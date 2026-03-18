/*
 * XREFs of xxxHandleNCMouseGuys @ 0x1C0211F94
 * Callers:
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C000BC54 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 * Callees:
 *     _GetMenuState @ 0x1C000BD6C (_GetMenuState.c)
 *     GetNonChildAncestor @ 0x1C001ACF8 (GetNonChildAncestor.c)
 *     ?IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z @ 0x1C0023E94 (-IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     xxxGetSysMenuPtr @ 0x1C004A6F8 (xxxGetSysMenuPtr.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     xxxSetSysMenu @ 0x1C012C660 (xxxSetSysMenu.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C0133A90 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C01FC7CC (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?DragOperationFromMaximizedAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C0211D24 (-DragOperationFromMaximizedAllowed@@YA_NPEAUtagWND@@@Z.c)
 *     ?MoveWithArrangementAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C0211D50 (-MoveWithArrangementAllowed@@YA_NPEAUtagWND@@@Z.c)
 *     ?SizeWithSnapAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C0211E18 (-SizeWithSnapAllowed@@YA_NPEAUtagWND@@@Z.c)
 */

void __fastcall xxxHandleNCMouseGuys(struct tagWND *a1, int a2, int a3, struct _LARGE_STRING *a4)
{
  __int64 v4; // rbp
  int v5; // r15d
  int v8; // r14d
  unsigned int v9; // esi
  __int64 v10; // rcx
  int v11; // edx
  __int64 v12; // rcx
  __int64 NonChildAncestor; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 SysMenuPtr; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // [rsp+50h] [rbp-38h] BYREF
  __int64 v26; // [rsp+58h] [rbp-30h]
  __int64 v27; // [rsp+60h] [rbp-28h]

  v4 = (unsigned int)a3;
  v5 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v8 = 24;
  v9 = 0xFFFF;
  if ( a3 == 2 )
  {
    v11 = a2 - 161;
    if ( v11 )
    {
      if ( v11 == 2 )
      {
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x21) != 0
          || MoveWithArrangementAllowed(a1) && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 3) != 0 )
        {
          v9 = 61728;
        }
        else if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 1) != 0 )
        {
          v9 = 61488;
        }
        v5 = 1;
      }
    }
    else
    {
      v12 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v12 + 31) & 0xC0) != 0x40 || (*(_BYTE *)(v12 + 233) & 0x10) == 0 )
      {
        NonChildAncestor = GetNonChildAncestor((__int64)a1);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v15);
        v25 = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = &v25;
        v26 = NonChildAncestor;
        if ( NonChildAncestor )
          HMLockObject(NonChildAncestor);
        xxxActivateWindowWithOptions(NonChildAncestor, 0LL, 0LL, 0);
        ThreadUnlock1(v18, v17, v19);
        v9 = 61456;
      }
    }
  }
  else
  {
    if ( a3 == 3 )
      goto LABEL_14;
    if ( a3 <= 4 )
      goto LABEL_37;
    if ( a3 <= 7 )
    {
LABEL_14:
      if ( ((a2 - 161) & 0xFFFFFFFD) != 0 )
        goto LABEL_37;
      if ( a3 == 3 )
      {
        if ( a2 == 163 )
        {
          v9 = 61536;
          goto LABEL_37;
        }
      }
      else if ( a3 != 5 )
      {
        if ( a3 == 6 )
          v9 = 61568;
        else
          v9 = 61552;
        goto LABEL_37;
      }
      v9 = 61584;
    }
    else if ( (a3 == 12 || a3 == 15) && a2 == 163 && SizeWithSnapAllowed(a1) )
    {
      v10 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v10 + 31) & 0x21) == 0 )
      {
        v5 = 1;
        if ( (*(_BYTE *)(v10 + 233) & 3) != 0 )
        {
          if ( (*(_BYTE *)(v10 + 233) & 3) == 3 )
            v8 = 19;
        }
        else
        {
          v8 = 18;
        }
      }
    }
  }
LABEL_37:
  if ( v9 != 61456 && v9 != 61488 && v9 != 61536
    || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 8) == 0
    || (xxxSetSysMenu(a1),
        SysMenuPtr = xxxGetSysMenuPtr(a1, v20, v21),
        (GetMenuState(SysMenuPtr, (unsigned __int16)v9 & 0xFFF0) & 3) == 0)
    || v9 == 61456
    && (v23 = *((_QWORD *)a1 + 5), (*(_BYTE *)(v23 + 30) & 4) != 0)
    && (*(_BYTE *)(v23 + 31) & 1) != 0
    && (DragOperationFromMaximizedAllowed(a1) || IsWindowSubjectToShellWindowBehavior(a1, 4LL, v24)) )
  {
    if ( v5 && gSqmIsOptedIn )
      WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3534LL, 1LL);
    if ( v9 == 0xFFFF )
    {
      if ( v8 != 24 )
        xxxArrangeWindow((__int64)a1, v8);
    }
    else
    {
      _InterlockedIncrement(&glSendMessage);
      xxxSendTransformableMessageTimeout((__int64 *)a1, 0x112u, v4 | v9, a4, 0, 0, 0LL, 1u, 1);
    }
  }
}
