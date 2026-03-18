/*
 * XREFs of ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C0027284
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C0026608 (xxxEndDeferWindowPosEx.c)
 *     ?ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z @ 0x1C00271D0 (-ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C002E6CC (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 */

_BOOL8 __fastcall ValidateWindowPos(struct tagCVR *a1, struct tagWND *a2)
{
  unsigned __int64 v2; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  int v6; // r8d
  unsigned __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // r14
  _QWORD *v10; // rbx
  __int64 DesktopWindow; // rax
  struct tagWND *v12; // rdx
  struct tagWND *v13; // rbp
  __int64 v14; // rax
  struct tagWND *v15; // r14
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  _QWORD *v19; // rax
  __int64 v20; // r10

  v2 = *(_QWORD *)a1;
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
    PsGetThreadWin32Thread(CurrentThread);
  v6 = (unsigned __int16)v2;
  if ( (unsigned __int64)(unsigned __int16)v2 >= *(_QWORD *)(gpsi + 8LL) )
    return 0LL;
  v7 = v2 >> 16;
  v8 = gSharedInfo[1] + (unsigned int)(v6 * LODWORD(gSharedInfo[2]));
  v9 = 3 * ((__int64)(unsigned int)(v6 * LODWORD(gSharedInfo[2])) >> 5);
  if ( (_WORD)v7 != *(_WORD *)(v8 + 26) && (_WORD)v7 != 0xFFFF && ((_WORD)v7 || !PsGetCurrentProcessWow64Process()) )
    return 0LL;
  if ( (*(_BYTE *)(v8 + 25) & 1) != 0 )
    return 0LL;
  if ( *(_BYTE *)(v8 + 24) != 1 )
    return 0LL;
  v10 = *(_QWORD **)(gpKernelHandleTable + 8 * v9);
  if ( !v10 )
    return 0LL;
  *((_QWORD *)a1 + 13) = v10[2];
  if ( (*((_DWORD *)a1 + 8) & 4) == 0 )
  {
    DesktopWindow = GetDesktopWindow(v10);
    v12 = (struct tagWND *)v10[10];
    v13 = (struct tagWND *)DesktopWindow;
    v14 = v10[5];
    v15 = v12;
    if ( *(char *)(v14 + 19) < 0 )
      return 0LL;
    v16 = *((_QWORD *)a1 + 1);
    if ( v16 > 0xFFFFFFFFFFFFFFFDuLL )
    {
      if ( v12 != v13 )
        return 0LL;
      return !a2 || a2 == v12;
    }
    if ( v16 )
    {
      if ( v16 == 1 )
        return !a2 || a2 == v12;
      LOBYTE(v12) = 1;
      v19 = (_QWORD *)HMValidateHandleNoSecure(v16, (__int64)v12);
      if ( !v19 || (v20 = v19[5], *(char *)(v20 + 19) < 0) )
      {
        UserSetLastError(6LL);
        return 0LL;
      }
      if ( v10 == v19 )
        return 0LL;
      v12 = (struct tagWND *)v10[10];
      if ( v12 != (struct tagWND *)v19[10] )
        return 0LL;
      if ( a2 )
      {
        if ( v15 != v13 )
          return !a2 || a2 == v12;
        if ( ((*(_BYTE *)(v10[5] + 19LL) & 4 ^ (*(unsigned __int8 *)(v10[5] + 24LL) >> 1) & 4) & 0xFFFFFFFC) != 0 )
        {
          if ( ((*(_BYTE *)(v20 + 19) & 4 ^ (*(unsigned __int8 *)(v20 + 24) >> 1) & 4) & 0xFFFFFFFC) == 0 )
            return 0LL;
          return !a2 || a2 == v12;
        }
        v17 = v19[8];
        goto LABEL_19;
      }
    }
    else if ( a2 )
    {
      if ( v12 != v13 || ((*(_BYTE *)(v14 + 19) & 4 ^ (*(unsigned __int8 *)(v14 + 24) >> 1) & 4) & 0xFFFFFFFC) != 0 )
        return !a2 || a2 == v12;
      v17 = *((_QWORD *)a2 + 11);
LABEL_19:
      if ( v17
        && ((*(_BYTE *)(*(_QWORD *)(v17 + 40) + 19LL) & 4 ^ (*(unsigned __int8 *)(*(_QWORD *)(v17 + 40) + 24LL) >> 1) & 4) & 0xFFFFFFFC) != 0 )
      {
        return 0LL;
      }
      return !a2 || a2 == v12;
    }
  }
  return 1LL;
}
