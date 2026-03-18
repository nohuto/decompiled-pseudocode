/*
 * XREFs of NtUserSetDisplayAutoRotationPreferences @ 0x1C0007BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsActivePpi@CRotationMgr@@SA_NPEAUtagPROCESSINFO@@@Z @ 0x1C0007C4C (-IsActivePpi@CRotationMgr@@SA_NPEAUtagPROCESSINFO@@@Z.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     xxxRefreshDisplayOrientation @ 0x1C00BDA20 (xxxRefreshDisplayOrientation.c)
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
      xxxRefreshDisplayOrientation();
    v3 = 1LL;
  }
  LeaveCrit();
  return v3;
}
