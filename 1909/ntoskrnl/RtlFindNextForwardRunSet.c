/*
 * XREFs of RtlFindNextForwardRunSet @ 0x14008B610
 * Callers:
 *     HvpResetPageProtection @ 0x140635F1C (HvpResetPageProtection.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlFindNextForwardRunSet(PRTL_BITMAP BitMapHeader, ULONG FromIndex, PULONG StartingRunIndex)
{
  unsigned int SizeOfBitMap; // r11d
  ULONG v5; // r9d
  unsigned int *Buffer; // rdx
  unsigned int *v8; // rbx
  unsigned int *v9; // r8
  ULONG v10; // edx
  int v11; // r11d
  unsigned int v12; // ecx
  unsigned int i; // eax
  unsigned int *v15; // r8

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v5 = FromIndex;
  if ( BitMapHeader->SizeOfBitMap <= FromIndex )
  {
    *StartingRunIndex = FromIndex;
    return 0;
  }
  Buffer = BitMapHeader->Buffer;
  v8 = &Buffer[(unsigned __int64)(SizeOfBitMap - 1) >> 5];
  v9 = &Buffer[(unsigned __int64)v5 >> 5];
  v10 = 0;
  if ( v9 != v8 && (~dword_14037C900[v5 & 0x1F] & *v9) == 0 )
  {
    v5 = v5 - (v5 & 0x1F) + 32;
    for ( ++v9; v9 < v8 && !*v9; ++v9 )
      v5 += 32;
  }
  for ( ; v5 < SizeOfBitMap; ++v5 )
  {
    if ( _bittest((const signed __int32 *)BitMapHeader->Buffer, v5) )
      break;
  }
  if ( v9 == v8 )
    goto LABEL_9;
  v11 = v5 & 0x1F;
  if ( (*v9 | dword_14037C900[v5 & 0x1F]) != 0xFFFFFFFF )
    goto LABEL_9;
  v10 = 32 - v11;
  if ( v11 != 33 )
  {
    v15 = v9 + 1;
    while ( v15 < v8 && *v15 == -1 )
    {
      ++v15;
      v10 += 32;
      if ( v10 == -1 )
        goto LABEL_13;
    }
LABEL_9:
    v12 = BitMapHeader->SizeOfBitMap;
    for ( i = v10 + v5; i < v12; ++v10 )
    {
      if ( !_bittest((const signed __int32 *)BitMapHeader->Buffer, i) )
        break;
      if ( v10 == -1 )
        break;
      ++i;
    }
  }
LABEL_13:
  *StartingRunIndex = v5;
  return v10;
}
