/*
 * XREFs of MiFlushComplete @ 0x1402CA040
 * Callers:
 *     MiIssueAsynchronousFlush @ 0x1402CA1C8 (MiIssueAsynchronousFlush.c)
 * Callees:
 *     MiUnlockMdlWritePages @ 0x140024940 (MiUnlockMdlWritePages.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     MmUnmapLockedPages @ 0x14006AD00 (MmUnmapLockedPages.c)
 *     MiDecrementModifiedWriteCount @ 0x1400DFAD8 (MiDecrementModifiedWriteCount.c)
 *     MiReleaseControlAreaWaiters @ 0x1400E05A0 (MiReleaseControlAreaWaiters.c)
 *     MiRetardMdl @ 0x1402BFC7C (MiRetardMdl.c)
 *     MiFreeOverlappedFlushEntry @ 0x1402CA154 (MiFreeOverlappedFlushEntry.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

LONG __fastcall MiFlushComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int16 v7; // cx
  unsigned __int64 v8; // rbp
  __int64 *v9; // rax
  LONG result; // eax
  __int64 v11; // rcx

  v4 = *(_QWORD *)(a1 + 72);
  v7 = *(_WORD *)(v4 + 10);
  if ( (v7 & 0x200) != 0 )
  {
    MiRetardMdl(v4);
    v7 = *(_WORD *)(v4 + 10);
  }
  v8 = v4
     + 48
     + 8
     * ((*(unsigned int *)(v4 + 40) + 4095LL + (unsigned __int64)((*(_DWORD *)(v4 + 32) + *(_DWORD *)(v4 + 44)) & 0xFFF)) >> 12);
  if ( (v7 & 1) != 0 )
    MmUnmapLockedPages(*(PVOID *)(v4 + 24), (PMDL)v4);
  MiUnlockMdlWritePages((_QWORD *)(v4 + 48), v8, (_DWORD *)a2, a4);
  if ( *(int *)a2 < 0 )
    *(_QWORD *)(a2 + 8) = 0LL;
  v9 = MiDecrementModifiedWriteCount(*(_QWORD *)(a1 + 32), 0);
  if ( v9 )
    MiReleaseControlAreaWaiters(v9);
  if ( v4 != a1 + 80 )
  {
    ExFreePoolWithTag((PVOID)v4, 0);
    *(_QWORD *)(a1 + 72) = a1 + 80;
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  result = KeSetEvent((PRKEVENT)(a1 + 48), 0, 0);
  v11 = *(_QWORD *)(a1 + 40);
  if ( v11 )
  {
    if ( *(int *)a2 < 0 )
      *(_DWORD *)(v11 + 20) = *(_DWORD *)a2;
    result = _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 16), 0xFFFFFFFF);
    if ( result == 1 )
      return MiFreeOverlappedFlushEntry((PVOID)v11);
  }
  return result;
}
