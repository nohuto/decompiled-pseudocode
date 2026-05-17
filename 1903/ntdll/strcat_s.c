/*
 * XREFs of strcat_s @ 0x180097B50
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008C6D8 @ 0x18008C6D8 (sub_18008C6D8.c)
 */

errno_t __cdecl strcat_s(char *Destination, rsize_t SizeInBytes, const char *Source)
{
  char *v3; // r9
  signed __int64 v4; // r9
  char v5; // al
  errno_t v6; // ebx

  if ( Destination && SizeInBytes )
  {
    if ( !Source )
      goto LABEL_14;
    v3 = Destination;
    do
    {
      if ( !*v3 )
        break;
      ++v3;
      --SizeInBytes;
    }
    while ( SizeInBytes );
    if ( SizeInBytes )
    {
      v4 = v3 - Source;
      do
      {
        v5 = *Source;
        Source[v4] = *Source;
        ++Source;
        if ( !v5 )
          break;
        --SizeInBytes;
      }
      while ( SizeInBytes );
      if ( SizeInBytes )
        return 0;
      v6 = 34;
    }
    else
    {
LABEL_14:
      v6 = 22;
    }
    *Destination = 0;
    sub_18008C6D8();
    return v6;
  }
  else
  {
    sub_18008C6D8();
    return 22;
  }
}
