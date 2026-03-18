/*
 * XREFs of ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C0070A5C
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006AB94 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C00702A0 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     _GetDesktopWindow @ 0x1C006C4B0 (_GetDesktopWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 */

_BOOL8 __fastcall ValidateWindowPos(struct tagCVR *a1, struct tagWND *a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  __int64 v9; // rcx
  _QWORD **v10; // r15
  _QWORD *v11; // rbx
  __int64 DesktopWindow; // rax
  struct tagWND *v13; // rdx
  struct tagWND *v14; // rdi
  __int64 v15; // rax
  struct tagWND *v16; // rbp
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r9
  __int64 v22; // r10

  v3 = *(_QWORD *)a1;
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3) )
    PsGetThreadWin32Thread(CurrentThread);
  if ( (unsigned __int64)(unsigned __int16)v3 >= *(_QWORD *)(gpsi + 8LL) )
    return 0LL;
  v7 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v3 * LODWORD(gSharedInfo[2]);
  v8 = v3 >> 16;
  v10 = (_QWORD **)HMPkheFromPhe(v7);
  if ( (_WORD)v8 != *(_WORD *)(v7 + 26) && (_WORD)v8 != 0xFFFF && ((_WORD)v8 || !PsGetCurrentProcessWow64Process(v9)) )
    return 0LL;
  if ( (*(_BYTE *)(v7 + 25) & 1) != 0 )
    return 0LL;
  if ( *(_BYTE *)(v7 + 24) != 1 )
    return 0LL;
  v11 = *v10;
  if ( !*v10 )
    return 0LL;
  *((_QWORD *)a1 + 13) = v11[2];
  if ( (*((_DWORD *)a1 + 8) & 4) == 0 )
  {
    DesktopWindow = GetDesktopWindow((__int64)v11);
    v13 = (struct tagWND *)v11[13];
    v14 = (struct tagWND *)DesktopWindow;
    v15 = v11[5];
    v16 = v13;
    if ( *(char *)(v15 + 19) < 0 )
      return 0LL;
    v17 = *((_QWORD *)a1 + 1);
    if ( v17 > 0xFFFFFFFFFFFFFFFDuLL )
    {
      if ( v13 != v14 )
        return 0LL;
      return !a2 || a2 == v13;
    }
    if ( v17 )
    {
      if ( v17 == 1 )
        return !a2 || a2 == v13;
      LOBYTE(v13) = 1;
      v19 = (_QWORD *)HMValidateHandleNoSecure(v17, v13);
      if ( !v19 || (v22 = v19[5], *(char *)(v22 + 19) < 0) )
      {
        UserSetLastError(6LL, v20, (__int64)v19, v21);
        return 0LL;
      }
      if ( v11 == v19 )
        return 0LL;
      v13 = (struct tagWND *)v11[13];
      if ( v13 != (struct tagWND *)v19[13] )
        return 0LL;
      if ( a2 )
      {
        if ( v16 != v14 )
          return !a2 || a2 == v13;
        if ( ((*(_BYTE *)(v11[5] + 19LL) & 4 ^ (*(unsigned __int8 *)(v11[5] + 24LL) >> 1) & 4) & 0xFFFFFFFC) != 0 )
        {
          if ( ((*(_BYTE *)(v22 + 19) & 4 ^ (*(unsigned __int8 *)(v22 + 24) >> 1) & 4) & 0xFFFFFFFC) == 0 )
            return 0LL;
          return !a2 || a2 == v13;
        }
        v18 = v19[11];
        goto LABEL_30;
      }
    }
    else if ( a2 )
    {
      if ( v13 != v14 || ((*(_BYTE *)(v15 + 19) & 4 ^ (*(unsigned __int8 *)(v15 + 24) >> 1) & 4) & 0xFFFFFFFC) != 0 )
        return !a2 || a2 == v13;
      v18 = *((_QWORD *)a2 + 14);
LABEL_30:
      if ( v18
        && ((*(_BYTE *)(*(_QWORD *)(v18 + 40) + 19LL) & 4 ^ (*(unsigned __int8 *)(*(_QWORD *)(v18 + 40) + 24LL) >> 1) & 4) & 0xFFFFFFFC) != 0 )
      {
        return 0LL;
      }
      return !a2 || a2 == v13;
    }
  }
  return 1LL;
}
