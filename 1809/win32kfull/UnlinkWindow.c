/*
 * XREFs of UnlinkWindow @ 0x1C001B6E4
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C000C2E4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     SetWindowGroupBand @ 0x1C000EF18 (SetWindowGroupBand.c)
 *     xxxDestroyWindow @ 0x1C001BB70 (xxxDestroyWindow.c)
 *     ImeSetTopmost @ 0x1C001C474 (ImeSetTopmost.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0021674 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0041894 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     DwmAsyncChildUnlink @ 0x1C001B8A8 (DwmAsyncChildUnlink.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndNext@UtagWND@@@tagWND@@PEAX@Z @ 0x1C0043A64 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndNext@UtagWND@@@tagWND@@P.c)
 *     ?_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z @ 0x1C01FAAC0 (-_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z.c)
 */

struct tagTERMINAL *__fastcall UnlinkWindow(struct tagTERMINAL *a1, __int64 a2)
{
  int v4; // r14d
  struct tagTERMINAL *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  struct tagTERMINAL *result; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  void *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int128 v18; // [rsp+20h] [rbp-20h] BYREF
  char v19[16]; // [rsp+30h] [rbp-10h] BYREF

  v4 = -__CFSHR__(*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL), 5);
  if ( (gdwPostMortemLogging & 4) != 0 )
    _LogLinkWindow(0LL, a1, 0LL, a2);
  v5 = 0LL;
  if ( *(struct tagTERMINAL **)(a2 + 88) == a1 )
  {
    v16 = *((_QWORD *)a1 + 8);
    if ( v16 )
      v17 = *(_QWORD *)(v16 + 48);
    else
      v17 = 0LL;
    *(_QWORD *)(*(_QWORD *)(a2 + 40) + 56LL) = v17;
    *(_QWORD *)&v18 = a2 + 88;
    *((_QWORD *)&v18 + 1) = v16;
  }
  else
  {
    v6 = *((_QWORD *)a1 + 9);
    if ( !v6 )
      goto LABEL_7;
    v18 = *(_OWORD *)LockPointer(v19, v6 + 64, *((_QWORD *)a1 + 8));
  }
  HMAssignmentLock(&v18);
LABEL_7:
  v7 = *((_QWORD *)a1 + 8);
  if ( v7 )
  {
    v8 = *((_QWORD *)a1 + 9);
    v9 = v7 + 72;
    v10 = *(_QWORD *)(v7 + 40);
    if ( v8 )
      v11 = *(_QWORD *)(v8 + 48);
    else
      v11 = 0LL;
    *(_QWORD *)(v10 + 80) = v11;
    *((_QWORD *)&v18 + 1) = v8;
    *(_QWORD *)&v18 = v9;
    HMAssignmentLock(&v18);
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 72LL) = 0LL;
    HMAssignmentUnlock((char *)a1 + 64);
  }
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 80LL) = 0LL;
  HMAssignmentUnlock((char *)a1 + 72);
  *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) &= ~8u;
  result = (struct tagTERMINAL *)*((_QWORD *)a1 + 5);
  *((_DWORD *)result + 58) &= ~0x10u;
  if ( v4 )
  {
    result = (struct tagTERMINAL *)IsWindowDesktopComposed(a1);
    if ( (_DWORD)result )
    {
      result = (struct tagTERMINAL *)GetDesktopWindow(a1);
      if ( a1 != result )
      {
        result = (struct tagTERMINAL *)*((_QWORD *)a1 + 3);
        if ( result )
          v5 = (struct tagTERMINAL *)*((_QWORD *)result + 13);
        if ( a1 != v5 )
        {
          result = gTermIO;
          if ( a2 != *((_QWORD *)&gTermIO + 1) )
          {
            v15 = (void *)ReferenceDwmApiPort(v14, v13);
            return (struct tagTERMINAL *)DwmAsyncChildUnlink(v15);
          }
        }
      }
    }
  }
  return result;
}
