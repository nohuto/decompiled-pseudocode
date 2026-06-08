/*
 * XREFs of GetObjectTypeName @ 0x1C0004F7C
 * Callers:
 *     AcpiParseCore @ 0x1C0025514 (AcpiParseCore.c)
 * Callees:
 *     <none>
 */

const char *__fastcall GetObjectTypeName(unsigned __int16 a1)
{
  switch ( a1 )
  {
    case 0u:
      return "INTEGER";
    case 1u:
      return "STRING";
    case 2u:
      return "BUFFER";
  }
  if ( a1 > 4u )
    return "UNKNOWN";
  return "PACKAGE";
}
