/*
 * XREFs of LdrAddLoadAsDataTable @ 0x1800783D0
 * Callers:
 *     LdrResSearchResource @ 0x180037450 (LdrResSearchResource.c)
 * Callees:
 *     LdrpInitMuiCrits @ 0x18000A42C (LdrpInitMuiCrits.c)
 *     RtlReAllocateHeap @ 0x18000C320 (RtlReAllocateHeap.c)
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     LdrLogNewDataDllLoad @ 0x1800785F0 (LdrLogNewDataDllLoad.c)
 *     LdrRemoveLoadAsDataTable @ 0x180078F30 (LdrRemoveLoadAsDataTable.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
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
  LdrpInitMuiCrits();
  RtlEnterCriticalSection((__int64)&LoadAsDataCrits);
  v10 = 0;
  v11 = LoadAsDataTable;
  while ( v10 < LoadAsDataTableCount )
  {
    if ( *(wchar_t **)(v11 + 48LL * v10) == String2 )
    {
      LdrRemoveLoadAsDataTable(String2);
      v11 = LoadAsDataTable;
    }
    ++v10;
  }
  if ( v11 )
  {
    if ( LoadAsDataTableCount < (unsigned int)LoadAsDataTableBlockCount )
      goto LABEL_6;
    Heap = RtlReAllocateHeap(
             (__int64)NtCurrentPeb()->ProcessHeap,
             0,
             LoadAsDataTable,
             48LL * (unsigned int)(LoadAsDataTableBlockCount + 32));
    v11 = Heap;
    if ( !Heap )
      goto LABEL_18;
    LoadAsDataTable = Heap;
    LoadAsDataTableBlockCount += 32;
  }
  else
  {
    v17 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 1536LL);
    v11 = v17;
    if ( !v17 )
      goto LABEL_18;
    LoadAsDataTable = v17;
    LoadAsDataTableBlockCount = 32;
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
      v11 = LoadAsDataTable;
      goto LABEL_11;
    }
LABEL_18:
    v9 = -1073741801;
    goto LABEL_21;
  }
LABEL_11:
  v16 = 6LL * (unsigned int)LoadAsDataTableCount;
  *(_QWORD *)(v11 + 8 * v16) = String2;
  *(_QWORD *)(v11 + 8 * v16 + 8) = v12;
  *(_QWORD *)(v11 + 8 * v16 + 16) = a3;
  *(_QWORD *)(v11 + 8 * v16 + 24) = a4;
  *(_DWORD *)(v11 + 8 * v16 + 32) = 1;
  *(_QWORD *)(v11 + 8 * v16 + 40) = a5;
  ++LoadAsDataTableCount;
LABEL_21:
  RtlLeaveCriticalSection((__int64)&LoadAsDataCrits);
  if ( v9 >= 0 )
  {
    if ( Src )
      LdrLogNewDataDllLoad(String2, Src);
  }
  return (unsigned int)v9;
}
