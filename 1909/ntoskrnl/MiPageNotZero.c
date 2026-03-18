/*
 * XREFs of MiPageNotZero @ 0x1402D91A8
 * Callers:
 *     MiArePageContentsZero @ 0x1402D8DBC (MiArePageContentsZero.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x1401C8590 (KeZeroPages.c)
 */

__int64 __fastcall MiPageNotZero(__m128i *BugCheckParameter1, ULONG_PTR BugCheckParameter2)
{
  int v4; // r8d
  unsigned int v5; // r14d
  int v6; // r15d
  __m128i *v7; // r10
  __int64 v8; // r9
  signed __int64 v9; // rax
  ULONG v10; // ebp
  ULONG_PTR v11; // rcx
  __int64 v12; // rbx

  _InterlockedAdd(&dword_140466014, 1u);
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = BugCheckParameter1;
  v8 = 4096LL;
  if ( BugCheckParameter1 < &BugCheckParameter1[256] )
  {
    while ( 1 )
    {
      if ( v7->m128i_i32[0] )
      {
        v9 = (char *)v7 - (char *)BugCheckParameter1;
        if ( v8 != 4096 )
          v9 = v8;
        ++v4;
        v8 = v9;
        if ( v4 != 1 )
          goto LABEL_12;
        v5 = (unsigned __int16)v7 & 0xFFF;
        v6 = v7->m128i_i32[0];
        if ( ((v7->m128i_i32[0] - 1) & v7->m128i_i32[0]) != 0 )
          break;
      }
      v7 = (__m128i *)((char *)v7 + 4);
      if ( v7 >= &BugCheckParameter1[256] )
        goto LABEL_10;
    }
    v4 = 2;
  }
LABEL_10:
  if ( v4 == 1 )
    _InterlockedAdd(&dword_140466010, 1u);
LABEL_12:
  v10 = 299;
  if ( v4 != 1 )
    v10 = 295;
  v11 = 0LL;
  if ( v4 != 1 )
    v11 = v8;
  if ( (MmPageValidationAction & 1) != 0 )
    KeBugCheckEx(v10, (ULONG_PTR)BugCheckParameter1, BugCheckParameter2, v11, -(__int64)(v4 != 1) & 0x1000);
  v12 = *(_QWORD *)(qword_140465E88 + 8 * ((*(_QWORD *)(48 * BugCheckParameter2 - 0x57FFFFFFFD8LL) >> 40) & 0x3FFLL));
  KeSetEvent(*(PRKEVENT *)(v12 + 312), 0, 0);
  if ( (ULONG_PTR *)v12 != &MiSystemPartition )
    KeSetEvent(qword_1404682F8, 0, 0);
  if ( (MiFlags & 0x30) == 0x20 && !_InterlockedCompareExchange(&dword_140465F7C, 1, 0) )
  {
    stru_140465F90.List.Flink = 0LL;
    dword_140465F80 = v6;
    qword_140465F88 = v5 + (BugCheckParameter2 << 12);
    stru_140465F90.WorkerRoutine = (void (__fastcall *)(void *))MiBadMemoryLogger;
    stru_140465F90.Parameter = &dword_140465F78;
    dword_140465F78 = v10;
    ExQueueWorkItem(&stru_140465F90, DelayedWorkQueue);
  }
  return KeZeroPages(BugCheckParameter1, 0x1000uLL);
}
