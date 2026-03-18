/*
 * XREFs of NtUserGetDisplayAutoRotationPreferences @ 0x1C022C340
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetDisplayAutoRotationPreferences(_DWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  _DWORD *v5; // rdx
  int v7; // [rsp+58h] [rbp+10h]

  EnterSharedCrit(0LL, 1LL);
  v7 = *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2, v3, v4) + 416) + 912LL);
  v5 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v5 = (_DWORD *)MmUserProbeAddress;
  *v5 = *v5;
  *a1 = v7;
  UserSessionSwitchLeaveCrit(MmUserProbeAddress);
  return 1LL;
}
