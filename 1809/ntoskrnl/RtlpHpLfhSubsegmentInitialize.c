/*
 * XREFs of RtlpHpLfhSubsegmentInitialize @ 0x1400093AC
 * Callers:
 *     RtlpHpLfhSubsegmentCreate @ 0x140009064 (RtlpHpLfhSubsegmentCreate.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue64 @ 0x140009608 (RtlpHeapGenerateRandomValue64.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentInitialize(
        char *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5)
{
  int v7; // r12d
  unsigned int v9; // edi
  unsigned __int64 v10; // r15
  int v11; // r14d
  int v12; // eax
  char *v13; // rax
  _WORD *v14; // rdi
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned int v18; // edi
  __int16 Ucb_high; // di
  __int64 result; // rax
  int v21; // [rsp+78h] [rbp+10h]
  __int16 v23; // [rsp+88h] [rbp+20h]

  v7 = a2 / a3;
  v9 = (a2
      - ((2
        * (a2 / a3
         + 4 * (unsigned int)(((unsigned __int64)(2 * ((8 * (a2 - 2 * (a2 / a3)) - 384) / (8 * a4 + 1))) + 63) >> 6))
        + 63) & 0xFFFFFFF0))
     / a4;
  v10 = 2 * v9;
  v23 = 8 * ((v10 + 63) >> 6);
  v11 = (2 * (a2 / a3 + 4 * ((v10 + 63) >> 6)) + 63) & 0xFFFFFFF0;
  memset(a1, 0, 0x30uLL);
  *((_QWORD *)a1 + 3) = 0LL;
  HIWORD(v21) = v11;
  v12 = qword_14040F0E8 ^ ((unsigned int)a1 >> 12);
  a1[45] = v7;
  LOWORD(v21) = a4;
  *((_DWORD *)a1 + 10) = v21 ^ v12;
  _BitScanForward((unsigned int *)&v12, a3);
  *((_WORD *)a1 + 16) = v9;
  a1[44] = v12;
  *((_WORD *)a1 + 17) = v9;
  *((_WORD *)a1 + 23) = v23 + 48;
  v13 = &a1[(unsigned __int16)(v23 + 48)];
  a1[38] = 2;
  *(_WORD *)v13 = 1;
  v14 = v13 + 2;
  v15 = (2 * (unsigned __int64)(unsigned __int8)v7 - 2 + 1) >> 1;
  if ( v13 + 2 > &v13[2 * (unsigned __int8)v7] )
    v15 = 0LL;
  if ( v15 )
  {
    while ( v15 )
    {
      *v14++ = -1;
      --v15;
    }
  }
  memset(a1 + 48, 0, (v10 + 7) >> 3);
  v17 = v10 & 0x3F;
  if ( (v10 & 0x3F) != 0 )
    *(_QWORD *)&a1[8 * (v10 >> 6) + 48] |= ~((1LL << v17) - 1);
  if ( a2 > 0x1000 && (*(_BYTE *)(a5 + 62) & 1) != 0 )
  {
    if ( ((a4 - 1) & a4) != 0 )
    {
      v18 = 4096;
      do
      {
        v16 = (v18 - v11) % a4;
        if ( (_DWORD)v16 )
        {
          v17 = 2 * ((v18 - v11) / a4);
          _bittestandset64((signed __int64 *)a1 + 6, v17);
          --*((_WORD *)a1 + 16);
          --*((_WORD *)a1 + 17);
          ++a1[39];
        }
        v18 += 4096;
      }
      while ( v18 < a2 );
    }
    else
    {
      v17 = v11 + a4;
      LOWORD(v17) = (a4 - 1) & (v11 + a4 - 1);
      HIWORD(v21) = a4 - v17 - 1 + v11;
      *((_DWORD *)a1 + 10) = v21 ^ qword_14040F0E8 ^ ((unsigned int)a1 >> 12);
    }
  }
  Ucb_high = HIWORD(KeGetCurrentThread()[1].Ucb);
  result = RtlpHeapGenerateRandomValue64(v17, v16, 1LL) & 0x7F7F7F7F7F7F7F7FLL;
  RtlpLowFragHeapRandomData[(unsigned __int8)Ucb_high >> 3] = result;
  return result;
}
