/*
 * XREFs of RtlGetAppContainerParent @ 0x1408D1F00
 * Callers:
 *     RtlpGetTokenNamedObjectPath @ 0x1408D2CBC (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14000A8C0 (RtlSubAuthoritySid.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400BEF80 (ExAllocatePoolWithQuotaTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlGetAppContainerSidType @ 0x14067FA50 (RtlGetAppContainerSidType.c)
 *     RtlInitializeSid @ 0x1406810A0 (RtlInitializeSid.c)
 */

__int64 __fastcall RtlGetAppContainerParent(char *Sid, ULONG **a2)
{
  ULONG *PoolWithQuotaTag; // rax
  ULONG *v5; // rbx
  NTSTATUS v7; // edi
  unsigned __int8 v8; // di
  ULONG *v9; // r14
  PULONG v10; // rax
  int v11; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  if ( (int)RtlGetAppContainerSidType(Sid, &v11) < 0 || v11 != 1 )
    return 3221225485LL;
  PoolWithQuotaTag = (ULONG *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 0x28uLL, 0x62507452u);
  v5 = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return 3221225626LL;
  v7 = RtlInitializeSid(PoolWithQuotaTag, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 8u);
  if ( v7 < 0 )
  {
    ExFreePoolWithTag(v5, 0);
  }
  else
  {
    v8 = 0;
    v9 = v5 + 2;
    do
    {
      v10 = RtlSubAuthoritySid(Sid, v8++);
      *v9++ = *v10;
    }
    while ( v8 < 8u );
    *a2 = v5;
    return 0;
  }
  return (unsigned int)v7;
}
