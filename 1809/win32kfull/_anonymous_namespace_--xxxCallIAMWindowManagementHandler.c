/*
 * XREFs of _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x1C02220E8
 * Callers:
 *     ?xxxArrangementRectangleHandler@CallShell@@YA_NPEAUHWND__@@UtagPOINT@@PEAUtagRECT@@2@Z @ 0x1C0221FE0 (-xxxArrangementRectangleHandler@CallShell@@YA_NPEAUHWND__@@UtagPOINT@@PEAUtagRECT@@2@Z.c)
 *     ?xxxShowWindowPolicyHandler@CallShell@@YA_NPEAUtagWND@@IPEAW4SHELL_SPECIFIED_SHOW_COMMAND@@PEAUWINDOW_GROUP_ID@@PEAUtagRECT@@@Z @ 0x1C02221F4 (-xxxShowWindowPolicyHandler@CallShell@@YA_NPEAUtagWND@@IPEAW4SHELL_SPECIFIED_SHOW_COMMAND@@PEAUW.c)
 *     ?xxxWindowSizeStartingHandler@CallShell@@YA_NPEAUtagWND@@H@Z @ 0x1C0222304 (-xxxWindowSizeStartingHandler@CallShell@@YA_NPEAUtagWND@@H@Z.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     _anonymous_namespace_::SeverWindowManagementConnectionToShell @ 0x1C0221F70 (_anonymous_namespace_--SeverWindowManagementConnectionToShell.c)
 */

__int64 __fastcall anonymous_namespace_::xxxCallIAMWindowManagementHandler(__int64 a1)
{
  ShellWindowManagement *v2; // rdi
  __int64 v3; // rbx
  __int64 ThreadWin32Thread; // rax
  unsigned int v5; // esi
  _BOOL8 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  struct tagWND *v10; // r8
  _QWORD v12[4]; // [rsp+50h] [rbp-28h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+88h] [rbp+10h] BYREF

  v2 = *(ShellWindowManagement **)(gptiCurrent + 456LL);
  BugCheckParameter3 = 0LL;
  if ( !v2 )
    return 0;
  if ( !*((_QWORD *)v2 + 36) )
    return 0;
  v3 = *((_QWORD *)v2 + 41);
  if ( !v3 )
    return 0;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), gptiCurrent);
  v5 = 1;
  v12[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v12;
  v12[1] = v3;
  _InterlockedAdd((volatile signed __int32 *)(v3 + 8), 1u);
  v6 = xxxSendTransformableMessageTimeout((__int64 *)v3, 0x341u, 0LL, a1, 2, 2000, (__int64 *)&BugCheckParameter3, 1, 1) == 0;
  ThreadUnlock1(v8, v7);
  if ( v6 )
    anonymous_namespace_::SeverWindowManagementConnectionToShell(v2, v9, v10);
  if ( BugCheckParameter3 != 1 )
    return 0;
  return v5;
}
