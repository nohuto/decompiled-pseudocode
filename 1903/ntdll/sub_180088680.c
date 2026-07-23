/*
 * XREFs of sub_180088680 @ 0x180088680
 * Callers:
 *     sub_180027B70 @ 0x180027B70 (sub_180027B70.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_18005A5EC @ 0x18005A5EC (sub_18005A5EC.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

__int64 __fastcall sub_180088680(const void **a1, unsigned int a2, bool *a3)
{
  PVOID ProcessHeap; // r15
  WCHAR *Heap; // rax
  unsigned int v8; // ebx
  WCHAR *v9; // rdi

  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = (WCHAR *)RtlAllocateHeap(ProcessHeap, 0, *(unsigned __int16 *)a1);
  v8 = 0;
  v9 = Heap;
  if ( Heap )
  {
    *a3 = 1;
    memmove(Heap, a1[1], *(unsigned __int16 *)a1);
    v9[(unsigned __int64)a2 >> 1] = 46;
    v9[(a2 >> 1) + 1] = 0;
    *a3 = !sub_18005A5EC(v9, 1);
    RtlFreeHeap(ProcessHeap, 0, v9);
  }
  else
  {
    *a3 = 0;
    return (unsigned int)-1073741801;
  }
  return v8;
}
