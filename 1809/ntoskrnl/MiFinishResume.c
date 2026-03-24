/*
 * XREFs of MiFinishResume @ 0x140151910
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1400C2B00 (KeSetEvent.c)
 *     PsGetNextPartition @ 0x14011FFE8 (PsGetNextPartition.c)
 *     MiDereferencePageRunsEx @ 0x14012B5F8 (MiDereferencePageRunsEx.c)
 *     MiReferencePageRuns @ 0x14012B6D0 (MiReferencePageRuns.c)
 *     MiPurgeZeroList @ 0x1401519BC (MiPurgeZeroList.c)
 *     MiPurgePartitionStandby @ 0x140151E1C (MiPurgePartitionStandby.c)
 */

LONG __fastcall MiFinishResume(unsigned int a1)
{
  __int64 v2; // rsi
  void *i; // rcx
  _QWORD *NextPartition; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rdi

  v2 = MiReferencePageRuns((__int64)&MiSystemPartition, 0);
  for ( i = 0LL; ; i = v5 )
  {
    NextPartition = PsGetNextPartition(i);
    v5 = NextPartition;
    if ( !NextPartition )
      break;
    v6 = *NextPartition;
    if ( a1 )
    {
      MiPurgePartitionStandby(*NextPartition, a1);
      *(_BYTE *)(v6 + 4764) = 0;
    }
    MiPurgeZeroList(v6);
  }
  if ( v2 )
    MiDereferencePageRunsEx(v2, 1);
  _InterlockedDecrement(&dword_14043AED0);
  stru_14043A788.Parameter = (void *)-1LL;
  return KeSetEvent(&stru_14043A770, 0, 0);
}
