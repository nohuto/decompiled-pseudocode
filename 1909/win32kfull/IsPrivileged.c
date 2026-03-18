/*
 * XREFs of IsPrivileged @ 0x1C0012AE0
 * Callers:
 *     NtUserPostThreadMessage @ 0x1C000E4C0 (NtUserPostThreadMessage.c)
 *     ?InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z @ 0x1C000EB68 (-InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z.c)
 *     _RegisterUserApiHook @ 0x1C000F248 (_RegisterUserApiHook.c)
 *     _RegisterDManipHook @ 0x1C000F850 (_RegisterDManipHook.c)
 *     xxxWrapSendMessageBSM @ 0x1C0011840 (xxxWrapSendMessageBSM.c)
 *     NtUserRegisterBSDRWindow @ 0x1C0119040 (NtUserRegisterBSDRWindow.c)
 *     NtUserRegisterServicesProcess @ 0x1C0233310 (NtUserRegisterServicesProcess.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall IsPrivileged(PPRIVILEGE_SET RequiredPrivileges)
{
  BOOLEAN v2; // di
  _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  SeLockSubjectContext(&SubjectContext);
  v2 = SePrivilegeCheck(RequiredPrivileges, &SubjectContext, 1);
  SePrivilegeObjectAuditAlarm(0LL, &SubjectContext, 0LL, RequiredPrivileges, v2, 1);
  SeUnlockSubjectContext(&SubjectContext);
  SeReleaseSubjectContext(&SubjectContext);
  if ( !v2 )
    UserSetLastError(1314LL);
  return v2;
}
