/*
 * XREFs of ?xxxCallIAMWindowManagementHandler@@YAHQEBU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z @ 0x1C01A4824
 * Callers:
 *     xxxCallIAMGetArrangementRectangleHandler @ 0x1C01A5344 (xxxCallIAMGetArrangementRectangleHandler.c)
 *     xxxCallIAMShowWindowPolicyHandler @ 0x1C01A5444 (xxxCallIAMShowWindowPolicyHandler.c)
 *     xxxCallShellWindowSizeStartingHandler @ 0x1C01A5528 (xxxCallShellWindowSizeStartingHandler.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     ?SeverWindowManagementConnectionToShell@@YAXPEAUtagDESKTOP@@@Z @ 0x1C01A47F4 (-SeverWindowManagementConnectionToShell@@YAXPEAUtagDESKTOP@@@Z.c)
 */

__int64 __fastcall xxxCallIAMWindowManagementHandler(const struct _SHELL_WINDOWMANAGEMENT_CALLOUT_INFO *const a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 ThreadWin32Thread; // rax
  unsigned int v5; // esi
  _BOOL8 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD v11[4]; // [rsp+50h] [rbp-28h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+88h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(gptiCurrent + 448LL);
  BugCheckParameter3 = 0LL;
  if ( !v2 )
    return 0;
  if ( !*(_QWORD *)(v2 + 288) )
    return 0;
  v3 = *(_QWORD *)(v2 + 328);
  if ( !v3 )
    return 0;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), gptiCurrent);
  v5 = 1;
  v11[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v11;
  v11[1] = v3;
  _InterlockedAdd((volatile signed __int32 *)(v3 + 8), 1u);
  v6 = xxxSendTransformableMessageTimeout(
         (__int64 *)v3,
         0x341u,
         0LL,
         (__int64)a1,
         2,
         2000,
         (__int64 *)&BugCheckParameter3,
         1,
         1) == 0;
  ThreadUnlock1(v8, v7, v9);
  if ( v6 )
    SeverWindowManagementConnectionToShell((struct tagDESKTOP *)v2);
  if ( BugCheckParameter3 != 1 )
    return 0;
  return v5;
}
