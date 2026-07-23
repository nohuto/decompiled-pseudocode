/*
 * XREFs of MiPageNotZero @ 0x1402BFD38
 * Callers:
 *     MiArePageContentsZero @ 0x1402BF958 (MiArePageContentsZero.c)
 * Callees:
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x1401C0A90 (KeZeroPages.c)
 */

__int64 __fastcall MiPageNotZero(__m128i *BugCheckParameter1, ULONG_PTR BugCheckParameter2)
{
  int v4; // r8d
  unsigned int v5; // r14d
  int v6; // r15d
  __m128i *v7; // r9
  ULONG v8; // ebp
  __int64 v9; // rbx

  _InterlockedAdd(&dword_14043B934, 1u);
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = BugCheckParameter1;
  if ( BugCheckParameter1 < &BugCheckParameter1[256] )
  {
    while ( 1 )
    {
      if ( v7->m128i_i32[0] )
      {
        if ( ++v4 != 1 )
          goto LABEL_10;
        v5 = (unsigned __int16)v7 & 0xFFF;
        v6 = v7->m128i_i32[0];
        if ( ((v7->m128i_i32[0] - 1) & v7->m128i_i32[0]) != 0 )
          break;
      }
      v7 = (__m128i *)((char *)v7 + 4);
      if ( v7 >= &BugCheckParameter1[256] )
        goto LABEL_8;
    }
    v4 = 2;
LABEL_8:
    if ( v4 == 1 )
      _InterlockedAdd(&dword_14043B930, 1u);
  }
LABEL_10:
  v8 = 299;
  if ( v4 != 1 )
    v8 = 295;
  if ( (MmPageValidationAction & 1) != 0 )
    KeBugCheckEx(v8, (ULONG_PTR)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  v9 = *(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(48 * BugCheckParameter2 - 0x57FFFFFFFD8LL) >> 40) & 0x3FFLL));
  KeSetEvent(*(PRKEVENT *)(v9 + 312), 0, 0);
  if ( (ULONG_PTR *)v9 != &MiSystemPartition )
    KeSetEvent(qword_14043DB38, 0, 0);
  if ( (MiFlags & 0x30) == 0x20 && !_InterlockedCompareExchange(&dword_14043B89C, 1, 0) )
  {
    stru_14043B8B0.List.Flink = 0LL;
    dword_14043B8A0 = v6;
    qword_14043B8A8 = v5 + (BugCheckParameter2 << 12);
    stru_14043B8B0.WorkerRoutine = (void (__fastcall *)(void *))MiBadMemoryLogger;
    stru_14043B8B0.Parameter = &dword_14043B898;
    dword_14043B898 = v8;
    ExQueueWorkItem(&stru_14043B8B0, DelayedWorkQueue);
  }
  return KeZeroPages(BugCheckParameter1, 0x1000uLL);
}
