/*
 * XREFs of PiDevCfgGetKeySecurityDescriptor @ 0x1406FFEE4
 * Callers:
 *     PiDevCfgCopyDeviceKeys @ 0x1406FF3A8 (PiDevCfgCopyDeviceKeys.c)
 *     PiDevCfgCopyDeviceKey @ 0x1406FF4B4 (PiDevCfgCopyDeviceKey.c)
 * Callees:
 *     RtlGetAce @ 0x1400040A0 (RtlGetAce.c)
 *     RtlLengthSid @ 0x140004100 (RtlLengthSid.c)
 *     RtlEqualSid @ 0x140005470 (RtlEqualSid.c)
 *     RtlGetDaclSecurityDescriptor @ 0x1400C9B30 (RtlGetDaclSecurityDescriptor.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwQuerySecurityObject @ 0x1401C36F0 (ZwQuerySecurityObject.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlLengthSecurityDescriptor @ 0x1405C7F30 (RtlLengthSecurityDescriptor.c)
 *     RtlAddAce @ 0x1405C8C00 (RtlAddAce.c)
 *     RtlCreateAcl @ 0x1405C8E30 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x1405D6210 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405D6250 (RtlSetDaclSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x1405D7690 (RtlValidSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1405DD190 (RtlpAddKnownAce.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x1406DFF50 (RtlAbsoluteToSelfRelativeSD.c)
 *     RtlGetGroupSecurityDescriptor @ 0x1406FFFD0 (RtlGetGroupSecurityDescriptor.c)
 */

