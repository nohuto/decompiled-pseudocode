/*
 * XREFs of LdrAddLoadAsDataTable @ 0x180072080
 * Callers:
 *     LdrResSearchResource @ 0x180056760 (LdrResSearchResource.c)
 * Callees:
 *     sub_18001A790 @ 0x18001A790 (sub_18001A790.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlReAllocateHeap @ 0x1800431F0 (RtlReAllocateHeap.c)
 *     sub_1800722A0 @ 0x1800722A0 (sub_1800722A0.c)
 *     LdrRemoveLoadAsDataTable @ 0x180073440 (LdrRemoveLoadAsDataTable.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

NTSTATUS __cdecl LdrAddLoadAsDataTable(
        PVOID Module,
        PWSTR FilePath,
        SIZE_T Size,
        HANDLE Handle,
        PACTIVATION_CONTEXT ActCtx)
{
  NTSTATUS v9; // ebx
  unsigned int v10; // edi
  PVOID *v11; // r8
  PVOID v12; // rdi
  __int64 v13; // rax
  SIZE_T v14; // rbx
  PVOID v15; // rax
  __int64 v16; // rdx
  PVOID *v17; // rax
  PVOID *Heap; // rax

  v9 = 0;
  if ( !Module )
    return -1073741811;
  sub_18001A790();
  RtlEnterCriticalSection(&stru_180164300);
  v10 = 0;
  v11 = (PVOID *)qword_180164328;
  while ( v10 < dword_180164330 )
  {
    if ( v11[6 * v10] == Module )
    {
      LdrRemoveLoadAsDataTable(Module, 0LL, 0LL, 0);
      v11 = (PVOID *)qword_180164328;
    }
    ++v10;
  }
  if ( v11 )
  {
    if ( dword_180164330 < (unsigned int)dword_1801642E8 )
      goto LABEL_6;
    Heap = (PVOID *)RtlReAllocateHeap(
                      NtCurrentPeb()->ProcessHeap,
                      0,
                      qword_180164328,
                      48LL * (unsigned int)(dword_1801642E8 + 32));
    v11 = Heap;
    if ( !Heap )
      goto LABEL_18;
    qword_180164328 = Heap;
    dword_1801642E8 += 32;
  }
  else
  {
    v17 = (PVOID *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x600uLL);
    v11 = v17;
    if ( !v17 )
      goto LABEL_18;
    qword_180164328 = v17;
    dword_1801642E8 = 32;
  }
  v9 = 0;
LABEL_6:
  v12 = 0LL;
  if ( FilePath )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( FilePath[v13] );
    v14 = 2 * v13 + 2;
    v15 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v14);
    v12 = v15;
    if ( v15 )
    {
      memmove(v15, FilePath, v14 - 2);
      v9 = 0;
      v11 = (PVOID *)qword_180164328;
      goto LABEL_11;
    }
LABEL_18:
    v9 = -1073741801;
    goto LABEL_21;
  }
LABEL_11:
  v16 = 6LL * (unsigned int)dword_180164330;
  v11[v16] = Module;
  v11[v16 + 1] = v12;
  v11[v16 + 2] = (PVOID)Size;
  v11[v16 + 3] = Handle;
  LODWORD(v11[v16 + 4]) = 1;
  v11[v16 + 5] = ActCtx;
  ++dword_180164330;
LABEL_21:
  RtlLeaveCriticalSection(&stru_180164300);
  if ( v9 >= 0 )
  {
    if ( FilePath )
      sub_1800722A0(Module, FilePath);
  }
  return v9;
}
