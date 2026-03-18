/*
 * XREFs of NtUserAutoRotateScreen @ 0x1C01EBCD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserAutoRotateScreen(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // ebx
  int v5; // eax

  UserSessionSwitchEnterCrit();
  if ( PsGetCurrentProcess(v3, v2) != gpepCSRSS
    || ((*(_DWORD *)(gptiCurrent + 480LL) & 0x20000000) == 0
      ? (v5 = 0)
      : (v5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 760LL) + 24LL) & 0x10),
        v5) )
  {
    v4 = -1;
    UserSetLastError(5LL, gpepCSRSS);
  }
  else
  {
    v4 = (*(__int64 (__fastcall **)(PVOID, _QWORD))(*(_QWORD *)P + 56LL))(P, a1);
  }
  LeaveCrit();
  return v4;
}
