/*
 * XREFs of RtlpHpAllocateHeap @ 0x1400098C4
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x1400099CC (RtlpHpMetadataAlloc.c)
 *     ExAllocateHeapPages @ 0x14015C990 (ExAllocateHeapPages.c)
 * Callees:
 *     RtlpHpCheckAllocationSizeLimit @ 0x1400097E0 (RtlpHpCheckAllocationSizeLimit.c)
 *     RtlpHpAllocateHeapInternal @ 0x14000981C (RtlpHpAllocateHeapInternal.c)
 *     RtlFreeHeap @ 0x14011EF00 (RtlFreeHeap.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     RtlpHpExtrasAppend @ 0x1402FCB5C (RtlpHpExtrasAppend.c)
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
  int v20; // [rsp+98h] [rbp+20h] BYREF

  LOWORD(v20) = a4;
  v6 = (a3 | HeapHandle[5]) & 0x93000F0B;
  if ( !(unsigned int)RtlpHpCheckAllocationSizeLimit(a2, (int)HeapHandle, (__int64)(HeapHandle + 8)) )
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
        v17 = ((__int64 (__fastcall *)(_DWORD *, _QWORD, __int64, __int64 *))RtlpInterceptorRoutines)(
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
  v13 = RtlpHpAllocateHeapInternal((__int64)HeapHandle, a2, v12, v6 & 0x13000003, &v20);
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
          v9 = ((__int64 (__fastcall *)(_DWORD *, void *, __int64, __int64))RtlpInterceptorRoutines)(
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
