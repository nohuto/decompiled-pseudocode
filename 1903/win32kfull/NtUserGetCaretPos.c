/*
 * XREFs of NtUserGetCaretPos @ 0x1C0136540
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetCaretPos(_DWORD *a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  _QWORD *v4; // rcx
  __int64 v6; // [rsp+68h] [rbp+20h]

  EnterSharedCrit(0LL, 1LL);
  v4 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v4 = (_QWORD *)MmUserProbeAddress;
  *v4 = *v4;
  v6 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), MmUserProbeAddress, v2, v3) + 424);
  *a1 = *(_DWORD *)(v6 + 324);
  a1[1] = *(_DWORD *)(v6 + 328);
  UserSessionSwitchLeaveCrit(v6);
  return 1LL;
}
