/*
 * XREFs of RtlGetAppContainerParent @ 0x1408D1800
 * Callers:
 *     RtlpGetTokenNamedObjectPath @ 0x1408D25BC (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14000A950 (RtlSubAuthoritySid.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14009EE00 (ExAllocatePoolWithQuotaTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlGetAppContainerSidType @ 0x14069CAF0 (RtlGetAppContainerSidType.c)
 *     RtlInitializeSid @ 0x14069F600 (RtlInitializeSid.c)
 */

NTSTATUS __cdecl RtlGetAppContainerParent(PSID AppContainerSid, PSID *AppContainerSidParent)
{
  ULONG *PoolWithQuotaTag; // rax
  ULONG *v5; // rbx
  int v7; // edi
  unsigned __int8 v8; // di
  ULONG *v9; // r14
  PULONG v10; // rax
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+48h] [rbp+10h] BYREF

  *AppContainerSidParent = 0LL;
  if ( RtlGetAppContainerSidType(AppContainerSid, &AppContainerSidType) < 0
    || AppContainerSidType != ChildAppContainerSidType )
  {
    return -1073741811;
  }
  PoolWithQuotaTag = (ULONG *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 0x28uLL, 0x62507452u);
  v5 = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return -1073741670;
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
      v10 = RtlSubAuthoritySid(AppContainerSid, v8++);
      *v9++ = *v10;
    }
    while ( v8 < 8u );
    *AppContainerSidParent = v5;
    return 0;
  }
  return v7;
}
