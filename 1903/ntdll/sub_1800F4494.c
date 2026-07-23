/*
 * XREFs of sub_1800F4494 @ 0x1800F4494
 * Callers:
 *     RtlDetectHeapLeaks @ 0x18006B5E0 (RtlDetectHeapLeaks.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     sub_1800F453C @ 0x1800F453C (sub_1800F453C.c)
 */

bool sub_1800F4494()
{
  unsigned __int64 *Heap; // rax
  unsigned __int64 *v1; // rbx
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rcx

  Heap = (unsigned __int64 *)RtlAllocateHeap(qword_180163B98, 0, 0x840uLL);
  qword_180163BA0 = (__int64)Heap;
  v1 = Heap;
  if ( !Heap )
    return 0;
  sub_1800F453C(Heap, 0LL);
  qword_180163BB8 = (__int64)&qword_180163BB0;
  qword_180163BB0 = (__int64)&qword_180163BB0;
  qword_180163BC8 = (__int64)&qword_180163BC0;
  qword_180163BC0 = (__int64)&qword_180163BC0;
  v2 = 0x100000LL;
  do
  {
    v3 = v2;
    v2 <<= 8;
  }
  while ( v2 >= v3 );
  v1[2] = -1LL;
  *v1 = v3;
  qword_180166988 = RtlAllocateHeap(qword_180163B98, 0, 0x28000uLL);
  return qword_180166988 != 0;
}
