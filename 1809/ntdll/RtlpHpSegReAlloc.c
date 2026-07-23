/*
 * XREFs of RtlpHpSegReAlloc @ 0x180014CBC
 * Callers:
 *     RtlpHpReAllocateHeap @ 0x18001556C (RtlpHpReAllocateHeap.c)
 * Callees:
 *     RtlpHpAllocateHeapInternal @ 0x18001491C (RtlpHpAllocateHeapInternal.c)
 *     RtlpHpSegFree @ 0x180014AE0 (RtlpHpSegFree.c)
 *     RtlpHpSegPageRangeCommit @ 0x180015130 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegDescriptorValidate @ 0x1800154AC (RtlpHpSegDescriptorValidate.c)
 *     RtlpHpSizeHeap @ 0x180017AC0 (RtlpHpSizeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpSegPageRangeShrink @ 0x18001D914 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpExtrasGet @ 0x18005B220 (RtlpHpExtrasGet.c)
 *     RtlpHpExtrasSetPresent @ 0x18005B340 (RtlpHpExtrasSetPresent.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x18005B4B8 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeFree @ 0x1800663DC (RtlpHpLargeFree.c)
 *     RtlpLogHeapFailure @ 0x18009F7CC (RtlpLogHeapFailure.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     RtlpCallInterceptRoutine @ 0x1800F2E74 (RtlpCallInterceptRoutine.c)
 *     RtlpLogHeapFreeEvent @ 0x180105E78 (RtlpLogHeapFreeEvent.c)
 */

