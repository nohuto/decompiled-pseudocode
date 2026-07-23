/*
 * XREFs of RtlEraseUnicodeString @ 0x180083F80
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1800A3DC0 (memset.c)
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
