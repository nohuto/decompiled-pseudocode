/*
 * XREFs of RtlCapabilityCheck @ 0x18000B770
 * Callers:
 *     RtlCapabilityCheckForSingleSessionSku @ 0x1800863D0 (RtlCapabilityCheckForSingleSessionSku.c)
 * Callees:
 *     sub_180009910 @ 0x180009910 (sub_180009910.c)
 *     sub_180009B8C @ 0x180009B8C (sub_180009B8C.c)
 *     RtlInitializeSid @ 0x18000BAC0 (RtlInitializeSid.c)
 *     RtlQueryPerformanceCounter @ 0x18000BBB0 (RtlQueryPerformanceCounter.c)
 *     RtlIsMultiSessionSku @ 0x18000BCD0 (RtlIsMultiSessionSku.c)
 *     RtlCheckTokenCapability @ 0x18000E960 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x180013340 (RtlCheckTokenMembershipEx.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x180021450 (RtlDeriveCapabilitySidsFromName.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x18009C9C0 (ZwQueryValueKey.c)
 */

__int64 __fastcall RtlCapabilityCheck(__int64 a1, __int64 a2, char *a3)
{
  char v4; // si
  char v5; // di
  char v6; // r12
  int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // r8
  int v16; // eax
  int v18; // eax
  __int64 v19; // r8
  int v20; // eax
  char v21; // [rsp+30h] [rbp-D0h] BYREF
  char v22; // [rsp+31h] [rbp-CFh] BYREF
  char v23; // [rsp+32h] [rbp-CEh] BYREF
  char v24; // [rsp+33h] [rbp-CDh] BYREF
  char v25; // [rsp+34h] [rbp-CCh] BYREF
  char v26; // [rsp+35h] [rbp-CBh]
  int v27; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v28; // [rsp+3Ch] [rbp-C4h]
  __int64 v29; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v30; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+50h] [rbp-B0h] BYREF
  char v32[8]; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  int v34; // [rsp+70h] [rbp-90h] BYREF
  __int64 v35; // [rsp+78h] [rbp-88h]
  UNICODE_STRING *p_DestinationString; // [rsp+80h] [rbp-80h]
  int v37; // [rsp+88h] [rbp-78h]
  __int128 v38; // [rsp+90h] [rbp-70h]
  _QWORD v39[2]; // [rsp+A0h] [rbp-60h] BYREF
  char v40[8]; // [rsp+B0h] [rbp-50h] BYREF
  int v41; // [rsp+B8h] [rbp-48h]
  int v42; // [rsp+BCh] [rbp-44h]
  _BYTE v43[48]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v44[48]; // [rsp+F0h] [rbp-10h] BYREF

  v28 = 1280;
  v29 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v39[0] = 0LL;
  v4 = 0;
  v39[1] = 0LL;
  v5 = 0;
  v26 = 0;
  v6 = 0;
  v27 = 0;
  v25 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v31 = 0LL;
  v30 = 0LL;
  RtlQueryPerformanceCounter(&v31);
  if ( !a2 || !a3 )
  {
    v9 = -1073741811;
    goto LABEL_21;
  }
  *a3 = 0;
  v9 = RtlDeriveCapabilitySidsFromName(a2, v43, v44);
  if ( v9 < 0 )
    goto LABEL_21;
  if ( (unsigned __int8)RtlIsMultiSessionSku() )
  {
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\Software\\Microsoft\\SecurityManager\\AdminCapabilities");
    v35 = 0LL;
    p_DestinationString = &DestinationString;
    v34 = 48;
    v37 = 64;
    v38 = 0LL;
    if ( (int)ZwOpenKey(&v29, 0x80000000LL, &v34) >= 0 && (int)ZwQueryValueKey(v29, a2, 2LL, v39, 16, v32) >= 0 )
    {
      LOBYTE(v10) = 1;
      v26 = 1;
      RtlInitializeSid(v40, &v27, v10);
      v41 = 18;
      v18 = RtlCheckTokenMembershipEx(a1, v40, 0LL, &v22);
      v5 = v22;
      v9 = v18;
      if ( v18 < 0 )
        goto LABEL_21;
      if ( !v22 )
      {
        LOBYTE(v19) = 2;
        RtlInitializeSid(v40, &v27, v19);
        v41 = 32;
        v42 = 544;
        v20 = RtlCheckTokenMembershipEx(a1, v40, 0LL, &v21);
        v4 = v21;
        v9 = v20;
        if ( v20 < 0 )
          goto LABEL_21;
        if ( !v21 )
          goto LABEL_17;
      }
      goto LABEL_15;
    }
  }
  v9 = RtlCheckTokenMembershipEx(a1, v43, 2LL, &v24);
  if ( v9 < 0 )
    goto LABEL_21;
  if ( v24 )
    goto LABEL_15;
  LOBYTE(v11) = 1;
  RtlInitializeSid(v40, &v27, v11);
  v41 = 18;
  v12 = RtlCheckTokenMembershipEx(a1, v40, 0LL, &v22);
  v5 = v22;
  v9 = v12;
  if ( v12 < 0 )
    goto LABEL_21;
  if ( v22 )
    goto LABEL_15;
  LOBYTE(v13) = 2;
  RtlInitializeSid(v40, &v27, v13);
  v41 = 32;
  v42 = 544;
  v14 = RtlCheckTokenMembershipEx(a1, v40, 0LL, &v21);
  v4 = v21;
  v9 = v14;
  if ( v14 < 0 )
    goto LABEL_21;
  if ( v21 )
    goto LABEL_15;
  LOBYTE(v15) = 1;
  RtlInitializeSid(v40, &v27, v15);
  v41 = 4;
  v16 = RtlCheckTokenMembershipEx(a1, v40, 2LL, &v23);
  v6 = v23;
  v9 = v16;
  if ( v16 < 0 )
    goto LABEL_21;
  if ( v23 )
  {
LABEL_15:
    v9 = RtlCheckTokenCapability(a1, v44, &v25);
    if ( v9 < 0 )
      goto LABEL_21;
    *a3 = v25;
  }
LABEL_17:
  if ( *a3 && !v4 && !v5 )
    v9 = sub_180009910(a1, a2, a3);
LABEL_21:
  if ( v29 )
    ZwClose(v29);
  RtlQueryPerformanceCounter(&v30);
  if ( !v5 )
    sub_180009B8C(&v31, &v30, v4, v6, v26, *a3);
  return (unsigned int)v9;
}
