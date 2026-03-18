/*
 * XREFs of UserDeleteW32Thread @ 0x1C0034990
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0030230 (EtwTraceReleaseUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0033028 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     UnlockObjectAssignment @ 0x1C0035960 (UnlockObjectAssignment.c)
 *     Win32FreeToPagedLookasideList @ 0x1C0044A20 (Win32FreeToPagedLookasideList.c)
 */

void __fastcall UserDeleteW32Thread(__int64 a1)
{
  __int64 v1; // rsi
  void *ThreadWin32Thread; // rdi
  __int64 v4; // rcx
  void *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // ebx
  int v13; // eax
  int v14; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)a1;
  ThreadWin32Thread = 0LL;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v14);
  if ( *(_DWORD *)(a1 + 8) )
    goto LABEL_27;
  v5 = *(void **)(a1 + 720);
  if ( v5 )
    ObfDereferenceObject(v5);
  v6 = *(_QWORD *)(a1 + 872);
  if ( v6 )
    Win32FreePool(v6);
  v7 = *(_QWORD *)(a1 + 488);
  if ( v7 )
    Win32FreePool(v7);
  v8 = *(_QWORD *)(a1 + 424);
  if ( v8 )
  {
    --*(_DWORD *)(v8 + 396);
    v9 = *(_QWORD *)(a1 + 424);
    if ( !*(_DWORD *)(v9 + 396) && !*(_DWORD *)(v9 + 392) )
    {
      if ( (int)IsFreeMessageListSupported() >= 0 )
        FreeMessageList(*(_QWORD *)(a1 + 424) + 24LL);
      Win32FreeToPagedLookasideList(QLookaside, *(_QWORD *)(a1 + 424));
    }
  }
  if ( *(_QWORD *)(a1 + 448) )
    UnlockObjectAssignment();
  ThreadWin32Thread = (void *)PsGetThreadWin32Thread(v1);
  Win32FreePool(a1);
  if ( !ThreadWin32Thread )
  {
LABEL_27:
    v13 = v14;
  }
  else
  {
    v12 = v14;
    if ( !v14 )
      EtwTraceReleaseUserCrit(v4, v10, v11);
    PsSetThreadWin32Thread(v1, 0LL, ThreadWin32Thread);
    if ( !v12 )
      UserSessionSwitchLeaveCrit(v4);
    v13 = 1;
  }
  if ( !v13 )
    UserSessionSwitchLeaveCrit(v4);
  if ( ThreadWin32Thread )
    ExFreePoolWithTag(ThreadWin32Thread, 0);
}
