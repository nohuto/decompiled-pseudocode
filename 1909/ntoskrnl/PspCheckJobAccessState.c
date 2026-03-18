/*
 * XREFs of PspCheckJobAccessState @ 0x1408C718C
 * Callers:
 *     PspValidateJobAssignmentProcessLimits @ 0x140688E14 (PspValidateJobAssignmentProcessLimits.c)
 *     PspValidateJobAffinityState @ 0x1406E4620 (PspValidateJobAffinityState.c)
 *     PspSetAffinityLimitCallback @ 0x1408C79E0 (PspSetAffinityLimitCallback.c)
 * Callees:
 *     SeAccessCheck @ 0x1400A61D0 (SeAccessCheck.c)
 *     ObReleaseObjectSecurity @ 0x1405C7290 (ObReleaseObjectSecurity.c)
 *     ObpGetObjectSecurity @ 0x1405C7680 (ObpGetObjectSecurity.c)
 */

__int64 __fastcall PspCheckJobAccessState(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+50h] [rbp-18h] BYREF
  BOOLEAN MemoryAllocated; // [rsp+78h] [rbp+10h] BYREF
  NTSTATUS AccessStatus; // [rsp+80h] [rbp+18h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+88h] [rbp+20h] BYREF

  v2 = 0;
  if ( (*(_DWORD *)(a2 + 776) & 1) == 0 )
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
