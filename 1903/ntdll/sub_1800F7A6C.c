/*
 * XREFs of sub_1800F7A6C @ 0x1800F7A6C
 * Callers:
 *     RtlHeapTrkInitialize @ 0x1800F76D0 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     ZwQuerySystemInformation @ 0x18009CDA0 (ZwQuerySystemInformation.c)
 */

char __fastcall sub_1800F7A6C(__int64 *a1, unsigned __int64 *a2, int a3, unsigned __int64 a4)
{
  unsigned int v8; // ebx
  __int64 Heap; // rax
  __int64 v10; // r8
  unsigned int v11; // ebp
  unsigned __int64 v12; // r9
  __int64 v13; // rcx
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  bool v17; // cf
  unsigned __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // rdx
  unsigned int v21; // [rsp+20h] [rbp-18h]

  v8 = 0;
  if ( (int)ZwQuerySystemInformation() < 0 )
    return 0;
  if ( !v21 )
    return 0;
  Heap = RtlAllocateHeap(qword_180166A08, 0, 8 * a4);
  *a1 = Heap;
  v10 = Heap;
  if ( !Heap )
    return 0;
  v11 = v21 * ((a3 + v21 - 1) / v21);
  v12 = v11 * a4;
  if ( !is_mul_ok(v11, a4) )
    goto LABEL_5;
  v15 = v11 * a4 + v21;
  v16 = -1LL;
  v17 = v15 < v12;
  if ( v15 >= v12 )
    v16 = v11 * a4 + v21;
  v13 = qword_180166A08;
  if ( v17 )
    goto LABEL_6;
  v18 = RtlAllocateHeap(qword_180166A08, 8u, v16);
  *a2 = v18;
  if ( !v18 )
  {
    v10 = *a1;
LABEL_5:
    v13 = qword_180166A08;
LABEL_6:
    RtlFreeHeap(v13, 0, v10);
    *a1 = 0LL;
    return 0;
  }
  if ( a4 )
  {
    v19 = 0LL;
    do
    {
      v20 = v11 * v8++;
      *(_QWORD *)(*a1 + 8 * v19) = v18 + v21 - v18 % v21 + v20;
      v19 = v8;
    }
    while ( v8 < a4 );
  }
  return 1;
}
