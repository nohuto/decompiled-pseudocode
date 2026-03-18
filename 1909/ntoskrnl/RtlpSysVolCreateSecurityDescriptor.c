/*
 * XREFs of RtlpSysVolCreateSecurityDescriptor @ 0x1408D430C
 * Callers:
 *     RtlCreateSystemVolumeInformationFolder @ 0x1408D3D10 (RtlCreateSystemVolumeInformationFolder.c)
 * Callees:
 *     RtlLengthSid @ 0x140004100 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlCreateAcl @ 0x1405C8E30 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x1405D6210 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405D6250 (RtlSetDaclSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1405DD190 (RtlpAddKnownAce.c)
 *     RtlSetControlSecurityDescriptor @ 0x140789E50 (RtlSetControlSecurityDescriptor.c)
 */

__int64 __fastcall RtlpSysVolCreateSecurityDescriptor(_QWORD *a1, ACL **a2)
{
  PVOID PoolWithTag; // rax
  void *v5; // rdi
  __int64 result; // rax
  NTSTATUS SecurityDescriptor; // ebx
  ULONG v8; // esi
  ACL *v9; // rax
  ACL *v10; // rbx
  int Acl; // esi
  ACL *v12; // rcx
  __int16 Sid; // [rsp+30h] [rbp-38h] BYREF
  int v14; // [rsp+32h] [rbp-36h]
  __int16 v15; // [rsp+36h] [rbp-32h]
  int v16; // [rsp+38h] [rbp-30h]

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x536C6F56u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  SecurityDescriptor = RtlCreateSecurityDescriptor(PoolWithTag, 1u);
  if ( SecurityDescriptor < 0 )
    goto LABEL_12;
  v14 = 0;
  v15 = 1280;
  Sid = 257;
  v16 = 18;
  v8 = RtlLengthSid(&Sid) + 16;
  v9 = (ACL *)ExAllocatePoolWithTag(PagedPool, v8, 0x536C6F56u);
  v10 = v9;
  if ( !v9 )
  {
    SecurityDescriptor = -1073741670;
LABEL_12:
    ExFreePoolWithTag(v5, 0);
    return (unsigned int)SecurityDescriptor;
  }
  Acl = RtlCreateAcl(v9, v8, 2u);
  v12 = v10;
  if ( Acl < 0 )
  {
LABEL_11:
    ExFreePoolWithTag(v12, 0);
    SecurityDescriptor = Acl;
    goto LABEL_12;
  }
  Acl = RtlpAddKnownAce(v10, 2u, 3, 0x1FFFFF, (unsigned __int8 *)&Sid, 0);
  if ( Acl < 0
    || (Acl = RtlSetDaclSecurityDescriptor(v5, 1u, v10, 0), Acl < 0)
    || (Acl = RtlSetControlSecurityDescriptor(v5, 0x1000u, 0x1000u), Acl < 0) )
  {
    v12 = v10;
    goto LABEL_11;
  }
  *a1 = v5;
  result = 0LL;
  *a2 = v10;
  return result;
}
