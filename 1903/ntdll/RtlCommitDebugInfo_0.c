/*
 * XREFs of RtlCommitDebugInfo_0 @ 0x180075708
 * Callers:
 *     sub_18007533C @ 0x18007533C (sub_18007533C.c)
 *     RtlCommitDebugInfo @ 0x1800D72E0 (RtlCommitDebugInfo.c)
 *     RtlQueryProcessBackTraceInformation @ 0x1800D7300 (RtlQueryProcessBackTraceInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x1800D7490 (RtlQueryProcessHeapInformation.c)
 *     RtlQueryProcessLockInformation @ 0x1800D7870 (RtlQueryProcessLockInformation.c)
 *     sub_1800D7D40 @ 0x1800D7D40 (sub_1800D7D40.c)
 *     sub_1800D8110 @ 0x1800D8110 (sub_1800D8110.c)
 *     sub_1800D8790 @ 0x1800D8790 (sub_1800D8790.c)
 *     sub_1800DA48C @ 0x1800DA48C (sub_1800DA48C.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x18009C9E0 (ZwAllocateVirtualMemory.c)
 */

char *__fastcall RtlCommitDebugInfo_0(_QWORD *a1, unsigned int a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdi
  unsigned __int64 v7; // [rsp+50h] [rbp+18h] BYREF
  char *v8; // [rsp+58h] [rbp+20h] BYREF

  if ( a2 <= 0xFFFFFFF8 )
  {
    v3 = a1[9];
    v4 = a1[10];
    v5 = v3 + ((a2 + 7) & 0xFFFFFFF8);
    if ( v5 <= v4 )
    {
LABEL_6:
      a1[9] = v5;
      return (char *)a1 + v3;
    }
    if ( v5 < a1[11] )
    {
      v8 = (char *)a1 + v4;
      v7 = v5 - v4;
      if ( (int)ZwAllocateVirtualMemory(-1LL, &v8, 0LL, &v7, 4096, 4) >= 0 )
      {
        a1[10] += v7;
        v3 = a1[9];
        goto LABEL_6;
      }
    }
  }
  return 0LL;
}
