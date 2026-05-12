/*
 * XREFs of PortBuildRegKeyName @ 0x1C001C478
 * Callers:
 *     StorPortRegistryRead @ 0x1C001C040 (StorPortRegistryRead.c)
 *     StorPortRegistryWrite @ 0x1C003B930 (StorPortRegistryWrite.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x1C001E8A4 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 *     memset @ 0x1C0023840 (memset.c)
 */

NTSTATUS __fastcall PortBuildRegKeyName(PCUNICODE_STRING SourceString, PUNICODE_STRING Destination, int a3, int a4)
{
  char *v6; // rdx
  NTSTATUS result; // eax
  unsigned int MaximumLength; // edx
  unsigned int v9; // ebx
  unsigned int v10; // eax
  unsigned int v11; // ecx
  wchar_t *PoolWithTag; // rax
  NTSTATUS appended; // ebx
  UNICODE_STRING Source; // [rsp+20h] [rbp-40h] BYREF
  struct _STRING DestinationString; // [rsp+30h] [rbp-30h] BYREF
  char pszDest[24]; // [rsp+40h] [rbp-20h] BYREF

  *(_QWORD *)&Source.Length = 0LL;
  Source.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( a4 )
  {
    v6 = "\\Parameters\\Device";
  }
  else
  {
    RtlStringCbPrintfA(pszDest, 0x18uLL, "\\Parameters\\Device%d", a3);
    v6 = pszDest;
  }
  RtlInitAnsiString(&DestinationString, v6);
  result = RtlAnsiStringToUnicodeString(&Source, &DestinationString, 1u);
  if ( result >= 0 )
  {
    MaximumLength = SourceString->MaximumLength;
    v9 = -1;
    v10 = -1;
    v11 = MaximumLength + Source.MaximumLength;
    if ( v11 >= MaximumLength )
      v10 = MaximumLength + Source.MaximumLength;
    if ( v10 + 2 >= v10 )
      v9 = v10 + 2;
    if ( v11 < MaximumLength || v10 + 2 < v10 || v9 > 0xFFFF )
    {
      RtlFreeUnicodeString(&Source);
      return -1073741675;
    }
    else
    {
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x42526C50u);
      Destination->Buffer = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v9);
        Destination->MaximumLength = v9;
        RtlCopyUnicodeString(Destination, SourceString);
        appended = RtlAppendUnicodeStringToString(Destination, &Source);
        RtlFreeUnicodeString(&Source);
        return appended;
      }
      else
      {
        return -1073741670;
      }
    }
  }
  return result;
}
