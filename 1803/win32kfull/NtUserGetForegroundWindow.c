/*
 * XREFs of NtUserGetForegroundWindow @ 0x1C006E7B0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C006E820 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

__int64 NtUserGetForegroundWindow()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 ThreadWin32Thread; // rax

  EnterSharedCrit(0LL, 1LL);
  v3 = 0LL;
  v4 = gpqForeground;
  if ( gpqForeground )
  {
    if ( *(_QWORD *)(gpqForeground + 120LL) )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v0);
      v4 = *(_QWORD *)(gpqForeground + 120LL);
      v0 = *(_QWORD *)(v4 + 24);
      if ( *(_QWORD *)(ThreadWin32Thread + 448) == v0 )
        v3 = *(_QWORD *)CoreWindowProp::GetCompositeAppFrameWindowOrSelf((const struct tagWND *)v4);
    }
  }
  UserSessionSwitchLeaveCrit(v4, v0, v1, v2);
  return v3;
}
