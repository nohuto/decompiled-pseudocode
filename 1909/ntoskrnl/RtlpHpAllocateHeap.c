/*
 * XREFs of RtlpHpAllocateHeap @ 0x1401101D4
 * Callers:
 *     ExAllocateHeapPages @ 0x1400F4544 (ExAllocateHeapPages.c)
 *     RtlpHpMetadataAlloc @ 0x140110058 (RtlpHpMetadataAlloc.c)
 * Callees:
 *     RtlpHpAllocateHeapInternal @ 0x1401102DC (RtlpHpAllocateHeapInternal.c)
 *     RtlpHpCheckAllocationSizeLimit @ 0x140110384 (RtlpHpCheckAllocationSizeLimit.c)
 *     RtlFreeHeap @ 0x1401108B0 (RtlFreeHeap.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     RtlpHpExtrasAppend @ 0x14031AF34 (RtlpHpExtrasAppend.c)
 */

void *__fastcall RtlpHpAllocateHeap(_DWORD *HeapHandle, unsigned __int64 a2, int a3, __int16 a4)
{
  unsigned int v6; // edi
  __int64 v7; // rcx
  int v8; // esi
  int v9; // r15d
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // r8
  __int64 v13; // rax
  int v14; // r9d
  void *v15; // rbx
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // [rsp+80h] [rbp+8h] BYREF
  __int16 v20; // [rsp+98h] [rbp+20h] BYREF

  v20 = a4;
  v6 = (a3 | HeapHandle[5]) & 0x93000F0B;
  if ( !(unsigned int)RtlpHpCheckAllocationSizeLimit(a2, HeapHandle, HeapHandle + 8) )
    return 0LL;
  v7 = 0LL;
  v19 = 0LL;
  v8 = 0;
  v9 = -1073741823;
  if ( (v6 & 0x1000000) == 0 )
  {
    v8 = HeapHandle[6];
    if ( v8 )
    {
      v6 |= 8u;
      if ( (_WORD)v8 == 1 )
      {
        v17 = ((__int64 (__fastcall *)(_DWORD *, _QWORD, __int64, __int64 *))CLFS_LSN_NULL_EXT)(
                HeapHandle,
                0LL,
                1LL,
                &v19);
        v7 = v19;
      }
      else
      {
        v17 = -1073741823;
      }
      if ( v17 < 0 )
        return 0LL;
    }
  }
  v10 = v7 + a2;
  v11 = v7 + a2 + 16;
  if ( (v6 & 0x10000000) == 0 )
    v11 = v10;
  if ( (v6 & 0x20000F08) != 0 )
    v11 = ((v11 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
  v12 = 1LL;
  if ( v11 )
    v12 = v11;
  if ( v12 < a2 || a2 > 0x7FFFFFFFFFFFFFFFLL )
    return 0LL;
  v13 = RtlpHpAllocateHeapInternal(HeapHandle, a2, v12, v6 & 0x13000003, &v20);
  v15 = (void *)v13;
  if ( v13 )
  {
    if ( (v6 & 0x30000F08) != 0 )
    {
      v18 = RtlpHpExtrasAppend((_DWORD)HeapHandle, v13, a2, v14, v19, v6, 0);
      if ( v8 )
      {
        *(_BYTE *)(v18 + 2) ^= (v8 ^ *(_BYTE *)(v18 + 2)) & 0xF;
        if ( (_WORD)v8 == 1 )
          v9 = ((__int64 (__fastcall *)(_DWORD *, void *, __int64, __int64))CLFS_LSN_NULL_EXT)(
                 HeapHandle,
                 v15,
                 2LL,
                 v18 + 16);
        if ( v9 < 0 )
        {
          RtlFreeHeap(HeapHandle, 0, v15);
          return 0LL;
        }
      }
    }
  }
  return v15;
}
