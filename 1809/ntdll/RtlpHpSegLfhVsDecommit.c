/*
 * XREFs of RtlpHpSegLfhVsDecommit @ 0x180075BB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpSegPageRangeCommit @ 0x180015130 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegDescriptorValidate @ 0x1800154AC (RtlpHpSegDescriptorValidate.c)
 *     RtlpHpScheduleCompaction @ 0x18001D824 (RtlpHpScheduleCompaction.c)
 */

__int64 __fastcall RtlpHpSegLfhVsDecommit(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  int v4; // ebp
  __int64 v6; // rax
  __int64 v7; // r10
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 v10; // r9
  __int64 result; // rax
  unsigned int v12; // ebp
  __int64 v13; // r8
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r14

  v4 = a2;
  v6 = RtlpHpSegDescriptorValidate(a1, a2);
  v7 = v6 & *(_QWORD *)a1;
  v8 = a3 >> 12;
  v9 = v6;
  v10 = (v6 - v7) >> 5 << *(_BYTE *)(a1 + 8);
  result = 8LL;
  v12 = (unsigned int)(v4 - v10 - v7) >> 12;
  if ( (*(_BYTE *)(a1 + 13) & 8) != 0 )
    return RtlpHpSegPageRangeCommit((__int64 *)a1, v9, v12, -(int)v8, 0, 0LL);
  v13 = *(__int16 *)(a1 + 22);
  v14 = *(_QWORD *)(v13 + a1 + 8) >> *(_BYTE *)(a1 + 11);
  if ( v14 <= 8 )
    v14 = 8LL;
  v15 = *(_QWORD *)(v13 + a1 + 8) >> *(_BYTE *)(a1 + 12);
  if ( v15 <= 8 )
    v15 = 8LL;
  v16 = v8 + *(_QWORD *)(v13 + a1 + 16) + *(_QWORD *)(v13 + a1 + 24);
  if ( v16 > v14 )
  {
    result = RtlpHpScheduleCompaction();
    if ( (int)result < 0 )
      return RtlpHpSegPageRangeCommit((__int64 *)a1, v9, v12, -(int)v8, 0, 0LL);
  }
  if ( v16 > v15 )
    return RtlpHpSegPageRangeCommit((__int64 *)a1, v9, v12, -(int)v8, 0, 0LL);
  return result;
}
