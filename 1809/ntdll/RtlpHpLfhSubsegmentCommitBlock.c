/*
 * XREFs of RtlpHpLfhSubsegmentCommitBlock @ 0x18010D048
 * Callers:
 *     RtlpHpLfhSubsegmentAllocateBlock @ 0x18010CE74 (RtlpHpLfhSubsegmentAllocateBlock.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x18006E5D8 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x180077440 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentCommitBlock(__int64 a1, __int64 a2, unsigned int a3)
{
  int v6; // ebp
  int v7; // r14d
  char v8; // cl
  unsigned int v9; // r14d
  int v10; // r15d
  int v11; // edi
  char v13; // [rsp+78h] [rbp+10h] BYREF
  int v14; // [rsp+88h] [rbp+20h] BYREF

  v13 = -1;
  v6 = (unsigned __int16)qword_1801634A8 ^ *(unsigned __int16 *)(a2 + 40) ^ (unsigned __int16)((unsigned int)a2 >> 12);
  v7 = RtlpHpLfhSubsegmentIncBlockCounts(a1, a2, a3, v6, &v14, 0, &v13);
  if ( v7 != -1 )
  {
    v8 = *(_BYTE *)(a2 + 44);
    v9 = v7 << v8;
    v10 = v14 << v8;
    v11 = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 24)))(
            *(_QWORD *)a1,
            a2 + v9,
            (unsigned int)(v14 << v8));
    if ( v11 < 0 )
    {
      RtlpHpLfhSubsegmentDecBlockCounts(a1, a2, a3, v6);
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 24));
      return (unsigned int)v11;
    }
    RtlpHpLfhSubsegmentIncBlockCounts(a1, a2, v9, v10, &v14, 1, &v13);
  }
  return 0;
}
