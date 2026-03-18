/*
 * XREFs of MiFinishResume @ 0x140160B40
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     PsGetNextPartition @ 0x1401231DC (PsGetNextPartition.c)
 *     MiDereferencePageRunsEx @ 0x14012C280 (MiDereferencePageRunsEx.c)
 *     MiReferencePageRuns @ 0x14012CD00 (MiReferencePageRuns.c)
 *     MiPurgeZeroList @ 0x140160BEC (MiPurgeZeroList.c)
 *     MiPurgePartitionStandby @ 0x14016105C (MiPurgePartitionStandby.c)
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
  _InterlockedDecrement(&dword_140466650);
  stru_140465F28.Parameter = (void *)-1LL;
  return KeSetEvent(&stru_140465F10, 0, 0);
}
