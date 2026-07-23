/*
 * XREFs of RtlFindNextForwardRunClear @ 0x1800E9980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlFindNextForwardRunClear(PRTL_BITMAP BitMapHeader, ULONG FromIndex, PULONG StartingRunIndex)
{
  ULONG SizeOfBitMap; // r10d
  unsigned __int64 v5; // r9
  const signed __int32 *Buffer; // rdx
  const signed __int32 *v8; // rbx
  const signed __int32 *v9; // r8
  ULONG v10; // edx
  int v11; // edi
  const signed __int32 *v12; // r8
  ULONG i; // eax

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v5 = FromIndex;
  if ( BitMapHeader->SizeOfBitMap > FromIndex )
  {
    Buffer = (const signed __int32 *)BitMapHeader->Buffer;
    v8 = &Buffer[(unsigned __int64)(SizeOfBitMap - 1) >> 5];
    v9 = &Buffer[v5 >> 5];
    if ( v9 != v8 && (*v9 | dword_1801221C0[v5 & 0x1F]) == -1 )
    {
      LODWORD(v5) = v5 - (v5 & 0x1F) + 32;
      for ( ++v9; v9 < v8 && *v9 == -1; ++v9 )
        LODWORD(v5) = v5 + 32;
    }
    while ( (unsigned int)v5 < SizeOfBitMap && _bittest(Buffer, v5) )
      LODWORD(v5) = v5 + 1;
    v10 = 0;
    if ( v9 != v8 )
    {
      v11 = v5 & 0x1F;
      if ( (*v9 & ~dword_1801221C0[v5 & 0x1F]) == 0 )
      {
        v10 = 32 - v11;
        if ( v11 == 33 )
        {
LABEL_24:
          *StartingRunIndex = v5;
          return v10;
        }
        v12 = v9 + 1;
        while ( v12 < v8 && !*v12 )
        {
          ++v12;
          v10 += 32;
          if ( v10 == -1 )
            goto LABEL_24;
        }
      }
    }
    for ( i = v10 + v5; i < BitMapHeader->SizeOfBitMap; ++v10 )
    {
      if ( _bittest((const signed __int32 *)BitMapHeader->Buffer, i) )
        break;
      if ( v10 == -1 )
        break;
      ++i;
    }
    goto LABEL_24;
  }
  *StartingRunIndex = FromIndex;
  return 0;
}
