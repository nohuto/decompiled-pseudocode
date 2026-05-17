/*
 * XREFs of RtlCheckTokenCapability @ 0x180046140
 * Callers:
 *     RtlCapabilityCheck @ 0x180048270 (RtlCapabilityCheck.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x180040C44 (RtlpAddKnownAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x180042860 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x180044270 (RtlCreateAcl.c)
 *     RtlSetGroupSecurityDescriptor @ 0x180044F70 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x180044FD0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x180045030 (RtlCreateSecurityDescriptor.c)
 *     RtlIsCapabilitySid @ 0x1800463D0 (RtlIsCapabilitySid.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     ZwAccessCheck @ 0x1800A02E0 (ZwAccessCheck.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     NtQueryInformationToken @ 0x1800A0700 (NtQueryInformationToken.c)
 *     NtOpenThreadTokenEx @ 0x1800A08C0 (NtOpenThreadTokenEx.c)
 *     NtOpenProcessTokenEx @ 0x1800A08E0 (NtOpenProcessTokenEx.c)
 *     NtDuplicateToken @ 0x1800A0B20 (NtDuplicateToken.c)
 */

__int64 __fastcall RtlCheckTokenCapability(void *a1, __int64 a2, _BYTE *a3)
{
  __int64 v6; // r8
  HANDLE v7; // rcx
  int v8; // ebx
  HANDLE v10; // [rsp+40h] [rbp-C0h] BYREF
  int v11; // [rsp+48h] [rbp-B8h] BYREF
  int v12; // [rsp+4Ch] [rbp-B4h] BYREF
  int v13; // [rsp+50h] [rbp-B0h] BYREF
  int v14; // [rsp+54h] [rbp-ACh] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  int v16; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+68h] [rbp-98h]
  __int64 v18; // [rsp+70h] [rbp-90h]
  int v19; // [rsp+78h] [rbp-88h]
  __int64 v20; // [rsp+80h] [rbp-80h]
  _DWORD *v21; // [rsp+88h] [rbp-78h]
  _BYTE v22[48]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v23[12]; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD v24[2]; // [rsp+120h] [rbp+20h] BYREF
  __int16 v25; // [rsp+128h] [rbp+28h]
  char v26[160]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v27[56]; // [rsp+1D0h] [rbp+D0h] BYREF

  v10 = 0LL;
  *a3 = 0;
  if ( !(unsigned __int8)RtlIsCapabilitySid(a2) )
  {
    v8 = -1073741811;
    goto LABEL_9;
  }
  if ( a1 )
  {
    v7 = a1;
    v10 = a1;
    goto LABEL_4;
  }
  LOBYTE(v6) = 1;
  v8 = NtOpenThreadTokenEx(-2LL, 8LL, v6);
  if ( v8 == -1073741700 )
  {
    v8 = NtOpenProcessTokenEx(-1LL, 10LL, 0LL, &Handle);
    if ( v8 < 0 )
      goto LABEL_16;
    v17 = 0LL;
    v19 = 0;
    v18 = 0LL;
    v20 = 0LL;
    v21 = v24;
    v16 = 48;
    v24[0] = 12;
    v24[1] = 2;
    v25 = 1;
    v8 = NtDuplicateToken(Handle, 8LL, &v16, 0LL, 2, &v10);
    NtClose(Handle);
  }
  if ( v8 >= 0 )
  {
    v7 = v10;
LABEL_4:
    v11 = 88;
    NtQueryInformationToken(v7, 1LL, v23, 88LL, &v11);
    RtlCreateSecurityDescriptor(v22, 1);
    RtlSetOwnerSecurityDescriptor((__int64)v22, v23[0], 0);
    RtlSetGroupSecurityDescriptor((__int64)v22, v23[0], 0);
    RtlCreateAcl((__int64)v26, 0xA0u, 2);
    RtlpAddKnownAce(v26, 2u, 0, 65537, v23[0], 0);
    RtlpAddKnownAce(v26, 2u, 0, 65537, a2, 0);
    RtlSetDaclSecurityDescriptor((__int64)v22, 1, (__int64)v26, 0);
    v12 = 56;
    v8 = ZwAccessCheck(v22, v10, 65537LL, &RtlpCheckTokenCapabilityGenericMapping, v27, &v12, &v14, &v13);
    if ( v8 >= 0 )
    {
      if ( !v13 && v14 == 65537 )
        *a3 = 1;
      v8 = 0;
    }
LABEL_9:
    if ( a1 )
      return (unsigned int)v8;
  }
LABEL_16:
  if ( v10 )
    NtClose(v10);
  return (unsigned int)v8;
}
