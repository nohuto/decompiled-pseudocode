/*
 * XREFs of RtlCapabilityCheck @ 0x18000B770
 * Callers:
 *     RtlCapabilityCheckForSingleSessionSku @ 0x180086A70 (RtlCapabilityCheckForSingleSessionSku.c)
 * Callees:
 *     RtlpCapabilityCheckSystemCapability @ 0x180009910 (RtlpCapabilityCheckSystemCapability.c)
 *     RtlpLogCapabilityCheckLatency @ 0x180009B8C (RtlpLogCapabilityCheckLatency.c)
 *     RtlInitializeSid @ 0x18000BAC0 (RtlInitializeSid.c)
 *     RtlQueryPerformanceCounter @ 0x18000BBB0 (RtlQueryPerformanceCounter.c)
 *     RtlIsMultiSessionSku @ 0x18000BCD0 (RtlIsMultiSessionSku.c)
 *     RtlCheckTokenCapability @ 0x18000E960 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x180013340 (RtlCheckTokenMembershipEx.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x180021450 (RtlDeriveCapabilitySidsFromName.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     NtOpenKey @ 0x18009D0D0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18009D170 (NtQueryValueKey.c)
 */

NTSTATUS __cdecl RtlCapabilityCheck(HANDLE TokenHandle, PUNICODE_STRING CapabilityName, PBOOLEAN HasCapability)
{
  BOOLEAN v4; // si
  BOOLEAN v5; // di
  BOOLEAN v6; // r12
  NTSTATUS v9; // ebx
  NTSTATUS v10; // eax
  NTSTATUS v11; // eax
  NTSTATUS v12; // eax
  NTSTATUS v14; // eax
  NTSTATUS v15; // eax
  BOOLEAN v16; // [rsp+30h] [rbp-D0h] BYREF
  BOOLEAN v17; // [rsp+31h] [rbp-CFh] BYREF
  BOOLEAN v18; // [rsp+32h] [rbp-CEh] BYREF
  BOOLEAN IsMember; // [rsp+33h] [rbp-CDh] BYREF
  BOOLEAN HasCapabilitya; // [rsp+34h] [rbp-CCh] BYREF
  char v21; // [rsp+35h] [rbp-CBh]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  LARGE_INTEGER v24; // [rsp+48h] [rbp-B8h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+50h] [rbp-B0h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp-A8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  _QWORD KeyValueInformation[2]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE Sid[8]; // [rsp+B0h] [rbp-50h] BYREF
  int v31; // [rsp+B8h] [rbp-48h]
  int v32; // [rsp+BCh] [rbp-44h]
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
  v21 = 0;
  v6 = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  HasCapabilitya = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  IsMember = 0;
  PerformanceCounter.QuadPart = 0LL;
  v24.QuadPart = 0LL;
  RtlQueryPerformanceCounter(&PerformanceCounter);
  if ( !CapabilityName || !HasCapability )
  {
    v9 = -1073741811;
    goto LABEL_21;
  }
  *HasCapability = 0;
  v9 = RtlDeriveCapabilitySidsFromName(CapabilityName, CapabilityGroupSid, CapabilitySid);
  if ( v9 < 0 )
    goto LABEL_21;
  if ( RtlIsMultiSessionSku() )
  {
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\Software\\Microsoft\\SecurityManager\\AdminCapabilities");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( NtOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) >= 0
      && NtQueryValueKey(
           KeyHandle,
           CapabilityName,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x10u,
           &ResultLength) >= 0 )
    {
      v21 = 1;
      RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
      v31 = 18;
      v14 = RtlCheckTokenMembershipEx(TokenHandle, Sid, 0, &v17);
      v5 = v17;
      v9 = v14;
      if ( v14 < 0 )
        goto LABEL_21;
      if ( !v17 )
      {
        RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
        v31 = 32;
        v32 = 544;
        v15 = RtlCheckTokenMembershipEx(TokenHandle, Sid, 0, &v16);
        v4 = v16;
        v9 = v15;
        if ( v15 < 0 )
          goto LABEL_21;
        if ( !v16 )
          goto LABEL_17;
      }
      goto LABEL_15;
    }
  }
  v9 = RtlCheckTokenMembershipEx(TokenHandle, CapabilityGroupSid, 2u, &IsMember);
  if ( v9 < 0 )
    goto LABEL_21;
  if ( IsMember )
    goto LABEL_15;
  RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
  v31 = 18;
  v10 = RtlCheckTokenMembershipEx(TokenHandle, Sid, 0, &v17);
  v5 = v17;
  v9 = v10;
  if ( v10 < 0 )
    goto LABEL_21;
  if ( v17 )
    goto LABEL_15;
  RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
  v31 = 32;
  v32 = 544;
  v11 = RtlCheckTokenMembershipEx(TokenHandle, Sid, 0, &v16);
  v4 = v16;
  v9 = v11;
  if ( v11 < 0 )
    goto LABEL_21;
  if ( v16 )
    goto LABEL_15;
  RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
  v31 = 4;
  v12 = RtlCheckTokenMembershipEx(TokenHandle, Sid, 2u, &v18);
  v6 = v18;
  v9 = v12;
  if ( v12 < 0 )
    goto LABEL_21;
  if ( v18 )
  {
LABEL_15:
    v9 = RtlCheckTokenCapability(TokenHandle, CapabilitySid, &HasCapabilitya);
    if ( v9 < 0 )
      goto LABEL_21;
    *HasCapability = HasCapabilitya;
  }
LABEL_17:
  if ( *HasCapability && !v4 && !v5 )
    v9 = RtlpCapabilityCheckSystemCapability(TokenHandle, CapabilityName, HasCapability);
LABEL_21:
  if ( KeyHandle )
    NtClose(KeyHandle);
  RtlQueryPerformanceCounter(&v24);
  if ( !v5 )
    RtlpLogCapabilityCheckLatency(&PerformanceCounter, &v24, v4, v6, v21, *HasCapability);
  return v9;
}
