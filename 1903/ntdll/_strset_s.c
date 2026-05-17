/*
 * XREFs of _strset_s @ 0x1800974E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008C6D8 @ 0x18008C6D8 (sub_18008C6D8.c)
 */

errno_t __cdecl strset_s(char *Destination, size_t DestinationSize, int Value)
{
  char *i; // rax

  if ( !Destination || !DestinationSize )
    goto LABEL_8;
  for ( i = Destination; *i; *i++ = Value )
  {
    if ( !--DestinationSize )
      break;
  }
  if ( !DestinationSize )
  {
    *Destination = 0;
LABEL_8:
    sub_18008C6D8();
    return 22;
  }
  return 0;
}
