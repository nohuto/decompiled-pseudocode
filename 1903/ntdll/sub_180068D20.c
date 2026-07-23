/*
 * XREFs of sub_180068D20 @ 0x180068D20
 * Callers:
 *     sub_180068BD4 @ 0x180068BD4 (sub_180068BD4.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     sub_18009BB28 @ 0x18009BB28 (sub_18009BB28.c)
 *     sub_18009BC14 @ 0x18009BC14 (sub_18009BC14.c)
 */

__int64 __fastcall sub_180068D20(_QWORD **a1)
{
  int v2; // ebx
  _QWORD *Heap; // r8
  unsigned int v4; // esi
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdx
  unsigned int v10; // edx
  int v11; // edx
  int *v12; // r8
  int v13; // r9d
  int v14; // r10d
  int v15; // r10d

  v2 = 4;
  while ( 1 )
  {
    Heap = *a1;
    if ( !*a1 )
    {
      v4 = 1 << v2;
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)(16 * (1 << v2) + 8));
      if ( Heap )
      {
        *Heap = 0LL;
        Heap[1] = 0LL;
        Heap[2] = 0LL;
        if ( v4 )
        {
          v5 = Heap + 1;
          v6 = v4;
          do
          {
            sub_18009BB28(v5, v6);
            v5 = (_QWORD *)(v7 + 16);
            v6 = v8 - 1;
          }
          while ( v6 );
        }
        *a1 = Heap;
      }
      if ( !Heap )
        return (unsigned int)-1;
    }
    v9 = *(unsigned int *)Heap;
    if ( (unsigned int)v9 < 1 << v2 )
      break;
    ++v2;
    ++a1;
    if ( (unsigned int)(v2 - 4) >= 8 )
      return (unsigned int)-1;
  }
  if ( !(unsigned __int8)sub_18009BC14(&Heap[2 * v9 + 1]) )
  {
    v15 = v13 - 1;
    while ( !(unsigned __int8)sub_18009BC14(&v12[4 * (v15 & (v11 + 1)) + 2]) )
      ;
    v14 = *v12;
  }
  v10 = v13 | v11;
  *v12 = v14 + 1;
  return v10;
}
