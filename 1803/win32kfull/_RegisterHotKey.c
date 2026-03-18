/*
 * XREFs of _RegisterHotKey @ 0x1C006A3D4
 * Callers:
 *     RawInputThread @ 0x1C001CA60 (RawInputThread.c)
 *     NtUserRegisterHotKey @ 0x1C006A2E0 (NtUserRegisterHotKey.c)
 *     xxxSetShellWindow @ 0x1C00F1620 (xxxSetShellWindow.c)
 *     _RegisterWindowArrangementCallout @ 0x1C00F1C80 (_RegisterWindowArrangementCallout.c)
 *     SetWindowArrangementHotKeys @ 0x1C010D7AC (SetWindowArrangementHotKeys.c)
 *     ?SetWinlogonHotKeys@@YAXXZ @ 0x1C010EC48 (-SetWinlogonHotKeys@@YAXXZ.c)
 *     SetDebugHotKeys @ 0x1C0112744 (SetDebugHotKeys.c)
 * Callees:
 *     IsShellProcess @ 0x1C0012718 (IsShellProcess.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ?FindHotKey@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@HIIPEAPEAUtagHOTKEY@@@Z @ 0x1C006A6D4 (-FindHotKey@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@HIIPEAPEAUtagHOTKEY@@@Z.c)
 *     CheckWinstaAttributeAccess @ 0x1C006A910 (CheckWinstaAttributeAccess.c)
 *     ?HKAddChildHotkey@@YA_NPEAUtagTHREADINFO@@PEAUtagHOTKEY@@PEAUtagWND@@HG@Z @ 0x1C01B3954 (-HKAddChildHotkey@@YA_NPEAUtagTHREADINFO@@PEAUtagHOTKEY@@PEAUtagWND@@HG@Z.c)
 *     ?HKRemoveMatchingChildHotkeys@@YA_NPEAUtagHOTKEY@@PEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x1C01B3A58 (-HKRemoveMatchingChildHotkeys@@YA_NPEAUtagHOTKEY@@PEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryT.c)
 */

