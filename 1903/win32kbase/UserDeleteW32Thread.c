/*
 * XREFs of UserDeleteW32Thread @ 0x1C0036B60
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     Win32FreeToPagedLookasideList @ 0x1C0016C10 (Win32FreeToPagedLookasideList.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0029F60 (EtwTraceReleaseUserCrit.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C002C3B8 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C002F794 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     UnlockObjectAssignment @ 0x1C0035040 (UnlockObjectAssignment.c)
 */

void __fastcall UserDeleteW32Thread(__int64 a1)
{
  __int64 v1; // rsi
  void *ThreadWin32Thread; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  void *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // xmm1_8
  int v13; // ebx
  int v14; // eax
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-18h]
  int v17; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)a1;
  ThreadWin32Thread = 0LL;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v17);
  if ( *(_DWORD *)(a1 + 8) )
    goto LABEL_27;
  v6 = *(void **)(a1 + 728);
  if ( v6 )
    ObfDereferenceObject(v6);
  v7 = *(_QWORD *)(a1 + 880);
  if ( v7 )
    Win32FreePool(v7);
  v8 = *(_QWORD *)(a1 + 488);
  if ( v8 )
    Win32FreePool(v8);
  v9 = *(_QWORD *)(a1 + 424);
  if ( v9 )
  {
    --*(_DWORD *)(v9 + 404);
    v10 = *(_QWORD *)(a1 + 424);
    if ( !*(_DWORD *)(v10 + 404) && !*(_DWORD *)(v10 + 400) )
    {
      if ( (int)IsFreeMessageListSupported(v8) >= 0 )
      {
        CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(
          (__int64)&v15,
          *(_QWORD *)(a1 + 424),
          v11);
        FreeMessageList(*(_QWORD *)(a1 + 424) + 24LL);
      }
      Win32FreeToPagedLookasideList((__int64)QLookaside, *(_QWORD *)(a1 + 424));
    }
  }
  v12 = *(_QWORD *)(a1 + 400);
  v15 = *(_OWORD *)(a1 + 384);
  v16 = v12;
  if ( *(_QWORD *)(a1 + 448) )
    UnlockObjectAssignment((void **)(a1 + 448));
  ThreadWin32Thread = (void *)PsGetThreadWin32Thread(v1);
  Win32FreePool(a1);
  if ( !ThreadWin32Thread )
  {
LABEL_27:
    v14 = v17;
  }
  else
  {
    v13 = v17;
    if ( !v17 )
      EtwTraceReleaseUserCrit();
    PsSetThreadWin32Thread(v1, 0LL, ThreadWin32Thread);
    if ( !v13 )
      UserSessionSwitchLeaveCrit(v5, v4);
    v14 = 1;
  }
  if ( !v14 )
    UserSessionSwitchLeaveCrit(v5, v4);
  if ( ThreadWin32Thread )
    ExFreePoolWithTag(ThreadWin32Thread, 0);
}
