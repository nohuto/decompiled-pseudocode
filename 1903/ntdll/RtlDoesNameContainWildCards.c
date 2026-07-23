/*
 * XREFs of RtlDoesNameContainWildCards @ 0x1800F4E20
 * Callers:
 *     sub_1800F4FFC @ 0x1800F4FFC (sub_1800F4FFC.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlDoesNameContainWildCards(PUNICODE_STRING Expression)
{
  PWCH Buffer; // r8
  PWCH i; // rdx

  if ( Expression->Length )
  {
    Buffer = Expression->Buffer;
    for ( i = &Buffer[((unsigned __int64)Expression->Length >> 1) - 1]; i >= Buffer && *i != 92; --i )
    {
      if ( *i < 0x40u && (byte_180137F50[*i] & 8) != 0 )
        return 1;
    }
  }
  return 0;
}