__int64 __fastcall PiDevCfgGetKeySecurityDescriptor(HANDLE Handle, _QWORD *a2)
{
  ACL *v4; // r12
  void *v5; // rsi
  NTSTATUS v6; // eax
  int GroupSecurityDescriptor; // ebx
  ULONG v9; // r14d
  _BYTE *PoolWithTag; // rdi
  ULONG v11; // r15d
  PACL v12; // r14
  ULONG v13; // ebx
  ACL *v14; // rax
  ULONG v15; // eax
  ULONG v16; // ebx
  PVOID v17; // rax
  BOOLEAN GroupDefaulted; // [rsp+30h] [rbp-59h] BYREF
  BOOLEAN DaclPresent[3]; // [rsp+31h] [rbp-58h] BYREF
  ULONG LengthNeeded; // [rsp+34h] [rbp-55h] BYREF
  PSID Group; // [rsp+38h] [rbp-51h] BYREF
  PACL Dacl; // [rsp+40h] [rbp-49h] BYREF
  _BYTE AbsoluteSecurityDescriptor[40]; // [rsp+48h] [rbp-41h] BYREF
  _BYTE SecurityDescriptor[56]; // [rsp+70h] [rbp-19h] BYREF

  Dacl = 0LL;
  v4 = 0LL;
  memset(AbsoluteSecurityDescriptor, 0, sizeof(AbsoluteSecurityDescriptor));
  *a2 = 0LL;
  v5 = 0LL;
  v6 = ZwQuerySecurityObject(Handle, 2u, SecurityDescriptor, 0x34u, &LengthNeeded);
  GroupSecurityDescriptor = v6;
  if ( v6 == -1073741789 )
    return (unsigned int)-1073741720;
  if ( v6 >= 0 )
  {
    GroupSecurityDescriptor = RtlGetGroupSecurityDescriptor(SecurityDescriptor, &Group, &GroupDefaulted);
    if ( GroupSecurityDescriptor >= 0 )
    {
      if ( !Group )
        return (unsigned int)-1073741722;
      if ( !RtlEqualSid(Group, PiDevCfgNullSid) )
        return (unsigned int)-1073741720;
      v9 = 240;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xF0uLL, 0x63647050u);
      if ( PoolWithTag )
      {
        while ( 1 )
        {
          GroupSecurityDescriptor = ZwQuerySecurityObject(Handle, 4u, PoolWithTag, v9, &LengthNeeded);
          if ( GroupSecurityDescriptor != -1073741789 )
            break;
          if ( LengthNeeded <= v9 )
          {
            GroupSecurityDescriptor = -1073741595;
            break;
          }
          v9 = LengthNeeded;
          ExFreePoolWithTag(PoolWithTag, 0);
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x63647050u);
          if ( !PoolWithTag )
            goto LABEL_13;
        }
        v11 = 0;
        if ( GroupSecurityDescriptor < 0 )
          goto LABEL_14;
        GroupSecurityDescriptor = RtlGetDaclSecurityDescriptor(PoolWithTag, DaclPresent, &Dacl, &GroupDefaulted);
        if ( GroupSecurityDescriptor < 0 )
          goto LABEL_14;
        if ( !DaclPresent[0] || (v12 = Dacl) == 0LL )
        {
          GroupSecurityDescriptor = -1073741275;
          goto LABEL_14;
        }
        if ( Dacl->AceCount )
        {
          do
          {
            GroupSecurityDescriptor = RtlGetAce(v12, v11, &Group);
            if ( GroupSecurityDescriptor < 0 )
              goto LABEL_14;
            if ( !*(_BYTE *)Group
              && (*((_DWORD *)Group + 1) & 0xF003F) == 0xF003F
              && RtlEqualSid((char *)Group + 8, SeLocalSystemSid) )
            {
              *a2 = PoolWithTag;
              return (unsigned int)GroupSecurityDescriptor;
            }
          }
          while ( ++v11 < v12->AceCount );
        }
        v13 = RtlLengthSid(SeLocalSystemSid) + v12->AclSize + 8;
        v14 = (ACL *)ExAllocatePoolWithTag(PagedPool, v13, 0x63647050u);
        v4 = v14;
        if ( v14 )
        {
          GroupSecurityDescriptor = RtlCreateAcl(v14, v13, 2u);
          if ( GroupSecurityDescriptor < 0 )
            goto LABEL_14;
          GroupSecurityDescriptor = RtlGetAce(v12, 0, &Group);
          if ( GroupSecurityDescriptor < 0 )
            goto LABEL_14;
          GroupSecurityDescriptor = RtlAddAce(v4, 2u, 0, Group, v12->AclSize - 8);
          if ( GroupSecurityDescriptor < 0 )
            goto LABEL_14;
          GroupSecurityDescriptor = RtlpAddKnownAce(v4, 2u, 2, 983103, (unsigned __int8 *)SeLocalSystemSid, 0);
          if ( GroupSecurityDescriptor < 0 )
            goto LABEL_14;
          GroupSecurityDescriptor = RtlCreateSecurityDescriptor(AbsoluteSecurityDescriptor, 1u);
          if ( GroupSecurityDescriptor < 0 )
            goto LABEL_14;
          GroupSecurityDescriptor = RtlSetDaclSecurityDescriptor(AbsoluteSecurityDescriptor, 1u, v4, 0);
          if ( GroupSecurityDescriptor < 0 )
            goto LABEL_14;
          if ( RtlValidSecurityDescriptor(AbsoluteSecurityDescriptor) )
          {
            v15 = RtlLengthSecurityDescriptor(AbsoluteSecurityDescriptor);
            LODWORD(Dacl) = v15;
            if ( v15 >= 0x28 )
            {
              v16 = v15;
              v17 = ExAllocatePoolWithTag(PagedPool, v15, 0x63647050u);
              v5 = v17;
              if ( v17 )
              {
                memset(v17, 0, v16);
                GroupSecurityDescriptor = RtlAbsoluteToSelfRelativeSD(AbsoluteSecurityDescriptor, v5, (PULONG)&Dacl);
                if ( GroupSecurityDescriptor >= 0 )
                {
                  *a2 = v5;
                  v5 = 0LL;
                }
                goto LABEL_14;
              }
              goto LABEL_13;
            }
          }
          GroupSecurityDescriptor = -1073741595;
LABEL_14:
          if ( PoolWithTag && PoolWithTag != SecurityDescriptor )
            ExFreePoolWithTag(PoolWithTag, 0);
          if ( v5 )
            ExFreePoolWithTag(v5, 0);
          if ( v4 )
            ExFreePoolWithTag(v4, 0);
          return (unsigned int)GroupSecurityDescriptor;
        }
      }
LABEL_13:
      GroupSecurityDescriptor = -1073741670;
      goto LABEL_14;
    }
  }
  return (unsigned int)GroupSecurityDescriptor;
}
