/*
 * XREFs of NtSetUuidSeed @ 0x140759890
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140005760 (ExfAcquirePushLockExclusiveEx.c)
 *     RtlLengthSid @ 0x1400162C0 (RtlLengthSid.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     SeAccessCheck @ 0x140051640 (SeAccessCheck.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlSubAuthoritySid @ 0x1400DCB70 (RtlSubAuthoritySid.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405CBDE0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1405CBF70 (RtlCreateAcl.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     RtlpAddKnownAce @ 0x1406325C0 (RtlpAddKnownAce.c)
 *     SeCaptureSubjectContext @ 0x140632AA0 (SeCaptureSubjectContext.c)
 *     RtlCreateSecurityDescriptor @ 0x140651050 (RtlCreateSecurityDescriptor.c)
 *     RtlInitializeSid @ 0x140656830 (RtlInitializeSid.c)
 */

NTSTATUS __stdcall NtSetUuidSeed(PUCHAR UuidSeed)
{
  PVOID PoolWithTag; // rax
  void *v3; // r15
  int v4; // eax
  __int64 i; // r14
  ULONG v6; // ebx
  ULONG v7; // r14d
  ACL *v8; // rax
  ACL *v9; // rbx
  int Acl; // eax
  NTSTATUS v11; // eax
  int v12; // eax
  int v13; // eax
  struct _KTHREAD *CurrentThread; // r15
  _RTL_BALANCED_NODE *v15; // rax
  _RTL_BALANCED_NODE *v16; // rbx
  char v18; // r14
  NTSTATUS v19; // ebx
  NTSTATUS AccessStatus; // [rsp+54h] [rbp-A4h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+58h] [rbp-A0h] BYREF
  int v24; // [rsp+64h] [rbp-94h]
  __int16 v25; // [rsp+68h] [rbp-90h]
  int v26; // [rsp+6Ch] [rbp-8Ch]
  PVOID P; // [rsp+70h] [rbp-88h]
  PVOID v28; // [rsp+78h] [rbp-80h]
  ULONG v29; // [rsp+80h] [rbp-78h]
  ACCESS_MASK GrantedAccess; // [rsp+84h] [rbp-74h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+88h] [rbp-70h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+A8h] [rbp-50h] BYREF
  _DWORD v33[6]; // [rsp+D0h] [rbp-28h]

  v33[0] = 80;
  v33[1] = 521322694;
  v33[2] = 906040134;
  v33[3] = -430256637;
  v33[4] = 1525148216;
  v33[5] = -843743134;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v28 = 0LL;
  SeCaptureSubjectContext(&SubjectSecurityContext);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x64695555u);
  v3 = PoolWithTag;
  P = PoolWithTag;
  if ( !PoolWithTag )
    RtlRaiseStatus(-1073741670);
  v4 = RtlInitializeSid(PoolWithTag, &IdentifierAuthority, 6u);
  AccessStatus = v4;
  if ( v4 < 0 )
    RtlRaiseStatus(v4);
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v26 = i;
    if ( (unsigned int)i >= 6 )
      break;
    v6 = v33[i];
    *RtlSubAuthoritySid(v3, i) = v6;
  }
  v7 = RtlLengthSid(v3) + 20;
  v29 = v7;
  v8 = (ACL *)ExAllocatePoolWithTag(PagedPool, v7, 0x64695555u);
  v9 = v8;
  v28 = v8;
  if ( !v8 )
    RtlRaiseStatus(-1073741670);
  Acl = RtlCreateAcl(v8, v7, 2u);
  AccessStatus = Acl;
  if ( Acl < 0 )
    RtlRaiseStatus(Acl);
  v11 = RtlpAddKnownAce(v9, 2u, 0, 1, (unsigned __int8 *)v3, 0);
  AccessStatus = v11;
  if ( v11 < 0 )
    RtlRaiseStatus(v11);
  v12 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  AccessStatus = v12;
  if ( v12 < 0 )
    RtlRaiseStatus(v12);
  v13 = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v9, 0);
  AccessStatus = v13;
  if ( v13 < 0 )
    RtlRaiseStatus(v13);
  if ( !SeAccessCheck(
          SecurityDescriptor,
          &SubjectSecurityContext,
          0,
          1u,
          0,
          0LL,
          (PGENERIC_MAPPING)&ExpUuidSeedGenericMapping,
          1,
          &GrantedAccess,
          &AccessStatus) )
    RtlRaiseStatus(-1073741790);
  v24 = *(_DWORD *)UuidSeed;
  v25 = *((_WORD *)UuidSeed + 2);
  AccessStatus = 0;
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v28 )
    ExFreePoolWithTag(v28, 0);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v15 = KeAbPreAcquire((ULONG_PTR)&ExpUuidLock, 0LL, 0);
  v16 = v15;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpUuidLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpUuidLock, v15, (ULONG_PTR)&ExpUuidLock);
  if ( v16 )
    BYTE2(v16[1].Left) |= 1u;
  *(int *)((char *)&dword_14096E27C + 2) = v24;
  HIWORD(dword_14096E280) = v25;
  ExpUuidCacheValid = (unsigned __int8)v24 >> 7 == 0;
  v18 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v18 & 2) != 0 && (v18 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpUuidLock);
  KeAbPostRelease((ULONG_PTR)&ExpUuidLock);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  v19 = AccessStatus;
  SeReleaseSubjectContext(&SubjectSecurityContext);
  return v19;
}
