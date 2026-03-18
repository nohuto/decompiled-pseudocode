/*
 * XREFs of _RegisterHotKey @ 0x1C00A50DC
 * Callers:
 *     xxxSetShellWindow @ 0x1C0009324 (xxxSetShellWindow.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C0009580 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 *     NtUserRegisterHotKey @ 0x1C00A4FD0 (NtUserRegisterHotKey.c)
 *     RawInputThread @ 0x1C00D2920 (RawInputThread.c)
 *     ?SetWindowArrangementHotKeys@@YAXXZ @ 0x1C012EDE0 (-SetWindowArrangementHotKeys@@YAXXZ.c)
 *     ?SetWinlogonHotKeys@@YAXXZ @ 0x1C0131290 (-SetWinlogonHotKeys@@YAXXZ.c)
 *     SetDebugHotKeys @ 0x1C0135B3C (SetDebugHotKeys.c)
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?FindHotKey@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@HIIPEAPEAUtagHOTKEY@@@Z @ 0x1C00A53F4 (-FindHotKey@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@HIIPEAPEAUtagHOTKEY@@@Z.c)
 *     CheckWinstaAttributeAccess @ 0x1C00A56F0 (CheckWinstaAttributeAccess.c)
 *     IsShellProcess @ 0x1C00B3148 (IsShellProcess.c)
 *     ?HKAddChildHotkey@@YA_NPEAUtagTHREADINFO@@PEAUtagHOTKEY@@PEAUtagWND@@HG@Z @ 0x1C01D619C (-HKAddChildHotkey@@YA_NPEAUtagTHREADINFO@@PEAUtagHOTKEY@@PEAUtagWND@@HG@Z.c)
 *     ?HKRemoveMatchingChildHotkeys@@YA_NPEAUtagHOTKEY@@PEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x1C01D62A8 (-HKRemoveMatchingChildHotkeys@@YA_NPEAUtagHOTKEY@@PEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryT.c)
 */

