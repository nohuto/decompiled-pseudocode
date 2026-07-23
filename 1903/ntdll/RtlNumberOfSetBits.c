/*
 * XREFs of RtlNumberOfSetBits @ 0x1800780E0
 * Callers:
 *     RtlNumberOfClearBits @ 0x1800E9FE0 (RtlNumberOfClearBits.c)
 *     TpSetPoolThreadCpuSets @ 0x18010EA70 (TpSetPoolThreadCpuSets.c)
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlNumberOfSetBits(PRTL_BITMAP BitMapHeader)
{
  PULONG Buffer; // r10
  ULONG v2; // edx
  ULONG SizeOfBitMap; // r14d
  ULONG v4; // esi
  ULONG v5; // edi
  int v6; // r8d
  ULONG v7; // r11d
  ULONG v8; // r9d
  int v9; // edx
  int v10; // ebx
  ULONG v11; // edx
  int i; // r8d
  char v13; // cl
  ULONG v15; // r11d
  unsigned int v16; // eax
  __int64 v17; // r9
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  char v20; // cl

  Buffer = BitMapHeader->Buffer;
  v2 = BitMapHeader->SizeOfBitMap >> 3;
  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v4 = BitMapHeader->SizeOfBitMap & 7;
  v5 = 0;
  v6 = (unsigned __int8)Buffer & 7;
  v7 = v2 + (v4 != 0);
  if ( 8 - (unsigned __int64)((__int64)BitMapHeader->Buffer & 7) > (unsigned __int64)BitMapHeader->SizeOfBitMap >> 3 )
  {
    v10 = 0;
    v8 = v2 + ((BitMapHeader->SizeOfBitMap & 7) != 0);
    v11 = 0;
  }
  else
  {
    v8 = 8 - v6;
    v9 = ((_BYTE)v2 - (8 - (_BYTE)v6)) & 7;
    v10 = v9 + 1;
    if ( !v4 )
      v10 = v9;
    v11 = v7 - v10 - v8;
  }
  for ( i = 0; v8; --v8 )
  {
    v13 = *(_BYTE *)Buffer;
    Buffer = (PULONG)((char *)Buffer + 1);
    if ( i == v7 - 1 && v4 )
      v13 &= byte_1801241F0[SizeOfBitMap & 7];
    ++i;
    v5 += byte_180126990[(unsigned __int8)~v13];
  }
  if ( v11 )
  {
    v16 = ((v11 - 1) >> 3) + 1;
    v17 = v16;
    i += 8 * v16;
    do
    {
      v18 = *(_QWORD *)Buffer;
      v19 = *(_QWORD *)Buffer;
      Buffer += 2;
      v5 += (unsigned int)((0x101010101010101LL
                          * ((((v18 - ((v19 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                            + (((v18 - ((v19 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                            + ((((v18 - ((v19 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                              + (((v18 - ((v19 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
      --v17;
    }
    while ( v17 );
  }
  if ( v10 )
  {
    v15 = v7 - 1;
    do
    {
      v20 = *(_BYTE *)Buffer;
      Buffer = (PULONG)((char *)Buffer + 1);
      if ( i == v15 && v4 )
        v20 &= byte_1801241F0[SizeOfBitMap & 7];
      ++i;
      v5 += byte_180126990[(unsigned __int8)~v20];
      --v10;
    }
    while ( v10 );
  }
  return v5;
}
