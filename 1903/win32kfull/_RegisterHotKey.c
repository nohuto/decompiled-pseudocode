/*
 * XREFs of _RegisterHotKey @ 0x1C00882EC
 * Callers:
 *     xxxSetShellWindow @ 0x1C000B20C (xxxSetShellWindow.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C0010090 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 *     ?SetWinlogonHotKeys@@YAXXZ @ 0x1C00850A4 (-SetWinlogonHotKeys@@YAXXZ.c)
 *     NtUserRegisterHotKey @ 0x1C00881E0 (NtUserRegisterHotKey.c)
 *     SetDebugHotKeys @ 0x1C00D6CEC (SetDebugHotKeys.c)
 *     ?SetWindowArrangementHotKeys@@YAXXZ @ 0x1C00D6D80 (-SetWindowArrangementHotKeys@@YAXXZ.c)
 *     RawInputThread @ 0x1C00D7680 (RawInputThread.c)
 *     ?SetPenHotKeys@@YAXXZ @ 0x1C0163CF4 (-SetPenHotKeys@@YAXXZ.c)
 * Callees:
 *     IsShellProcess @ 0x1C001ACA8 (IsShellProcess.c)
 *     ?FindHotKey@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@HIIPEAPEAUtagHOTKEY@@@Z @ 0x1C00886F4 (-FindHotKey@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@HIIPEAPEAUtagHOTKEY@@@Z.c)
 *     CheckWinstaAttributeAccess @ 0x1C0089140 (CheckWinstaAttributeAccess.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ?HKAddChildHotkey@@YA_NPEAUtagTHREADINFO@@PEAUtagHOTKEY@@PEAUtagWND@@HG@Z @ 0x1C01EB7C4 (-HKAddChildHotkey@@YA_NPEAUtagTHREADINFO@@PEAUtagHOTKEY@@PEAUtagWND@@HG@Z.c)
 *     ?HKRemoveMatchingChildHotkeys@@YA_NPEAUtagHOTKEY@@PEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x1C01EB8D0 (-HKRemoveMatchingChildHotkeys@@YA_NPEAUtagHOTKEY@@PEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryT.c)
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
  __int64 v17; // rcx
  int v19; // r8d
  struct tagHOTKEY * near *j; // rbx
  __int16 v21; // ax
  struct tagHOTKEY *v22; // rbx
  __int64 v23; // rbx
  __int64 v24; // rax
  int *i; // rcx
  __int16 v26; // ax
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
  v13 = *(_QWORD *)(gptiCurrent + 416LL);
  v14 = v5;
  v15 = v5 & 0xF;
  v16 = v14 & 0x7A00;
  if ( *(int *)(v13 + 12) >= 0 )
  {
    if ( (v16 & 0x2000) != 0 && !(unsigned int)IsShellProcess(v13) && !a2 )
    {
      v17 = 5LL;
      goto LABEL_18;
    }
  }
  else
  {
    v16 |= 0x2000u;
  }
  if ( (unsigned __int64)a1 >= 2 && *((_QWORD *)a1 + 2) != gptiCurrent )
  {
    v17 = 1408LL;
LABEL_18:
    UserSetLastError(v17);
    return 0LL;
  }
  if ( (v16 & 0x200) != 0 && (v12 || a1 == (struct tagWND *)1) )
    return 0LL;
  if ( !(unsigned int)FindHotKey(gptiCurrent, a1, v31, v15, BugCheckParameter2, v29) )
  {
    v22 = v29[0];
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
      if ( *((_WORD *)v22 + 12) != (_WORD)v15
        || *((_DWORD *)v22 + 7) != (_DWORD)BugCheckParameter2
        || (v16 & 0x200) == 0 )
      {
        HKRemoveMatchingChildHotkeys(v22, 0LL, 0LL, 0LL, 4);
      }
      *((_WORD *)v22 + 12) = v15;
      *((_DWORD *)v22 + 7) = BugCheckParameter2;
    }
    else
    {
      v23 = Win32AllocPool(64LL, 1802007381LL);
      if ( !v23 )
        return 0LL;
      if ( v12 )
      {
        v24 = 0LL;
        for ( i = dword_1C032B3B4; *i; i += 2 )
        {
          v24 = (unsigned int)(v24 + 1);
          if ( (unsigned int)v24 >= 2 )
          {
            Win32FreePool(v23);
            KeBugCheckEx(0x164u, 0x10uLL, (unsigned int)BugCheckParameter2, v15, v16);
          }
        }
        dword_1C032B3B4[2 * v24] = BugCheckParameter2;
        *((_DWORD *)&gSasKeyList + 2 * v24) = v15;
      }
      *(_QWORD *)v23 = gptiCurrent;
      if ( (unsigned __int64)a1 < 2 )
      {
        *(_QWORD *)(v23 + 16) = a1;
      }
      else
      {
        v29[1] = a1;
        v29[0] = (struct tagHOTKEY *)(v23 + 16);
        *(_QWORD *)(v23 + 16) = 0LL;
        HMAssignmentLock(v29);
      }
      *(_DWORD *)(v23 + 32) = v31;
      if ( v12 )
      {
        v26 = 0x8000;
        *(_WORD *)(v23 + 26) = 0x8000;
      }
      else
      {
        *(_WORD *)(v23 + 26) = 0;
        v26 = 0;
      }
      *(_WORD *)(v23 + 26) = v16 | v26;
      *(_WORD *)(v23 + 24) = v15;
      *(_DWORD *)(v23 + 28) = BugCheckParameter2;
      *(_QWORD *)(v23 + 8) = a2;
      *(_QWORD *)(v23 + 56) = v23 + 48;
      *(_QWORD *)(v23 + 48) = v23 + 48;
      v27 = *(_BYTE *)(v23 + 28) & 0x7F;
      *(_QWORD *)(v23 + 40) = (&gphkHashTable)[v27];
      (&gphkHashTable)[v27] = (struct tagHOTKEY * near *)v23;
    }
    qword_1C032C210 = 0LL;
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
  if ( !j || (v21 = *((_WORD *)j + 13), (v21 & 0x200) == 0) )
  {
    v17 = 1409LL;
    goto LABEL_18;
  }
  if ( (v16 & 0x200) != 0 )
  {
    if ( (v21 & 0x100) == 0 )
      return 0LL;
    if ( a1 )
    {
      v29[1] = a1;
      v29[0] = (struct tagHOTKEY *)(j + 2);
      j[2] = 0LL;
      HMAssignmentLock(v29);
      v19 = v31;
    }
    else
    {
      j[2] = 0LL;
    }
    *((_WORD *)j + 13) = v16;
    *j = (struct tagHOTKEY *)gptiCurrent;
    j[1] = 0LL;
    *((_DWORD *)j + 8) = v19;
    return 1LL;
  }
  return HKAddChildHotkey(gptiCurrent, (struct tagHOTKEY *)j, a1, v19, v16);
}