__int64 __fastcall RtlpHpSegReAlloc(__int64 a1, unsigned int a2, const void *a3, __int64 a4)
{
  __int64 v8; // rsi
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rdx
  unsigned int v11; // edi
  __int64 v12; // rdi
  void *HeapInternal; // rax
  void *v14; // rbp
  size_t v15; // r8
  int v16; // edx
  int v17; // r8d
  unsigned int v18; // esi
  int v19; // eax
  const void *v20; // rcx
  __int64 v22; // rdx
  unsigned __int8 *v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned __int8 *v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  char v30; // cl
  BOOL v31; // esi
  __int64 v32; // rcx
  int v33[10]; // [rsp+30h] [rbp-28h] BYREF

  v8 = RtlpHpSegDescriptorValidate(a1, a3);
  if ( !v8 )
    return -1LL;
  v9 = *(_QWORD *)(a4 + 32);
  v10 = (v9 + 4095) >> 12;
  if ( (unsigned int)((_DWORD)v10 << 12) < v9 )
    return 0LL;
  v11 = (unsigned int)(v10 + (1 << *(_BYTE *)(a1 + 9)) - 1) >> *(_BYTE *)(a1 + 9);
  if ( (*(_BYTE *)(v8 + 24) & 0xCu) >= 8 || v11 > *(unsigned __int8 *)(v8 + 31) )
  {
    if ( (a2 & 0x2000000) == 0 )
    {
      v12 = *(_QWORD *)(a1 + 56);
      HeapInternal = (void *)RtlpHpAllocateHeapInternal((char *)v12, *(_QWORD *)(a4 + 24), v9, a2, v33);
      v14 = HeapInternal;
      if ( !HeapInternal )
        return (__int64)v14;
      v15 = *(_QWORD *)a4;
      if ( *(_QWORD *)a4 >= *(_QWORD *)(a4 + 24) )
        v15 = *(_QWORD *)(a4 + 24);
      memmove(HeapInternal, a3, v15);
      if ( *(_DWORD *)(a4 + 16) )
      {
        v22 = (__int64)a3 + *(_QWORD *)a4 + 16;
        if ( (a2 & 0x10000000) == 0 )
          v22 = (__int64)a3 + *(_QWORD *)a4;
        v23 = (unsigned __int8 *)((v22 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
        v24 = (__int64)v14 + *(_QWORD *)(a4 + 24) + 16;
        if ( (a2 & 0x10000000) == 0 )
          v24 = (__int64)v14 + *(_QWORD *)(a4 + 24);
        memmove((void *)((v24 + 15) & 0xFFFFFFFFFFFFFFF0uLL), v23, 16 * (v23[3] + 1LL));
        RtlpHpExtrasSetPresent(v12, v14, a2);
      }
      v16 = 0;
      v17 = *(_DWORD *)(v12 + 220);
      if ( v17 )
        LOBYTE(v16) = v17 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
      v18 = (a2 | *(_DWORD *)(v12 + 20)) & 0x11000000 | 1;
      if ( !v16 )
        v18 = (a2 | *(_DWORD *)(v12 + 20)) & 0x11000001;
      if ( (v18 & 0x1000000) == 0 )
      {
        if ( *(_DWORD *)(v12 + 24) )
        {
          v29 = RtlpHpExtrasGet(v12, a3, v18, 0LL);
          if ( (unsigned __int64)(v29 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          {
            v30 = *(_BYTE *)(v29 + 2);
            if ( (v30 & 0xF) != 0 && (int)RtlpCallInterceptRoutine(v30 & 0xF, v12, (_DWORD)a3, 3, v29 + 16) < 0 )
              return (__int64)v14;
          }
        }
      }
      if ( (*(_DWORD *)(v12 + 20) & 0x10000000) != 0 && RtlpHpSizeHeap(v12, a3, v18) == -1 )
      {
        RtlpLogHeapFailure(9, v12, (_DWORD)a3, 0, 0LL, 0LL);
        return (__int64)v14;
      }
      if ( (_WORD)a3 )
      {
        v19 = 0;
      }
      else
      {
        v25 = RtlCSparseBitmapBitmaskRead(&unk_180166908, 2 * (((unsigned __int64)a3 - qword_180166948) >> 20));
        if ( !v25 )
          goto LABEL_50;
        v19 = v25 - 1;
      }
      if ( v19 != 2 )
      {
        RtlpHpSegFree(v12 + 192LL * v19 + 256, (unsigned __int64)a3, v18);
        return (__int64)v14;
      }
LABEL_50:
      v31 = RtlpHpLargeFree(v12, a3, v18) != 0;
      if ( RtlGetCurrentServiceSessionId() )
        v32 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v32 = 2147353472LL;
      if ( *(_BYTE *)v32 && (NtCurrentPeb()->TracingFlags & 1) != 0 && v31 )
        RtlpLogHeapFreeEvent(v12, a3, 3LL);
      return (__int64)v14;
    }
    return 0LL;
  }
  if ( (unsigned int)v10 > (unsigned __int16)~*(_WORD *)(v8 + 28) && (int)RtlpHpSegPageRangeCommit(a1, 0, 0LL) < 0 )
    return 0LL;
  if ( *(_DWORD *)(a4 + 16) )
  {
    v26 = (__int64)a3 + *(_QWORD *)a4 + 16;
    if ( (a2 & 0x10000000) == 0 )
      v26 = (__int64)a3 + *(_QWORD *)a4;
    v27 = (unsigned __int8 *)((v26 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
    v28 = (__int64)a3 + *(_QWORD *)(a4 + 24) + 16;
    if ( (a2 & 0x10000000) == 0 )
      v28 = (__int64)a3 + *(_QWORD *)(a4 + 24);
    memmove((void *)((v28 + 15) & 0xFFFFFFFFFFFFFFF0uLL), v27, 16 * (v27[3] + 1LL));
  }
  if ( v11 < *(unsigned __int8 *)(v8 + 31) )
    RtlpHpSegPageRangeShrink(a1, v8, v11, a2);
  v20 = a3;
  *(_DWORD *)(v8 + 4) = (v11 << *(_BYTE *)(a1 + 8)) - *(_DWORD *)(a4 + 24);
  return (__int64)v20;
}
