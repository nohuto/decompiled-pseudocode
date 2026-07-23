/*
 * XREFs of RtlpHpVsContextAddSubsegment @ 0x1401284E8
 * Callers:
 *     RtlpHpVsContextAllocateInternal @ 0x140061C80 (RtlpHpVsContextAllocateInternal.c)
 * Callees:
 *     RtlpHpVsFreeChunkInsert @ 0x1400615A0 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsChunkAlignSplit @ 0x140061B60 (RtlpHpVsChunkAlignSplit.c)
 */

BOOLEAN __fastcall RtlpHpVsContextAddSubsegment(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 *v5; // rcx
  unsigned __int64 v6; // r8
  __int64 v7; // rdx
  unsigned __int64 v8; // rax

  v4 = a1 + 32;
  v5 = (__int64 *)(a1 + 40);
  v6 = v4 ^ *v5;
  if ( (*(_QWORD *)v6 ^ v6) != v4 )
    __fastfail(3u);
  v7 = a2 ^ v4;
  *(_QWORD *)a2 = v7;
  *(_QWORD *)(a2 + 8) = a2 ^ v6;
  *(_QWORD *)v6 = a2 ^ v6;
  *v5 = v7;
  if ( (*(_DWORD *)(a1 + 176) & 1) != 0 && ((a2 + 80) & 0xFFF) != 0 )
  {
    v8 = RtlpHpVsChunkAlignSplit((__int64)v5, a2, a2 + 48);
    if ( v8 )
      RtlpHpVsFreeChunkInsert((_RTL_RB_TREE *)a1, a2, v8);
  }
  return RtlpHpVsFreeChunkInsert((_RTL_RB_TREE *)a1, a2, a2 + 48);
}
