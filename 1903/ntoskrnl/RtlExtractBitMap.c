/*
 * XREFs of RtlExtractBitMap @ 0x14030C8D0
 * Callers:
 *     RtlShiftLeftBitMap @ 0x14030E150 (RtlShiftLeftBitMap.c)
 * Callees:
 *     memmove @ 0x1401D6880 (memmove.c)
 */

void __cdecl RtlExtractBitMap(PRTL_BITMAP Source, PRTL_BITMAP Destination, ULONG TargetBit, ULONG NumberOfBits)
{
  unsigned __int64 SizeOfBitMap; // rbx
  unsigned __int64 v6; // r10
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  size_t v12; // rdi
  unsigned int *Buffer; // r11
  __int64 v14; // r8
  unsigned int *v15; // rsi
  int v16; // r9d
  unsigned __int64 v17; // rdi
  unsigned int v18; // edx
  unsigned int v19; // edx
  unsigned int v20; // edx

  SizeOfBitMap = Destination->SizeOfBitMap;
  v6 = Source->SizeOfBitMap - TargetBit;
  if ( NumberOfBits <= (unsigned int)v6 )
    v6 = NumberOfBits;
  if ( v6 <= SizeOfBitMap )
    SizeOfBitMap = (unsigned int)v6;
  if ( SizeOfBitMap )
  {
    v8 = (unsigned __int64)TargetBit >> 3;
    v9 = TargetBit;
    if ( (TargetBit & 7) != 0 )
    {
      Buffer = Destination->Buffer;
      v14 = TargetBit & 0x1F;
      v15 = &Source->Buffer[v9 >> 5];
      v16 = 1 << (v9 & 0x1F);
      if ( SizeOfBitMap >= 0x20 )
      {
        v17 = SizeOfBitMap >> 5;
        SizeOfBitMap += -32LL * (SizeOfBitMap >> 5);
        do
        {
          v18 = *v15++ & ~(v16 - 1);
          v19 = v18 >> v14;
          *Buffer = v19;
          *Buffer++ = v19 | ((*v15 & (v16 - 1)) << (32 - v14));
          --v17;
        }
        while ( v17 );
      }
      if ( SizeOfBitMap )
      {
        if ( SizeOfBitMap > 32 - v14 )
          v20 = ((*v15 & -v16) >> v14) | ((v15[1] & ((1 << (SizeOfBitMap + v14 - 32)) - 1)) << (32 - v14));
        else
          v20 = (*v15 & (((1 << SizeOfBitMap) - 1) << v14)) >> v14;
        *Buffer = v20 | ~((1 << SizeOfBitMap) - 1) & *Buffer;
      }
    }
    else
    {
      v10 = (unsigned int)SizeOfBitMap;
      v11 = SizeOfBitMap & 7;
      v12 = v10 >> 3;
      if ( v12 )
        memmove(Destination->Buffer, (char *)Source->Buffer + v8, v12);
      if ( v11 )
        *((_BYTE *)Destination->Buffer + v12) = *((_BYTE *)Source->Buffer + v12 + v8) & ((1 << v11) - 1) | *((_BYTE *)Destination->Buffer + v12) & ~((1 << v11) - 1);
    }
  }
}
