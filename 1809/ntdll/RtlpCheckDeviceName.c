/*
 * XREFs of RtlpCheckDeviceName @ 0x18008B3C8
 * Callers:
 *     RtlGetFullPathName_Ustr @ 0x18000DB20 (RtlGetFullPathName_Ustr.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlDoesFileExists_UEx @ 0x180035770 (RtlDoesFileExists_UEx.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

__int64 __fastcall RtlpCheckDeviceName(const void **a1, unsigned int a2, bool *a3)
{
  void *ProcessHeap; // r15
  void *Heap; // rax
  unsigned int v8; // ebx
  unsigned __int64 v9; // rdi

  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = (void *)RtlAllocateHeap((__int64)ProcessHeap, 0, *(unsigned __int16 *)a1);
  v8 = 0;
  v9 = (unsigned __int64)Heap;
  if ( Heap )
  {
    *a3 = 1;
    memmove(Heap, a1[1], *(unsigned __int16 *)a1);
    *(_WORD *)(v9 + 2 * ((unsigned __int64)a2 >> 1)) = 46;
    *(_WORD *)(v9 + 2LL * ((a2 >> 1) + 1)) = 0;
    *a3 = !RtlDoesFileExists_UEx(v9, 1);
    RtlFreeHeap((__int64)ProcessHeap, 0, v9);
  }
  else
  {
    *a3 = 0;
    return (unsigned int)-1073741801;
  }
  return v8;
}
