/*
 * XREFs of RtlAddResourceAttributeAce @ 0x140892A50
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1400B7650 (ExAllocatePoolWithQuotaTag.c)
 *     RtlUShortAdd @ 0x14011CDFC (RtlUShortAdd.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     memmove @ 0x1401D1440 (memmove.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     RtlFirstFreeAce @ 0x1406309F0 (RtlFirstFreeAce.c)
 *     RtlValidSid @ 0x140631570 (RtlValidSid.c)
 *     RtlValidAcl @ 0x140631700 (RtlValidAcl.c)
 *     RtlCopySid @ 0x1406491B0 (RtlCopySid.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x140892F10 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpValidAttributeInfo @ 0x1408934A0 (RtlpValidAttributeInfo.c)
 */

__int64 __fastcall RtlAddResourceAttributeAce(
        PACL Acl,
        unsigned int a2,
        int a3,
        int a4,
        char *Sid,
        __int64 a6,
        _DWORD *a7)
{
  _BYTE *v9; // rdi
  int v11; // ebx
  __int64 v12; // r8
  int v13; // ecx
  UCHAR AclRevision; // cl
  __int64 v15; // rdx
  _BYTE *PoolWithQuotaTag; // rax
  size_t v17; // r13
  USHORT v18; // cx
  unsigned int v19; // r9d
  int v20; // ecx
  unsigned int v21; // r8d
  PACL v22; // rdx
  USHORT v23; // r8
  PACE v24; // r15
  int v25; // edx
  BYTE v26; // al
  USHORT pusResult[2]; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int NumberOfBytes; // [rsp+2Ch] [rbp-DCh] BYREF
  int NumberOfBytes_4; // [rsp+30h] [rbp-D8h]
  PACE Ace; // [rsp+38h] [rbp-D0h] BYREF
  int v32; // [rsp+40h] [rbp-C8h]
  unsigned __int16 v33; // [rsp+44h] [rbp-C4h]
  _BYTE Src[256]; // [rsp+48h] [rbp-C0h] BYREF

  NumberOfBytes_4 = a3;
  Ace = 0LL;
  v32 = 0;
  v9 = 0LL;
  v33 = 256;
  memset(Src, 0, sizeof(Src));
  NumberOfBytes = 256;
  if ( !a7 )
    return (unsigned int)-1073741811;
  *a7 = 0;
  if ( !Acl )
    return (unsigned int)-1073741705;
  if ( !RtlValidSid(Sid) )
    return (unsigned int)-1073741704;
  v13 = *(_DWORD *)(Sid + 2) - v32;
  if ( !v13 )
    v13 = *((unsigned __int16 *)Sid + 3) - v33;
  if ( v13 )
    return (unsigned int)-1073741811;
  if ( Sid[1] == 1 && !*((_DWORD *)Sid + 2) )
  {
    AclRevision = Acl->AclRevision;
    if ( Acl->AclRevision > 4u || a2 > 4 )
      return (unsigned int)-1073741735;
    v15 = AclRevision;
    if ( AclRevision <= (unsigned __int8)a2 )
      v15 = (unsigned __int8)a2;
    v32 = v15;
    if ( (NumberOfBytes_4 & 0xFFFFFFE0) == 0
      && !a4
      && (unsigned __int8)RtlpValidAttributeInfo(a6, v15, v12, 0LL)
      && *(_DWORD *)(a6 + 4) == 1 )
    {
      v9 = Src;
      v11 = RtlpConvertAbsoluteToRelativeSecurityAttribute(*(_QWORD *)(a6 + 8), Src, &NumberOfBytes);
      if ( v11 == -1073741789 )
      {
        PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, NumberOfBytes, 0x62507452u);
        v9 = PoolWithQuotaTag;
        if ( !PoolWithQuotaTag )
          return (unsigned int)-1073741801;
        v11 = RtlpConvertAbsoluteToRelativeSecurityAttribute(*(_QWORD *)(a6 + 8), PoolWithQuotaTag, &NumberOfBytes);
      }
      if ( v11 >= 0 )
      {
        if ( RtlValidAcl(Acl) && RtlFirstFreeAce(Acl, &Ace) )
        {
          v17 = NumberOfBytes;
          v18 = 4 * ((unsigned __int8)Sid[1] + 4);
          pusResult[0] = v18;
          if ( NumberOfBytes > 0xFFFF || RtlUShortAdd(v18, NumberOfBytes, pusResult) < 0 )
          {
            v11 = -1073741675;
          }
          else
          {
            v20 = v19 + 8;
            v21 = v19;
            *a7 = v19 + 8;
            v22 = Acl + 1;
            if ( (unsigned __int16)v19 < Acl->AceCount )
            {
              do
              {
                ++v21;
                v20 = *a7 + v22->AclSize;
                *a7 = v20;
                v22 = (PACL)((char *)v22 + v22->AclSize);
              }
              while ( v21 < Acl->AceCount );
            }
            v23 = pusResult[0];
            v24 = Ace;
            v25 = v20 + pusResult[0];
            *a7 = v25;
            if ( v24 && (char *)v24 + v23 <= (char *)Acl + Acl->AclSize )
            {
              v26 = NumberOfBytes_4;
              v24->Header.AceSize = v23;
              v24->Header.AceFlags = v26;
              v24->Header.AceType = 18;
              v24->AccessMask = v19;
              RtlCopySid(4 * (unsigned __int8)Sid[1] + 8, &v24[1], Sid);
              memmove((char *)&v24[2] + 4 * (unsigned __int8)Sid[1], v9, v17);
              ++Acl->AceCount;
              Acl->AclRevision = v32;
            }
            else
            {
              v11 = -1073741671;
              *a7 = (v25 + 3) & 0xFFFFFFFC;
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
    return (unsigned int)-1073741811;
  }
  v11 = -1073741811;
LABEL_39:
  if ( v9 && v9 != Src )
    ExFreePoolWithTag(v9, 0);
  return (unsigned int)v11;
}
