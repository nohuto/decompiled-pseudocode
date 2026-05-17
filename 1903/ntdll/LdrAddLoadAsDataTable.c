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

__int64 __fastcall LdrAddLoadAsDataTable(wchar_t *String2, _WORD *Src, __int64 a3, __int64 a4, __int64 a5)
{
  int v9; // ebx
  unsigned int v10; // edi
  __int64 v11; // r8
  void *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rbx
  void *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 Heap; // rax

  v9 = 0;
  if ( !String2 )
    return 3221225485LL;
  sub_18001A790();
  RtlEnterCriticalSection((__int64)&unk_180164300);
  v10 = 0;
  v11 = qword_180164328;
  while ( v10 < dword_180164330 )
  {
    if ( *(wchar_t **)(v11 + 48LL * v10) == String2 )
    {
      LdrRemoveLoadAsDataTable(String2);
      v11 = qword_180164328;
    }
    ++v10;
  }
  if ( v11 )
  {
    if ( dword_180164330 < (unsigned int)dword_1801642E8 )
      goto LABEL_6;
    Heap = RtlReAllocateHeap(
             (__int64)NtCurrentPeb()->ProcessHeap,
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
    v17 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 1536LL);
    v11 = v17;
    if ( !v17 )
      goto LABEL_18;
    qword_180164328 = v17;
    dword_1801642E8 = 32;
  }
  v9 = 0;
LABEL_6:
  v12 = 0LL;
  if ( Src )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( Src[v13] );
    v14 = 2 * v13 + 2;
    v15 = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v14);
    v12 = v15;
    if ( v15 )
    {
      memmove(v15, Src, v14 - 2);
      v9 = 0;
      v11 = qword_180164328;
      goto LABEL_11;
    }
LABEL_18:
    v9 = -1073741801;
    goto LABEL_21;
  }
LABEL_11:
  v16 = 6LL * (unsigned int)dword_180164330;
  *(_QWORD *)(v11 + 8 * v16) = String2;
  *(_QWORD *)(v11 + 8 * v16 + 8) = v12;
  *(_QWORD *)(v11 + 8 * v16 + 16) = a3;
  *(_QWORD *)(v11 + 8 * v16 + 24) = a4;
  *(_DWORD *)(v11 + 8 * v16 + 32) = 1;
  *(_QWORD *)(v11 + 8 * v16 + 40) = a5;
  ++dword_180164330;
LABEL_21:
  RtlLeaveCriticalSection((__int64)&unk_180164300);
  if ( v9 >= 0 )
  {
    if ( Src )
      sub_1800722A0(String2, Src);
  }
  return (unsigned int)v9;
}
