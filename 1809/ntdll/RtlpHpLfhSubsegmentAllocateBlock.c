/*
 * XREFs of RtlpHpLfhSubsegmentAllocateBlock @ 0x18010CE74
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x1800110C0 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue32 @ 0x18000E9A4 (RtlpHeapGenerateRandomValue32.c)
 *     RtlpLfhBlockBitmapAllocate @ 0x18010C354 (RtlpLfhBlockBitmapAllocate.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x18010D048 (RtlpHpLfhSubsegmentCommitBlock.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentAllocateBlock(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  struct _TEB *v5; // r13
  unsigned __int64 v6; // r10
  __int64 v7; // rax
  unsigned int v9; // r15d
  unsigned int v11; // ebx
  unsigned __int16 HeapData_high; // si
  __int64 v13; // rbp
  __int16 RandomValue32; // ax
  __int16 v15; // ax
  int v16; // eax
  int v17; // esi
  unsigned int v18; // ebp
  int v19; // eax
  __int64 v20; // r9
  unsigned int v21; // ebx
  __int16 v22; // bx
  unsigned __int64 v24[9]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v25; // [rsp+88h] [rbp+10h]
  unsigned int v26; // [rsp+98h] [rbp+20h]

  v5 = NtCurrentTeb();
  v6 = 2 * (*(unsigned __int16 *)(a3 + 34) + (unsigned __int64)*(unsigned __int8 *)(a3 + 39));
  v24[1] = a3 + 48;
  v7 = *(unsigned __int8 *)(a2 + 1);
  v9 = (unsigned int)a3 >> 12;
  v24[0] = v6;
  v26 = RtlpSearchWidth[v7];
  LODWORD(v7) = *(_DWORD *)(a3 + 40) ^ ((unsigned int)a3 >> 12);
  v11 = (unsigned __int16)(qword_1801634A8 ^ v7);
  v25 = ((unsigned int)qword_1801634A8 ^ (unsigned int)v7) >> 16;
  HeapData_high = (unsigned __int8)HIWORD(v5->HeapData);
  v13 = a4 < v11 ? 3LL : 1LL;
  if ( HeapData_high == HIBYTE(HIWORD(v5->HeapData)) )
  {
    RandomValue32 = RtlpHeapGenerateRandomValue32();
    v15 = (RandomValue32 << 8) | (unsigned __int8)(RandomValue32 + 1);
  }
  else
  {
    v15 = (unsigned __int8)(HIWORD(v5->HeapData) ^ (HeapData_high + 1)) ^ HIWORD(v5->HeapData);
  }
  HIWORD(v5->HeapData) = v15;
  v16 = RtlpLfhBlockBitmapAllocate(
          v24,
          *(unsigned __int16 *)(a3 + 36),
          RtlpLowFragHeapRandomData[HeapData_high],
          v26,
          v13);
  *(_WORD *)(a3 + 36) = v16;
  v17 = v16;
  v18 = v25 + v16 * v11;
  if ( *(_BYTE *)(a3 + 45) <= 1u || (v19 = RtlpHpLfhSubsegmentCommitBlock(a1, a3, v18), v20 = 0LL, v19 >= 0) )
  {
    v20 = a3 + v18;
    if ( a4 < v11 )
    {
      v21 = v11 - a4;
      if ( v21 == 1 )
        v22 = 0x8000;
      else
        v22 = v21 & 0x3FFF;
      *(_WORD *)(((unsigned __int16)qword_1801634A8 ^ (unsigned __int16)v9 ^ (unsigned __int64)*(unsigned __int16 *)(a3 + 40))
               + v20
               - 2) = v22;
    }
    v17 = -1;
  }
  if ( v17 != -1 )
    _InterlockedAnd64(
      (volatile signed __int64 *)(a3 + 8 * ((unsigned __int64)(unsigned int)(2 * v17) >> 6) + 48),
      ~(3LL << ((2 * v17) & 0x3F)));
  return v20;
}
