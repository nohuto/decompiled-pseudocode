/*
 * XREFs of RtlpHpLfhSubsegmentInitialize @ 0x180062370
 * Callers:
 *     RtlpHpLfhSubsegmentCreate @ 0x180062088 (RtlpHpLfhSubsegmentCreate.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue64 @ 0x18000E97C (RtlpHeapGenerateRandomValue64.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

unsigned __int64 __fastcall RtlpHpLfhSubsegmentInitialize(
        signed __int64 *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5)
{
  int v8; // esi
  __int16 v9; // di
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rbx
  __int16 v12; // r12
  int v13; // eax
  __int64 v14; // rax
  char *v15; // rax
  _WORD *v16; // rdi
  unsigned __int64 v17; // rcx
  signed __int64 *v18; // rdi
  unsigned int i; // r8d
  __int16 HeapData_high; // di
  unsigned __int64 result; // rax
  int v23; // [rsp+70h] [rbp+18h]
  int v24; // [rsp+78h] [rbp+20h]

  v8 = a2 / a3;
  v9 = (a2
      - ((2
        * (a2 / a3
         + 4 * (unsigned int)(((unsigned __int64)(2 * ((8 * (a2 - 2 * (a2 / a3)) - 384) / (8 * a4 + 1))) + 63) >> 6))
        + 63) & 0xFFFFFFF0))
     / a4;
  v10 = 2
      * ((a2
        - ((2
          * (a2 / a3
           + 4 * (unsigned int)(((unsigned __int64)(2 * ((8 * (a2 - 2 * (a2 / a3)) - 384) / (8 * a4 + 1))) + 63) >> 6))
          + 63) & 0xFFFFFFF0))
       / a4);
  v11 = (v10 + 63) >> 6;
  v12 = (2 * (a2 / a3 + 4 * v11) + 63) & 0xFFF0;
  v24 = (2 * (a2 / a3 + 4 * v11) + 63) & 0xFFFFFFF0;
  memset(a1, 0, 0x30uLL);
  HIWORD(v23) = v12;
  a1[3] = 0LL;
  v13 = qword_1801634A8 ^ ((unsigned int)a1 >> 12);
  *((_BYTE *)a1 + 45) = v8;
  LOWORD(v23) = a4;
  *((_DWORD *)a1 + 10) = v23 ^ v13;
  _BitScanForward((unsigned int *)&v13, a3);
  *((_WORD *)a1 + 16) = v9;
  *((_BYTE *)a1 + 44) = v13;
  v14 = (unsigned __int16)(8 * (v11 + 6));
  *((_WORD *)a1 + 23) = v14;
  v15 = (char *)a1 + v14;
  *((_WORD *)a1 + 17) = v9;
  *((_BYTE *)a1 + 38) = 2;
  *(_WORD *)v15 = 1;
  v16 = v15 + 2;
  v17 = (2 * (unsigned __int64)(unsigned __int8)v8 - 2 + 1) >> 1;
  if ( v15 + 2 > &v15[2 * (unsigned __int8)v8] )
    v17 = 0LL;
  if ( v17 )
  {
    while ( v17 )
    {
      *v16++ = -1;
      --v17;
    }
  }
  v18 = a1 + 6;
  memset(a1 + 6, 0, (v10 + 7) >> 3);
  if ( (v10 & 0x3F) != 0 )
    v18[v10 >> 6] |= ~((1LL << (v10 & 0x3F)) - 1);
  if ( a2 > 0x1000 && (*(_BYTE *)(a5 + 62) & 1) != 0 )
  {
    if ( ((a4 - 1) & a4) != 0 )
    {
      for ( i = 4096; i < a2; i += 4096 )
      {
        if ( (i - v24) % a4 )
        {
          _bittestandset64(v18, 2 * ((i - v24) / a4));
          --*((_WORD *)a1 + 16);
          --*((_WORD *)a1 + 17);
          ++*((_BYTE *)a1 + 39);
        }
      }
    }
    else
    {
      HIWORD(v23) = a4 - ((a4 - 1) & (v24 + a4 - 1)) - 1 + v24;
      *((_DWORD *)a1 + 10) = v23 ^ qword_1801634A8 ^ ((unsigned int)a1 >> 12);
    }
  }
  HeapData_high = HIWORD(NtCurrentTeb()->HeapData);
  result = RtlpHeapGenerateRandomValue64() & 0x7F7F7F7F7F7F7F7FLL;
  *(_QWORD *)&RtlpLowFragHeapRandomData[8 * ((unsigned __int8)HeapData_high >> 3)] = result;
  return result;
}
