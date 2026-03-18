/*
 * XREFs of _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x1C000EA44
 * Callers:
 *     ?xxxShowWindowPolicyHandler@CallShell@@YA_NPEAUtagWND@@IPEAW4SHELL_SPECIFIED_SHOW_COMMAND@@PEAUWINDOW_GROUP_ID@@PEAUtagRECT@@@Z @ 0x1C000E92C (-xxxShowWindowPolicyHandler@CallShell@@YA_NPEAUtagWND@@IPEAW4SHELL_SPECIFIED_SHOW_COMMAND@@PEAUW.c)
 *     ?xxxArrangementRectangleHandler@CallShell@@YA_NPEAUHWND__@@UtagPOINT@@PEAUtagRECT@@2@Z @ 0x1C023A2B4 (-xxxArrangementRectangleHandler@CallShell@@YA_NPEAUHWND__@@UtagPOINT@@PEAUtagRECT@@2@Z.c)
 *     ?xxxWindowSizeStartingHandler@CallShell@@YA_NPEAUtagWND@@H@Z @ 0x1C023A3BC (-xxxWindowSizeStartingHandler@CallShell@@YA_NPEAUtagWND@@H@Z.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     _anonymous_namespace_::SeverWindowManagementConnectionToShell @ 0x1C023A0F4 (_anonymous_namespace_--SeverWindowManagementConnectionToShell.c)
 */

__int64 anonymous_namespace_::xxxCallIAMWindowManagementHandler()
{
  __int64 v0; // rdi
  ULONG_PTR v1; // rbx
  __int64 ThreadWin32Thread; // rax
  unsigned int v3; // esi
  _BOOL8 v4; // rbx
  __int64 v6; // [rsp+50h] [rbp-28h] BYREF
  ULONG_PTR v7; // [rsp+58h] [rbp-20h]
  __int64 v8; // [rsp+60h] [rbp-18h]
  ULONG_PTR BugCheckParameter3; // [rsp+88h] [rbp+10h] BYREF

  v0 = *(_QWORD *)(gptiCurrent + 448LL);
  BugCheckParameter3 = 0LL;
  if ( !v0 )
    return 0;
  if ( !*(_QWORD *)(v0 + 288) )
    return 0;
  v1 = *(_QWORD *)(v0 + 328);
  if ( !v1 )
    return 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v6 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v6;
  v7 = v1;
  HMLockObject(v1);
  v3 = 1;
  v4 = xxxSendTransformableMessageTimeout(v1, 2, 2000, (ULONG_PTR)&BugCheckParameter3, 1, 1) == 0;
  ThreadUnlock1();
  if ( v4 )
    anonymous_namespace_::SeverWindowManagementConnectionToShell(v0);
  if ( BugCheckParameter3 != 1 )
    return 0;
  return v3;
}
