/*
 * XREFs of strcpy_s @ 0x180097BF0
 * Callers:
 *     RtlIncrementCorrelationVector @ 0x180072600 (RtlIncrementCorrelationVector.c)
 * Callees:
 *     sub_18008C6D8 @ 0x18008C6D8 (sub_18008C6D8.c)
 */

errno_t __cdecl strcpy_s(char *Destination, rsize_t SizeInBytes, const char *Source)
{
  errno_t v4; // ebx
  signed __int64 v5; // rcx
  char v6; // al

  if ( Destination && SizeInBytes )
  {
    if ( !Source )
    {
      v4 = 22;
LABEL_10:
      *Destination = 0;
      sub_18008C6D8();
      return v4;
    }
    v5 = Destination - Source;
    do
    {
      v6 = *Source;
      Source[v5] = *Source;
      ++Source;
      if ( !v6 )
        break;
      --SizeInBytes;
    }
    while ( SizeInBytes );
    if ( !SizeInBytes )
    {
      v4 = 34;
      goto LABEL_10;
    }
    return 0;
  }
  else
  {
    sub_18008C6D8();
    return 22;
  }
}
