/*
 * XREFs of ExCpuSetResourceManagerAccessCheck @ 0x1401269C8
 * Callers:
 *     ExpQuerySystemInformation @ 0x140626390 (ExpQuerySystemInformation.c)
 *     NtSetSystemInformation @ 0x140663E10 (NtSetSystemInformation.c)
 *     NtSetInformationProcess @ 0x140671C60 (NtSetInformationProcess.c)
 *     NtAcquireProcessActivityReference @ 0x1406D60F0 (NtAcquireProcessActivityReference.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x1400157C0 (SeAccessCheckWithHint.c)
 *     SeCaptureSubjectContextEx @ 0x1405E07F0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x1405E1240 (SeReleaseSubjectContext.c)
 *     SeSinglePrivilegeCheck @ 0x140612160 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall ExCpuSetResourceManagerAccessCheck(KPROCESSOR_MODE a1)
{
  struct _KTHREAD *CurrentThread; // rcx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-28h] BYREF
  unsigned int v4; // [rsp+90h] [rbp+8h]

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
    (__int64)&ExpRestrictedGenericMapping);
  SeReleaseSubjectContext(&SubjectContext);
  return v4;
}
