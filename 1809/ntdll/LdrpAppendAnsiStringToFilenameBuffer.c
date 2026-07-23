/*
 * XREFs of LdrpAppendAnsiStringToFilenameBuffer @ 0x1800230BC
 * Callers:
 *     LdrpLoadForwardedDll @ 0x180022F00 (LdrpLoadForwardedDll.c)
 *     LdrpEnclaveAddDependentModule @ 0x1800CF448 (LdrpEnclaveAddDependentModule.c)
 *     LdrpAddRedirectedFunction @ 0x1800D7210 (LdrpAddRedirectedFunction.c)
 * Callees:
 *     RtlAnsiStringToUnicodeString @ 0x180025AA0 (RtlAnsiStringToUnicodeString.c)
 *     LdrpAllocateFileNameBufferIfNeeded @ 0x180026594 (LdrpAllocateFileNameBufferIfNeeded.c)
 *     RtlxOemStringToUnicodeSize @ 0x180026720 (RtlxOemStringToUnicodeSize.c)
 */

__int64 __fastcall LdrpAppendAnsiStringToFilenameBuffer(unsigned __int16 *a1, const ANSI_STRING *a2)
{
  int FileNameBufferIfNeeded; // edi
  int v5; // eax
  unsigned __int16 v6; // dx
  __int64 v7; // rcx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  FileNameBufferIfNeeded = 0;
  if ( a2->Length )
  {
    v5 = RtlxOemStringToUnicodeSize(a2);
    FileNameBufferIfNeeded = LdrpAllocateFileNameBufferIfNeeded(a1, (unsigned int)*a1 + v5);
    if ( FileNameBufferIfNeeded >= 0 )
    {
      v6 = *a1;
      v7 = *a1;
      DestinationString.Length = 0;
      DestinationString.Buffer = (wchar_t *)(*((_QWORD *)a1 + 1) + v7);
      DestinationString.MaximumLength = a1[1] - v6;
      RtlAnsiStringToUnicodeString(&DestinationString, a2, 0);
      *a1 += DestinationString.Length;
    }
  }
  return (unsigned int)FileNameBufferIfNeeded;
}
