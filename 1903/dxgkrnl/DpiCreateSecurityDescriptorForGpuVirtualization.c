/*
 * XREFs of DpiCreateSecurityDescriptorForGpuVirtualization @ 0x1C029E94C
 * Callers:
 *     DpiFdoInitializeGpuVirtualization @ 0x1C01613F0 (DpiFdoInitializeGpuVirtualization.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 */

__int64 __fastcall DpiCreateSecurityDescriptorForGpuVirtualization(_QWORD *a1)
{
  void *v2; // rdi
  ULONG v3; // eax
  PVOID PoolWithTag; // rax
  void *v5; // r14
  __int64 v6; // rbx
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  ULONG v12; // ebx
  ULONG v13; // ebx
  ULONG v14; // ebx
  struct _ACL *v15; // rax
  struct _ACL *v16; // rsi
  NTSTATUS Acl; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  NTSTATUS v22; // eax
  NTSTATUS v23; // eax
  NTSTATUS v24; // eax
  NTSTATUS v25; // eax
  NTSTATUS v26; // eax
  NTSTATUS v27; // eax
  NTSTATUS v28; // eax
  ULONG v29; // eax
  PVOID v30; // rax
  NTSTATUS v31; // eax
  size_t Size; // [rsp+20h] [rbp-40h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+28h] [rbp-38h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+50h] [rbp-10h] BYREF

  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v2 = 0LL;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v3 = RtlLengthRequiredSid(2u);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v3, 0x74727044u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    v7 = RtlInitializeSid(PoolWithTag, &IdentifierAuthority, 2u);
    v6 = v7;
    if ( v7 < 0 )
    {
      v11 = WdLogNewEntry5_WdError(v9, v8, v10);
      *(_QWORD *)(v11 + 24) = v6;
      WdLogEvent5_WdError(v11);
LABEL_24:
      ExFreePoolWithTag(v5, 0);
      return (unsigned int)v6;
    }
    *RtlSubAuthoritySid(v5, 0) = 83;
    *RtlSubAuthoritySid(v5, 1u) = 0;
    v12 = RtlLengthSid(SeExports->SeLocalSystemSid) + 8;
    v13 = RtlLengthSid(SeExports->SeAliasAdminsSid) + v12;
    v14 = RtlLengthSid(v5) + 24 + v13;
    v15 = (struct _ACL *)ExAllocatePoolWithTag(PagedPool, v14, 0x74727044u);
    v16 = v15;
    if ( !v15 )
    {
      LODWORD(v6) = -1073741670;
      goto LABEL_24;
    }
    Acl = RtlCreateAcl(v15, v14, 2u);
    v6 = Acl;
    if ( Acl < 0 )
      goto LABEL_8;
    v22 = RtlAddAccessAllowedAce(v16, 2u, 0x1F01FFu, SeExports->SeLocalSystemSid);
    v6 = v22;
    if ( v22 < 0 )
      goto LABEL_8;
    v23 = RtlAddAccessAllowedAce(v16, 2u, 0x1F01FFu, SeExports->SeAliasAdminsSid);
    v6 = v23;
    if ( v23 < 0 )
      goto LABEL_8;
    v24 = RtlAddAccessAllowedAce(v16, 2u, 0x1F01FFu, v5);
    v6 = v24;
    if ( v24 < 0 )
      goto LABEL_8;
    v25 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    v6 = v25;
    if ( v25 < 0 )
      goto LABEL_8;
    v26 = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v16, 0);
    v6 = v26;
    if ( v26 < 0 )
      goto LABEL_8;
    v27 = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, SeExports->SeLocalSystemSid, 0);
    v6 = v27;
    if ( v27 < 0 )
      goto LABEL_8;
    v28 = RtlSetGroupSecurityDescriptor(SecurityDescriptor, SeExports->SeLocalSystemSid, 0);
    v6 = v28;
    if ( v28 < 0 )
      goto LABEL_8;
    v29 = RtlLengthSecurityDescriptor(SecurityDescriptor);
    LODWORD(Size) = v29;
    if ( v29 < 0x28 )
    {
      v6 = -1073741595LL;
LABEL_8:
      v21 = WdLogNewEntry5_WdError(v19, v18, v20);
      *(_QWORD *)(v21 + 24) = v6;
      WdLogEvent5_WdError(v21);
      goto LABEL_22;
    }
    v30 = ExAllocatePoolWithTag(PagedPool, v29, 0x74727044u);
    v2 = v30;
    if ( v30 )
    {
      memset(v30, 0, (unsigned int)Size);
      v31 = RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, v2, (PULONG)&Size);
      v6 = v31;
      if ( v31 < 0 )
        goto LABEL_8;
      *a1 = v2;
      v2 = 0LL;
      LODWORD(v6) = 0;
    }
    else
    {
      LODWORD(v6) = -1073741670;
    }
LABEL_22:
    ExFreePoolWithTag(v16, 0);
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    goto LABEL_24;
  }
  LODWORD(v6) = -1073741670;
  return (unsigned int)v6;
}
