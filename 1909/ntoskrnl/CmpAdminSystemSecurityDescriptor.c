/*
 * XREFs of CmpAdminSystemSecurityDescriptor @ 0x1407656C8
 * Callers:
 *     CmInitSystem1 @ 0x140A0D1F0 (CmInitSystem1.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14000A950 (RtlSubAuthoritySid.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlCreateAcl @ 0x1405C8E30 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x1405D6210 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405D6250 (RtlSetDaclSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1405DD190 (RtlpAddKnownAce.c)
 *     RtlInitializeSid @ 0x14069F600 (RtlInitializeSid.c)
 */

ACL *CmpAdminSystemSecurityDescriptor()
{
  unsigned __int8 *PoolWithTag; // rbp
  unsigned __int8 *v1; // rax
  unsigned __int8 *v2; // rdi
  ULONG v3; // ebx
  ULONG v4; // r14d
  ACL *v5; // rax
  ACL *v6; // rsi
  NTSTATUS Acl; // eax
  int v8; // eax
  ACL *v9; // rax
  ACL *v10; // rbx
  NTSTATUS SecurityDescriptor; // eax
  ULONG_PTR v12; // r14
  NTSTATUS v13; // eax
  ULONG_PTR v14; // r14
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+60h] [rbp+8h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  PoolWithTag = (unsigned __int8 *)ExAllocatePoolWithTag(PagedPool, 0xCuLL, 0x20204D43u);
  v1 = (unsigned __int8 *)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x20204D43u);
  v2 = v1;
  if ( !PoolWithTag || !v1 )
    KeBugCheckEx(0x51u, 0xBuLL, 1uLL, 0LL, 0LL);
  if ( RtlInitializeSid(PoolWithTag, &IdentifierAuthority, 1u) < 0 || RtlInitializeSid(v2, &IdentifierAuthority, 2u) < 0 )
    KeBugCheckEx(0x51u, 0xBuLL, 2uLL, 0LL, 0LL);
  *RtlSubAuthoritySid(PoolWithTag, 0) = 18;
  *RtlSubAuthoritySid(v2, 0) = 32;
  *RtlSubAuthoritySid(v2, 1u) = 544;
  v3 = 4 * (PoolWithTag[1] + v2[1]) + 40;
  v4 = v3;
  v5 = (ACL *)ExAllocatePoolWithTag(PagedPool, v3, 0x20204D43u);
  v6 = v5;
  if ( !v5 )
    KeBugCheckEx(0x51u, 0xBuLL, 3uLL, 0LL, 0LL);
  Acl = RtlCreateAcl(v5, v3, 2u);
  if ( Acl < 0 )
    KeBugCheckEx(0x51u, 0xBuLL, 4uLL, Acl, 0LL);
  v8 = RtlpAddKnownAce(v6, 2u, 0, 2032127, PoolWithTag, 0);
  if ( v8 < 0 || (v8 = RtlpAddKnownAce(v6, 2u, 0, 2032127, v2, 0), v8 < 0) )
    KeBugCheckEx(0x51u, 0xBuLL, 5uLL, v8, 0LL);
  v9 = (ACL *)ExAllocatePoolWithTag(PagedPool, v3 + 40LL, 0x20204D43u);
  v10 = v9;
  if ( !v9 )
    KeBugCheckEx(0x51u, 0xBuLL, 6uLL, 0LL, 0LL);
  memmove(&v9[5], v6, v4);
  SecurityDescriptor = RtlCreateSecurityDescriptor(v10, 1u);
  v12 = SecurityDescriptor;
  if ( SecurityDescriptor < 0 )
  {
    ExFreePoolWithTag(v10, 0);
    KeBugCheckEx(0x51u, 0xBuLL, 7uLL, v12, 0LL);
  }
  v13 = RtlSetDaclSecurityDescriptor(v10, 1u, v10 + 5, 0);
  v14 = v13;
  if ( v13 < 0 )
  {
    ExFreePoolWithTag(v10, 0);
    KeBugCheckEx(0x51u, 0xBuLL, 8uLL, v14, 0LL);
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(v6, 0);
  return v10;
}
