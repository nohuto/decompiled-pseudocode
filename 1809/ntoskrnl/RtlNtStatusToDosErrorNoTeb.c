/*
 * XREFs of RtlNtStatusToDosErrorNoTeb @ 0x1400A3C10
 * Callers:
 *     RtlNtStatusToDosError @ 0x140624F00 (RtlNtStatusToDosError.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlNtStatusToDosErrorNoTeb(NTSTATUS Status)
{
  unsigned int v1; // r8d
  ULONG result; // eax
  unsigned int v3; // edx
  unsigned int v4; // r10d
  __int64 v5; // rcx
  unsigned int v6; // eax
  unsigned int v7; // r11d
  int v8; // eax

  v1 = 0;
  if ( !Status )
    return 0;
  if ( Status == 259 )
    return 997;
  result = Status;
  if ( (Status & 0x20000000) == 0 )
  {
    if ( (Status & 0xFF0000) == 0x70000 && ((HIBYTE(Status) - 128) & 0xFFFFFFBF) == 0 )
      return (unsigned __int16)Status;
    v3 = Status & 0xCFFFFFFF;
    v4 = 310;
    if ( (Status & 0xF0000000) != 0xD0000000 )
      v3 = Status;
    while ( 1 )
    {
      v5 = (v4 + v1) >> 1;
      v6 = RtlpRunTable[2 * v5];
      v7 = v3 - v6;
      if ( v3 >= v6 )
      {
        if ( v7 < (unsigned __int8)byte_14035EF14[8 * v5] )
        {
          v8 = (unsigned __int16)word_14035EF16[4 * v5];
          if ( byte_14035EF15[8 * v5] == 1 )
            return (unsigned __int16)RtlpStatusTable[v7 + v8];
          else
            return (unsigned __int16)RtlpStatusTable[2 * v7 + v8] | ((unsigned __int16)RtlpStatusTable[2 * v7 + 1 + v8] << 16);
        }
        v1 = v5 + 1;
      }
      else
      {
        v4 = v5 - 1;
      }
      if ( v1 > v4 )
      {
        if ( (v3 & 0xFFFF0000) == 0xC0010000 )
          return (unsigned __int16)v3;
        else
          return 317;
      }
    }
  }
  return result;
}
