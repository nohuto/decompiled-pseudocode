/*
 * XREFs of IsPrivileged @ 0x1C0062720
 * Callers:
 *     NtUserPostThreadMessage @ 0x1C001B330 (NtUserPostThreadMessage.c)
 *     xxxWrapSendMessageBSM @ 0x1C0062640 (xxxWrapSendMessageBSM.c)
 *     _RegisterUserApiHook @ 0x1C00D6CA4 (_RegisterUserApiHook.c)
 *     _RegisterDManipHook @ 0x1C00D6F44 (_RegisterDManipHook.c)
 *     ?InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z @ 0x1C010D800 (-InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z.c)
 *     NtUserRegisterBSDRWindow @ 0x1C0110BB0 (NtUserRegisterBSDRWindow.c)
 *     NtUserRegisterServicesProcess @ 0x1C01F40B0 (NtUserRegisterServicesProcess.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 __fastcall IsPrivileged(PPRIVILEGE_SET RequiredPrivileges)
{
  BOOLEAN v2; // di
  __int64 v3; // rdx
  _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF

  SeCaptureSubjectContext(&SubjectContext);
  SeLockSubjectContext(&SubjectContext);
  v2 = SePrivilegeCheck(RequiredPrivileges, &SubjectContext, 1);
  SePrivilegeObjectAuditAlarm(0LL, &SubjectContext, 0LL, RequiredPrivileges, v2, 1);
  SeUnlockSubjectContext(&SubjectContext);
  SeReleaseSubjectContext(&SubjectContext);
  if ( !v2 )
    UserSetLastError(1314LL, v3);
  return v2;
}
