/*
 * XREFs of RtlAreBitsClear @ 0x1800E8EA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlAreBitsClear(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG Length)
{
  char v3; // r9
  ULONG v4; // r10d
  BOOLEAN result; // al
  PULONG Buffer; // rcx
  ULONG *v7; // rdx
  ULONG v8; // ebx
  ULONG *v9; // r11
  ULONG *v11; // rdx

  v3 = StartingIndex;
  v4 = StartingIndex + Length - 1;
  if ( v4 >= BitMapHeader->SizeOfBitMap )
    return 0;
  if ( Length <= 1 )
  {
    if ( Length == 1 )
      return !_bittest((const signed __int32 *)BitMapHeader->Buffer, StartingIndex);
    return 0;
  }
  Buffer = BitMapHeader->Buffer;
  v7 = &Buffer[(unsigned __int64)StartingIndex >> 5];
  v8 = *v7;
  v9 = &Buffer[(unsigned __int64)v4 >> 5];
  if ( v7 == v9 )
    return (v8 & (0xFFFFFFFF >> (32 - Length) << v3)) == 0;
  if ( (v8 & (-1 << v3)) != 0 )
    return 0;
  v11 = v7 + 1;
  if ( v11 == v9 )
    return ((0xFFFFFFFF >> ~(_BYTE)v4) & *v11) == 0;
  result = 0;
  while ( !*v11 )
  {
    if ( ++v11 == v9 )
      return ((0xFFFFFFFF >> ~(_BYTE)v4) & *v11) == 0;
  }
  return result;
}
