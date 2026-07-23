/*
 * XREFs of RtlHashUnicodeString @ 0x1800273F0
 * Callers:
 *     RtlpFindUnicodeStringInSection @ 0x18002715C (RtlpFindUnicodeStringInSection.c)
 *     LdrpHashUnicodeString @ 0x18002952C (LdrpHashUnicodeString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlHashUnicodeString(
        PUNICODE_STRING String,
        BOOLEAN CaseInSensitive,
        ULONG HashAlgorithm,
        PULONG HashValue)
{
  ULONG v4; // r10d
  wchar_t *Buffer; // r11
  int v7; // r9d
  unsigned __int16 v8; // ax
  int v10; // ecx

  v4 = 0;
  if ( !String )
    return -1073741811;
  if ( !HashValue )
    return -1073741811;
  Buffer = String->Buffer;
  *HashValue = 0;
  v7 = String->Length >> 1;
  if ( HashAlgorithm > 1 )
    return -1073741811;
  if ( v7 )
  {
    if ( CaseInSensitive )
    {
      do
      {
        v8 = *Buffer++;
        --v7;
        if ( v8 >= 0x61u )
        {
          if ( v8 > 0x7Au )
          {
            if ( Nls844UnicodeUpcaseTable )
            {
              if ( v8 >= 0xC0u )
                v8 += *(_WORD *)(Nls844UnicodeUpcaseTable
                               + 2LL
                               * ((v8 & 0xF)
                                + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                    + 2LL
                                                                    * (((v8 >> 4) & 0xF)
                                                                     + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * ((unsigned __int64)v8 >> 8))))));
            }
          }
          else
          {
            v8 -= 32;
          }
        }
        v4 = v8 + 65599 * v4;
      }
      while ( v7 );
    }
    else
    {
      do
      {
        v10 = *Buffer++;
        v4 = v10 + 65599 * v4;
        --v7;
      }
      while ( v7 );
    }
  }
  *HashValue = v4;
  return 0;
}
