/*
 * XREFs of RtlpHeapTrkAllocCacheAligned @ 0x1800F9E60
 * Callers:
 *     RtlHeapTrkInitialize @ 0x1800F9AC0 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     NtQuerySystemInformation @ 0x1800A09A0 (NtQuerySystemInformation.c)
 */

char __fastcall RtlpHeapTrkAllocCacheAligned(__int64 *a1, unsigned __int64 *a2, int a3, unsigned __int64 a4)
{
  unsigned int v8; // ebx
  __int64 Heap; // rax
  unsigned __int64 v10; // r8
  unsigned int v11; // ebp
  unsigned __int64 v12; // r9
  __int64 v13; // rcx
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  bool v17; // cf
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  _DWORD v22[6]; // [rsp+20h] [rbp-18h] BYREF

  v8 = 0;
  if ( NtQuerySystemInformation((SYSTEM_INFORMATION_CLASS)58, v22, 4u, 0LL) < 0 )
    return 0;
  if ( !v22[0] )
    return 0;
  Heap = RtlAllocateHeap(qword_1801668B8, 0, 8 * a4);
  *a1 = Heap;
  v10 = Heap;
  if ( !Heap )
    return 0;
  v11 = v22[0] * ((unsigned int)(a3 + v22[0] - 1) / v22[0]);
  v12 = v11 * a4;
  if ( !is_mul_ok(v11, a4) )
    goto LABEL_5;
  v15 = v11 * a4 + v22[0];
  v16 = -1LL;
  v17 = v15 < v12;
  if ( v15 >= v12 )
    v16 = v11 * a4 + v22[0];
  v13 = qword_1801668B8;
  if ( v17 )
    goto LABEL_6;
  v18 = RtlAllocateHeap(qword_1801668B8, 8u, v16);
  *a2 = v18;
  if ( !v18 )
  {
    v10 = *a1;
LABEL_5:
    v13 = qword_1801668B8;
LABEL_6:
    RtlFreeHeap(v13, 0, v10);
    *a1 = 0LL;
    return 0;
  }
  v19 = v18 + v22[0] - v18 % v22[0];
  if ( a4 )
  {
    v20 = 0LL;
    do
    {
      v21 = v11 * v8++;
      *(_QWORD *)(*a1 + 8 * v20) = v19 + v21;
      v20 = v8;
    }
    while ( v8 < a4 );
  }
  return 1;
}
