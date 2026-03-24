/*
 * XREFs of RtlCapabilityCheck @ 0x1408938C0
 * Callers:
 *     PopCapabilityCheck @ 0x1402D6D2C (PopCapabilityCheck.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x140893CA0 (RtlCapabilityCheckForSingleSessionSku.c)
 *     NtSetSystemTime @ 0x1408CD2B0 (NtSetSystemTime.c)
 *     ExpCapabilityCheck @ 0x1408CFBF4 (ExpCapabilityCheck.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B9A90 (RtlInitUnicodeString.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400B9C20 (PsIsCurrentThreadInServerSilo.c)
 *     RtlSubAuthoritySid @ 0x1400DCAF0 (RtlSubAuthoritySid.c)
 *     RtlCheckTokenMembership @ 0x1400DCB10 (RtlCheckTokenMembership.c)
 *     RtlCheckTokenMembershipEx @ 0x1400DCB30 (RtlCheckTokenMembershipEx.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x1400DCE20 (RtlDeriveCapabilitySidsFromName.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B8370 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B83D0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401B8470 (ZwQueryValueKey.c)
 *     RtlCheckTokenCapability @ 0x1402EDAB0 (RtlCheckTokenCapability.c)
 *     RtlInitializeSid @ 0x140655670 (RtlInitializeSid.c)
 *     RtlIsMultiSessionSku @ 0x1406AD9C0 (RtlIsMultiSessionSku.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x140894218 (RtlpCapabilityCheckSystemCapability.c)
 *     RtlpLogCapabilityCheckLatency @ 0x14089A378 (RtlpLogCapabilityCheckLatency.c)
 */

__int64 __fastcall RtlCapabilityCheck(HANDLE ExistingTokenHandle, UNICODE_STRING *SourceString, char *a3)
{
  char v4; // r12
  int v7; // ebx
  int v8; // eax
  int v9; // r8d
  int v10; // r9d
  char v12; // [rsp+32h] [rbp-CEh] BYREF
  char v13; // [rsp+33h] [rbp-CDh] BYREF
  char v14; // [rsp+34h] [rbp-CCh] BYREF
  char v15; // [rsp+35h] [rbp-CBh]
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+38h] [rbp-C8h] BYREF
  PULONG QuadPart; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-B0h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  _QWORD KeyValueInformation[2]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE Sid[16]; // [rsp+B0h] [rbp-50h] BYREF
  char Owner[48]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v26[48]; // [rsp+F0h] [rbp-10h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  KeyHandle = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  KeyValueInformation[0] = 0LL;
  KeyValueInformation[1] = 0LL;
  v15 = 0;
  v4 = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v14 = 0;
  v12 = 0;
  v13 = 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( !SourceString || !a3 )
  {
    v7 = -1073741811;
    goto LABEL_21;
  }
  *a3 = 0;
  v7 = RtlDeriveCapabilitySidsFromName(SourceString, Owner, v26);
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
    v15 = 1;
    RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
    QuadPart = RtlSubAuthoritySid(Sid, 0);
    *QuadPart = 18;
    v7 = RtlCheckTokenMembership(ExistingTokenHandle, Sid);
    if ( v7 < 0 )
      goto LABEL_21;
    RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
    *QuadPart = 32;
    *RtlSubAuthoritySid(Sid, 1u) = 544;
    v7 = RtlCheckTokenMembership(ExistingTokenHandle, Sid);
    if ( v7 < 0 )
      goto LABEL_21;
  }
  else
  {
    v7 = RtlCheckTokenMembershipEx(ExistingTokenHandle, Owner, 2, &v13);
    if ( v7 < 0 )
      goto LABEL_21;
    if ( v13 )
      goto LABEL_16;
    RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
    QuadPart = RtlSubAuthoritySid(Sid, 0);
    *QuadPart = 18;
    v7 = RtlCheckTokenMembership(ExistingTokenHandle, Sid);
    if ( v7 < 0 )
      goto LABEL_21;
    RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
    *QuadPart = 32;
    *RtlSubAuthoritySid(Sid, 1u) = 544;
    v7 = RtlCheckTokenMembership(ExistingTokenHandle, Sid);
    if ( v7 < 0 )
      goto LABEL_21;
    RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
    *QuadPart = 4;
    v8 = RtlCheckTokenMembershipEx(ExistingTokenHandle, Sid, 2, &v12);
    v4 = v12;
    v7 = v8;
    if ( v8 < 0 )
      goto LABEL_21;
    if ( v12 )
    {
LABEL_16:
      v7 = RtlCheckTokenCapability(ExistingTokenHandle, v26, &v14);
      if ( v7 < 0 )
        goto LABEL_21;
      *a3 = v14;
    }
  }
  if ( *a3 )
    v7 = RtlpCapabilityCheckSystemCapability(ExistingTokenHandle, SourceString);
LABEL_21:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  QuadPart = (PULONG)KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !PsIsCurrentThreadInServerSilo() )
  {
    LOBYTE(v10) = v4;
    LOBYTE(v9) = 0;
    RtlpLogCapabilityCheckLatency((unsigned int)&PerformanceCounter, (unsigned int)&QuadPart, v9, v10, v15, *a3);
  }
  return (unsigned int)v7;
}
