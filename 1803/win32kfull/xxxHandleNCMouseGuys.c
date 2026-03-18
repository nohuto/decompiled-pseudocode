/*
 * XREFs of xxxHandleNCMouseGuys @ 0x1C01359C0
 * Callers:
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C000AF90 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 * Callees:
 *     _GetMenuState @ 0x1C000B0C4 (_GetMenuState.c)
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C0021CE4 (IsWindowSubjectToShellWindowBehavior.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxGetSysMenuPtr @ 0x1C0039F88 (xxxGetSysMenuPtr.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     xxxActivateWindow @ 0x1C006D170 (xxxActivateWindow.c)
 *     GetNonChildAncestor @ 0x1C0070A34 (GetNonChildAncestor.c)
 *     xxxSetSysMenu @ 0x1C00C2450 (xxxSetSysMenu.c)
 *     DragOperationFromMaximizedAllowed @ 0x1C0135B58 (DragOperationFromMaximizedAllowed.c)
 *     xxxArrangeWindow @ 0x1C01C5D64 (xxxArrangeWindow.c)
 *     MoveWithArrangementAllowed @ 0x1C01D6744 (MoveWithArrangementAllowed.c)
 *     SizeWithSnapAllowed @ 0x1C01D6774 (SizeWithSnapAllowed.c)
 */

__int64 __fastcall xxxHandleNCMouseGuys(struct tagWND *a1, int a2, int a3, __int64 a4)
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
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 result; // rax
  __int64 v20; // rdx
  __int64 SysMenuPtr; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  _QWORD v25[4]; // [rsp+50h] [rbp-38h] BYREF

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
          || (unsigned int)MoveWithArrangementAllowed(a1) && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 3) != 0 )
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
        v25[0] = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = v25;
        v25[1] = NonChildAncestor;
        if ( NonChildAncestor )
          _InterlockedIncrement((volatile signed __int32 *)(NonChildAncestor + 8));
        xxxActivateWindow((struct tagWND *)NonChildAncestor, 6, v15);
        ThreadUnlock1(v17, v16, v18);
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
    else if ( (a3 == 12 || a3 == 15) && a2 == 163 )
    {
      if ( (unsigned int)SizeWithSnapAllowed() )
      {
        v24 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(v24 + 31) & 0x21) == 0 )
        {
          v6 = 1;
          if ( (*(_BYTE *)(v24 + 233) & 3) != 0 )
          {
            if ( (*(_BYTE *)(v24 + 233) & 3) == 3 )
              v4 = 18;
          }
          else
          {
            v4 = 17;
          }
        }
      }
    }
  }
LABEL_7:
  if ( v9 != 61456 )
  {
    result = v9 - 61488;
    if ( v9 != 61488 && v9 != 61536 )
      goto LABEL_60;
  }
  result = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(result + 30) & 8) == 0
    || (xxxSetSysMenu(a1),
        SysMenuPtr = xxxGetSysMenuPtr(a1, v20),
        result = GetMenuState(SysMenuPtr, (unsigned __int16)v9 & 0xFFF0),
        (result & 3) == 0)
    || v9 == 61456
    && (v22 = *((_QWORD *)a1 + 5), (*(_BYTE *)(v22 + 30) & 4) != 0)
    && (*(_BYTE *)(v22 + 31) & 1) != 0
    && ((result = DragOperationFromMaximizedAllowed(a1), (_DWORD)result)
     || (result = IsWindowSubjectToShellWindowBehavior((__int64)a1, 4LL, v23), (_DWORD)result)) )
  {
LABEL_60:
    if ( v6 )
    {
      result = gSqmIsOptedIn;
      if ( gSqmIsOptedIn )
        result = WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3534LL, 1LL);
    }
    if ( v9 == 0xFFFF )
    {
      if ( v4 != 23 )
        return xxxArrangeWindow(a1, v4);
    }
    else
    {
      _InterlockedIncrement(&glSendMessage);
      return xxxSendTransformableMessageTimeout((__int64 *)a1, 0x112u, (HWND)(v5 | v9), a4, 0, 0, 0LL, 1, 1);
    }
  }
  return result;
}
