/*
 * XREFs of RtlCheckTokenMembershipEx @ 0x180013340
 * Callers:
 *     RtlpCapabilityCheckSystemCapability @ 0x180009910 (RtlpCapabilityCheckSystemCapability.c)
 *     RtlCapabilityCheck @ 0x18000B770 (RtlCapabilityCheck.c)
 *     RtlCheckTokenMembership @ 0x1800E4A90 (RtlCheckTokenMembership.c)
 * Callees:
 *     RtlInitializeSidEx @ 0x18000BA60 (RtlInitializeSidEx.c)
 *     RtlCreateSecurityDescriptor @ 0x18000FFD0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x180010010 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x180010070 (RtlSetGroupSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x180011A50 (RtlCreateAcl.c)
 *     RtlSetDaclSecurityDescriptor @ 0x180012750 (RtlSetDaclSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x180014974 (RtlpAddKnownAce.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     ZwAccessCheck @ 0x18009CE90 (ZwAccessCheck.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     NtOpenThreadTokenEx @ 0x18009D470 (NtOpenThreadTokenEx.c)
 *     NtOpenProcessTokenEx @ 0x18009D490 (NtOpenProcessTokenEx.c)
 *     NtDuplicateToken @ 0x18009D6D0 (NtDuplicateToken.c)
 */

__int64 __fastcall RtlCheckTokenMembershipEx(void *a1, __int64 a2, int a3, _BYTE *a4)
{
  char v5; // si
  int v8; // ebx
  HANDLE v10; // [rsp+40h] [rbp-C0h]
  int v11; // [rsp+48h] [rbp-B8h] BYREF
  int v12; // [rsp+4Ch] [rbp-B4h] BYREF
  int v13; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  int v15; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+68h] [rbp-98h]
  __int64 v17; // [rsp+70h] [rbp-90h]
  int v18; // [rsp+78h] [rbp-88h]
  __int64 v19; // [rsp+80h] [rbp-80h]
  _DWORD *v20; // [rsp+88h] [rbp-78h]
  _BYTE v21[40]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v22[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int16 v23; // [rsp+C0h] [rbp-40h]
  _BYTE v24[80]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v25[240]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v26[56]; // [rsp+210h] [rbp+110h] BYREF

  v10 = 0LL;
  *a4 = 0;
  v5 = a3;
  if ( (a3 & 0xFFFFFFFC) == 0 )
  {
    if ( a1 )
    {
      v10 = a1;
    }
    else
    {
      v8 = NtOpenThreadTokenEx(-2LL, 8LL, 0LL);
      if ( v8 == -1073741700 )
      {
        v8 = NtOpenProcessTokenEx(-1LL, 10LL, 0LL, &Handle);
        if ( v8 < 0 )
          goto LABEL_19;
        v16 = 0LL;
        v18 = 0;
        v17 = 0LL;
        v19 = 0LL;
        v20 = v22;
        v15 = 48;
        v22[0] = 12;
        v22[1] = 2;
        v23 = 1;
        v8 = NtDuplicateToken(Handle, 12LL, &v15);
        NtClose(Handle);
      }
      if ( v8 < 0 )
      {
LABEL_19:
        if ( v10 )
          NtClose(v10);
        return (unsigned int)v8;
      }
    }
    RtlCreateSecurityDescriptor(v21, 1);
    RtlSetOwnerSecurityDescriptor((__int64)v21, a2, 0);
    RtlSetGroupSecurityDescriptor((__int64)v21, a2, 0);
    RtlCreateAcl((__int64)v25, 0xECu, 2);
    RtlpAddKnownAce((unsigned int)v25, 2, 0, 1, a2, 0);
    if ( (v5 & 3) != 0 )
    {
      RtlInitializeSidEx((__int64)v24, (__int64)&RtlpAppPackageAuthority, 2LL, 2LL);
      RtlpAddKnownAce((unsigned int)v25, 2, 0, 1, (__int64)v24, 0);
    }
    if ( (v5 & 2) != 0 )
    {
      RtlInitializeSidEx((__int64)v24, (__int64)&RtlpAppPackageAuthority, 2LL, 2LL);
      RtlpAddKnownAce((unsigned int)v25, 2, 0, 1, (__int64)v24, 0);
    }
    RtlSetDaclSecurityDescriptor((__int64)v21, 1, (__int64)v25, 0);
    v11 = 56;
    v8 = ZwAccessCheck(v21, v10, 1LL, &RtlpCheckTokenMembershipGenericMapping, v26, &v11, &v13, &v12);
    if ( v8 >= 0 )
    {
      v8 = 0;
      if ( v12 )
      {
        if ( v12 == -1073741790 )
          goto LABEL_11;
      }
      else if ( v13 == 1 )
      {
        *a4 = 1;
        goto LABEL_11;
      }
      v8 = v12;
    }
LABEL_11:
    if ( a1 )
      return (unsigned int)v8;
    goto LABEL_19;
  }
  return 3221225485LL;
}
