/*
 * XREFs of RtlCopyBitMap @ 0x14000F710
 * Callers:
 *     HvpGrowDirtyVectors @ 0x1401369E0 (HvpGrowDirtyVectors.c)
 *     PopSaveHiberContext @ 0x14056B060 (PopSaveHiberContext.c)
 *     PspQueryRateControlHistory @ 0x1405A8F5C (PspQueryRateControlHistory.c)
 *     MiSelectRelocationStartHint @ 0x140650D84 (MiSelectRelocationStartHint.c)
 * Callees:
 *     RtlpCopyBitMapTailToHead @ 0x14000F80C (RtlpCopyBitMapTailToHead.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 */

void __cdecl RtlCopyBitMap(PRTL_BITMAP Source, PRTL_BITMAP Destination, ULONG TargetBit)
{
  unsigned __int64 SizeOfBitMap; // rbx
  unsigned int *Buffer; // rcx
  unsigned int *v7; // r11
  unsigned int *v8; // r9
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  size_t v12; // rdi
  _BYTE *v13; // r9
  __int64 v14; // r8
  int v15; // esi
  int v16; // r13d
  unsigned __int64 v17; // rbp
  unsigned int v18; // eax
  unsigned int v19; // esi
  char v20; // di
  int v21; // ebp

  SizeOfBitMap = Destination->SizeOfBitMap - TargetBit;
  if ( Source->SizeOfBitMap <= (unsigned int)SizeOfBitMap )
    SizeOfBitMap = Source->SizeOfBitMap;
  if ( SizeOfBitMap )
  {
    Buffer = Destination->Buffer;
    v7 = Source->Buffer;
    v8 = &Buffer[(unsigned __int64)TargetBit >> 5];
    if ( v7 > v8 || v8 > &v7[(SizeOfBitMap - 1) >> 5] )
    {
      v9 = (unsigned __int64)TargetBit >> 3;
      if ( (TargetBit & 7) != 0 )
      {
        v14 = TargetBit & 0x1F;
        if ( SizeOfBitMap >= 0x20 )
        {
          v15 = *v8;
          v16 = 1 << (32 - v14);
          v17 = SizeOfBitMap >> 5;
          SizeOfBitMap += -32LL * (SizeOfBitMap >> 5);
          do
          {
            *v8++ = ((*v7 & (v16 - 1)) << v14) | v15 & ((1 << v14) - 1);
            v18 = *v7++ & ~(v16 - 1);
            v15 = (v18 >> (32 - v14)) | *v8 & ~((1 << v14) - 1);
            *v8 = v15;
            --v17;
          }
          while ( v17 );
        }
        if ( SizeOfBitMap )
        {
          v19 = *v7;
          v20 = 32 - v14;
          v21 = *v8;
          if ( SizeOfBitMap > 32 - v14 )
          {
            *v8 = v21 & ((1 << v14) - 1) | ((v19 & ((1 << v20) - 1)) << v14);
            v8[1] = ((*v7 & (((1 << (SizeOfBitMap + v14 - 32)) - 1) << v20)) >> v20) | v8[1] & -(1 << (SizeOfBitMap + v14 - 32));
          }
          else
          {
            *v8 = ((v19 & ((1 << SizeOfBitMap) - 1)) << v14) | v21 & ~(((1 << SizeOfBitMap) - 1) << v14);
          }
        }
      }
      else
      {
        v10 = SizeOfBitMap;
        v11 = SizeOfBitMap & 7;
        v12 = v10 >> 3;
        if ( v12 )
          memmove((char *)Buffer + v9, Source->Buffer, v12);
        if ( v11 )
        {
          v13 = (char *)Destination->Buffer + v12 + v9;
          *v13 &= ~((1 << v11) - 1);
          *v13 |= (unsigned __int8)((1 << v11) - 1) & *((_BYTE *)Source->Buffer + v12);
        }
      }
    }
    else
    {
      RtlpCopyBitMapTailToHead(Source, Destination, TargetBit, (unsigned int)SizeOfBitMap);
    }
  }
}
