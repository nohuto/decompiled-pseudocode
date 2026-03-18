/*
 * XREFs of IsPrivileged @ 0x1C0086440
 * Callers:
 *     NtUserPostThreadMessage @ 0x1C000F5C0 (NtUserPostThreadMessage.c)
 *     ?InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z @ 0x1C000FC68 (-InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z.c)
 *     xxxWrapSendMessageBSM @ 0x1C00866C0 (xxxWrapSendMessageBSM.c)
 *     _RegisterDManipHook @ 0x1C0130970 (_RegisterDManipHook.c)
 *     _RegisterUserApiHook @ 0x1C013C448 (_RegisterUserApiHook.c)
 *     NtUserRegisterBSDRWindow @ 0x1C013EDD0 (NtUserRegisterBSDRWindow.c)
 *     NtUserRegisterServicesProcess @ 0x1C0233930 (NtUserRegisterServicesProcess.c)
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     memset @ 0x1C0166840 (memset.c)
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
