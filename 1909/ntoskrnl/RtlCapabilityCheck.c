/*
 * XREFs of RtlCapabilityCheck @ 0x1408D1390
 * Callers:
 *     PopCapabilityCheck @ 0x1402F15F4 (PopCapabilityCheck.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x1408D1770 (RtlCapabilityCheckForSingleSessionSku.c)
 *     NtSetSystemTime @ 0x14090A2D0 (NtSetSystemTime.c)
 *     ExpCapabilityCheck @ 0x14090CE14 (ExpCapabilityCheck.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14000A950 (RtlSubAuthoritySid.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     RtlCheckTokenMembership @ 0x1400F0060 (RtlCheckTokenMembership.c)
 *     RtlCheckTokenMembershipEx @ 0x1400F0080 (RtlCheckTokenMembershipEx.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x1400F0D30 (RtlDeriveCapabilitySidsFromName.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0E90 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401C0F30 (ZwQueryValueKey.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlCheckTokenCapability @ 0x14030BCE0 (RtlCheckTokenCapability.c)
 *     RtlIsMultiSessionSku @ 0x1405BDB70 (RtlIsMultiSessionSku.c)
 *     RtlInitializeSid @ 0x14069F600 (RtlInitializeSid.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x1408D1CB8 (RtlpCapabilityCheckSystemCapability.c)
 *     RtlpLogCapabilityCheckLatency @ 0x1408D87C8 (RtlpLogCapabilityCheckLatency.c)
 */

NTSTATUS __cdecl RtlCapabilityCheck(HANDLE TokenHandle, PUNICODE_STRING CapabilityName, PBOOLEAN HasCapability)
{
  BOOLEAN v6; // di
  BOOLEAN v7; // si
  BOOLEAN v8; // r12
  int v9; // ebx
  PULONG v10; // r13
  NTSTATUS v11; // eax
  NTSTATUS v12; // eax
  PULONG v13; // r13
  NTSTATUS v14; // eax
  NTSTATUS v15; // eax
  NTSTATUS v16; // eax
  int v17; // r8d
  int v18; // r9d
  BOOLEAN v20; // [rsp+30h] [rbp-D0h] BYREF
  BOOLEAN IsMember; // [rsp+31h] [rbp-CFh] BYREF
  BOOLEAN v22; // [rsp+32h] [rbp-CEh] BYREF
  BOOLEAN v23; // [rsp+33h] [rbp-CDh] BYREF
  BOOLEAN HasCapabilitya; // [rsp+34h] [rbp-CCh] BYREF
  char v25; // [rsp+35h] [rbp-CBh]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  PCUNICODE_STRING Source; // [rsp+48h] [rbp-B8h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-B0h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  _QWORD KeyValueInformation[2]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE Sid[16]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE CapabilityGroupSid[48]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE CapabilitySid[48]; // [rsp+F0h] [rbp-10h] BYREF

  Source = CapabilityName;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  KeyHandle = 0LL;
  KeyValueInformation[0] = 0LL;
  KeyValueInformation[1] = 0LL;
  v6 = 0;
  v25 = 0;
  v7 = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v8 = 0;
  HasCapabilitya = 0;
  v20 = 0;
  IsMember = 0;
  v22 = 0;
  v23 = 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( !CapabilityName || !HasCapability )
  {
    v9 = -1073741811;
    goto LABEL_27;
  }
  *HasCapability = 0;
  v9 = RtlDeriveCapabilitySidsFromName(CapabilityName, CapabilityGroupSid, CapabilitySid);
  if ( v9 < 0 )
    goto LABEL_27;
  if ( !RtlIsMultiSessionSku()
    || (RtlInitUnicodeString(
          &DestinationString,
          L"\\Registry\\Machine\\Software\\Microsoft\\SecurityManager\\AdminCapabilities"),
        ObjectAttributes.RootDirectory = 0LL,
        ObjectAttributes.ObjectName = &DestinationString,
        ObjectAttributes.Length = 48,
        ObjectAttributes.Attributes = 576,
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) < 0)
    || ZwQueryValueKey(KeyHandle, CapabilityName, KeyValuePartialInformation, KeyValueInformation, 0x10u, &ResultLength) < 0 )
  {
    v9 = RtlCheckTokenMembershipEx(TokenHandle, CapabilityGroupSid, 2u, &v23);
    if ( v9 < 0 )
      goto LABEL_27;
    if ( !v23 )
    {
      RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
      v13 = RtlSubAuthoritySid(Sid, 0);
      *v13 = 18;
      v14 = RtlCheckTokenMembership(TokenHandle, Sid, &IsMember);
      v7 = IsMember;
      v9 = v14;
      if ( v14 < 0 )
        goto LABEL_27;
      if ( !IsMember )
      {
        RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
        *v13 = 32;
        *RtlSubAuthoritySid(Sid, 1u) = 544;
        v15 = RtlCheckTokenMembership(TokenHandle, Sid, &v20);
        v6 = v20;
        v9 = v15;
        if ( v15 < 0 )
          goto LABEL_27;
        if ( !v20 )
        {
          RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
          *v13 = 4;
          v16 = RtlCheckTokenMembershipEx(TokenHandle, Sid, 2u, &v22);
          v8 = v22;
          v9 = v16;
          if ( v16 < 0 )
            goto LABEL_27;
          if ( !v22 )
            goto LABEL_22;
        }
      }
    }
LABEL_20:
    v9 = RtlCheckTokenCapability(TokenHandle, CapabilitySid, &HasCapabilitya);
    if ( v9 < 0 )
      goto LABEL_27;
    *HasCapability = HasCapabilitya;
    goto LABEL_22;
  }
  v25 = 1;
  RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
  v10 = RtlSubAuthoritySid(Sid, 0);
  *v10 = 18;
  v11 = RtlCheckTokenMembership(TokenHandle, Sid, &IsMember);
  v7 = IsMember;
  v9 = v11;
  if ( v11 < 0 )
    goto LABEL_27;
  if ( IsMember )
    goto LABEL_20;
  RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
  *v10 = 32;
  *RtlSubAuthoritySid(Sid, 1u) = 544;
  v12 = RtlCheckTokenMembership(TokenHandle, Sid, &v20);
  v6 = v20;
  v9 = v12;
  if ( v12 < 0 )
    goto LABEL_27;
  if ( v20 )
    goto LABEL_20;
LABEL_22:
  if ( *HasCapability && !v6 && !v7 )
    v9 = RtlpCapabilityCheckSystemCapability(TokenHandle, Source);
LABEL_27:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  Source = (PCUNICODE_STRING)KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !v7 )
  {
    LOBYTE(v18) = v8;
    LOBYTE(v17) = v6;
    RtlpLogCapabilityCheckLatency(
      (unsigned int)&PerformanceCounter,
      (unsigned int)&Source,
      v17,
      v18,
      v25,
      *HasCapability);
  }
  return v9;
}
