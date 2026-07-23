/*
 * XREFs of RtlpGetPolicyValueForSystemCapability @ 0x18004B6A4
 * Callers:
 *     RtlpCapabilityCheckSystemCapability @ 0x18004B61C (RtlpCapabilityCheckSystemCapability.c)
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x18000EB60 (NtdllpAllocateStringRoutine.c)
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlAppendUnicodeStringToString @ 0x180029B40 (RtlAppendUnicodeStringToString.c)
 *     RtlFreeAnsiString @ 0x18002A5F0 (RtlFreeAnsiString.c)
 *     RtlStringLengthWorkerW @ 0x1800534A8 (RtlStringLengthWorkerW.c)
 *     ZwQueryLicenseValue @ 0x1800A2C70 (ZwQueryLicenseValue.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall RtlpGetPolicyValueForSystemCapability(PCUNICODE_STRING Source, PUNICODE_STRING UnicodeString)
{
  PVOID Heap; // r14
  unsigned __int16 v5; // bx
  wchar_t *StringRoutine; // rax
  wchar_t *v7; // r15
  NTSTATUS appended; // ebx
  ULONG v10; // esi
  ULONG v11; // r15d
  wchar_t *v12; // rax
  wchar_t *v13; // rsi
  unsigned __int16 v14; // ax
  _UNICODE_STRING Destination; // [rsp+30h] [rbp-10h] BYREF
  ULONG DataSize; // [rsp+80h] [rbp+40h] BYREF
  ULONG Type; // [rsp+90h] [rbp+50h] BYREF
  __int16 v18; // [rsp+98h] [rbp+58h] BYREF

  Heap = 0LL;
  DataSize = 0;
  Type = 0;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  if ( !Source || !UnicodeString )
  {
    appended = -1073741811;
LABEL_7:
    if ( appended >= 0 )
      goto LABEL_12;
    goto LABEL_8;
  }
  v5 = Source->Length + 56;
  StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(v5);
  v7 = StringRoutine;
  if ( !StringRoutine )
    goto LABEL_13;
  memset(StringRoutine, 0, v5);
  Destination.Buffer = v7;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.MaximumLength = v5;
  appended = RtlAppendUnicodeStringToString(&Destination, &stru_1801185F0);
  if ( appended < 0 )
    goto LABEL_8;
  appended = RtlAppendUnicodeStringToString(&Destination, Source);
  if ( appended < 0 )
    goto LABEL_8;
  appended = ZwQueryLicenseValue(&Destination, &Type, 0LL, 0, &DataSize);
  if ( appended != -1073741789 )
    goto LABEL_7;
  v10 = DataSize;
  v11 = DataSize;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, DataSize);
  appended = ZwQueryLicenseValue(&Destination, &Type, Heap, v10, &DataSize);
  if ( appended < 0 )
  {
LABEL_8:
    if ( UnicodeString )
      RtlFreeAnsiString(UnicodeString);
    goto LABEL_10;
  }
  if ( Type != 1 || !v10 || (v10 & 1) != 0 )
  {
    appended = -1073741823;
    goto LABEL_8;
  }
  v12 = (wchar_t *)NtdllpAllocateStringRoutine(v10);
  v13 = v12;
  if ( !v12 )
  {
LABEL_13:
    appended = -1073741801;
    goto LABEL_8;
  }
  memmove(v12, Heap, v11);
  *(_QWORD *)&UnicodeString->Length = 0LL;
  UnicodeString->Buffer = 0LL;
  appended = RtlStringLengthWorkerW(v13, 0x7FFFLL, &v18);
  if ( appended < 0 )
    goto LABEL_8;
  v14 = 2 * v18;
  UnicodeString->Buffer = v13;
  UnicodeString->Length = v14;
  UnicodeString->MaximumLength = v14 + 2;
  appended = 0;
LABEL_10:
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
LABEL_12:
  RtlFreeAnsiString(&Destination);
  return (unsigned int)appended;
}
