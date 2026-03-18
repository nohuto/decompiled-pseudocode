/*
 * XREFs of NtUserAutoRotateScreen @ 0x1C0229700
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserAutoRotateScreen(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // ebx
  int v9; // eax

  UserSessionSwitchEnterCrit();
  if ( PsGetCurrentProcess(v3, v2, v4, v5) != gpepCSRSS
    || ((*(_DWORD *)(gptiCurrent + 480LL) & 0x20000000) == 0
      ? (v9 = 0)
      : (v9 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 760LL) + 24LL) & 0x10),
        v9) )
  {
    v8 = -1;
    UserSetLastError(5LL, gpepCSRSS, v6, v7);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(PVOID, _QWORD))(*(_QWORD *)P + 56LL))(P, a1);
  }
  LeaveCrit();
  return v8;
}
