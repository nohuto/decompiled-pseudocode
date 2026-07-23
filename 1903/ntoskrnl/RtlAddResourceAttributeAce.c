/*
 * XREFs of RtlAddResourceAttributeAce @ 0x1408D0CA0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1400BEF80 (ExAllocatePoolWithQuotaTag.c)
 *     RtlUShortAdd @ 0x14011ED4C (RtlUShortAdd.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlValidSid @ 0x1405C8640 (RtlValidSid.c)
 *     RtlFirstFreeAce @ 0x1405C8830 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x1405DD490 (RtlValidAcl.c)
 *     RtlCopySid @ 0x140644850 (RtlCopySid.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1408D1160 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpValidAttributeInfo @ 0x1408D1650 (RtlpValidAttributeInfo.c)
 */

NTSTATUS __cdecl RtlAddResourceAttributeAce(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        ULONG AccessMask,
        PSID Sid,
        PCLAIM_SECURITY_ATTRIBUTES_INFORMATION AttributeInfo,
        PULONG ReturnLength)
{
  _BYTE *v9; // rdi
  NTSTATUS v11; // ebx
  __int64 v12; // r8
  int v13; // ecx
  UCHAR AclRevision; // cl
  __int64 v15; // rdx
  _BYTE *PoolWithQuotaTag; // rax
  size_t v17; // r13
  USHORT v18; // cx
  unsigned int v19; // r9d
  ULONG v20; // ecx
  unsigned int v21; // r8d
  PACL v22; // rdx
  USHORT v23; // r8
  PACE v24; // r15
  ULONG v25; // edx
  BYTE v26; // al
  USHORT pusResult[2]; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int NumberOfBytes; // [rsp+2Ch] [rbp-DCh] BYREF
  ULONG NumberOfBytes_4; // [rsp+30h] [rbp-D8h]
  PACE Ace; // [rsp+38h] [rbp-D0h] BYREF
  int v32; // [rsp+40h] [rbp-C8h]
  unsigned __int16 v33; // [rsp+44h] [rbp-C4h]
  _BYTE Src[256]; // [rsp+48h] [rbp-C0h] BYREF

  NumberOfBytes_4 = AceFlags;
  Ace = 0LL;
  v32 = 0;
  v9 = 0LL;
  v33 = 256;
  memset(Src, 0, sizeof(Src));
  NumberOfBytes = 256;
  if ( !ReturnLength )
    return -1073741811;
  *ReturnLength = 0;
  if ( !Acl )
    return -1073741705;
  if ( !RtlValidSid(Sid) )
    return -1073741704;
  v13 = *(_DWORD *)((char *)Sid + 2) - v32;
  if ( !v13 )
    v13 = *((unsigned __int16 *)Sid + 3) - v33;
  if ( v13 )
    return -1073741811;
  if ( *((_BYTE *)Sid + 1) == 1 && !*((_DWORD *)Sid + 2) )
  {
    AclRevision = Acl->AclRevision;
    if ( Acl->AclRevision > 4u || AceRevision > 4 )
      return -1073741735;
    v15 = AclRevision;
    if ( AclRevision <= (unsigned __int8)AceRevision )
      v15 = (unsigned __int8)AceRevision;
    v32 = v15;
    if ( (NumberOfBytes_4 & 0xFFFFFFE0) == 0
      && !AccessMask
      && (unsigned __int8)RtlpValidAttributeInfo(AttributeInfo, v15, v12, 0LL)
      && AttributeInfo->AttributeCount == 1 )
    {
      v9 = Src;
      v11 = RtlpConvertAbsoluteToRelativeSecurityAttribute(AttributeInfo->Attribute.pAttributeV1, Src, &NumberOfBytes);
      if ( v11 == -1073741789 )
      {
        PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, NumberOfBytes, 0x62507452u);
        v9 = PoolWithQuotaTag;
        if ( !PoolWithQuotaTag )
          return -1073741801;
        v11 = RtlpConvertAbsoluteToRelativeSecurityAttribute(
                AttributeInfo->Attribute.pAttributeV1,
                PoolWithQuotaTag,
                &NumberOfBytes);
      }
      if ( v11 >= 0 )
      {
        if ( RtlValidAcl(Acl) && RtlFirstFreeAce(Acl, &Ace) )
        {
          v17 = NumberOfBytes;
          v18 = 4 * (*((unsigned __int8 *)Sid + 1) + 4);
          pusResult[0] = v18;
          if ( NumberOfBytes > 0xFFFF || RtlUShortAdd(v18, NumberOfBytes, pusResult) < 0 )
          {
            v11 = -1073741675;
          }
          else
          {
            v20 = v19 + 8;
            v21 = v19;
            *ReturnLength = v19 + 8;
            v22 = Acl + 1;
            if ( (unsigned __int16)v19 < Acl->AceCount )
            {
              do
              {
                ++v21;
                v20 = *ReturnLength + v22->AclSize;
                *ReturnLength = v20;
                v22 = (PACL)((char *)v22 + v22->AclSize);
              }
              while ( v21 < Acl->AceCount );
            }
            v23 = pusResult[0];
            v24 = Ace;
            v25 = v20 + pusResult[0];
            *ReturnLength = v25;
            if ( v24 && (char *)v24 + v23 <= (char *)Acl + Acl->AclSize )
            {
              v26 = NumberOfBytes_4;
              v24->Header.AceSize = v23;
              v24->Header.AceFlags = v26;
              v24->Header.AceType = 18;
              v24->AccessMask = v19;
              RtlCopySid(4 * *((unsigned __int8 *)Sid + 1) + 8, &v24[1], Sid);
              memmove((char *)&v24[2] + 4 * *((unsigned __int8 *)Sid + 1), v9, v17);
              ++Acl->AceCount;
              Acl->AclRevision = v32;
            }
            else
            {
              v11 = -1073741671;
              *ReturnLength = (v25 + 3) & 0xFFFFFFFC;
            }
          }
        }
        else
        {
          v11 = -1073741705;
        }
      }
      goto LABEL_39;
    }
    return -1073741811;
  }
  v11 = -1073741811;
LABEL_39:
  if ( v9 && v9 != Src )
    ExFreePoolWithTag(v9, 0);
  return v11;
}
