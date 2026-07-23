/*
 * XREFs of RtlNumberOfSetBits @ 0x180081A40
 * Callers:
 *     RtlNumberOfClearBits @ 0x18008C3E0 (RtlNumberOfClearBits.c)
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlNumberOfSetBits(PRTL_BITMAP BitMapHeader)
{
  unsigned int *Buffer; // r9
  unsigned int v2; // edx
  unsigned int SizeOfBitMap; // r14d
  unsigned int v4; // esi
  ULONG v5; // edi
  int v6; // r8d
  unsigned int v7; // r11d
  int v8; // ebx
  unsigned int v9; // r10d
  unsigned int v10; // edx
  int i; // r8d
  char v12; // cl
  unsigned int v14; // eax
  __int64 v15; // r10
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  int v18; // edx
  unsigned int v19; // r11d
  char v20; // cl

  Buffer = BitMapHeader->Buffer;
  v2 = BitMapHeader->SizeOfBitMap >> 3;
  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v4 = BitMapHeader->SizeOfBitMap & 7;
  v5 = 0;
  v6 = (unsigned __int8)Buffer & 7;
  v7 = v2 + (v4 != 0);
  if ( 8 - (unsigned __int64)((__int64)BitMapHeader->Buffer & 7) <= (unsigned __int64)BitMapHeader->SizeOfBitMap >> 3 )
  {
    v9 = 8 - v6;
    v18 = ((_BYTE)v2 - (8 - (_BYTE)v6)) & 7;
    v8 = v18 + 1;
    if ( !v4 )
      v8 = v18;
    v10 = v7 - v8 - v9;
  }
  else
  {
    v8 = 0;
    v9 = v2 + ((BitMapHeader->SizeOfBitMap & 7) != 0);
    v10 = 0;
  }
  for ( i = 0; v9; --v9 )
  {
    v12 = *(_BYTE *)Buffer;
    Buffer = (unsigned int *)((char *)Buffer + 1);
    if ( i == v7 - 1 && v4 )
      v12 &= byte_180129510[SizeOfBitMap & 7];
    ++i;
    v5 += RtlpBitsClearTotal[(unsigned __int8)~v12];
  }
  if ( v10 )
  {
    v14 = ((v10 - 1) >> 3) + 1;
    v15 = v14;
    i += 8 * v14;
    do
    {
      v16 = *(_QWORD *)Buffer;
      v17 = *(_QWORD *)Buffer;
      Buffer += 2;
      v5 += (unsigned int)((0x101010101010101LL
                          * ((((v16 - ((v17 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                            + (((v16 - ((v17 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                            + ((((v16 - ((v17 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                              + (((v16 - ((v17 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
      --v15;
    }
    while ( v15 );
  }
  if ( v8 )
  {
    v19 = v7 - 1;
    do
    {
      v20 = *(_BYTE *)Buffer;
      Buffer = (unsigned int *)((char *)Buffer + 1);
      if ( i == v19 && v4 )
        v20 &= byte_180129510[SizeOfBitMap & 7];
      ++i;
      v5 += RtlpBitsClearTotal[(unsigned __int8)~v20];
      --v8;
    }
    while ( v8 );
  }
  return v5;
}
