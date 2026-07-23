/*
 * XREFs of PspAllocateAndQueryNotificationChannel @ 0x1406173EC
 * Callers:
 *     NtQueryInformationJobObject @ 0x140613C40 (NtQueryInformationJobObject.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14003AE70 (ObFastDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExConvertExclusiveToSharedLite @ 0x140121820 (ExConvertExclusiveToSharedLite.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwCreateWnfStateName @ 0x1401C2530 (ZwCreateWnfStateName.c)
 *     ZwDeleteWnfStateName @ 0x1401C26D0 (ZwDeleteWnfStateName.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObReleaseObjectSecurity @ 0x1405C7290 (ObReleaseObjectSecurity.c)
 *     ObpGetObjectSecurity @ 0x1405C7680 (ObpGetObjectSecurity.c)
 *     RtlCreateAcl @ 0x1405C8E30 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x1405D6210 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405D6250 (RtlSetDaclSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1405DD190 (RtlpAddKnownAce.c)
 *     PsReferenceEffectiveToken @ 0x1405DF3D0 (PsReferenceEffectiveToken.c)
 *     SeQueryInformationToken @ 0x140600830 (SeQueryInformationToken.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140612D20 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlockJob @ 0x140613420 (PspUnlockJob.c)
 *     PspUnlockJobConditionally @ 0x140613C14 (PspUnlockJobConditionally.c)
 *     PspLockRootJobExclusive @ 0x140617730 (PspLockRootJobExclusive.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x1406D1530 (RtlGetOwnerSecurityDescriptor.c)
 *     PspDispatchWakeNotification @ 0x1406DCA58 (PspDispatchWakeNotification.c)
 *     PspComputeReportWakeFilter @ 0x1406DCACC (PspComputeReportWakeFilter.c)
 */

__int64 __fastcall PspAllocateAndQueryNotificationChannel(__int64 a1, __int64 a2, _OWORD *a3)
{
  bool v6; // zf
  char v7; // r13
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
  PCWNF_TYPE_ID TypeId; // [rsp+20h] [rbp-89h]
  BOOLEAN MemoryAllocated; // [rsp+40h] [rbp-69h] BYREF
  BOOLEAN OwnerDefaulted; // [rsp+41h] [rbp-68h] BYREF
  bool v22; // [rsp+42h] [rbp-67h] BYREF
  ULONG AclLength[2]; // [rsp+48h] [rbp-61h] BYREF
  int v24; // [rsp+50h] [rbp-59h] BYREF
  PSID Owner; // [rsp+58h] [rbp-51h] BYREF
  PACL Dacl; // [rsp+60h] [rbp-49h]
  __int64 v27; // [rsp+68h] [rbp-41h] BYREF
  int v28; // [rsp+70h] [rbp-39h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+78h] [rbp-31h] BYREF
  PVOID TokenInformation[2]; // [rsp+80h] [rbp-29h] BYREF
  _BYTE v31[40]; // [rsp+90h] [rbp-19h] BYREF
  _WNF_STATE_NAME StateName; // [rsp+B8h] [rbp+Fh] BYREF

  v27 = 0LL;
  memset(v31, 0, sizeof(v31));
  v6 = (*(_DWORD *)(a2 + 1304) & 0x800) == 0;
  v7 = 0;
  TokenInformation[1] = 0LL;
  StateName = 0LL;
  if ( !v6 )
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
  ObjectSecurity = SeQueryInformationToken(v13, TokenUser, TokenInformation);
  if ( v24 == 1 )
  {
    ObFastDereferenceObject((signed __int64 *)(*(_QWORD *)(a1 + 184) + 864LL), (unsigned __int64)v13);
  }
  else if ( v13 )
  {
    ObfDereferenceObject(v13);
  }
  if ( ObjectSecurity < 0 )
    goto LABEL_25;
  v14 = (unsigned __int8 **)TokenInformation[0];
  AclLength[0] = 4 * (*((unsigned __int8 *)Owner + 1) + *(unsigned __int8 *)(*(_QWORD *)TokenInformation[0] + 1LL)) + 48;
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
    v7 = 1;
  }
  else
  {
    *(_WNF_STATE_NAME *)(a2 + 880) = StateName;
    PspComputeReportWakeFilter(a2, &v27, a2 + 952, 0LL);
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
  if ( v7 )
  {
    ZwDeleteWnfStateName(&StateName);
  }
  else if ( !v8 )
  {
    PspDispatchWakeNotification((PVOID)a2);
  }
  return 0LL;
}
