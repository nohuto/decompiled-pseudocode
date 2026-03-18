/*
 * XREFs of NtUserSetDisplayAutoRotationPreferences @ 0x1C000AAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsActivePpi@CRotationMgr@@SA_NPEAUtagPROCESSINFO@@@Z @ 0x1C000AB34 (-IsActivePpi@CRotationMgr@@SA_NPEAUtagPROCESSINFO@@@Z.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserSetDisplayAutoRotationPreferences(int a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx

  UserSessionSwitchEnterCrit();
  v2 = *(_QWORD *)(gptiCurrent + 416LL);
  if ( (a1 & 0x3FFFFFF0) != 0 )
  {
    UserSetLastError(87LL);
    v3 = 0LL;
  }
  else
  {
    *(_DWORD *)(v2 + 912) = a1;
    if ( CRotationMgr::IsActivePpi((struct tagPROCESSINFO *)v2) )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)P + 8LL))(P);
    v3 = 1LL;
  }
  LeaveCrit();
  return v3;
}
