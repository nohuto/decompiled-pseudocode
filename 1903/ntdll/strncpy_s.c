/*
 * XREFs of strncpy_s @ 0x180097D90
 * Callers:
 *     sub_18008D880 @ 0x18008D880 (sub_18008D880.c)
 *     _splitpath_s @ 0x1800971B0 (_splitpath_s.c)
 * Callees:
 *     sub_18008C6D8 @ 0x18008C6D8 (sub_18008C6D8.c)
 */

errno_t __cdecl strncpy_s(char *Destination, rsize_t SizeInBytes, const char *Source, rsize_t MaxCount)
{
  errno_t v5; // ebx
  char *v6; // r11
  rsize_t v7; // r10
  signed __int64 v8; // r11
  char v9; // al
  signed __int64 v10; // r8
  char v11; // al

  if ( MaxCount )
  {
    if ( !Destination )
      goto LABEL_4;
  }
  else if ( !Destination )
  {
    if ( SizeInBytes )
    {
LABEL_4:
      sub_18008C6D8();
      return 22;
    }
    return 0;
  }
  if ( !SizeInBytes )
    goto LABEL_4;
  if ( !MaxCount )
  {
    *Destination = 0;
    return 0;
  }
  if ( Source )
  {
    v6 = Destination;
    v7 = SizeInBytes;
    if ( MaxCount == -1LL )
    {
      v8 = Destination - Source;
      do
      {
        v9 = *Source;
        Source[v8] = *Source;
        ++Source;
        if ( !v9 )
          break;
        --v7;
      }
      while ( v7 );
    }
    else
    {
      v10 = Source - Destination;
      do
      {
        v11 = v6[v10];
        *v6++ = v11;
        if ( !v11 )
          break;
        if ( !--v7 )
          break;
        --MaxCount;
      }
      while ( MaxCount );
      if ( !MaxCount )
        *v6 = 0;
    }
    if ( v7 )
      return 0;
    if ( MaxCount == -1LL )
    {
      Destination[SizeInBytes - 1] = 0;
      return 80;
    }
    v5 = 34;
  }
  else
  {
    v5 = 22;
  }
  *Destination = 0;
  sub_18008C6D8();
  return v5;
}
