/*
 * XREFs of UserDeleteW32Thread @ 0x1C0010550
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32FreeToPagedLookasideList @ 0x1C001A250 (Win32FreeToPagedLookasideList.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceReleaseUserCrit @ 0x1C002AB70 (EtwTraceReleaseUserCrit.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C002BE50 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C002E984 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     UnlockObjectAssignment @ 0x1C00342F0 (UnlockObjectAssignment.c)
 */

void __fastcall UserDeleteW32Thread(__int64 *a1)
{
  __int64 v1; // rsi
  void *ThreadWin32Thread; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  void *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // xmm1_8
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // ebx
  int v16; // eax
  __int128 v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+30h] [rbp-18h]
  int v19; // [rsp+50h] [rbp+8h] BYREF

  v1 = *a1;
  ThreadWin32Thread = 0LL;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v19);
  if ( *((_DWORD *)a1 + 2) )
    goto LABEL_27;
  v7 = (void *)a1[91];
  if ( v7 )
    ObfDereferenceObject(v7);
  v8 = a1[110];
  if ( v8 )
    Win32FreePool(v8);
  v9 = a1[61];
  if ( v9 )
    Win32FreePool(v9);
  v10 = a1[53];
  if ( v10 )
  {
    --*(_DWORD *)(v10 + 404);
    v11 = a1[53];
    if ( !*(_DWORD *)(v11 + 404) && !*(_DWORD *)(v11 + 400) )
    {
      if ( (int)IsFreeMessageListSupported() >= 0 )
      {
        CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(&v17, a1[53]);
        FreeMessageList(a1[53] + 24);
      }
      Win32FreeToPagedLookasideList(QLookaside, a1[53]);
    }
  }
  v12 = a1[50];
  v17 = *((_OWORD *)a1 + 24);
  v18 = v12;
  if ( a1[56] )
    UnlockObjectAssignment(a1 + 56, v4, v6);
  ThreadWin32Thread = (void *)PsGetThreadWin32Thread(v1);
  Win32FreePool(a1);
  if ( !ThreadWin32Thread )
  {
LABEL_27:
    v16 = v19;
  }
  else
  {
    v15 = v19;
    if ( !v19 )
      EtwTraceReleaseUserCrit(v5, v13, v14);
    PsSetThreadWin32Thread(v1, 0LL, ThreadWin32Thread);
    if ( !v15 )
      UserSessionSwitchLeaveCrit(v5);
    v16 = 1;
  }
  if ( !v16 )
    UserSessionSwitchLeaveCrit(v5);
  if ( ThreadWin32Thread )
    ExFreePoolWithTag(ThreadWin32Thread, 0);
}
