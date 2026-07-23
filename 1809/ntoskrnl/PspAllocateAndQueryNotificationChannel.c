/*
 * XREFs of PspAllocateAndQueryNotificationChannel @ 0x1406ADDA4
 * Callers:
 *     NtQueryInformationJobObject @ 0x1405FF8F0 (NtQueryInformationJobObject.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14004D9D0 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     ExConvertExclusiveToSharedLite @ 0x140121020 (ExConvertExclusiveToSharedLite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwCreateWnfStateName @ 0x1401B9BB0 (ZwCreateWnfStateName.c)
 *     ZwDeleteWnfStateName @ 0x1401B9D50 (ZwDeleteWnfStateName.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObReleaseObjectSecurity @ 0x1405CA3E0 (ObReleaseObjectSecurity.c)
 *     ObpGetObjectSecurity @ 0x1405CA580 (ObpGetObjectSecurity.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405CBDE0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1405CBF70 (RtlCreateAcl.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1405FE9F4 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlockJob @ 0x1405FF0C0 (PspUnlockJob.c)
 *     PspUnlockJobConditionally @ 0x1405FF8B8 (PspUnlockJobConditionally.c)
 *     RtlpAddKnownAce @ 0x1406325C0 (RtlpAddKnownAce.c)
 *     SeQueryInformationToken @ 0x14063D370 (SeQueryInformationToken.c)
 *     PsReferenceEffectiveToken @ 0x14064A470 (PsReferenceEffectiveToken.c)
 *     RtlCreateSecurityDescriptor @ 0x140651050 (RtlCreateSecurityDescriptor.c)
 *     PspLockRootJobExclusive @ 0x1406AE0D8 (PspLockRootJobExclusive.c)
 *     PspDispatchWakeNotification @ 0x1406AE394 (PspDispatchWakeNotification.c)
 *     PspComputeReportWakeFilter @ 0x1406AE408 (PspComputeReportWakeFilter.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x1406AE460 (RtlGetOwnerSecurityDescriptor.c)
 */

__int64 __fastcall PspAllocateAndQueryNotificationChannel(__int64 a1, __int64 a2, _OWORD *a3)
{
  char v3; // r13
  bool v4; // zf
  char v8; // r15
  __int64 v9; // rdi
  int ObjectSecurity; // edi
  PSECURITY_DESCRIPTOR v12; // r12
  void *v13; // r15
  unsigned __int8 **v14; // r15
  ACL *PoolWithTag; // rax
  ACL *v16; // rdi
  __int64 v17; // r9
  _QWORD *v18; // rcx
  PCWNF_TYPE_ID TypeId; // [rsp+20h] [rbp-79h]
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
  _WNF_STATE_NAME StateName; // [rsp+B0h] [rbp+17h] BYREF

  v3 = 0;
  v25 = 0LL;
  v4 = (*(_DWORD *)(a2 + 1304) & 0x800) == 0;
  StateName = 0LL;
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
  v12 = SecurityDescriptor;
  if ( !SecurityDescriptor )
  {
    ObjectSecurity = -1073741790;
LABEL_25:
    ObReleaseObjectSecurity(v12, MemoryAllocated);
    return (unsigned int)ObjectSecurity;
  }
  ObjectSecurity = RtlGetOwnerSecurityDescriptor(SecurityDescriptor, &Owner, &OwnerDefaulted);
  if ( ObjectSecurity < 0 )
    goto LABEL_25;
  v13 = PsReferenceEffectiveToken(a1, &v24, &v22, &v28, 0LL);
  ObjectSecurity = SeQueryInformationToken(v13, TokenUser, &TokenInformation);
  if ( v24 == 1 )
  {
    ObFastDereferenceObject((signed __int64 *)(*(_QWORD *)(a1 + 184) + 856LL), (unsigned __int64)v13);
  }
  else if ( v13 )
  {
    ObfDereferenceObject(v13);
  }
  if ( ObjectSecurity < 0 )
    goto LABEL_25;
  v14 = (unsigned __int8 **)TokenInformation;
  AclLength[0] = 4 * (*((unsigned __int8 *)Owner + 1) + *(unsigned __int8 *)(*(_QWORD *)TokenInformation + 1LL)) + 48;
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(NonPagedPoolNx, AclLength[0], 0x66577350u);
  Dacl = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_24;
  RtlCreateAcl(PoolWithTag, AclLength[0], 2u);
  v16 = Dacl;
  RtlpAddKnownAce(Dacl, 2u, 0, 0x80000000, (unsigned __int8 *)Owner, 0);
  RtlpAddKnownAce(v16, 2u, 0, 0x80000000, *v14, 0);
  RtlCreateSecurityDescriptor(v31, 1u);
  RtlSetDaclSecurityDescriptor(v31, 1u, v16, 0);
  ObjectSecurity = ZwCreateWnfStateName(&StateName, WnfTemporaryStateName, WnfDataScopeMachine, 0, 0LL, 0, v31);
  ExFreePoolWithTag(Dacl, 0x66577350u);
  if ( ObjectSecurity < 0 )
  {
LABEL_24:
    ExFreePoolWithTag(v14, 0);
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
    *(_WNF_STATE_NAME *)(a2 + 880) = StateName;
    PspComputeReportWakeFilter(a2, &v25, a2 + 952, 0LL);
    PspEnumJobsAndProcessesInJobHierarchy(
      v18,
      0,
      (int)PspEnableWakeCounters,
      (int)PspEnableProcessWakeCounters,
      v17 & (unsigned __int64)TypeId,
      2);
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
    ZwDeleteWnfStateName(&StateName);
  }
  else if ( !v8 )
  {
    PspDispatchWakeNotification((PVOID)a2);
  }
  return 0LL;
}
