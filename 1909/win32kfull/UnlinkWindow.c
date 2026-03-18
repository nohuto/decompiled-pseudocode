/*
 * XREFs of UnlinkWindow @ 0x1C006A598
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0017CC4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     SetWindowGroupBand @ 0x1C0019924 (SetWindowGroupBand.c)
 *     xxxDestroyWindow @ 0x1C0035BC0 (xxxDestroyWindow.c)
 *     ImeSetTopmost @ 0x1C0036530 (ImeSetTopmost.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0039174 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006AB94 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     DwmAsyncChildUnlink @ 0x1C006A4F0 (DwmAsyncChildUnlink.c)
 *     _GetDesktopWindow @ 0x1C006C4B0 (_GetDesktopWindow.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndNext@UtagWND@@@tagWND@@PEAX@Z @ 0x1C006C4D0 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndNext@UtagWND@@@tagWND@@P.c)
 *     ?_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z @ 0x1C02111E0 (-_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z.c)
 */

__int64 __fastcall UnlinkWindow(__int64 *a1, __int64 *a2)
{
  int v4; // r14d
  __int64 *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  void *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int128 v19; // [rsp+20h] [rbp-20h] BYREF
  char v20[16]; // [rsp+30h] [rbp-10h] BYREF

  v4 = -__CFSHR__(*(_DWORD *)(a1[5] + 232), 5);
  if ( (gdwPostMortemLogging & 4) != 0 )
    _LogLinkWindow(0LL, a1, 0LL, a2);
  v5 = 0LL;
  if ( (__int64 *)a2[14] == a1 )
  {
    v17 = a1[11];
    if ( v17 )
      v18 = *(_QWORD *)(v17 + 48);
    else
      v18 = 0LL;
    *(_QWORD *)(a2[5] + 56) = v18;
    *(_QWORD *)&v19 = a2 + 14;
    *((_QWORD *)&v19 + 1) = v17;
  }
  else
  {
    v6 = a1[12];
    if ( !v6 )
      goto LABEL_7;
    v19 = *(_OWORD *)LockPointer(v20, v6 + 88, a1[11]);
  }
  HMAssignmentLock(&v19);
LABEL_7:
  v7 = a1[11];
  if ( v7 )
  {
    v8 = a1[12];
    v9 = v7 + 96;
    v10 = *(_QWORD *)(v7 + 40);
    if ( v8 )
      v11 = *(_QWORD *)(v8 + 48);
    else
      v11 = 0LL;
    *(_QWORD *)(v10 + 80) = v11;
    *((_QWORD *)&v19 + 1) = v8;
    *(_QWORD *)&v19 = v9;
    HMAssignmentLock(&v19);
    *(_QWORD *)(a1[5] + 72) = 0LL;
    HMAssignmentUnlock(a1 + 11);
  }
  *(_QWORD *)(a1[5] + 80) = 0LL;
  HMAssignmentUnlock(a1 + 12);
  *(_DWORD *)(a1[5] + 232) &= ~8u;
  result = a1[5];
  *(_DWORD *)(result + 232) &= ~0x10u;
  if ( v4 )
  {
    result = IsWindowDesktopComposed(a1);
    if ( (_DWORD)result )
    {
      result = GetDesktopWindow(a1);
      if ( a1 != (__int64 *)result )
      {
        result = a1[3];
        if ( result )
          v5 = *(__int64 **)(result + 104);
        if ( a1 != v5 )
        {
          result = gTermIO[0];
          if ( a2 != (__int64 *)gTermIO[1] )
          {
            v16 = (void *)ReferenceDwmApiPort(v14, v13, v15);
            return DwmAsyncChildUnlink(v16, *a1, *a2);
          }
        }
      }
    }
  }
  return result;
}
