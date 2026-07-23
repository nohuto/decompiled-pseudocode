/*
 * XREFs of RtlEraseUnicodeString @ 0x180087D30
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1800A7100 (memset.c)
 */

void __cdecl RtlEraseUnicodeString(PUNICODE_STRING String)
{
  wchar_t *Buffer; // rcx

  Buffer = String->Buffer;
  if ( Buffer )
  {
    if ( String->MaximumLength )
    {
      memset(Buffer, 0, String->MaximumLength);
      String->Length = 0;
    }
  }
}
