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

__int64 __fastcall RtlCapabilityCheck(HANDLE ExistingTokenHandle, UNICODE_STRING *SourceString, char *a3)
{
  char v6; // r12
  int v7; // ebx
  PULONG v8; // r13
  PULONG v9; // r13
  int v10; // eax
  int v11; // r9d
  int v12; // r8d
  char v14; // [rsp+32h] [rbp-CEh] BYREF
  char v15; // [rsp+33h] [rbp-CDh] BYREF
  char v16; // [rsp+34h] [rbp-CCh] BYREF
  char v17; // [rsp+35h] [rbp-CBh]
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  PCUNICODE_STRING Source; // [rsp+48h] [rbp-B8h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-B0h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  _QWORD KeyValueInformation[2]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE Sid[16]; // [rsp+B0h] [rbp-50h] BYREF
  char Owner[48]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v28[48]; // [rsp+F0h] [rbp-10h] BYREF

  Source = SourceString;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  KeyHandle = 0LL;
  KeyValueInformation[0] = 0LL;
  KeyValueInformation[1] = 0LL;
  v17 = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v6 = 0;
  v16 = 0;
  v14 = 0;
  v15 = 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( !SourceString || !a3 )
  {
    v7 = -1073741811;
    goto LABEL_21;
  }
  *a3 = 0;
  v7 = RtlDeriveCapabilitySidsFromName(SourceString, Owner, v28);
  if ( v7 < 0 )
    goto LABEL_21;
  if ( RtlIsMultiSessionSku()
    && (RtlInitUnicodeString(
          &DestinationString,
          L"\\Registry\\Machine\\Software\\Microsoft\\SecurityManager\\AdminCapabilities"),
        ObjectAttributes.RootDirectory = 0LL,
        ObjectAttributes.ObjectName = &DestinationString,
        ObjectAttributes.Length = 48,
        ObjectAttributes.Attributes = 576,
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) >= 0)
    && ZwQueryValueKey(KeyHandle, SourceString, KeyValuePartialInformation, KeyValueInformation, 0x10u, &ResultLength) >= 0 )
  {
    v17 = 1;
    RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
    v8 = RtlSubAuthoritySid(Sid, 0);
    *v8 = 18;
    v7 = RtlCheckTokenMembership(ExistingTokenHandle, Sid);
    if ( v7 < 0 )
      goto LABEL_21;
    RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
    *v8 = 32;
    *RtlSubAuthoritySid(Sid, 1u) = 544;
    v7 = RtlCheckTokenMembership(ExistingTokenHandle, Sid);
    if ( v7 < 0 )
      goto LABEL_21;
  }
  else
  {
    v7 = RtlCheckTokenMembershipEx(ExistingTokenHandle, Owner, 2, &v15);
    if ( v7 < 0 )
      goto LABEL_21;
    if ( v15 )
      goto LABEL_16;
    RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
    v9 = RtlSubAuthoritySid(Sid, 0);
    *v9 = 18;
    v7 = RtlCheckTokenMembership(ExistingTokenHandle, Sid);
    if ( v7 < 0 )
      goto LABEL_21;
    RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
    *v9 = 32;
    *RtlSubAuthoritySid(Sid, 1u) = 544;
    v7 = RtlCheckTokenMembership(ExistingTokenHandle, Sid);
    if ( v7 < 0 )
      goto LABEL_21;
    RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
    *v9 = 4;
    v10 = RtlCheckTokenMembershipEx(ExistingTokenHandle, Sid, 2, &v14);
    v6 = v14;
    v7 = v10;
    if ( v10 < 0 )
      goto LABEL_21;
    if ( v14 )
    {
LABEL_16:
      v7 = RtlCheckTokenCapability(ExistingTokenHandle, v28, &v16);
      if ( v7 < 0 )
        goto LABEL_21;
      *a3 = v16;
    }
  }
  if ( *a3 )
    v7 = RtlpCapabilityCheckSystemCapability(ExistingTokenHandle, Source);
LABEL_21:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  Source = (PCUNICODE_STRING)KeQueryPerformanceCounter(0LL).QuadPart;
  LOBYTE(v11) = v6;
  LOBYTE(v12) = 0;
  RtlpLogCapabilityCheckLatency((unsigned int)&PerformanceCounter, (unsigned int)&Source, v12, v11, v17, *a3);
  return (unsigned int)v7;
}
