/*
 * XREFs of RtlpGetPolicyValueForSystemCapability @ 0x180009998
 * Callers:
 *     RtlpCapabilityCheckSystemCapability @ 0x180009910 (RtlpCapabilityCheckSystemCapability.c)
 * Callees:
 *     RtlStringLengthWorkerW @ 0x180003214 (RtlStringLengthWorkerW.c)
 *     RtlAppendUnicodeStringToString @ 0x180026140 (RtlAppendUnicodeStringToString.c)
 *     RtlFreeAnsiString @ 0x180029BA0 (RtlFreeAnsiString.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     NtdllpAllocateStringRoutine @ 0x18006D908 (NtdllpAllocateStringRoutine.c)
 *     ZwQueryLicenseValue @ 0x18009F820 (ZwQueryLicenseValue.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 */

__int64 __fastcall RtlpGetPolicyValueForSystemCapability(PCUNICODE_STRING Source, PUNICODE_STRING UnicodeString)
{
  PVOID Heap; // r14
  unsigned __int16 v5; // bx
  wchar_t *StringRoutine; // rax
  wchar_t *v7; // r15
  int appended; // ebx
  ULONG v10; // esi
  ULONG v11; // r15d
  __int64 v12; // rdx
  wchar_t *v13; // rax
  wchar_t *v14; // rsi
  unsigned __int16 v15; // ax
  _UNICODE_STRING Destination; // [rsp+30h] [rbp-10h] BYREF
  ULONG DataSize; // [rsp+80h] [rbp+40h] BYREF
  ULONG Type; // [rsp+90h] [rbp+50h] BYREF
  __int64 v19; // [rsp+98h] [rbp+58h] BYREF

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
  StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(v5, UnicodeString);
  v7 = StringRoutine;
  if ( !StringRoutine )
    goto LABEL_13;
  memset(StringRoutine, 0, v5);
  Destination.Buffer = v7;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.MaximumLength = v5;
  appended = RtlAppendUnicodeStringToString(&Destination, &stru_1801180E0);
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
  v13 = (wchar_t *)NtdllpAllocateStringRoutine(v10, v12);
  v14 = v13;
  if ( !v13 )
  {
LABEL_13:
    appended = -1073741801;
    goto LABEL_8;
  }
  memmove(v13, Heap, v11);
  *(_QWORD *)&UnicodeString->Length = 0LL;
  UnicodeString->Buffer = 0LL;
  appended = RtlStringLengthWorkerW(v14, 0x7FFFLL, &v19);
  if ( appended < 0 )
    goto LABEL_8;
  v15 = 2 * v19;
  UnicodeString->Buffer = v14;
  UnicodeString->Length = v15;
  UnicodeString->MaximumLength = v15 + 2;
  appended = 0;
LABEL_10:
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
LABEL_12:
  RtlFreeAnsiString(&Destination);
  return (unsigned int)appended;
}
