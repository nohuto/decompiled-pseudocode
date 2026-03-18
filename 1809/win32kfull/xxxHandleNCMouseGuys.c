/*
 * XREFs of xxxHandleNCMouseGuys @ 0x1C0156CFC
 * Callers:
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C00BC7F0 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 * Callees:
 *     GetNonChildAncestor @ 0x1C000CE08 (GetNonChildAncestor.c)
 *     xxxGetSysMenuPtr @ 0x1C0020FE8 (xxxGetSysMenuPtr.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z @ 0x1C006A128 (-IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z.c)
 *     xxxSetSysMenu @ 0x1C00A6430 (xxxSetSysMenu.c)
 *     _GetMenuState @ 0x1C00BC924 (_GetMenuState.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C00D83CC (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?DragOperationFromMaximizedAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C0156E9C (-DragOperationFromMaximizedAllowed@@YA_NPEAUtagWND@@@Z.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C01E7130 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?MoveWithArrangementAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C01FB304 (-MoveWithArrangementAllowed@@YA_NPEAUtagWND@@@Z.c)
 *     ?SizeWithSnapAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C01FB3E4 (-SizeWithSnapAllowed@@YA_NPEAUtagWND@@@Z.c)
 */

char __fastcall xxxHandleNCMouseGuys(struct tagWND *a1, int a2, int a3, __int64 a4)
{
  unsigned int v4; // r14d
  __int64 v5; // rbp
  int v6; // r15d
  unsigned int v9; // esi
  int v10; // edx
  __int64 v11; // rcx
  __int64 NonChildAncestor; // rbx
  __int64 v13; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 SysMenuPtr; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  _QWORD v23[4]; // [rsp+50h] [rbp-38h] BYREF

  v4 = 23;
  v5 = (unsigned int)a3;
  v6 = 0;
  v9 = 0xFFFF;
  if ( a3 == 2 )
  {
    v10 = a2 - 161;
    if ( v10 )
    {
      if ( v10 == 2 )
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
        v6 = 1;
      }
    }
    else
    {
      v11 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v11 + 31) & 0xC0) != 0x40 || (*(_BYTE *)(v11 + 233) & 0x10) == 0 )
      {
        NonChildAncestor = GetNonChildAncestor((__int64)a1);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13);
        v23[0] = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = v23;
        v23[1] = NonChildAncestor;
        if ( NonChildAncestor )
          _InterlockedIncrement((volatile signed __int32 *)(NonChildAncestor + 8));
        xxxActivateWindowWithOptions(NonChildAncestor, 0LL, 0LL, 0);
        ThreadUnlock1(v16, v15);
        v9 = 61456;
      }
    }
  }
  else
  {
    if ( a3 == 3 )
      goto LABEL_30;
    if ( a3 <= 4 )
      goto LABEL_7;
    if ( a3 <= 7 )
    {
LABEL_30:
      if ( ((a2 - 161) & 0xFFFFFFFD) != 0 )
        goto LABEL_7;
      if ( a3 == 3 )
      {
        if ( a2 == 163 )
        {
          v9 = 61536;
          goto LABEL_7;
        }
      }
      else if ( a3 != 5 )
      {
        if ( a3 == 6 )
          v9 = 61568;
        else
          v9 = 61552;
        goto LABEL_7;
      }
      v9 = 61584;
    }
    else if ( (a3 == 12 || a3 == 15) && a2 == 163 && SizeWithSnapAllowed(a1) )
    {
      v21 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v21 + 31) & 0x21) == 0 )
      {
        v6 = 1;
        if ( (*(_BYTE *)(v21 + 233) & 3) != 0 )
        {
          if ( (*(_BYTE *)(v21 + 233) & 3) == 3 )
            v4 = 18;
        }
        else
        {
          v4 = 17;
        }
      }
    }
  }
LABEL_7:
  if ( v9 != 61456 )
  {
    LOBYTE(v17) = v9 - 48;
    if ( v9 != 61488 && v9 != 61536 )
      goto LABEL_61;
  }
  v17 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v17 + 30) & 8) == 0
    || (xxxSetSysMenu(a1),
        SysMenuPtr = xxxGetSysMenuPtr(a1, v18),
        LOBYTE(v17) = GetMenuState(SysMenuPtr, (unsigned __int16)v9 & 0xFFF0),
        (v17 & 3) == 0)
    || v9 == 61456
    && (v20 = *((_QWORD *)a1 + 5), (*(_BYTE *)(v20 + 30) & 4) != 0)
    && (*(_BYTE *)(v20 + 31) & 1) != 0
    && ((LOBYTE(v17) = DragOperationFromMaximizedAllowed(a1), (_BYTE)v17)
     || (LOBYTE(v17) = IsWindowSubjectToShellWindowBehavior(a1, 4LL), (_BYTE)v17)) )
  {
LABEL_61:
    if ( v6 )
    {
      LOBYTE(v17) = gSqmIsOptedIn;
      if ( gSqmIsOptedIn )
        LOBYTE(v17) = WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3534LL, 1LL);
    }
    if ( v9 == 0xFFFF )
    {
      if ( v4 != 23 )
        LOBYTE(v17) = xxxArrangeWindow(a1, v4);
    }
    else
    {
      _InterlockedIncrement(&glSendMessage);
      LOBYTE(v17) = xxxSendTransformableMessageTimeout((__int64 *)a1, 0x112u, v5 | v9, a4, 0, 0, 0LL, 1, 1);
    }
  }
  return v17;
}
