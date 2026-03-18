/*
 * XREFs of IsPrivileged @ 0x1C00CCBB0
 * Callers:
 *     xxxWrapSendMessageBSM @ 0x1C00CCC60 (xxxWrapSendMessageBSM.c)
 *     NtUserPostThreadMessage @ 0x1C00D48B0 (NtUserPostThreadMessage.c)
 *     _RegisterDManipHook @ 0x1C0125A60 (_RegisterDManipHook.c)
 *     ?InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z @ 0x1C012F3DC (-InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z.c)
 *     _RegisterUserApiHook @ 0x1C0130888 (_RegisterUserApiHook.c)
 *     NtUserRegisterBSDRWindow @ 0x1C0133960 (NtUserRegisterBSDRWindow.c)
 *     NtUserRegisterServicesProcess @ 0x1C021B820 (NtUserRegisterServicesProcess.c)
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall IsPrivileged(PPRIVILEGE_SET RequiredPrivileges)
{
  BOOLEAN v2; // di
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF

  SeCaptureSubjectContext(&SubjectContext);
  SeLockSubjectContext(&SubjectContext);
  v2 = SePrivilegeCheck(RequiredPrivileges, &SubjectContext, 1);
  SePrivilegeObjectAuditAlarm(0LL, &SubjectContext, 0LL, RequiredPrivileges, v2, 1);
  SeUnlockSubjectContext(&SubjectContext);
  SeReleaseSubjectContext(&SubjectContext);
  if ( !v2 )
    UserSetLastError(1314LL, v3, v4, v5);
  return v2;
}
