/*
 * XREFs of RtlFindFirstRunClear @ 0x14030CC30
 * Callers:
 *     PnprMirrorMarkedPages @ 0x1405A9E3C (PnprMirrorMarkedPages.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlFindFirstRunClear(PRTL_BITMAP BitMapHeader, PULONG StartingIndex)
{
  unsigned int SizeOfBitMap; // r8d
  ULONG v3; // r9d
  unsigned int *Buffer; // rdx
  unsigned int v7; // r10d
  unsigned int *v8; // rbx
  ULONG v9; // r8d
  __int64 v10; // rdi
  unsigned int *v11; // rdx
  unsigned int v12; // ecx
  unsigned int i; // eax

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v3 = 0;
  if ( BitMapHeader->SizeOfBitMap )
  {
    Buffer = BitMapHeader->Buffer;
    v7 = 0;
    v8 = &Buffer[(unsigned __int64)(SizeOfBitMap - 1) >> 5];
    if ( Buffer != v8 && *Buffer == -1 )
    {
      v7 = 32;
      for ( ++Buffer; Buffer < v8 && *Buffer == -1; ++Buffer )
        v7 += 32;
    }
    for ( ; v7 < SizeOfBitMap; ++v7 )
    {
      if ( !_bittest((const signed __int32 *)BitMapHeader->Buffer, v7) )
        break;
    }
    v9 = 0;
    if ( Buffer != v8 )
    {
      v10 = v7 & 0x1F;
      if ( (*Buffer & ~dword_14037C7E0[v10]) == 0 )
      {
        v9 = 32 - v10;
        if ( (_DWORD)v10 == 33 )
        {
LABEL_23:
          *StartingIndex = v7;
          return v9;
        }
        v11 = Buffer + 1;
        while ( v11 < v8 && !*v11 )
        {
          ++v11;
          v9 += 32;
          if ( v9 == -1 )
            goto LABEL_23;
        }
      }
    }
    v12 = BitMapHeader->SizeOfBitMap;
    for ( i = v9 + v7; i < v12; ++v9 )
    {
      if ( _bittest((const signed __int32 *)BitMapHeader->Buffer, i) )
        break;
      if ( v9 == -1 )
        break;
      ++i;
    }
    goto LABEL_23;
  }
  *StartingIndex = 0;
  return v3;
}
