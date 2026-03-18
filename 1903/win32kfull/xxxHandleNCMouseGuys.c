/*
 * XREFs of xxxHandleNCMouseGuys @ 0x1C02124D4
 * Callers:
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C000C370 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 * Callees:
 *     _GetMenuState @ 0x1C000C488 (_GetMenuState.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C00182B4 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     xxxSetSysMenu @ 0x1C001FC60 (xxxSetSysMenu.c)
 *     ?IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z @ 0x1C002E774 (-IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     GetNonChildAncestor @ 0x1C008C668 (GetNonChildAncestor.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 *     xxxGetSysMenuPtr @ 0x1C00A9918 (xxxGetSysMenuPtr.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C01FCA7C (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?DragOperationFromMaximizedAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C0212264 (-DragOperationFromMaximizedAllowed@@YA_NPEAUtagWND@@@Z.c)
 *     ?MoveWithArrangementAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C0212290 (-MoveWithArrangementAllowed@@YA_NPEAUtagWND@@@Z.c)
 *     ?SizeWithSnapAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C0212358 (-SizeWithSnapAllowed@@YA_NPEAUtagWND@@@Z.c)
 */

void __fastcall xxxHandleNCMouseGuys(__int64 BugCheckParameter2, int a2, int a3, struct _LARGE_STRING *a4)
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
  __int64 v16; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 SysMenuPtr; // rax
  __int64 v25; // rcx
  __int64 v26; // [rsp+50h] [rbp-38h] BYREF
  __int64 v27; // [rsp+58h] [rbp-30h]
  __int64 v28; // [rsp+60h] [rbp-28h]

  v4 = (unsigned int)a3;
  v5 = 0;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v8 = 24;
  v9 = 0xFFFF;
  if ( a3 == 2 )
  {
    v11 = a2 - 161;
    if ( v11 )
    {
      if ( v11 == 2 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(BugCheckParameter2 + 40) + 31LL) & 0x21) != 0
          || MoveWithArrangementAllowed((struct tagWND *)BugCheckParameter2)
          && (*(_BYTE *)(*(_QWORD *)(BugCheckParameter2 + 40) + 233LL) & 3) != 0 )
        {
          v9 = 61728;
        }
        else if ( (*(_BYTE *)(*(_QWORD *)(BugCheckParameter2 + 40) + 30LL) & 1) != 0 )
        {
          v9 = 61488;
        }
        v5 = 1;
      }
    }
    else
    {
      v12 = *(_QWORD *)(BugCheckParameter2 + 40);
      if ( (*(_BYTE *)(v12 + 31) & 0xC0) != 0x40 || (*(_BYTE *)(v12 + 233) & 0x10) == 0 )
      {
        NonChildAncestor = GetNonChildAncestor(BugCheckParameter2);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v15, v16);
        v26 = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = &v26;
        v27 = NonChildAncestor;
        if ( NonChildAncestor )
          HMLockObject(NonChildAncestor);
        xxxActivateWindowWithOptions(NonChildAncestor, 0LL, 0LL, 0);
        ThreadUnlock1(v19, v18, v20);
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
    else if ( (a3 == 12 || a3 == 15) && a2 == 163 && SizeWithSnapAllowed((struct tagWND *)BugCheckParameter2) )
    {
      v10 = *(_QWORD *)(BugCheckParameter2 + 40);
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
    || (*(_BYTE *)(*(_QWORD *)(BugCheckParameter2 + 40) + 30LL) & 8) == 0
    || (xxxSetSysMenu((struct tagWND *)BugCheckParameter2),
        SysMenuPtr = xxxGetSysMenuPtr((_QWORD *)BugCheckParameter2, v21, v22, v23),
        (GetMenuState(SysMenuPtr, (unsigned __int16)v9 & 0xFFF0) & 3) == 0)
    || v9 == 61456
    && (v25 = *(_QWORD *)(BugCheckParameter2 + 40), (*(_BYTE *)(v25 + 30) & 4) != 0)
    && (*(_BYTE *)(v25 + 31) & 1) != 0
    && (DragOperationFromMaximizedAllowed((struct tagWND *)BugCheckParameter2)
     || IsWindowSubjectToShellWindowBehavior((struct tagWND *)BugCheckParameter2, 4LL)) )
  {
    if ( v5 && gSqmIsOptedIn )
      WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3534LL, 1LL);
    if ( v9 == 0xFFFF )
    {
      if ( v8 != 24 )
        xxxArrangeWindow(BugCheckParameter2, v8);
    }
    else
    {
      _InterlockedIncrement(&glSendMessage);
      xxxSendTransformableMessageTimeout((__int64 *)BugCheckParameter2, 0x112u, (HWND)(v4 | v9), a4, 0, 0, 0LL, 1u, 1);
    }
  }
}
