/*
 * XREFs of ?ndisBuildDeviceAcl@@YAJPEAPEAU_ACL@@K@Z @ 0x1C003AB54
 * Callers:
 *     ndisCreateSecurityDescriptor @ 0x1C003A9B8 (ndisCreateSecurityDescriptor.c)
 *     ndisCreateSecurityDescriptorEx @ 0x1C010A44C (ndisCreateSecurityDescriptorEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

__int64 __fastcall ndisBuildDeviceAcl(struct _ACL **a1, char a2)
{
  _DWORD *v2; // r13
  _DWORD *v3; // r12
  GENERIC_MAPPING *FileObjectGenericMapping; // rax
  ULONG v6; // r14d
  int v7; // esi
  ULONG v8; // eax
  _DWORD *PoolWithTag; // rax
  int v10; // r15d
  ACL *v11; // rax
  ACL *v12; // rdi
  NTSTATUS Acl; // ebx
  ULONG v15; // esi
  ULONG v16; // edi
  ULONG v17; // ebx
  ULONG v18; // eax
  ULONG v19; // eax
  _DWORD *v20; // rax
  ACCESS_MASK AccessMask; // [rsp+20h] [rbp-30h] BYREF
  int v22; // [rsp+24h] [rbp-2Ch]
  int v23; // [rsp+28h] [rbp-28h]
  int v24; // [rsp+2Ch] [rbp-24h]
  int v25; // [rsp+30h] [rbp-20h]
  int v26; // [rsp+34h] [rbp-1Ch]
  struct _ACL **v27; // [rsp+38h] [rbp-18h]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+40h] [rbp-10h] BYREF

  v27 = a1;
  v2 = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v3 = 0LL;
  AccessMask = 0x10000000;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  FileObjectGenericMapping = IoGetFileObjectGenericMapping();
  RtlMapGenericMask(&AccessMask, FileObjectGenericMapping);
  v6 = RtlLengthSid(SeExports->SeAliasAdminsSid) + 16;
  v23 = a2 & 2;
  if ( (a2 & 2) != 0 )
    v6 += RtlLengthSid(SeExports->SeLocalSystemSid) + 8;
  v7 = a2 & 8;
  v22 = v7;
  if ( (a2 & 8) != 0 )
    v6 += RtlLengthSid(SeExports->SeNetworkServiceSid) + 8;
  v24 = a2 & 0x10;
  if ( (a2 & 0x10) != 0 )
  {
    v15 = RtlLengthSid(&unk_1C00CE8F0);
    v16 = RtlLengthSid(&unk_1C00CE8D0);
    v17 = RtlLengthSid(&unk_1C00CE8B0);
    v18 = v15 + 32 + v16 + v17 + RtlLengthSid(&unk_1C00CE890);
    v7 = v22;
    v6 += v18;
  }
  v22 = a2 & 4;
  if ( (a2 & 4) != 0 )
  {
    v8 = RtlLengthRequiredSid(2u);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v8, 0x7363444Eu);
    v2 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    if ( RtlInitializeSid(PoolWithTag, &IdentifierAuthority, 2u) )
      goto LABEL_39;
    v2[2] = 32;
    v2[3] = 556;
    v6 += RtlLengthSid(v2) + 8;
  }
  v25 = a2 & 0x20;
  if ( (a2 & 0x20) != 0 )
    v6 += RtlLengthSid(SeExports->SeLocalServiceSid) + 8;
  v26 = a2 & 0x40;
  if ( (a2 & 0x40) == 0 )
    goto LABEL_14;
  v19 = RtlLengthRequiredSid(2u);
  v20 = ExAllocatePoolWithTag(NonPagedPoolNx, v19, 0x6C70444Eu);
  v3 = v20;
  if ( v20 )
  {
    if ( RtlInitializeSid(v20, &IdentifierAuthority, 2u) )
      goto LABEL_43;
    v3[2] = 32;
    v3[3] = 559;
    v6 += RtlLengthSid(v3) + 8;
LABEL_14:
    v10 = a2 & 0x80;
    if ( v10 )
      v6 += RtlLengthSid(&unk_1C00CE870) + 8;
    v11 = (ACL *)ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x6573444Eu);
    v12 = v11;
    if ( v11 )
    {
      memset(v11, 0, v6);
      Acl = RtlCreateAcl(v12, v6, 2u);
      if ( Acl < 0 )
      {
        ExFreePoolWithTag(v12, 0);
      }
      else
      {
        RtlAddAccessAllowedAce(v12, 2u, AccessMask, SeExports->SeAliasAdminsSid);
        Acl = 0;
        if ( v23 )
          RtlAddAccessAllowedAce(v12, 2u, AccessMask, SeExports->SeLocalSystemSid);
        if ( v7 )
          RtlAddAccessAllowedAce(v12, 2u, AccessMask, SeExports->SeNetworkServiceSid);
        if ( v24 )
        {
          RtlAddAccessAllowedAce(v12, 2u, AccessMask, &unk_1C00CE8F0);
          RtlAddAccessAllowedAce(v12, 2u, AccessMask, &unk_1C00CE8D0);
          RtlAddAccessAllowedAce(v12, 2u, AccessMask, &unk_1C00CE8B0);
          RtlAddAccessAllowedAce(v12, 2u, AccessMask, &unk_1C00CE890);
        }
        if ( v22 )
          RtlAddAccessAllowedAce(v12, 2u, AccessMask, v2);
        if ( v25 )
          RtlAddAccessAllowedAce(v12, 2u, AccessMask, SeExports->SeLocalServiceSid);
        if ( v26 )
          RtlAddAccessAllowedAce(v12, 2u, AccessMask, v3);
        if ( v10 )
          RtlAddAccessAllowedAce(v12, 2u, AccessMask, &unk_1C00CE870);
        *v27 = v12;
      }
      goto LABEL_33;
    }
LABEL_43:
    Acl = -1073741670;
LABEL_33:
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    goto LABEL_35;
  }
LABEL_39:
  Acl = -1073741670;
LABEL_35:
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  return (unsigned int)Acl;
}
