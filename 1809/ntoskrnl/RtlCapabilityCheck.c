/*
 * XREFs of RtlCapabilityCheck @ 0x140894B20
 * Callers:
 *     PopCapabilityCheck @ 0x1402D6F1C (PopCapabilityCheck.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x140894F00 (RtlCapabilityCheckForSingleSessionSku.c)
 *     NtSetSystemTime @ 0x1408CE570 (NtSetSystemTime.c)
 *     ExpCapabilityCheck @ 0x1408D0EB4 (ExpCapabilityCheck.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400B9B60 (PsIsCurrentThreadInServerSilo.c)
 *     RtlSubAuthoritySid @ 0x1400DCB70 (RtlSubAuthoritySid.c)
 *     RtlCheckTokenMembership @ 0x1400DCB90 (RtlCheckTokenMembership.c)
 *     RtlCheckTokenMembershipEx @ 0x1400DCBB0 (RtlCheckTokenMembershipEx.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x1400DCEA0 (RtlDeriveCapabilitySidsFromName.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 *     RtlCheckTokenCapability @ 0x1402EDCA0 (RtlCheckTokenCapability.c)
 *     RtlInitializeSid @ 0x140656830 (RtlInitializeSid.c)
 *     RtlIsMultiSessionSku @ 0x1406AEC60 (RtlIsMultiSessionSku.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x140895478 (RtlpCapabilityCheckSystemCapability.c)
 *     RtlpLogCapabilityCheckLatency @ 0x14089B5D8 (RtlpLogCapabilityCheckLatency.c)
 */

NTSTATUS __cdecl RtlCapabilityCheck(HANDLE TokenHandle, PUNICODE_STRING CapabilityName, PBOOLEAN HasCapability)
{
  BOOLEAN v4; // di
  BOOLEAN v5; // si
  BOOLEAN v6; // r12
  int v9; // ebx
  NTSTATUS v10; // eax
  NTSTATUS v11; // eax
  NTSTATUS v12; // eax
  NTSTATUS v13; // eax
  NTSTATUS v14; // eax
  int v15; // r8d
  int v16; // r9d
  BOOLEAN v18; // [rsp+30h] [rbp-D0h] BYREF
  BOOLEAN IsMember; // [rsp+31h] [rbp-CFh] BYREF
  BOOLEAN v20; // [rsp+32h] [rbp-CEh] BYREF
  BOOLEAN v21; // [rsp+33h] [rbp-CDh] BYREF
  BOOLEAN HasCapabilitya; // [rsp+34h] [rbp-CCh] BYREF
  char v23; // [rsp+35h] [rbp-CBh]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+38h] [rbp-C8h] BYREF
  PULONG QuadPart; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-B0h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  _QWORD KeyValueInformation[2]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE Sid[16]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE CapabilityGroupSid[48]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE CapabilitySid[48]; // [rsp+F0h] [rbp-10h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  KeyHandle = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  KeyValueInformation[0] = 0LL;
  v4 = 0;
  KeyValueInformation[1] = 0LL;
  v5 = 0;
  v23 = 0;
  v6 = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  HasCapabilitya = 0;
  v18 = 0;
  IsMember = 0;
  v20 = 0;
  v21 = 0;
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
    v9 = RtlCheckTokenMembershipEx(TokenHandle, CapabilityGroupSid, 2u, &v21);
    if ( v9 < 0 )
      goto LABEL_27;
    if ( !v21 )
    {
      RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
      QuadPart = RtlSubAuthoritySid(Sid, 0);
      *QuadPart = 18;
      v12 = RtlCheckTokenMembership(TokenHandle, Sid, &IsMember);
      v5 = IsMember;
      v9 = v12;
      if ( v12 < 0 )
        goto LABEL_27;
      if ( !IsMember )
      {
        RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
        *QuadPart = 32;
        *RtlSubAuthoritySid(Sid, 1u) = 544;
        v13 = RtlCheckTokenMembership(TokenHandle, Sid, &v18);
        v4 = v18;
        v9 = v13;
        if ( v13 < 0 )
          goto LABEL_27;
        if ( !v18 )
        {
          RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
          *QuadPart = 4;
          v14 = RtlCheckTokenMembershipEx(TokenHandle, Sid, 2u, &v20);
          v6 = v20;
          v9 = v14;
          if ( v14 < 0 )
            goto LABEL_27;
          if ( !v20 )
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
  v23 = 1;
  RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
  QuadPart = RtlSubAuthoritySid(Sid, 0);
  *QuadPart = 18;
  v10 = RtlCheckTokenMembership(TokenHandle, Sid, &IsMember);
  v5 = IsMember;
  v9 = v10;
  if ( v10 < 0 )
    goto LABEL_27;
  if ( IsMember )
    goto LABEL_20;
  RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
  *QuadPart = 32;
  *RtlSubAuthoritySid(Sid, 1u) = 544;
  v11 = RtlCheckTokenMembership(TokenHandle, Sid, &v18);
  v4 = v18;
  v9 = v11;
  if ( v11 < 0 )
    goto LABEL_27;
  if ( v18 )
    goto LABEL_20;
LABEL_22:
  if ( *HasCapability && !v4 && !v5 )
    v9 = RtlpCapabilityCheckSystemCapability(TokenHandle, CapabilityName);
LABEL_27:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  QuadPart = (PULONG)KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !v5 && !PsIsCurrentThreadInServerSilo() )
  {
    LOBYTE(v16) = v6;
    LOBYTE(v15) = v4;
    RtlpLogCapabilityCheckLatency(
      (unsigned int)&PerformanceCounter,
      (unsigned int)&QuadPart,
      v15,
      v16,
      v23,
      *HasCapability);
  }
  return v9;
}
