/*
 * XREFs of UnlinkWindow @ 0x1C002FDB0
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C002E6CC (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0036278 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     SetWindowGroupBand @ 0x1C006EDD0 (SetWindowGroupBand.c)
 *     xxxDestroyWindow @ 0x1C00711E0 (xxxDestroyWindow.c)
 *     ImeSetTopmost @ 0x1C0071AA8 (ImeSetTopmost.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00C11FC (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndNext@UtagWND@@@tagWND@@PEAX@Z @ 0x1C002E67C (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndNext@UtagWND@@@tagWND@@P.c)
 *     DwmAsyncChildUnlink @ 0x1C002FF50 (DwmAsyncChildUnlink.c)
 *     ?_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z @ 0x1C01D5E88 (-_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z.c)
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
  __int64 v15; // r8
  void *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int128 v19; // [rsp+20h] [rbp-20h] BYREF
  __int64 v20; // [rsp+30h] [rbp-10h] BYREF

  v4 = -__CFSHR__(*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL), 5);
  if ( (gdwPostMortemLogging & 4) != 0 )
    _LogLinkWindow(0LL, a1, 0LL, a2);
  v5 = 0LL;
  if ( *(struct tagTERMINAL **)(a2 + 88) == a1 )
  {
    v17 = *((_QWORD *)a1 + 8);
    if ( v17 )
      v18 = *(_QWORD *)(v17 + 48);
    else
      v18 = 0LL;
    *(_QWORD *)(*(_QWORD *)(a2 + 40) + 56LL) = v18;
    *(_QWORD *)&v19 = a2 + 88;
    *((_QWORD *)&v19 + 1) = v17;
  }
  else
  {
    v6 = *((_QWORD *)a1 + 9);
    if ( !v6 )
      goto LABEL_7;
    v19 = *(_OWORD *)LockPointer(&v20, v6 + 64, *((_QWORD *)a1 + 8));
  }
  HMAssignmentLock(&v19);
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
    *((_QWORD *)&v19 + 1) = v8;
    *(_QWORD *)&v19 = v9;
    HMAssignmentLock(&v19);
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
      result = (struct tagTERMINAL *)GetDesktopWindow((__int64)a1);
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
            v16 = (void *)ReferenceDwmApiPort(v14, v13, v15);
            return (struct tagTERMINAL *)DwmAsyncChildUnlink(v16);
          }
        }
      }
    }
  }
  return result;
}
