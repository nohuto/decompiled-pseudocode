/*
 * XREFs of RtlCheckTokenCapability @ 0x18000E960
 * Callers:
 *     RtlCapabilityCheck @ 0x18000B770 (RtlCapabilityCheck.c)
 * Callees:
 *     RtlIsCapabilitySid @ 0x18000E910 (RtlIsCapabilitySid.c)
 *     RtlCreateSecurityDescriptor @ 0x18000FFD0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x180010010 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x180010070 (RtlSetGroupSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x180011A50 (RtlCreateAcl.c)
 *     RtlSetDaclSecurityDescriptor @ 0x180012750 (RtlSetDaclSecurityDescriptor.c)
 *     sub_180014974 @ 0x180014974 (sub_180014974.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwAccessCheck @ 0x18009C6E0 (ZwAccessCheck.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwQueryInformationToken @ 0x18009CB00 (ZwQueryInformationToken.c)
 *     ZwOpenThreadTokenEx @ 0x18009CCC0 (ZwOpenThreadTokenEx.c)
 *     ZwOpenProcessTokenEx @ 0x18009CCE0 (ZwOpenProcessTokenEx.c)
 *     ZwDuplicateToken @ 0x18009CF20 (ZwDuplicateToken.c)
 */

__int64 __fastcall RtlCheckTokenCapability(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // ebx
  __int64 v11; // [rsp+40h] [rbp-C0h]
  int v12; // [rsp+48h] [rbp-B8h] BYREF
  int v13; // [rsp+4Ch] [rbp-B4h] BYREF
  int v14; // [rsp+50h] [rbp-B0h] BYREF
  int v15; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v16; // [rsp+58h] [rbp-A8h] BYREF
  int v17; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+68h] [rbp-98h]
  __int64 v19; // [rsp+70h] [rbp-90h]
  int v20; // [rsp+78h] [rbp-88h]
  __int64 v21; // [rsp+80h] [rbp-80h]
  _DWORD *v22; // [rsp+88h] [rbp-78h]
  _BYTE v23[48]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v24[12]; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD v25[2]; // [rsp+120h] [rbp+20h] BYREF
  __int16 v26; // [rsp+128h] [rbp+28h]
  _BYTE v27[160]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v28[56]; // [rsp+1D0h] [rbp+D0h] BYREF

  v11 = 0LL;
  *a3 = 0;
  if ( !RtlIsCapabilitySid(a2) )
  {
    v9 = -1073741811;
    goto LABEL_9;
  }
  if ( a1 )
  {
    v7 = a1;
    v11 = a1;
    goto LABEL_4;
  }
  LOBYTE(v6) = 1;
  v9 = ZwOpenThreadTokenEx(-2LL, 8LL, v6);
  if ( v9 == -1073741700 )
  {
    v9 = ZwOpenProcessTokenEx(-1LL, 10LL, 0LL, &v16);
    if ( v9 < 0 )
      goto LABEL_16;
    v18 = 0LL;
    v20 = 0;
    v19 = 0LL;
    v21 = 0LL;
    v22 = v25;
    v17 = 48;
    v25[0] = 12;
    v25[1] = 2;
    v26 = 1;
    v9 = ZwDuplicateToken(v16, 8LL, &v17);
    ZwClose(v16);
  }
  if ( v9 >= 0 )
  {
    v7 = 0LL;
LABEL_4:
    v12 = 88;
    ZwQueryInformationToken(v7, 1LL, v24, 88LL, &v12);
    RtlCreateSecurityDescriptor(v23, 1LL);
    RtlSetOwnerSecurityDescriptor(v23, v24[0], 0LL);
    RtlSetGroupSecurityDescriptor(v23, v24[0], 0LL);
    RtlCreateAcl(v27, 160LL, 2LL);
    sub_180014974((unsigned int)v27, 2, 0, 65537, v24[0], 0);
    sub_180014974((unsigned int)v27, 2, 0, 65537, a2, 0);
    LOBYTE(v8) = 1;
    RtlSetDaclSecurityDescriptor(v23, v8, v27, 0LL);
    v13 = 56;
    v9 = ZwAccessCheck(v23, v11, 65537LL, &unk_18011CB50, v28, &v13, &v15, &v14);
    if ( v9 >= 0 )
    {
      if ( !v14 && v15 == 65537 )
        *a3 = 1;
      v9 = 0;
    }
LABEL_9:
    if ( a1 )
      return (unsigned int)v9;
  }
LABEL_16:
  if ( v11 )
    ZwClose(v11);
  return (unsigned int)v9;
}
