/*
 * XREFs of RtlEraseUnicodeString @ 0x1800838E0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1800A3600 (memset.c)
 */

void __cdecl RtlEraseUnicodeString(PUNICODE_STRING String)
{
  PWCH Buffer; // rcx

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
