/*
 * XREFs of NtUserGetAutoRotationState @ 0x1C01EDDA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserGetAutoRotationState(_DWORD *a1)
{
  __int64 v2; // rdx
  int v3; // ebx
  int v4; // r8d
  _DWORD *v5; // rcx

  UserSessionSwitchEnterCrit();
  v3 = 0;
  if ( a1 )
  {
    v4 = (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)P + 16LL))(P);
    v5 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v5 = (_DWORD *)MmUserProbeAddress;
    *v5 = *v5;
    *a1 = v4;
    v3 = 1;
  }
  else
  {
    UserSetLastError(87LL, v2);
  }
  LeaveCrit();
  return v3;
}
