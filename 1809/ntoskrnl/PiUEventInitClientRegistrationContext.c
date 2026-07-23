/*
 * XREFs of PiUEventInitClientRegistrationContext @ 0x140656AB8
 * Callers:
 *     PiUEventHandleRegistration @ 0x140656DA4 (PiUEventHandleRegistration.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x1400063D0 (KeInitializeGuardedMutex.c)
 *     RtlLengthSid @ 0x1400162C0 (RtlLengthSid.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x1400DCEA0 (RtlDeriveCapabilitySidsFromName.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwCreateWnfStateName @ 0x1401B9BB0 (ZwCreateWnfStateName.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405CBDE0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1405CBF70 (RtlCreateAcl.c)
 *     RtlpAddKnownAce @ 0x1406325C0 (RtlpAddKnownAce.c)
 *     RtlCreateSecurityDescriptor @ 0x140651050 (RtlCreateSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1406567D0 (RtlSetOwnerSecurityDescriptor.c)
 */

_WNF_STATE_NAME *PiUEventInitClientRegistrationContext()
{
  ACL *v0; // rbx
  _WNF_STATE_NAME *PoolWithTag; // rax
  _WNF_STATE_NAME *v2; // rdi
  struct _FAST_MUTEX *v3; // rax
  PSID v4; // rsi
  ULONG v5; // ebx
  ULONG v6; // ebx
  ULONG v7; // ebx
  ULONG v8; // ebx
  ULONG v9; // esi
  ACL *v10; // rax
  void *v12; // rcx
  UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-59h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+58h] [rbp-49h] BYREF
  unsigned __int8 CapabilitySid[48]; // [rsp+80h] [rbp-21h] BYREF
  char CapabilityGroupSid[48]; // [rsp+B0h] [rbp+Fh] BYREF

  *(_DWORD *)&UnicodeString.Length = 2752552;
  v0 = 0LL;
  UnicodeString.Buffer = L"lpacPnpNotifications";
  PoolWithTag = (_WNF_STATE_NAME *)ExAllocatePoolWithTag(PagedPool, 0x90uLL, 0x59706E50u);
  v2 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x90uLL);
    v3 = (struct _FAST_MUTEX *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x59706E50u);
    v2[2] = (_WNF_STATE_NAME)v3;
    if ( !v3 )
      goto LABEL_18;
    KeInitializeGuardedMutex(v3);
    v2[15] = (_WNF_STATE_NAME)&v2[14];
    v2[14] = (_WNF_STATE_NAME)&v2[14];
    v2[13] = (_WNF_STATE_NAME)&v2[12];
    v2[12] = (_WNF_STATE_NAME)&v2[12];
    v2[16].Data[1] = 4;
    LOBYTE(v2[17].Data[1]) = 1;
    if ( RtlDeriveCapabilitySidsFromName(&UnicodeString, CapabilityGroupSid, CapabilitySid) < 0 )
      goto LABEL_18;
    if ( RtlCreateSecurityDescriptor(SecurityDescriptor, 1u) < 0 )
      goto LABEL_18;
    v4 = SeLocalSystemSid;
    if ( RtlSetOwnerSecurityDescriptor(SecurityDescriptor, SeLocalSystemSid, 1u) < 0
      || (v5 = RtlLengthSid(*(PSID *)&SeLowMandatorySid),
          v6 = RtlLengthSid(SeAllAppPackagesSid) + v5,
          v7 = RtlLengthSid(SeWorldSid) + v6,
          v8 = RtlLengthSid(v4) + v7,
          v9 = v8 + RtlLengthSid(CapabilitySid) + 48,
          v10 = (ACL *)ExAllocatePoolWithTag(PagedPool, v9, 0x59706E50u),
          (v0 = v10) == 0LL)
      || RtlCreateAcl(v10, v9, 2u) < 0
      || (int)RtlpAddKnownAce(v0, 2u, 2, 0x10000000, (unsigned __int8 *)SeLocalSystemSid, 0) < 0
      || (int)RtlpAddKnownAce(v0, 2u, 2, 1, (unsigned __int8 *)SeWorldSid, 0) < 0
      || (int)RtlpAddKnownAce(v0, 2u, 2, 1, (unsigned __int8 *)SeAllAppPackagesSid, 0) < 0
      || (int)RtlpAddKnownAce(v0, 2u, 2, 1, *(unsigned __int8 **)&SeLowMandatorySid, 0) < 0
      || (int)RtlpAddKnownAce(v0, 2u, 2, 1, CapabilitySid, 0) < 0
      || RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v0, 0) < 0
      || ZwCreateWnfStateName(v2 + 11, WnfTemporaryStateName, WnfDataScopeMachine, 0, 0LL, 4u, SecurityDescriptor) < 0 )
    {
LABEL_18:
      v12 = (void *)v2[2];
      if ( v12 )
        ExFreePoolWithTag(v12, 0x59706E50u);
      ExFreePoolWithTag(v2, 0x59706E50u);
      v2 = 0LL;
    }
    if ( v0 )
      ExFreePoolWithTag(v0, 0x59706E50u);
  }
  return v2;
}
