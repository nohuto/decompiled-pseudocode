/*
 * XREFs of NtUserGetCaretPos @ 0x1C0110CB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall NtUserGetCaretPos(_DWORD *a1)
{
  __int64 v2; // r8
  _QWORD *v3; // rcx
  __int64 v5; // [rsp+68h] [rbp+20h]

  EnterSharedCrit(0LL, 1LL);
  v3 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v3 = (_QWORD *)MmUserProbeAddress;
  *v3 = *v3;
  v5 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), MmUserProbeAddress, v2) + 424);
  *a1 = *(_DWORD *)(v5 + 324);
  a1[1] = *(_DWORD *)(v5 + 328);
  UserSessionSwitchLeaveCrit(v5);
  return 1LL;
}
