/*
 * XREFs of RtlAreBitsSet @ 0x14011F4C0
 * Callers:
 *     MiReleaseDriverPtes @ 0x14070F2DC (MiReleaseDriverPtes.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlAreBitsSet(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG Length)
{
  char v3; // r9
  unsigned int v4; // r10d
  unsigned int *Buffer; // rcx
  unsigned int *v7; // rdx
  unsigned int v8; // r11d
  unsigned int *v9; // rbx

  v3 = StartingIndex;
  v4 = StartingIndex + Length - 1;
  if ( v4 >= BitMapHeader->SizeOfBitMap )
    return 0;
  if ( Length <= 1 )
  {
    if ( Length == 1 )
      return _bittest((const signed __int32 *)BitMapHeader->Buffer, StartingIndex);
    return 0;
  }
  Buffer = BitMapHeader->Buffer;
  v7 = &Buffer[(unsigned __int64)StartingIndex >> 5];
  v8 = *v7;
  v9 = &Buffer[(unsigned __int64)v4 >> 5];
  if ( v7 != v9 )
  {
    if ( ((-1 << v3) & v8) == -1 << v3 )
    {
      while ( ++v7 != v9 )
      {
        if ( *v7 != -1 )
          return 0;
      }
      return ((0xFFFFFFFF >> ~(_BYTE)v4) & *v7) == 0xFFFFFFFF >> ~(_BYTE)v4;
    }
    return 0;
  }
  return ((0xFFFFFFFF >> (32 - Length) << v3) & v8) == 0xFFFFFFFF >> (32 - Length) << v3;
}
