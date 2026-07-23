/*
 * XREFs of RtlpGetPolicyValueForSystemCapability @ 0x1408D23A0
 * Callers:
 *     RtlpCapabilityCheckSystemCapability @ 0x1408D1CB8 (RtlpCapabilityCheckSystemCapability.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14009EE00 (ExAllocatePoolWithQuotaTag.c)
 *     RtlAppendUnicodeStringToString @ 0x1400EC910 (RtlAppendUnicodeStringToString.c)
 *     ZwQueryLicenseValue @ 0x1401C35F0 (ZwQueryLicenseValue.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     ExpAllocateStringRoutine @ 0x1406D4640 (ExpAllocateStringRoutine.c)
 */

__int64 __fastcall RtlpGetPolicyValueForSystemCapability(PCUNICODE_STRING Source, PUNICODE_STRING UnicodeString)
{
  PVOID PoolWithQuotaTag; // r14
  unsigned __int16 v5; // bx
  wchar_t *StringRoutine; // rax
  wchar_t *v7; // r15
  NTSTATUS appended; // ebx
  ULONG v9; // esi
  ULONG v10; // r15d
  wchar_t *v11; // rax
  wchar_t *v12; // rsi
  __int64 v13; // rdx
  wchar_t *v14; // rax
  __int16 v15; // cx
  unsigned __int16 v16; // cx
  UNICODE_STRING Destination; // [rsp+30h] [rbp-10h] BYREF
  ULONG DataSize; // [rsp+80h] [rbp+40h] BYREF
  ULONG Type; // [rsp+90h] [rbp+50h] BYREF

  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  DataSize = 0;
  PoolWithQuotaTag = 0LL;
  Type = 0;
  if ( !Source || !UnicodeString )
  {
    appended = -1073741811;
    goto LABEL_23;
  }
  v5 = Source->Length + 56;
  StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v5);
  v7 = StringRoutine;
  if ( !StringRoutine )
  {
LABEL_4:
    appended = -1073741801;
    goto LABEL_24;
  }
  memset(StringRoutine, 0, v5);
  Destination.Buffer = v7;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.MaximumLength = v5;
  appended = RtlAppendUnicodeStringToString(&Destination, &stru_140375EE0);
  if ( appended < 0 )
    goto LABEL_24;
  appended = RtlAppendUnicodeStringToString(&Destination, Source);
  if ( appended < 0 )
    goto LABEL_24;
  appended = ZwQueryLicenseValue(&Destination, &Type, 0LL, 0, &DataSize);
  if ( appended != -1073741789 )
  {
LABEL_23:
    if ( appended >= 0 )
      goto LABEL_28;
    goto LABEL_24;
  }
  v9 = DataSize;
  v10 = DataSize;
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, DataSize, 0x62507452u);
  appended = ZwQueryLicenseValue(&Destination, &Type, PoolWithQuotaTag, v9, &DataSize);
  if ( appended < 0 )
    goto LABEL_24;
  if ( Type != 1 || !v9 || (v9 & 1) != 0 )
  {
    appended = -1073741823;
    goto LABEL_24;
  }
  v11 = (wchar_t *)ExpAllocateStringRoutine(v9);
  v12 = v11;
  if ( !v11 )
    goto LABEL_4;
  memmove(v11, PoolWithQuotaTag, v10);
  *(_QWORD *)&UnicodeString->Length = 0LL;
  v13 = 0x7FFFLL;
  UnicodeString->Buffer = 0LL;
  v14 = v12;
  do
  {
    if ( !*v14 )
      break;
    ++v14;
    --v13;
  }
  while ( v13 );
  appended = v13 == 0 ? 0xC000000D : 0;
  if ( v13 )
    v15 = 0x7FFF - v13;
  else
    v15 = 0;
  if ( !v13 )
  {
LABEL_24:
    if ( UnicodeString )
      RtlFreeAnsiString(UnicodeString);
    goto LABEL_26;
  }
  v16 = 2 * v15;
  UnicodeString->Buffer = v12;
  UnicodeString->Length = v16;
  UnicodeString->MaximumLength = v16 + 2;
  appended = 0;
LABEL_26:
  if ( PoolWithQuotaTag )
    ExFreePoolWithTag(PoolWithQuotaTag, 0);
LABEL_28:
  RtlFreeAnsiString(&Destination);
  return (unsigned int)appended;
}
