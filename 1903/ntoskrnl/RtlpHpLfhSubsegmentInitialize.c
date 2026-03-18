/*
 * XREFs of RtlpHpLfhSubsegmentInitialize @ 0x140111B88
 * Callers:
 *     RtlpHpLfhSubsegmentCreate @ 0x140111840 (RtlpHpLfhSubsegmentCreate.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue64 @ 0x140111DDC (RtlpHeapGenerateRandomValue64.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentInitialize(
        signed __int64 *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5)
{
  int v8; // ebx
  unsigned int v9; // edi
  int v10; // r15d
  unsigned int v11; // r12d
  unsigned __int64 v12; // r13
  unsigned int v13; // eax
  __int64 v14; // rcx
  char *v15; // rcx
  char *v16; // rax
  char *v17; // rdi
  unsigned __int64 v18; // rcx
  signed __int64 *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned __int64 v22; // rcx
  __int16 Ucb_high; // di
  __int64 result; // rax
  int v26; // [rsp+80h] [rbp+18h]

  v8 = a2 / a3;
  v9 = (8 * (a2 - 2 * (a2 / a3)) - 384) / (8 * a4 + 2);
  v10 = (2 * (a2 / a3 + 4 * (((unsigned __int64)(2 * v9) + 63) >> 6)) + 63) & 0xFFFFFFF0;
  v11 = (a2 - v10) / a4;
  if ( v9 < v11 )
    v11 = (8 * (a2 - 2 * (a2 / a3)) - 384) / (8 * a4 + 2);
  v12 = 2 * v11;
  memset(a1, 0, 0x30uLL);
  HIWORD(v26) = v10;
  LOWORD(v26) = a4;
  *((_DWORD *)a1 + 10) = v26 ^ qword_1404367A8 ^ ((unsigned int)a1 >> 12);
  _BitScanForward(&v13, a3);
  *((_BYTE *)a1 + 45) = v8;
  *((_BYTE *)a1 + 44) = v13;
  *((_WORD *)a1 + 16) = v11;
  v14 = (unsigned __int16)(8 * (((v12 + 63) >> 6) + 6));
  *((_WORD *)a1 + 23) = v14;
  v15 = (char *)a1 + v14;
  *((_WORD *)a1 + 17) = v11;
  *((_BYTE *)a1 + 38) = 2;
  v16 = &v15[2 * (unsigned __int8)v8];
  *(_WORD *)v15 = 1;
  v17 = v15 + 2;
  v18 = (2 * (unsigned __int64)(unsigned __int8)v8 - 2 + 1) >> 1;
  if ( v17 > v16 )
    v18 = 0LL;
  if ( v18 )
  {
    while ( v18 )
    {
      *(_WORD *)v17 = -1;
      v17 += 2;
      --v18;
    }
  }
  v19 = a1 + 6;
  memset(a1 + 6, 0, (v12 + 7) >> 3);
  v22 = (2 * (_BYTE)v11) & 0x3F;
  if ( ((2 * (_BYTE)v11) & 0x3F) != 0 )
    v19[v12 >> 6] |= ~((1LL << v22) - 1);
  if ( a2 > 0x1000 && (*(_BYTE *)(a5 + 62) & 1) != 0 )
  {
    v20 = a4 - 1;
    if ( ((unsigned int)v20 & a4) != 0 )
    {
      v21 = 4096LL;
      if ( a2 > 0x1000 )
      {
        do
        {
          v20 = ((int)v21 - v10) % a4;
          if ( (_DWORD)v20 )
          {
            v22 = 2 * (((int)v21 - v10) / a4);
            _bittestandset64(v19, v22);
            --*((_WORD *)a1 + 16);
            --*((_WORD *)a1 + 17);
            ++*((_BYTE *)a1 + 39);
          }
          v21 = (unsigned int)(v21 + 4096);
        }
        while ( (unsigned int)v21 < a2 );
      }
    }
    else
    {
      v22 = (unsigned __int16)v10 - ((unsigned int)v20 & ((unsigned __int16)v10 + a4 - 1));
      if ( (_DWORD)v22 + a4 - 1 + a4 * v11 != a2 )
        NT_ASSERT("FirstBlockOffset + BlockSize * BlockCount == SubsegmentSize");
      HIWORD(v26) = v10 - ((a4 - 1) & (v10 + a4 - 1)) + a4 - 1;
      *((_DWORD *)a1 + 10) = v26 ^ qword_1404367A8 ^ ((unsigned int)a1 >> 12);
    }
  }
  Ucb_high = HIWORD(KeGetCurrentThread()[1].Ucb);
  result = RtlpHeapGenerateRandomValue64(v22, v20, v21) & 0x7F7F7F7F7F7F7F7FLL;
  *(_QWORD *)&RtlpLowFragHeapRandomData[8 * ((unsigned __int8)Ucb_high >> 3)] = result;
  return result;
}
