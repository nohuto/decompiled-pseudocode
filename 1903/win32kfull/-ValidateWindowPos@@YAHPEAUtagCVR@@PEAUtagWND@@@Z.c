/*
 * XREFs of ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C00CF38C
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00C94C4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C00CEBD0 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     _GetDesktopWindow @ 0x1C00CADE0 (_GetDesktopWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 */

_BOOL8 __fastcall ValidateWindowPos(struct tagCVR *a1, struct tagWND *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  __int64 v10; // rcx
  _QWORD **v11; // r15
  _QWORD *v12; // rbx
  __int64 DesktopWindow; // rax
  struct tagWND *v14; // rdx
  struct tagWND *v15; // rdi
  __int64 v16; // rax
  struct tagWND *v17; // rbp
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r9
  __int64 v23; // r10

  v4 = *(_QWORD *)a1;
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
    PsGetThreadWin32Thread(CurrentThread);
  if ( (unsigned __int64)(unsigned __int16)v4 >= *(_QWORD *)(gpsi + 8LL) )
    return 0LL;
  v8 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v4 * LODWORD(gSharedInfo[2]);
  v9 = v4 >> 16;
  v11 = (_QWORD **)HMPkheFromPhe(v8);
  if ( (_WORD)v9 != *(_WORD *)(v8 + 26) && (_WORD)v9 != 0xFFFF && ((_WORD)v9 || !PsGetCurrentProcessWow64Process(v10)) )
    return 0LL;
  if ( (*(_BYTE *)(v8 + 25) & 1) != 0 )
    return 0LL;
  if ( *(_BYTE *)(v8 + 24) != 1 )
    return 0LL;
  v12 = *v11;
  if ( !*v11 )
    return 0LL;
  *((_QWORD *)a1 + 13) = v12[2];
  if ( (*((_DWORD *)a1 + 8) & 4) == 0 )
  {
    DesktopWindow = GetDesktopWindow((__int64)v12);
    v14 = (struct tagWND *)v12[13];
    v15 = (struct tagWND *)DesktopWindow;
    v16 = v12[5];
    v17 = v14;
    if ( *(char *)(v16 + 19) < 0 )
      return 0LL;
    v18 = *((_QWORD *)a1 + 1);
    if ( v18 > 0xFFFFFFFFFFFFFFFDuLL )
    {
      if ( v14 != v15 )
        return 0LL;
      return !a2 || a2 == v14;
    }
    if ( v18 )
    {
      if ( v18 == 1 )
        return !a2 || a2 == v14;
      LOBYTE(v14) = 1;
      v20 = (_QWORD *)HMValidateHandleNoSecure(v18, v14);
      if ( !v20 || (v23 = v20[5], *(char *)(v23 + 19) < 0) )
      {
        UserSetLastError(6LL, v21, (__int64)v20, v22);
        return 0LL;
      }
      if ( v12 == v20 )
        return 0LL;
      v14 = (struct tagWND *)v12[13];
      if ( v14 != (struct tagWND *)v20[13] )
        return 0LL;
      if ( a2 )
      {
        if ( v17 != v15 )
          return !a2 || a2 == v14;
        if ( ((*(_BYTE *)(v12[5] + 19LL) & 4 ^ (*(unsigned __int8 *)(v12[5] + 24LL) >> 1) & 4) & 0xFFFFFFFC) != 0 )
        {
          if ( ((*(_BYTE *)(v23 + 19) & 4 ^ (*(unsigned __int8 *)(v23 + 24) >> 1) & 4) & 0xFFFFFFFC) == 0 )
            return 0LL;
          return !a2 || a2 == v14;
        }
        v19 = v20[11];
        goto LABEL_30;
      }
    }
    else if ( a2 )
    {
      if ( v14 != v15 || ((*(_BYTE *)(v16 + 19) & 4 ^ (*(unsigned __int8 *)(v16 + 24) >> 1) & 4) & 0xFFFFFFFC) != 0 )
        return !a2 || a2 == v14;
      v19 = *((_QWORD *)a2 + 14);
LABEL_30:
      if ( v19
        && ((*(_BYTE *)(*(_QWORD *)(v19 + 40) + 19LL) & 4 ^ (*(unsigned __int8 *)(*(_QWORD *)(v19 + 40) + 24LL) >> 1) & 4) & 0xFFFFFFFC) != 0 )
      {
        return 0LL;
      }
      return !a2 || a2 == v14;
    }
  }
  return 1LL;
}
