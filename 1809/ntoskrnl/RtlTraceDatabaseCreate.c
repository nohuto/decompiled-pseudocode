/*
 * XREFs of RtlTraceDatabaseCreate @ 0x1402F5BC0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     RtlpTraceDatabaseAllocate @ 0x1402F5F7C (RtlpTraceDatabaseAllocate.c)
 */

PRTL_TRACE_DATABASE __stdcall RtlTraceDatabaseCreate(
        ULONG Buckets,
        SIZE_T MaximumSize,
        ULONG Flags,
        ULONG Tag,
        RTL_TRACE_HASH_FUNCTION HashFunction)
{
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rdi
  void *v12; // rcx
  void *v13; // rax
  size_t v14; // r8
  PRTL_TRACE_DATABASE result; // rax

  if ( Buckets > 0x100000 )
    return 0LL;
  v9 = RtlpTraceDatabaseAllocate((8LL * Buckets + 4368) & 0xFFFFFFFFFFFFF000uLL);
  v10 = v9;
  if ( !v9 )
    return 0LL;
  *(_QWORD *)(v9 + 16) = 0LL;
  *(_QWORD *)(v9 + 48) = 0LL;
  v11 = v9 + 216;
  *(_QWORD *)(v9 + 144) = 0LL;
  *(_QWORD *)(v9 + 136) = 0LL;
  *(_DWORD *)(v9 + 8) = Tag;
  *(_DWORD *)v9 = -1412576052;
  *(_DWORD *)(v9 + 4) = Flags | 2;
  *(_QWORD *)(v9 + 24) = MaximumSize;
  *(_QWORD *)(v9 + 32) = 4096LL;
  memset((void *)(v9 + 152), 0, 0x40uLL);
  if ( (*(_DWORD *)(v10 + 4) & 4) != 0 )
  {
    *(_QWORD *)(v10 + 56) = 0LL;
  }
  else
  {
    *(_QWORD *)(v10 + 64) = 0LL;
    *(_DWORD *)(v10 + 72) = 0;
    *(_DWORD *)(v10 + 56) = 1;
    *(_DWORD *)(v10 + 84) = 0;
    *(_WORD *)(v10 + 80) = 1;
    *(_BYTE *)(v10 + 82) = 6;
    *(_QWORD *)(v10 + 96) = v10 + 88;
    *(_QWORD *)(v10 + 88) = v10 + 88;
  }
  v12 = (void *)(v11 + 56);
  *(_DWORD *)(v10 + 112) = Buckets;
  v13 = RtlStackTraceHashFunction;
  if ( HashFunction )
    v13 = HashFunction;
  *(_QWORD *)(v10 + 128) = v13;
  *(_QWORD *)(v11 + 16) = 0LL;
  *(_DWORD *)v11 = -1412580421;
  *(_QWORD *)(v11 + 8) = v10;
  *(_QWORD *)(v11 + 24) = 4096LL;
  v14 = 8LL * *(unsigned int *)(v10 + 112);
  *(_QWORD *)(v10 + 16) = v11;
  *(_QWORD *)(v10 + 120) = v12;
  memset(v12, 0, v14);
  *(_QWORD *)(v11 + 32) = v10;
  *(_QWORD *)(v11 + 40) = v10 + 4096;
  result = (PRTL_TRACE_DATABASE)v10;
  *(_QWORD *)(v11 + 48) = v11 + 8 * (*(unsigned int *)(v10 + 112) + 7LL);
  return result;
}
