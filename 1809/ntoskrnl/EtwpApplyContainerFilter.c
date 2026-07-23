/*
 * XREFs of EtwpApplyContainerFilter @ 0x140584694
 * Callers:
 *     EtwpApplyScopeFilters @ 0x1405C52D0 (EtwpApplyScopeFilters.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     _wcsnicmp @ 0x140195BB0 (_wcsnicmp.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     RtlUTF8ToUnicodeN @ 0x1406BEB10 (RtlUTF8ToUnicodeN.c)
 */

char __fastcall EtwpApplyContainerFilter(__int64 a1, _WORD *a2)
{
  char v3; // bl
  __int64 v4; // rsi
  unsigned __int16 Length; // ax
  wchar_t *Buffer; // r14
  __int64 v7; // rdx
  const CHAR *v9; // r9
  unsigned __int16 v10; // di
  unsigned int v11; // r12d
  ULONG UTF8StringByteCount; // [rsp+20h] [rbp-20h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  ULONG UnicodeStringActualByteCount; // [rsp+70h] [rbp+30h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v3 = 1;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 392LL);
  if ( v4 == EtwpHostSiloState )
  {
    RtlInitUnicodeString(&DestinationString, L"Host");
    Length = DestinationString.Length;
    Buffer = DestinationString.Buffer;
  }
  else
  {
    v7 = *(unsigned __int16 *)(v4 + 4200);
    UnicodeStringActualByteCount = 0;
    DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, 2 * v7 + 2, 0x46777445u);
    Buffer = DestinationString.Buffer;
    if ( !DestinationString.Buffer )
      return 1;
    v9 = *(const CHAR **)(v4 + 4192);
    UTF8StringByteCount = *(unsigned __int16 *)(v4 + 4200);
    DestinationString.MaximumLength = 2 * (UTF8StringByteCount + 1);
    RtlUTF8ToUnicodeN(
      DestinationString.Buffer,
      DestinationString.MaximumLength,
      &UnicodeStringActualByteCount,
      v9,
      UTF8StringByteCount);
    Length = UnicodeStringActualByteCount;
    DestinationString.Length = UnicodeStringActualByteCount;
  }
  v10 = 0;
  v11 = Length >> 1;
  if ( *a2 )
  {
    while ( (unsigned __int16)a2[8 * v10 + 4] != v11 || wcsnicmp(*(const wchar_t **)&a2[8 * v10 + 8], Buffer, v11) )
    {
      if ( ++v10 >= *a2 )
        goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    v3 = 0;
  }
  if ( v4 != EtwpHostSiloState )
    RtlFreeAnsiString(&DestinationString);
  return v3;
}
