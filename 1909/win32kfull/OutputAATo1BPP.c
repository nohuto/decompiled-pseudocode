/*
 * XREFs of OutputAATo1BPP @ 0x1C00060D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall OutputAATo1BPP(
        unsigned int *a1,
        __int64 a2,
        unsigned __int64 a3,
        _BYTE *a4,
        int a5,
        unsigned __int16 *a6,
        unsigned __int64 a7,
        int a8,
        int a9)
{
  int v9; // r10d
  __int64 result; // rax
  __int16 *v14; // r10
  char v15; // dl
  int v16; // edx
  char v17; // al
  int v18; // eax
  char v19; // r8
  char v20; // dl
  char v21; // si
  __int16 v22; // ax
  unsigned int v23; // ecx
  int v24; // eax
  int v25; // [rsp+10h] [rbp+10h]
  int v26; // [rsp+10h] [rbp+10h]

  v9 = (unsigned __int8)a9;
  if ( (_BYTE)a9 )
  {
    v25 = 0;
    do
    {
      v17 = *(_BYTE *)(a2 + 7);
      a2 += 4LL;
      LOBYTE(v25) = v17;
      --v9;
      v18 = a6[1];
      a6 += 3;
      v25 = (2 * v25) | (((unsigned __int16)~*(_WORD *)a2 >> 4) - v18) & 0x10000;
      if ( (unsigned __int64)a6 >= a7 )
        a6 = (unsigned __int16 *)((char *)a6 + a8);
    }
    while ( v9 );
    LOBYTE(v25) = 0;
    *a4 = *a4 & ~((unsigned __int16)(v25 << SBYTE2(a9)) >> 8) | ((unsigned __int16)(v25 << SBYTE2(a9)) >> 8) & (BYTE1(a9) ^ ((unsigned int)(v25 << SBYTE2(a9)) >> 16));
    ++a4;
  }
  result = *a1;
  v14 = (__int16 *)(a2 + 4);
  if ( (result & 0x80u) != 0LL )
  {
    while ( (unsigned __int64)v14 < a3 )
    {
      v19 = *((_BYTE *)v14 + 23) & 4 | *((_BYTE *)v14 + 19) & 8 | *((_BYTE *)v14 + 27) & 2 | *((_BYTE *)v14 + 15) & 0x10 | *((_BYTE *)v14 + 31) & 1 | *((_BYTE *)v14 + 11) & 0x20 | *((_BYTE *)v14 + 7) & 0x40 | *((_BYTE *)v14 + 3) & 0x80;
      v20 = ((((unsigned __int16)~v14[6] >> 4) - (unsigned int)a6[10]) >> 16) & 0x10 | ((((unsigned __int16)~v14[4] >> 4)
                                                                                       - (unsigned int)a6[7]) >> 16) & 0x20 | ((((unsigned __int16)~v14[8] >> 4) - (unsigned int)a6[13]) >> 16) & 8 | ((((unsigned __int16)~v14[2] >> 4) - (unsigned int)a6[4]) >> 16) & 0x40 | ((((unsigned __int16)~v14[10] >> 4) - (unsigned int)a6[16]) >> 16) & 4 | ((((unsigned __int16)~v14[12] >> 4) - (unsigned int)a6[19]) >> 16) & 2 | ((((unsigned __int16)~v14[14] >> 4) - (unsigned int)a6[22]) >> 16) & 1;
      result = a6[1];
      a6 += 24;
      *a4 = *a4 & ~v19 | v19 & (BYTE1(a9) ^ (((unsigned int)(((unsigned __int16)~*v14 >> 4) - result) >> 16) & 0x80 | v20));
      ++a4;
      if ( (unsigned __int64)a6 >= a7 )
      {
        result = a8;
        a6 = (unsigned __int16 *)((char *)a6 + a8);
      }
      v14 += 16;
    }
  }
  else
  {
    while ( (unsigned __int64)v14 < a3 )
    {
      v15 = ((((unsigned __int16)~v14[6] >> 4) - (unsigned int)a6[10]) >> 16) & 0x10 | ((((unsigned __int16)~v14[4] >> 4)
                                                                                       - (unsigned int)a6[7]) >> 16) & 0x20 | ((((unsigned __int16)~v14[8] >> 4) - (unsigned int)a6[13]) >> 16) & 8 | ((((unsigned __int16)~v14[2] >> 4) - (unsigned int)a6[4]) >> 16) & 0x40 | ((((unsigned __int16)~v14[10] >> 4) - (unsigned int)a6[16]) >> 16) & 4 | ((((unsigned __int16)~v14[12] >> 4) - (unsigned int)a6[19]) >> 16) & 2 | ((((unsigned __int16)~v14[14] >> 4) - (unsigned int)a6[22]) >> 16) & 1;
      result = a6[1];
      a6 += 24;
      *a4++ = BYTE1(a9) ^ (((unsigned int)(((unsigned __int16)~*v14 >> 4) - result) >> 16) & 0x80 | v15);
      if ( (unsigned __int64)a6 >= a7 )
      {
        result = a8;
        a6 = (unsigned __int16 *)((char *)a6 + a8);
      }
      v14 += 16;
    }
  }
  v16 = HIBYTE(a9);
  if ( HIBYTE(a9) )
  {
    v26 = 0;
    v21 = 8 - HIBYTE(a9);
    do
    {
      --v16;
      LOBYTE(v26) = *((_BYTE *)v14 + 3);
      v22 = *v14;
      v14 += 2;
      v23 = (unsigned __int16)~v22;
      v24 = a6[1];
      a6 += 3;
      v26 = (2 * v26) | ((v23 >> 4) - v24) & 0x10000;
      if ( (unsigned __int64)a6 >= a7 )
        a6 = (unsigned __int16 *)((char *)a6 + a8);
    }
    while ( v16 );
    LOBYTE(v26) = 0;
    result = (unsigned int)(v26 << v21) >> 16;
    LOBYTE(result) = *a4 & ~((unsigned __int16)(v26 << v21) >> 8) | ((unsigned __int16)(v26 << v21) >> 8) & (BYTE1(a9) ^ ((unsigned int)(v26 << v21) >> 16));
    *a4 = result;
  }
  return result;
}
