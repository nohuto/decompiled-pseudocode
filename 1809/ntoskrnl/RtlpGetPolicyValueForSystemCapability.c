/*
 * XREFs of RtlpGetPolicyValueForSystemCapability @ 0x140894BB0
 * Callers:
 *     RtlpCapabilityCheckSystemCapability @ 0x140894238 (RtlpCapabilityCheckSystemCapability.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1400B7650 (ExAllocatePoolWithQuotaTag.c)
 *     RtlAppendUnicodeStringToString @ 0x1400F51B0 (RtlAppendUnicodeStringToString.c)
 *     ZwQueryLicenseValue @ 0x1401BAAF0 (ZwQueryLicenseValue.c)
 *     memmove @ 0x1401D1440 (memmove.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140623790 (RtlFreeAnsiString.c)
 *     ExpAllocateStringRoutine @ 0x1406B2120 (ExpAllocateStringRoutine.c)
 */

__int64 __fastcall RtlpGetPolicyValueForSystemCapability(PCUNICODE_STRING Source, PUNICODE_STRING UnicodeString)
{
  PVOID PoolWithQuotaTag; // r14
  unsigned __int16 v5; // bx
  wchar_t *StringRoutine; // rax
  wchar_t *v7; // r15
  int appended; // ebx
  UNICODE_STRING Destination; // [rsp+30h] [rbp-10h] BYREF
  int v11; // [rsp+90h] [rbp+50h] BYREF

  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  PoolWithQuotaTag = 0LL;
  v11 = 0;
  if ( !Source || !UnicodeString )
  {
    appended = -1073741811;
    goto LABEL_11;
  }
  v5 = Source->Length + 56;
  StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v5);
  v7 = StringRoutine;
  if ( StringRoutine )
  {
    memset(StringRoutine, 0, v5);
    Destination.Buffer = v7;
    *(_QWORD *)&Destination.Length = 0LL;
    Destination.MaximumLength = v5;
    appended = RtlAppendUnicodeStringToString(&Destination, &stru_140355E18);
    if ( appended < 0 )
      goto LABEL_12;
    appended = RtlAppendUnicodeStringToString(&Destination, Source);
    if ( appended < 0 )
      goto LABEL_12;
    appended = ZwQueryLicenseValue((__int64)&Destination, (__int64)&v11, 0LL);
    if ( appended == -1073741789 )
    {
      PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 0LL, 0x62507452u);
      appended = ZwQueryLicenseValue((__int64)&Destination, (__int64)&v11, (__int64)PoolWithQuotaTag);
      if ( appended >= 0 )
        appended = -1073741823;
      goto LABEL_12;
    }
LABEL_11:
    if ( appended >= 0 )
      goto LABEL_16;
    goto LABEL_12;
  }
  appended = -1073741801;
LABEL_12:
  if ( UnicodeString )
    RtlFreeAnsiString(UnicodeString);
  if ( PoolWithQuotaTag )
    ExFreePoolWithTag(PoolWithQuotaTag, 0);
LABEL_16:
  RtlFreeAnsiString(&Destination);
  return (unsigned int)appended;
}