_BOOL8 __fastcall RegisterHotKey(struct tagWND *a1, __int64 a2, int a3, __int16 a4, ULONG_PTR BugCheckParameter2)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  BOOL v10; // r12d
  __int64 v11; // rcx
  __int16 v12; // si
  unsigned int v13; // r14d
  unsigned __int16 v14; // si
  int HotKey; // eax
  int v16; // r8d
  struct tagHOTKEY *v17; // rbx
  __int64 v18; // rbx
  __int16 v19; // ax
  __int64 v20; // rcx
  struct tagHOTKEY * near *j; // rbx
  __int16 v23; // ax
  __int64 v24; // rax
  int *i; // rcx
  __int64 v26; // rcx
  __int16 v27; // ax
  struct tagHOTKEY *v28[2]; // [rsp+40h] [rbp-10h] BYREF

  if ( PsGetCurrentProcess(a1, a2) != gpepCSRSS && grpWinStaList && !(unsigned int)CheckWinstaAttributeAccess(0x10u)
    || (_DWORD)BugCheckParameter2 == 231 )
  {
    return 0LL;
  }
  v10 = a4 < 0 && PsGetCurrentProcess(v9, v8) == gpepCSRSS;
  v11 = *(_QWORD *)(gptiCurrent + 416LL);
  v12 = a4;
  v13 = a4 & 0xF;
  v14 = v12 & 0x7A00;
  if ( *(int *)(v11 + 12) < 0 )
  {
    v14 |= 0x2000u;
  }
  else if ( (v14 & 0x2000) != 0 && !(unsigned int)IsShellProcess(v11) && !a2 )
  {
    v26 = 5LL;
LABEL_36:
    UserSetLastError(v26, v8);
    return 0LL;
  }
  if ( (unsigned __int64)a1 >= 2 && *((_QWORD *)a1 + 2) != gptiCurrent )
  {
    v26 = 1408LL;
    goto LABEL_36;
  }
  if ( (v14 & 0x200) != 0 && (v10 || a2 || a1 == (struct tagWND *)1) )
    return 0LL;
  HotKey = FindHotKey(gptiCurrent, a1, a3, v13, BugCheckParameter2, v28);
  v8 = 0LL;
  if ( !HotKey )
  {
    v17 = v28[0];
    if ( v28[0] )
    {
      v27 = *((_WORD *)v28[0] + 13);
      if ( v27 < 0 || v10 )
        KeBugCheckEx(
          0x164u,
          0x10uLL,
          *((unsigned int *)v28[0] + 7) | 0x80000000LL,
          *((unsigned __int16 *)v28[0] + 12),
          (unsigned __int16)v27);
      *((_WORD *)v28[0] + 13) = v14;
      if ( *((_WORD *)v17 + 12) != (_WORD)v13
        || *((_DWORD *)v17 + 7) != (_DWORD)BugCheckParameter2
        || (v14 & 0x200) == 0 )
      {
        HKRemoveMatchingChildHotkeys(v17, 0LL, 0LL, 0LL, 4);
      }
      *((_WORD *)v17 + 12) = v13;
      *((_DWORD *)v17 + 7) = BugCheckParameter2;
    }
    else
    {
      v18 = Win32AllocPool(64LL, 1802007381LL);
      if ( !v18 )
        return 0LL;
      if ( v10 )
      {
        v24 = 0LL;
        for ( i = dword_1C0325E34; *i; i += 2 )
        {
          v24 = (unsigned int)(v24 + 1);
          if ( (unsigned int)v24 >= 2 )
          {
            Win32FreePool(v18);
            KeBugCheckEx(0x164u, 0x10uLL, (unsigned int)BugCheckParameter2, v13, v14);
          }
        }
        dword_1C0325E34[2 * v24] = BugCheckParameter2;
        *((_DWORD *)&gSasKeyList + 2 * v24) = v13;
      }
      *(_QWORD *)v18 = gptiCurrent;
      if ( (unsigned __int64)a1 < 2 )
      {
        *(_QWORD *)(v18 + 16) = a1;
      }
      else
      {
        v28[1] = a1;
        v28[0] = (struct tagHOTKEY *)(v18 + 16);
        *(_QWORD *)(v18 + 16) = 0LL;
        HMAssignmentLock(v28);
      }
      *(_DWORD *)(v18 + 32) = a3;
      if ( v10 )
      {
        v19 = 0x8000;
        *(_WORD *)(v18 + 26) = 0x8000;
      }
      else
      {
        *(_WORD *)(v18 + 26) = 0;
        v19 = 0;
      }
      *(_WORD *)(v18 + 26) = v14 | v19;
      *(_WORD *)(v18 + 24) = v13;
      *(_DWORD *)(v18 + 28) = BugCheckParameter2;
      *(_QWORD *)(v18 + 8) = a2;
      *(_QWORD *)(v18 + 56) = v18 + 48;
      *(_QWORD *)(v18 + 48) = v18 + 48;
      v20 = *(_BYTE *)(v18 + 28) & 0x7F;
      *(_QWORD *)(v18 + 40) = (&gphkHashTable)[v20];
      (&gphkHashTable)[v20] = (struct tagHOTKEY * near *)v18;
    }
    qword_1C0326B38 = 0LL;
    return 1LL;
  }
  if ( a2 || v10 || a1 == (struct tagWND *)1 )
    return 0LL;
  for ( j = (&gphkHashTable)[BugCheckParameter2 & 0x7F];
        j && __PAIR64__(*((_DWORD *)j + 7), *((unsigned __int16 *)j + 12)) != __PAIR64__(BugCheckParameter2, v13);
        j = (struct tagHOTKEY * near *)j[5] )
  {
    ;
  }
  if ( !j || (v23 = *((_WORD *)j + 13), (v23 & 0x200) == 0) )
  {
    v26 = 1409LL;
    goto LABEL_36;
  }
  if ( (v14 & 0x200) != 0 )
  {
    if ( (v23 & 0x100) == 0 )
      return 0LL;
    if ( a1 )
    {
      v28[1] = a1;
      v28[0] = (struct tagHOTKEY *)(j + 2);
      j[2] = 0LL;
      HMAssignmentLock(v28);
      v16 = a3;
    }
    else
    {
      j[2] = 0LL;
    }
    *((_WORD *)j + 13) = v14;
    *j = (struct tagHOTKEY *)gptiCurrent;
    j[1] = 0LL;
    *((_DWORD *)j + 8) = v16;
    return 1LL;
  }
  return HKAddChildHotkey(gptiCurrent, (struct tagHOTKEY *)j, a1, v16, v14);
}
