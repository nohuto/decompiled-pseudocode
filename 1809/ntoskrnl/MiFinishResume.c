/*
 * XREFs of MiFinishResume @ 0x140151A10
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     PsGetNextPartition @ 0x140120058 (PsGetNextPartition.c)
 *     MiDereferencePageRunsEx @ 0x14012B6C8 (MiDereferencePageRunsEx.c)
 *     MiReferencePageRuns @ 0x14012B7A0 (MiReferencePageRuns.c)
 *     MiPurgeZeroList @ 0x140151ABC (MiPurgeZeroList.c)
 *     MiPurgePartitionStandby @ 0x140151F1C (MiPurgePartitionStandby.c)
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
  _InterlockedDecrement(&dword_14043BF90);
  stru_14043B848.Parameter = (void *)-1LL;
  return KeSetEvent(&stru_14043B830, 0, 0);
}
