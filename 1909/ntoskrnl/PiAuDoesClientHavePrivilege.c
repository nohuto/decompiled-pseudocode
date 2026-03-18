/*
 * XREFs of PiAuDoesClientHavePrivilege @ 0x140863F38
 * Callers:
 *     PiCMDeviceAction @ 0x140871B20 (PiCMDeviceAction.c)
 *     PiCMQueryRemove @ 0x140872914 (PiCMQueryRemove.c)
 *     PiCMSetDeviceProblem @ 0x140872FDC (PiCMSetDeviceProblem.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     SePrivilegeCheck @ 0x1405CF200 (SePrivilegeCheck.c)
 *     SeCaptureSubjectContext @ 0x1405DE350 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405F3AE0 (SeReleaseSubjectContext.c)
 */

char __fastcall PiAuDoesClientHavePrivilege(unsigned int a1)
{
  KPROCESSOR_MODE PreviousMode; // di
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+28h] [rbp-48h] BYREF
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+48h] [rbp-28h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  RequiredPrivileges.Privilege[0].Attributes = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  RequiredPrivileges.PrivilegeCount = 1;
  RequiredPrivileges.Control = 1;
  RequiredPrivileges.Privilege[0].Luid = (LUID)a1;
  SeCaptureSubjectContext(&SubjectContext);
  LOBYTE(a1) = SePrivilegeCheck(&RequiredPrivileges, &SubjectContext, PreviousMode);
  SeReleaseSubjectContext(&SubjectContext);
  return a1;
}
