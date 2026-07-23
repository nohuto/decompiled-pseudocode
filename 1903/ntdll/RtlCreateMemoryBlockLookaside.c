/*
 * XREFs of RtlCreateMemoryBlockLookaside @ 0x18006EEB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitializeSListHead_0 @ 0x18006F07C (RtlInitializeSListHead_0.c)
 *     RtlCreateMemoryZone @ 0x18006F0A0 (RtlCreateMemoryZone.c)
 *     RtlDestroyMemoryZone @ 0x1800839B0 (RtlDestroyMemoryZone.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     RtlAllocateMemoryZone @ 0x180117130 (RtlAllocateMemoryZone.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl RtlCreateMemoryBlockLookaside(
        PVOID *MemoryBlockLookaside,
        ULONG Flags,
        ULONG InitialSize,
        ULONG MinimumBlockSize,
        ULONG MaximumBlockSize)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v7; // rdi
  unsigned int v8; // r15d
  unsigned __int64 v9; // rax
  SIZE_T i; // r12
  __int64 v11; // r14
  NTSTATUS result; // eax
  PVOID v13; // rbp
  int v14; // esi
  _SLIST_HEADER *v15; // rsi
  int v16; // r12d
  PVOID v17; // rax
  _SLIST_HEADER *v18; // rbp
  char v19; // cl
  char v20; // cl
  PVOID Block; // [rsp+20h] [rbp-38h] BYREF
  PVOID MemoryZone; // [rsp+60h] [rbp+8h] BYREF

  *MemoryBlockLookaside = 0LL;
  v5 = *(_QWORD *)&MinimumBlockSize;
  if ( Flags )
    return -1073741811;
  if ( !*(_QWORD *)&InitialSize )
    return -1073741811;
  if ( !*(_QWORD *)&MinimumBlockSize )
    return -1073741811;
  v7 = *(_QWORD *)&MaximumBlockSize;
  if ( !*(_QWORD *)&MaximumBlockSize
    || *(_QWORD *)&MaximumBlockSize < *(_QWORD *)&MinimumBlockSize
    || *(_QWORD *)&MaximumBlockSize > 0x8000000000000000uLL )
  {
    return -1073741811;
  }
  if ( ((*(_QWORD *)&MinimumBlockSize - 1LL) & *(_QWORD *)&MinimumBlockSize) != 0 )
  {
    v20 = 0;
    do
    {
      ++v20;
      v5 >>= 1;
    }
    while ( v5 );
    v5 = 1LL << v20;
  }
  if ( ((*(_QWORD *)&MaximumBlockSize - 1LL) & *(_QWORD *)&MaximumBlockSize) != 0 )
  {
    v19 = 0;
    do
    {
      ++v19;
      v7 >>= 1;
    }
    while ( v7 );
    v7 = 1LL << v19;
  }
  v8 = 1;
  if ( *(_QWORD *)&InitialSize < v7 )
    *(_QWORD *)&InitialSize = v7;
  v9 = v5;
  for ( i = (*(_QWORD *)&InitialSize + 48 * (*(_QWORD *)&InitialSize / v7) + 4095) & 0xFFFFFFFFFFFFF000uLL; v9 < v7; ++v8 )
    v9 *= 2LL;
  v11 = 32LL * v8;
  result = RtlCreateMemoryZone(&MemoryZone, (v11 + 4143) & 0xFFFFFFFFFFFFF000uLL, 0);
  if ( result >= 0 )
  {
    v13 = MemoryZone;
    v14 = RtlAllocateMemoryZone(MemoryZone, v11 + 64, &Block);
    if ( v14 < 0 )
    {
      RtlDestroyMemoryZone(v13);
      return v14;
    }
    else
    {
      v15 = (_SLIST_HEADER *)(((unsigned __int64)Block + 15) & 0xFFFFFFFFFFFFFFF0uLL);
      v16 = RtlCreateMemoryZone(&MemoryZone, i, 0);
      if ( v16 < 0 )
      {
        RtlDestroyMemoryZone(v13);
        return v16;
      }
      else
      {
        memset(v15, 0, v11 + 48);
        v15->Alignment = 0LL;
        v17 = MemoryZone;
        v15->Region = (ULONGLONG)v13;
        v18 = v15 + 3;
        v15[1].Alignment = (ULONGLONG)v17;
        v15[1].Region = v5;
        v15[2].Alignment = v7;
        *((_DWORD *)&v15[2].HeaderX64 + 2) = v8;
        while ( 1 )
        {
          RtlInitializeSListHead_0(v18);
          v18[1].Alignment = v5;
          v18[1].Region = (ULONGLONG)v15;
          if ( v5 == v7 )
            break;
          v5 *= 2LL;
          v18 += 2;
        }
        *MemoryBlockLookaside = v15;
        return 0;
      }
    }
  }
  return result;
}
