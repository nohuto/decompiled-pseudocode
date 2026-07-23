/*
 * XREFs of ApiSetpConstructPathToExtension @ 0x1408DE9A4
 * Callers:
 *     ApiSetpLoadSchemaExtension @ 0x1408DEAD8 (ApiSetpLoadSchemaExtension.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140015E00 (RtlAppendUnicodeToString.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ApiSetpConstructPathToExtension(PCWSTR Source, __int16 a2, UNICODE_STRING *a3)
{
  SIZE_T v4; // rdx
  NTSTATUS appended; // ebx
  wchar_t *Buffer; // rcx
  UNICODE_STRING Destination; // [rsp+20h] [rbp-18h] BYREF

  v4 = (unsigned __int16)(a2 + 44);
  Destination.Length = 0;
  Destination.MaximumLength = v4;
  Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v4, 0x68635341u);
  if ( Destination.Buffer )
  {
    appended = RtlAppendUnicodeToString(&Destination, L"\\SystemRoot\\System32\\");
    if ( appended < 0 || (appended = RtlAppendUnicodeToString(&Destination, Source), appended < 0) )
    {
      Buffer = Destination.Buffer;
    }
    else
    {
      Buffer = 0LL;
      *a3 = Destination;
    }
    if ( Buffer )
      ExFreePoolWithTag(Buffer, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)appended;
}
