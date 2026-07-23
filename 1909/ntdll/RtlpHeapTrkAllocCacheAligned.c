/*
 * XREFs of RtlpHeapTrkAllocCacheAligned @ 0x1800F7B4C
 * Callers:
 *     RtlHeapTrkInitialize @ 0x1800F77B0 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     NtQuerySystemInformation @ 0x18009D550 (NtQuerySystemInformation.c)
 */

char __fastcall RtlpHeapTrkAllocCacheAligned(void **a1, unsigned __int64 *a2, int a3, unsigned __int64 a4)
{
  unsigned int v8; // ebx
  PVOID Heap; // rax
  void *v10; // r8
  unsigned int v11; // ebp
  unsigned __int64 v12; // r9
  PVOID v13; // rcx
  unsigned __int64 v15; // rcx
  SIZE_T v16; // rax
  bool v17; // cf
  unsigned __int64 v18; // rax
  char *v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  unsigned int v22[6]; // [rsp+20h] [rbp-18h] BYREF

  v8 = 0;
  if ( NtQuerySystemInformation(SystemRecommendedSharedDataAlignment, v22, 4u, 0LL) < 0 )
    return 0;
  if ( !v22[0] )
    return 0;
  Heap = RtlAllocateHeap(HeapHandle, 0, 8 * a4);
  *a1 = Heap;
  v10 = Heap;
  if ( !Heap )
    return 0;
  v11 = v22[0] * ((a3 + v22[0] - 1) / v22[0]);
  v12 = v11 * a4;
  if ( !is_mul_ok(v11, a4) )
    goto LABEL_5;
  v15 = v11 * a4 + v22[0];
  v16 = -1LL;
  v17 = v15 < v12;
  if ( v15 >= v12 )
    v16 = v11 * a4 + v22[0];
  v13 = HeapHandle;
  if ( v17 )
    goto LABEL_6;
  v18 = (unsigned __int64)RtlAllocateHeap(HeapHandle, 8u, v16);
  *a2 = v18;
  if ( !v18 )
  {
    v10 = *a1;
LABEL_5:
    v13 = HeapHandle;
LABEL_6:
    RtlFreeHeap(v13, 0, v10);
    *a1 = 0LL;
    return 0;
  }
  v19 = (char *)(v18 + v22[0] - v18 % v22[0]);
  if ( a4 )
  {
    v20 = 0LL;
    do
    {
      v21 = v11 * v8++;
      *((_QWORD *)*a1 + v20) = &v19[v21];
      v20 = v8;
    }
    while ( v8 < a4 );
  }
  return 1;
}
