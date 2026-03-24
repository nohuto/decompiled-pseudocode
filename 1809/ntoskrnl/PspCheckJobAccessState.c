/*
 * XREFs of PspCheckJobAccessState @ 0x140889968
 * Callers:
 *     PspValidateJobAssignmentProcessLimits @ 0x140605534 (PspValidateJobAssignmentProcessLimits.c)
 *     PspValidateJobAffinityState @ 0x1406C2054 (PspValidateJobAffinityState.c)
 *     PspSetAffinityLimitCallback @ 0x14088A1B0 (PspSetAffinityLimitCallback.c)
 * Callees:
 *     SeAccessCheck @ 0x140051640 (SeAccessCheck.c)
 *     ObReleaseObjectSecurity @ 0x1405C93E0 (ObReleaseObjectSecurity.c)
 *     ObpGetObjectSecurity @ 0x1405C9580 (ObpGetObjectSecurity.c)
 */

__int64 __fastcall PspCheckJobAccessState(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+50h] [rbp-18h] BYREF
  BOOLEAN MemoryAllocated; // [rsp+78h] [rbp+10h] BYREF
  NTSTATUS AccessStatus; // [rsp+80h] [rbp+18h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+88h] [rbp+20h] BYREF

  v2 = 0;
  if ( (*(_DWORD *)(a2 + 768) & 1) == 0 )
  {
    if ( (*(_DWORD *)a1 & 1) != 0 )
      return 0LL;
    AccessStatus = ObpGetObjectSecurity(a2, &SecurityDescriptor, &MemoryAllocated, 0);
    v2 = AccessStatus;
    if ( AccessStatus >= 0 )
    {
      SeAccessCheck(
        SecurityDescriptor,
        (PSECURITY_SUBJECT_CONTEXT)(a1 + 8),
        0,
        0x200u,
        0,
        0LL,
        (PGENERIC_MAPPING)((char *)PsProcessType + 76),
        1,
        &GrantedAccess,
        &AccessStatus);
      ObReleaseObjectSecurity(SecurityDescriptor, MemoryAllocated);
      return (unsigned int)AccessStatus;
    }
  }
  return v2;
}
