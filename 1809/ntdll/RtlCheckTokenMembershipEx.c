/*
 * XREFs of RtlCheckTokenMembershipEx @ 0x180041770
 * Callers:
 *     RtlCapabilityCheck @ 0x180048270 (RtlCapabilityCheck.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x18004B61C (RtlpCapabilityCheckSystemCapability.c)
 *     RtlCheckTokenMembership @ 0x1800E7670 (RtlCheckTokenMembership.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x180040C44 (RtlpAddKnownAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x180042860 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x180044270 (RtlCreateAcl.c)
 *     RtlSetGroupSecurityDescriptor @ 0x180044F70 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x180044FD0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x180045030 (RtlCreateSecurityDescriptor.c)
 *     RtlInitializeSidEx @ 0x180048600 (RtlInitializeSidEx.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     ZwAccessCheck @ 0x1800A02E0 (ZwAccessCheck.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     NtOpenThreadTokenEx @ 0x1800A08C0 (NtOpenThreadTokenEx.c)
 *     NtOpenProcessTokenEx @ 0x1800A08E0 (NtOpenProcessTokenEx.c)
 *     NtDuplicateToken @ 0x1800A0B20 (NtDuplicateToken.c)
 */

__int64 __fastcall RtlCheckTokenMembershipEx(void *a1, __int64 a2, int a3, _BYTE *a4)
{
  char v5; // si
  __int64 v8; // rdx
  int v9; // ebx
  HANDLE v11; // [rsp+40h] [rbp-C0h] BYREF
  int v12; // [rsp+48h] [rbp-B8h] BYREF
  int v13; // [rsp+4Ch] [rbp-B4h] BYREF
  int v14; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  int v16; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+68h] [rbp-98h]
  __int64 v18; // [rsp+70h] [rbp-90h]
  int v19; // [rsp+78h] [rbp-88h]
  __int64 v20; // [rsp+80h] [rbp-80h]
  _DWORD *v21; // [rsp+88h] [rbp-78h]
  _BYTE v22[40]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v23[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int16 v24; // [rsp+C0h] [rbp-40h]
  _BYTE v25[80]; // [rsp+D0h] [rbp-30h] BYREF
  char v26[240]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v27[56]; // [rsp+210h] [rbp+110h] BYREF

  v11 = 0LL;
  *a4 = 0;
  v5 = a3;
  if ( (a3 & 0xFFFFFFFC) == 0 )
  {
    if ( a1 )
    {
      v11 = a1;
    }
    else
    {
      v9 = NtOpenThreadTokenEx(-2LL, 8LL, 0LL);
      if ( v9 == -1073741700 )
      {
        v9 = NtOpenProcessTokenEx(-1LL, 10LL, 0LL, &Handle);
        if ( v9 < 0 )
          goto LABEL_19;
        v17 = 0LL;
        v19 = 0;
        v18 = 0LL;
        v20 = 0LL;
        v21 = v23;
        v16 = 48;
        v23[0] = 12;
        v23[1] = 2;
        v24 = 1;
        v9 = NtDuplicateToken(Handle, 12LL, &v16, 0LL, 2, &v11);
        NtClose(Handle);
      }
      if ( v9 < 0 )
      {
LABEL_19:
        if ( v11 )
          NtClose(v11);
        return (unsigned int)v9;
      }
    }
    RtlCreateSecurityDescriptor(v22, 1LL);
    RtlSetOwnerSecurityDescriptor(v22, a2, 0LL);
    RtlSetGroupSecurityDescriptor(v22, a2, 0LL);
    RtlCreateAcl(v26, 236LL, 2LL);
    RtlpAddKnownAce(v26, 2u, 0, 1, a2, 0);
    if ( (v5 & 3) != 0 )
    {
      RtlInitializeSidEx(v25, &RtlpAppPackageAuthority, 2LL, 2LL, 1);
      RtlpAddKnownAce(v26, 2u, 0, 1, (__int64)v25, 0);
    }
    if ( (v5 & 2) != 0 )
    {
      RtlInitializeSidEx(v25, &RtlpAppPackageAuthority, 2LL, 2LL, 2);
      RtlpAddKnownAce(v26, 2u, 0, 1, (__int64)v25, 0);
    }
    LOBYTE(v8) = 1;
    RtlSetDaclSecurityDescriptor(v22, v8, v26, 0LL);
    v12 = 56;
    v9 = ZwAccessCheck(v22, v11, 1LL, &RtlpCheckTokenMembershipGenericMapping, v27, &v12, &v14, &v13);
    if ( v9 >= 0 )
    {
      v9 = 0;
      if ( v13 )
      {
        if ( v13 == -1073741790 )
          goto LABEL_11;
      }
      else if ( v14 == 1 )
      {
        *a4 = 1;
        goto LABEL_11;
      }
      v9 = v13;
    }
LABEL_11:
    if ( a1 )
      return (unsigned int)v9;
    goto LABEL_19;
  }
  return 3221225485LL;
}
