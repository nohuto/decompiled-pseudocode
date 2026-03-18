/*
 * XREFs of UserDeleteW32Thread @ 0x1C002D540
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreeToPagedLookasideList @ 0x1C001D8A0 (Win32FreeToPagedLookasideList.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0028BA8 (EtwTraceReleaseUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0029F00 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     UnlockObjectAssignment @ 0x1C002E730 (UnlockObjectAssignment.c)
 */

void __fastcall UserDeleteW32Thread(__int64 a1)
{
  __int64 v1; // rsi
  void *ThreadWin32Thread; // rdi
  void *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // ebx
  int v10; // eax
  int v11; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)a1;
  ThreadWin32Thread = 0LL;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v11);
  if ( *(_DWORD *)(a1 + 8) )
    goto LABEL_27;
  v4 = *(void **)(a1 + 736);
  if ( v4 )
    ObfDereferenceObject(v4);
  v5 = *(_QWORD *)(a1 + 880);
  if ( v5 )
    Win32FreePool(v5);
  v6 = *(_QWORD *)(a1 + 496);
  if ( v6 )
    Win32FreePool(v6);
  v7 = *(_QWORD *)(a1 + 432);
  if ( v7 )
  {
    --*(_DWORD *)(v7 + 396);
    v8 = *(_QWORD *)(a1 + 432);
    if ( !*(_DWORD *)(v8 + 396) && !*(_DWORD *)(v8 + 392) )
    {
      if ( (int)IsFreeMessageListSupported() >= 0 )
        FreeMessageList(*(_QWORD *)(a1 + 432) + 24LL);
      Win32FreeToPagedLookasideList((__int64)QLookaside, *(_QWORD *)(a1 + 432));
    }
  }
  if ( *(_QWORD *)(a1 + 456) )
    UnlockObjectAssignment();
  ThreadWin32Thread = (void *)PsGetThreadWin32Thread(v1);
  Win32FreePool(a1);
  if ( !ThreadWin32Thread )
  {
LABEL_27:
    v10 = v11;
  }
  else
  {
    v9 = v11;
    if ( !v11 )
      EtwTraceReleaseUserCrit();
    PsSetThreadWin32Thread(v1, 0LL, ThreadWin32Thread);
    if ( !v9 )
      UserSessionSwitchLeaveCrit();
    v10 = 1;
  }
  if ( !v10 )
    UserSessionSwitchLeaveCrit();
  if ( ThreadWin32Thread )
    ExFreePoolWithTag(ThreadWin32Thread, 0);
}
