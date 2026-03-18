/*
 * XREFs of NtUserGetCaretPos @ 0x1C012D800
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetCaretPos(_DWORD *a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v7; // [rsp+68h] [rbp+20h]

  EnterSharedCrit(0LL, 1LL);
  v2 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v2 = (_QWORD *)MmUserProbeAddress;
  *v2 = *v2;
  v7 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), MmUserProbeAddress) + 432);
  *a1 = *(_DWORD *)(v7 + 316);
  a1[1] = *(_DWORD *)(v7 + 320);
  UserSessionSwitchLeaveCrit(v7, v3, v4, v5);
  return 1LL;
}
