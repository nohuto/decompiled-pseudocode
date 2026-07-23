/*
 * XREFs of strcat @ 0x180094780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *__cdecl strcat(char *Destination, const char *Source)
{
  unsigned __int64 v3; // rax
  __int64 v4; // r10
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned int v7; // eax

  if ( ((unsigned __int8)Destination & 7) != 0 )
  {
    while ( *Destination )
    {
      if ( ((unsigned __int8)++Destination & 7) == 0 )
        goto LABEL_4;
    }
  }
  else
  {
    while ( 1 )
    {
      do
      {
LABEL_4:
        v3 = *(_QWORD *)Destination;
        v4 = (*(_QWORD *)Destination + 0x7EFEFEFEFEFEFEFFLL) ^ ~*(_QWORD *)Destination;
        Destination += 8;
      }
      while ( (v4 & 0x8101010101010100uLL) == 0 );
      Destination -= 8;
      if ( !(_BYTE)v3 )
        break;
      ++Destination;
      if ( !BYTE1(v3) )
        break;
      ++Destination;
      v5 = v3 >> 16;
      if ( !(_BYTE)v5 )
        break;
      ++Destination;
      if ( !BYTE1(v5) )
        break;
      ++Destination;
      v6 = v5 >> 16;
      if ( !(_BYTE)v6 )
        break;
      ++Destination;
      if ( !BYTE1(v6) )
        break;
      ++Destination;
      v7 = WORD1(v6);
      if ( !(_BYTE)v7 )
        break;
      ++Destination;
      if ( !BYTE1(v7) )
        break;
      ++Destination;
    }
  }
  return (char *)__entry_from_strcat_in_strcpy(Destination, Source);
}
