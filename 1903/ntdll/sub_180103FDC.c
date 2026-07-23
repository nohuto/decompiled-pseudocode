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

char *__fastcall sub_180103FDC(unsigned int a1, const void *a2, unsigned int a3)
{
  __int64 v3; // r9
  __int64 v5; // rsi
  __int64 v7; // r14
  char *v8; // rdi
  char *v10; // rbp
  char *v11; // rax
  _DWORD *v12; // rbx
  PVOID Block; // [rsp+68h] [rbp+20h] BYREF

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
  v7 = v3 + 16 * (a3 % 0x191 + 1LL);
  v8 = *(char **)(v7 + 8);
  if ( !v8
    || *((_DWORD *)v8 + 2) != a3
    || *((_DWORD *)v8 + 3) != (_DWORD)v5
    || RtlCompareMemory(a2, v8 + 16, 8 * v5) != 8 * v5 )
  {
    while ( 1 )
    {
      v10 = *(char **)v7;
      Block = v10;
      v8 = v10;
      if ( v10 )
        break;
LABEL_15:
      if ( RtlAllocateMemoryBlockLookaside(*(PVOID *)qword_180166A38, 8 * v5 + 16, &Block) < 0
        && ((int)RtlExtendMemoryZone(*(_QWORD *)(*(_QWORD *)qword_180166A38 + 16LL), 0x10000LL) < 0
         || RtlAllocateMemoryBlockLookaside(*(PVOID *)qword_180166A38, 8 * v5 + 16, &Block) < 0) )
      {
        return 0LL;
      }
      v12 = Block;
      *((_DWORD *)Block + 2) = a3;
      v12[3] = v5;
      *(_QWORD *)v12 = v10;
      memmove(v12 + 4, a2, 8 * v5);
      if ( v10 == (char *)_InterlockedCompareExchange64(
                            (volatile signed __int64 *)v7,
                            (signed __int64)v12,
                            (signed __int64)v10) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(qword_180166A38 + 8));
        return (char *)Block;
      }
      RtlInterlockedPushEntrySList_0(*((PSLIST_HEADER *)Block - 2), (PSLIST_ENTRY)Block - 3);
    }
    v11 = v10;
    while ( *((_DWORD *)v8 + 2) != a3
         || *((_DWORD *)v8 + 3) != (_DWORD)v5
         || RtlCompareMemory(a2, v11 + 16, 8 * v5) != 8 * v5 )
    {
      v11 = *(char **)v8;
      Block = v11;
      v8 = v11;
      if ( !v11 )
        goto LABEL_15;
    }
    *(_QWORD *)(v7 + 8) = v8;
  }
  return v8;
}
