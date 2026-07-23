/*
 * XREFs of MiFlushComplete @ 0x1402B4B40
 * Callers:
 *     MiIssueAsynchronousFlush @ 0x1402B4CC8 (MiIssueAsynchronousFlush.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x14001E3A8 (MiReleaseControlAreaWaiters.c)
 *     MiUnlockMdlWritePages @ 0x14001E4F0 (MiUnlockMdlWritePages.c)
 *     MiDecrementModifiedWriteCount @ 0x140022DA0 (MiDecrementModifiedWriteCount.c)
 *     MmUnmapLockedPages @ 0x140033F00 (MmUnmapLockedPages.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     MiRetardMdl @ 0x1402A85DC (MiRetardMdl.c)
 *     MiFreeOverlappedFlushEntry @ 0x1402B4C54 (MiFreeOverlappedFlushEntry.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

LONG __fastcall MiFlushComplete(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int16 v5; // cx
  unsigned __int64 v6; // rbp
  __int64 *v7; // rax
  LONG result; // eax
  __int64 v9; // rcx

  v2 = *(_QWORD *)(a1 + 72);
  v5 = *(_WORD *)(v2 + 10);
  if ( (v5 & 0x200) != 0 )
  {
    MiRetardMdl(v2);
    v5 = *(_WORD *)(v2 + 10);
  }
  v6 = v2
     + 48
     + 8
     * ((*(unsigned int *)(v2 + 40) + 4095LL + (unsigned __int64)((*(_DWORD *)(v2 + 32) + *(_DWORD *)(v2 + 44)) & 0xFFF)) >> 12);
  if ( (v5 & 1) != 0 )
    MmUnmapLockedPages(*(PVOID *)(v2 + 24), (PMDL)v2);
  MiUnlockMdlWritePages((_QWORD *)(v2 + 48), v6);
  if ( *(int *)a2 < 0 )
    *(_QWORD *)(a2 + 8) = 0LL;
  v7 = MiDecrementModifiedWriteCount(*(_QWORD *)(a1 + 32), 0);
  if ( v7 )
    MiReleaseControlAreaWaiters(v7);
  if ( v2 != a1 + 80 )
  {
    ExFreePoolWithTag((PVOID)v2, 0);
    *(_QWORD *)(a1 + 72) = a1 + 80;
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  result = KeSetEvent((PRKEVENT)(a1 + 48), 0, 0);
  v9 = *(_QWORD *)(a1 + 40);
  if ( v9 )
  {
    if ( *(int *)a2 < 0 )
      *(_DWORD *)(v9 + 20) = *(_DWORD *)a2;
    result = _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 16), 0xFFFFFFFF);
    if ( result == 1 )
      return MiFreeOverlappedFlushEntry((PVOID)v9);
  }
  return result;
}
