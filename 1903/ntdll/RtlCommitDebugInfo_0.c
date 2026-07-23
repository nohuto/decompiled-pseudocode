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

PVOID __cdecl RtlCommitDebugInfo_0(PRTL_DEBUG_INFORMATION Buffer, SIZE_T Size)
{
  SIZE_T OffsetFree; // rax
  SIZE_T CommitSize; // rcx
  SIZE_T v5; // rdi
  ULONG_PTR v7; // [rsp+50h] [rbp+18h] BYREF
  char *v8; // [rsp+58h] [rbp+20h] BYREF

  if ( (unsigned int)Size <= 0xFFFFFFF8 )
  {
    OffsetFree = Buffer->OffsetFree;
    CommitSize = Buffer->CommitSize;
    v5 = OffsetFree + (((_DWORD)Size + 7) & 0xFFFFFFF8);
    if ( v5 <= CommitSize )
    {
LABEL_6:
      Buffer->OffsetFree = v5;
      return (char *)Buffer + OffsetFree;
    }
    if ( v5 < Buffer->ViewSize )
    {
      v8 = (char *)Buffer + CommitSize;
      v7 = v5 - CommitSize;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)&v8, 0LL, &v7, 0x1000u, 4u) >= 0 )
      {
        Buffer->CommitSize += v7;
        OffsetFree = Buffer->OffsetFree;
        goto LABEL_6;
      }
    }
  }
  return 0LL;
}
