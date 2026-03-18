/*
 * XREFs of NtUserGetDisplayAutoRotationPreferences @ 0x1C022BD20
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall NtUserGetDisplayAutoRotationPreferences(_DWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  _DWORD *v4; // rdx
  int v6; // [rsp+58h] [rbp+10h]

  EnterSharedCrit(0LL, 1LL);
  v6 = *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2, v3) + 416) + 912LL);
  v4 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v4 = (_DWORD *)MmUserProbeAddress;
  *v4 = *v4;
  *a1 = v6;
  UserSessionSwitchLeaveCrit(MmUserProbeAddress);
  return 1LL;
}
