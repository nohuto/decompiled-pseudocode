/*
 * XREFs of sub_180103FDC @ 0x180103FDC
 * Callers:
 *     sub_180104220 @ 0x180104220 (sub_180104220.c)
 * Callees:
 *     RtlExtendMemoryZone @ 0x1800025F0 (RtlExtendMemoryZone.c)
 *     RtlInterlockedPushEntrySList_0 @ 0x1800A01F0 (RtlInterlockedPushEntrySList_0.c)
 *     RtlCompareMemory @ 0x1800A0E80 (RtlCompareMemory.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     sub_180102AD8 @ 0x180102AD8 (sub_180102AD8.c)
 *     RtlAllocateMemoryBlockLookaside @ 0x180117010 (RtlAllocateMemoryBlockLookaside.c)
 */

signed __int64 __fastcall sub_180103FDC(unsigned int a1, const void *a2, unsigned int a3)
{
  __int64 v3; // r9
  __int64 v5; // rsi
  signed __int64 *v7; // r14
  signed __int64 v8; // rdi
  signed __int64 v10; // rbp
  signed __int64 v11; // rax
  signed __int64 v12; // rbx
  signed __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v3 = qword_180166A38;
  v5 = a1;
  if ( !qword_180166A38 )
  {
    sub_180102AD8();
    v3 = qword_180166A38;
    if ( !qword_180166A38 )
      return 0LL;
  }
  if ( !(_DWORD)v5 )
    return 0LL;
  v7 = (signed __int64 *)(v3 + 16 * (a3 % 0x191 + 1LL));
  v8 = v7[1];
  if ( !v8
    || *(_DWORD *)(v8 + 8) != a3
    || *(_DWORD *)(v8 + 12) != (_DWORD)v5
    || RtlCompareMemory(a2, (const void *)(v8 + 16), 8 * v5) != 8 * v5 )
  {
    while ( 1 )
    {
      v10 = *v7;
      v13 = v10;
      v8 = v10;
      if ( v10 )
        break;
LABEL_15:
      if ( (int)RtlAllocateMemoryBlockLookaside(*(_QWORD *)qword_180166A38, 8 * v5 + 16, &v13) < 0
        && ((int)RtlExtendMemoryZone(*(_QWORD *)(*(_QWORD *)qword_180166A38 + 16LL), 0x10000LL) < 0
         || (int)RtlAllocateMemoryBlockLookaside(*(_QWORD *)qword_180166A38, 8 * v5 + 16, &v13) < 0) )
      {
        return 0LL;
      }
      v12 = v13;
      *(_DWORD *)(v13 + 8) = a3;
      *(_DWORD *)(v12 + 12) = v5;
      *(_QWORD *)v12 = v10;
      memmove((void *)(v12 + 16), a2, 8 * v5);
      if ( v10 == _InterlockedCompareExchange64(v7, v12, v10) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(qword_180166A38 + 8));
        return v13;
      }
      RtlInterlockedPushEntrySList_0(*(PSLIST_HEADER *)(v13 - 16), (PSLIST_ENTRY)(v13 - 48));
    }
    v11 = v10;
    while ( *(_DWORD *)(v8 + 8) != a3
         || *(_DWORD *)(v8 + 12) != (_DWORD)v5
         || RtlCompareMemory(a2, (const void *)(v11 + 16), 8 * v5) != 8 * v5 )
    {
      v11 = *(_QWORD *)v8;
      v13 = v11;
      v8 = v11;
      if ( !v11 )
        goto LABEL_15;
    }
    v7[1] = v8;
  }
  return v8;
}
