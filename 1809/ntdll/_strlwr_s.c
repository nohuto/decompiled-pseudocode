/*
 * XREFs of _strlwr_s @ 0x1800912C0
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x18008FDF8 (_invalid_parameter.c)
 *     strnlen @ 0x180094F40 (strnlen.c)
 */

errno_t __cdecl strlwr_s(char *String, size_t Size)
{
  char *v2; // rbx
  char v4; // cl

  v2 = String;
  if ( !String )
    goto LABEL_2;
  if ( strnlen(String, Size) >= Size )
  {
    *v2 = 0;
LABEL_2:
    invalid_parameter();
    return 22;
  }
  while ( 1 )
  {
    v4 = *v2;
    if ( !*v2 )
      break;
    if ( (unsigned __int8)(v4 - 65) <= 0x19u )
      *v2 = v4 + 32;
    ++v2;
  }
  return 0;
}
