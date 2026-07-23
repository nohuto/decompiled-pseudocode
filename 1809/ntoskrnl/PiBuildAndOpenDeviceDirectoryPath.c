/*
 * XREFs of PiBuildAndOpenDeviceDirectoryPath @ 0x14082609C
 * Callers:
 *     IoGetDeviceDirectory @ 0x140825BF0 (IoGetDeviceDirectory.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintfEx @ 0x14015D8CC (RtlUnicodeStringPrintfEx.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     IopAllocateUnicodeString @ 0x140711194 (IopAllocateUnicodeString.c)
 *     PiOpenDirectoryWithRoot @ 0x1408269B0 (PiOpenDirectoryWithRoot.c)
 */

__int64 __fastcall PiBuildAndOpenDeviceDirectoryPath(
        PCUNICODE_STRING SourceString,
        unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 v8; // r10
  unsigned int v9; // ecx
  int UnicodeString; // ebx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF

  RtlInitUnicodeString(&DestinationString, 0LL);
  v8 = -1LL;
  do
    ++v8;
  while ( *(_WORD *)(a3 + 2 * v8) );
  v9 = *a2 + SourceString->Length + 20 + 2 * v8;
  if ( v9 <= 0xFFFE )
  {
    UnicodeString = IopAllocateUnicodeString((__int64)&DestinationString, v9);
    if ( UnicodeString >= 0 )
    {
      UnicodeString = RtlUnicodeStringPrintfEx(
                        &DestinationString,
                        0LL,
                        0x800u,
                        L"%wZ\\%ws\\%wZ\\%ws",
                        SourceString,
                        L"Devices",
                        a2,
                        a3);
      if ( UnicodeString >= 0 )
      {
        UnicodeString = PiOpenDirectoryWithRoot(SourceString, &DestinationString);
        if ( UnicodeString >= 0 )
          *a5 = 0LL;
      }
    }
  }
  else
  {
    UnicodeString = -2147483643;
  }
  RtlFreeAnsiString(&DestinationString);
  return (unsigned int)UnicodeString;
}
