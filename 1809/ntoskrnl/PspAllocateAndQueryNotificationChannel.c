/*
 * XREFs of PspAllocateAndQueryNotificationChannel @ 0x1406ACB04
 * Callers:
 *     NtQueryInformationJobObject @ 0x1405FE8F0 (NtQueryInformationJobObject.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14004D9D0 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     ExConvertExclusiveToSharedLite @ 0x140120F50 (ExConvertExclusiveToSharedLite.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     ZwCreateWnfStateName @ 0x1401B9A50 (ZwCreateWnfStateName.c)
 *     ZwDeleteWnfStateName @ 0x1401B9BF0 (ZwDeleteWnfStateName.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     ObReleaseObjectSecurity @ 0x1405C93E0 (ObReleaseObjectSecurity.c)
 *     ObpGetObjectSecurity @ 0x1405C9580 (ObpGetObjectSecurity.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405CADE0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1405CAF70 (RtlCreateAcl.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1405FD9F4 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlockJob @ 0x1405FE0C0 (PspUnlockJob.c)
 *     PspUnlockJobConditionally @ 0x1405FE8B8 (PspUnlockJobConditionally.c)
 *     RtlpAddKnownAce @ 0x1406315A0 (RtlpAddKnownAce.c)
 *     SeQueryInformationToken @ 0x14063C350 (SeQueryInformationToken.c)
 *     PsReferenceEffectiveToken @ 0x1406492B0 (PsReferenceEffectiveToken.c)
 *     RtlCreateSecurityDescriptor @ 0x14064FE90 (RtlCreateSecurityDescriptor.c)
 *     PspLockRootJobExclusive @ 0x1406ACE38 (PspLockRootJobExclusive.c)
 *     PspDispatchWakeNotification @ 0x1406AD0F4 (PspDispatchWakeNotification.c)
 *     PspComputeReportWakeFilter @ 0x1406AD168 (PspComputeReportWakeFilter.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x1406AD1C0 (RtlGetOwnerSecurityDescriptor.c)
 */