_BOOL8 __fastcall RegisterHotKey(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4, ULONG_PTR BugCheckParameter2)
{
  __int16 v5; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  BOOL v12; // r12d
  __int64 v13; // rcx
  __int16 v14; // si
  unsigned int v15; // r14d
  unsigned __int16 v16; // si
  int HotKey; // eax
  struct tagHOTKEY *v18; // rbx
  __int64 v19; // rbx
  __int16 v20; // ax
  __int64 v21; // rcx
  struct tagHOTKEY * near *j; // rbx
  __int16 v24; // ax
  __int64 v25; // rax
  int *i; // rcx
  __int64 v27; // rcx
  __int16 v28; // ax
  struct tagHOTKEY *v29[2]; // [rsp+40h] [rbp-10h] BYREF
  int v31; // [rsp+A0h] [rbp+50h]

  v31 = a3;
  v5 = a4;
  if ( PsGetCurrentProcess(a1, a2, a3, a4) != gpepCSRSS
    && grpWinStaList
    && !(unsigned int)CheckWinstaAttributeAccess(0x10u)
    || (_DWORD)BugCheckParameter2 == 231 )
  {
    return 0LL;
  }
  v12 = v5 < 0 && PsGetCurrentProcess(v9, v8, v10, v11) == gpepCSRSS;
  v13 = *(_QWORD *)(gptiCurrent + 424LL);
  v14 = v5;
  v15 = v5 & 0xF;
  v16 = v14 & 0x7A00;
  if ( *(int *)(v13 + 12) < 0 )
  {
    v16 |= 0x2000u;
  }
  else if ( (v16 & 0x2000) != 0 && !(unsigned int)IsShellProcess(v13) && !a2 )
  {
    v27 = 5LL;
LABEL_36:
    UserSetLastError(v27, v8, v10, v11);
    return 0LL;
  }
  if ( (unsigned __int64)a1 >= 2 && *((_QWORD *)a1 + 2) != gptiCurrent )
  {
    v27 = 1408LL;
    goto LABEL_36;
  }
  if ( (v16 & 0x200) != 0 && (v12 || a2 || a1 == (struct tagWND *)1) )
    return 0LL;
  HotKey = FindHotKey(gptiCurrent, a1, v31, v15, BugCheckParameter2, v29);
  v8 = 0LL;
  if ( !HotKey )
  {
    v18 = v29[0];
    if ( v29[0] )
    {
      v28 = *((_WORD *)v29[0] + 13);
      if ( v28 < 0 || v12 )
        KeBugCheckEx(
          0x164u,
          0x10uLL,
          *((unsigned int *)v29[0] + 7) | 0x80000000LL,
          *((unsigned __int16 *)v29[0] + 12),
          (unsigned __int16)v28);
      *((_WORD *)v29[0] + 13) = v16;
      if ( *((_WORD *)v18 + 12) != (_WORD)v15
        || *((_DWORD *)v18 + 7) != (_DWORD)BugCheckParameter2
        || (v16 & 0x200) == 0 )
      {
        HKRemoveMatchingChildHotkeys(v18, 0LL, 0LL, 0LL, 4);
      }
      *((_WORD *)v18 + 12) = v15;
      *((_DWORD *)v18 + 7) = BugCheckParameter2;
    }
    else
    {
      v19 = Win32AllocPool(64LL, 1802007381LL);
      if ( !v19 )
        return 0LL;
      if ( v12 )
      {
        v25 = 0LL;
        for ( i = dword_1C03164D4; *i; i += 2 )
        {
          v25 = (unsigned int)(v25 + 1);
          if ( (unsigned int)v25 >= 2 )
          {
            Win32FreePool(v19);
            KeBugCheckEx(0x164u, 0x10uLL, (unsigned int)BugCheckParameter2, v15, v16);
          }
        }
        dword_1C03164D4[2 * v25] = BugCheckParameter2;
        *((_DWORD *)&gSasKeyList + 2 * v25) = v15;
      }
      *(_QWORD *)v19 = gptiCurrent;
      if ( (unsigned __int64)a1 < 2 )
      {
        *(_QWORD *)(v19 + 16) = a1;
      }
      else
      {
        v29[1] = a1;
        v29[0] = (struct tagHOTKEY *)(v19 + 16);
        *(_QWORD *)(v19 + 16) = 0LL;
        HMAssignmentLock(v29);
      }
      *(_DWORD *)(v19 + 32) = v31;
      if ( v12 )
      {
        v20 = 0x8000;
        *(_WORD *)(v19 + 26) = 0x8000;
      }
      else
      {
        *(_WORD *)(v19 + 26) = 0;
        v20 = 0;
      }
      *(_WORD *)(v19 + 26) = v16 | v20;
      *(_WORD *)(v19 + 24) = v15;
      *(_DWORD *)(v19 + 28) = BugCheckParameter2;
      *(_QWORD *)(v19 + 8) = a2;
      *(_QWORD *)(v19 + 56) = v19 + 48;
      *(_QWORD *)(v19 + 48) = v19 + 48;
      v21 = *(_BYTE *)(v19 + 28) & 0x7F;
      *(_QWORD *)(v19 + 40) = (&gphkHashTable)[v21];
      (&gphkHashTable)[v21] = (struct tagHOTKEY * near *)v19;
    }
    qword_1C03171E0 = 0LL;
    return 1LL;
  }
  if ( a2 || v12 || a1 == (struct tagWND *)1 )
    return 0LL;
  for ( j = (&gphkHashTable)[BugCheckParameter2 & 0x7F];
        j && __PAIR64__(*((_DWORD *)j + 7), *((unsigned __int16 *)j + 12)) != __PAIR64__(BugCheckParameter2, v15);
        j = (struct tagHOTKEY * near *)j[5] )
  {
    ;
  }
  if ( !j || (v24 = *((_WORD *)j + 13), (v24 & 0x200) == 0) )
  {
    v27 = 1409LL;
    goto LABEL_36;
  }
  if ( (v16 & 0x200) != 0 )
  {
    if ( (v24 & 0x100) == 0 )
      return 0LL;
    if ( a1 )
    {
      v29[1] = a1;
      v29[0] = (struct tagHOTKEY *)(j + 2);
      j[2] = 0LL;
      HMAssignmentLock(v29);
      LODWORD(v10) = v31;
    }
    else
    {
      j[2] = 0LL;
    }
    *((_WORD *)j + 13) = v16;
    *j = (struct tagHOTKEY *)gptiCurrent;
    j[1] = 0LL;
    *((_DWORD *)j + 8) = v10;
    return 1LL;
  }
  return HKAddChildHotkey(gptiCurrent, (struct tagHOTKEY *)j, a1, v10, v16);
}
