/*
 * XREFs of RtlRunDecodeUnicodeString @ 0x180089900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlRunDecodeUnicodeString(UCHAR Seed, PUNICODE_STRING String)
{
  unsigned int Length; // eax
  __int64 v3; // r9

  Length = String->Length;
  if ( Length > 1 )
  {
    do
    {
      v3 = Length - 1;
      *((_BYTE *)String->Buffer + v3) ^= Seed ^ *((_BYTE *)String->Buffer + Length - 2);
      --Length;
    }
    while ( (unsigned int)v3 > 1 );
    LOWORD(Length) = String->Length;
  }
  if ( (_WORD)Length )
    *(_BYTE *)String->Buffer ^= Seed | 0x43;
}
