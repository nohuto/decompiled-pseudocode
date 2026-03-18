/*
 * XREFs of ExCpuSetResourceManagerAccessCheck @ 0x140129974
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CB430 (ExpQuerySystemInformation.c)
 *     NtSetInformationProcess @ 0x14067A5E0 (NtSetInformationProcess.c)
 *     NtSetSystemInformation @ 0x1406A6650 (NtSetSystemInformation.c)
 *     NtAcquireProcessActivityReference @ 0x1406F95D0 (NtAcquireProcessActivityReference.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x1400A85A0 (SeAccessCheckWithHint.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     SeCaptureSubjectContextEx @ 0x1405D0700 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x1405F3AE0 (SeReleaseSubjectContext.c)
 *     SeSinglePrivilegeCheck @ 0x140678440 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall ExCpuSetResourceManagerAccessCheck(KPROCESSOR_MODE a1)
{
  struct _KTHREAD *CurrentThread; // rcx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-28h] BYREF
  unsigned int v5; // [rsp+90h] [rbp+8h] BYREF
  char v6; // [rsp+98h] [rbp+10h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( !a1 || SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, a1) )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  SeCaptureSubjectContextEx(CurrentThread, CurrentThread->ApcState.Process, &SubjectContext);
  SeAccessCheckWithHint(
    (__int64)ExpCpuSetSecurityDescriptor,
    7LL,
    (__int64)&SubjectContext,
    0LL,
    1,
    0,
    0LL,
    (__int64)&ExpRestrictedGenericMapping,
    a1,
    (__int64)&v6,
    (__int64)&v5);
  SeReleaseSubjectContext(&SubjectContext);
  return v5;
}