__int64 __fastcall PspAllocateAndQueryNotificationChannel(__int64 a1, __int64 a2, _OWORD *a3)
{
  char v3; // r13
  bool v4; // zf
  char v8; // r15
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  int ObjectSecurity; // edi
  PSECURITY_DESCRIPTOR v14; // r12
  void *v15; // r15
  unsigned __int8 **v16; // r15
  ACL *PoolWithTag; // rax
  ACL *v18; // rdi
  _QWORD *v19; // rcx
  BOOLEAN MemoryAllocated; // [rsp+40h] [rbp-59h] BYREF
  BOOLEAN OwnerDefaulted; // [rsp+41h] [rbp-58h] BYREF
  bool v22; // [rsp+42h] [rbp-57h] BYREF
  ULONG AclLength[2]; // [rsp+48h] [rbp-51h] BYREF
  int v24; // [rsp+50h] [rbp-49h] BYREF
  __int64 v25; // [rsp+58h] [rbp-41h] BYREF
  PSID Owner; // [rsp+60h] [rbp-39h] BYREF
  PACL Dacl; // [rsp+68h] [rbp-31h]
  int v28; // [rsp+70h] [rbp-29h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+78h] [rbp-21h] BYREF
  PVOID TokenInformation; // [rsp+80h] [rbp-19h] BYREF
  _BYTE v31[40]; // [rsp+88h] [rbp-11h] BYREF
  __int64 v32; // [rsp+B0h] [rbp+17h] BYREF

  v3 = 0;
  v25 = 0LL;
  v4 = (*(_DWORD *)(a2 + 1304) & 0x800) == 0;
  v32 = 0LL;
  if ( !v4 )
  {
    v8 = 1;
    PspLockRootJobExclusive(a2, a1, AclLength);
    v9 = *(_QWORD *)AclLength;
    if ( a2 != *(_QWORD *)AclLength )
    {
      ExConvertExclusiveToSharedLite((PERESOURCE)(*(_QWORD *)AclLength + 56LL));
      ExAcquireResourceExclusiveLite((PERESOURCE)(a2 + 56), 1u);
    }
    goto LABEL_4;
  }
  ObjectSecurity = ObpGetObjectSecurity(a2, &SecurityDescriptor, &MemoryAllocated, 0);
  if ( ObjectSecurity < 0 )
    return (unsigned int)ObjectSecurity;
  v14 = SecurityDescriptor;
  if ( !SecurityDescriptor )
  {
    ObjectSecurity = -1073741790;
LABEL_25:
    ObReleaseObjectSecurity(v14, MemoryAllocated);
    return (unsigned int)ObjectSecurity;
  }
  ObjectSecurity = RtlGetOwnerSecurityDescriptor(SecurityDescriptor, &Owner, &OwnerDefaulted);
  if ( ObjectSecurity < 0 )
    goto LABEL_25;
  v15 = PsReferenceEffectiveToken(a1, &v24, &v22, &v28, 0LL);
  ObjectSecurity = SeQueryInformationToken(v15, TokenUser, &TokenInformation);
  if ( v24 == 1 )
  {
    ObFastDereferenceObject((signed __int64 *)(*(_QWORD *)(a1 + 184) + 856LL), (unsigned __int64)v15);
  }
  else if ( v15 )
  {
    ObfDereferenceObject(v15);
  }
  if ( ObjectSecurity < 0 )
    goto LABEL_25;
  v16 = (unsigned __int8 **)TokenInformation;
  AclLength[0] = 4 * (*((unsigned __int8 *)Owner + 1) + *(unsigned __int8 *)(*(_QWORD *)TokenInformation + 1LL)) + 48;
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(NonPagedPoolNx, AclLength[0], 0x66577350u);
  Dacl = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_24;
  RtlCreateAcl(PoolWithTag, AclLength[0], 2u);
  v18 = Dacl;
  RtlpAddKnownAce(Dacl, 2u, 0, 0x80000000, (unsigned __int8 *)Owner, 0);
  RtlpAddKnownAce(v18, 2u, 0, 0x80000000, *v16, 0);
  RtlCreateSecurityDescriptor(v31, 1u);
  RtlSetDaclSecurityDescriptor(v31, 1u, v18, 0);
  ObjectSecurity = ZwCreateWnfStateName((__int64)&v32, 3LL, 4LL);
  ExFreePoolWithTag(Dacl, 0x66577350u);
  if ( ObjectSecurity < 0 )
  {
LABEL_24:
    ExFreePoolWithTag(v16, 0);
    goto LABEL_25;
  }
  v8 = 0;
  PspLockRootJobExclusive(a2, a1, AclLength);
  if ( (*(_DWORD *)(a2 + 1304) & 0x800) != 0 )
  {
    v9 = *(_QWORD *)AclLength;
    v3 = 1;
  }
  else
  {
    *(_QWORD *)(a2 + 880) = v32;
    PspComputeReportWakeFilter(a2, &v25, a2 + 952, 0LL);
    PspEnumJobsAndProcessesInJobHierarchy(v19, 0, (int)PspEnableWakeCounters, (int)PspEnableProcessWakeCounters, 0LL, 2);
    _interlockedbittestandset((volatile signed __int32 *)(a2 + 1304), 0xBu);
    _InterlockedIncrement64(&PspJobTimeLimitsRequest);
    v9 = *(_QWORD *)AclLength;
  }
LABEL_4:
  *a3 = *(_OWORD *)(a2 + 880);
  a3[1] = *(_OWORD *)(a2 + 896);
  a3[2] = *(_OWORD *)(a2 + 912);
  a3[3] = *(_OWORD *)(a2 + 928);
  if ( v8 )
    PspUnlockJobConditionally(a2, AclLength);
  PspUnlockJob(v9, a1);
  if ( v3 )
  {
    ZwDeleteWnfStateName((__int64)&v32, v10, v11);
  }
  else if ( !v8 )
  {
    PspDispatchWakeNotification((PVOID)a2);
  }
  return 0LL;
}
