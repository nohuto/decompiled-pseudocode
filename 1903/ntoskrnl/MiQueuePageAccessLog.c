/*
 * XREFs of MiQueuePageAccessLog @ 0x1401134B4
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x1400480E0 (MiTrimOrAgeWorkingSet.c)
 *     MiReturnCcAccessLog @ 0x1401132A4 (MiReturnCcAccessLog.c)
 *     MiCheckAndProcessCcAccessLog @ 0x14017D060 (MiCheckAndProcessCcAccessLog.c)
 *     MiGetCcAccessLog @ 0x1406BD07C (MiGetCcAccessLog.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     MmFreeAccessPfnBuffer @ 0x140098114 (MmFreeAccessPfnBuffer.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CBA30 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall MiQueuePageAccessLog(_SLIST_ENTRY *P)
{
  unsigned int Alignment_low; // ebx
  int v3; // ebx

  *((_QWORD *)&P[1].Next + 1) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)&P->Next + 3) = dword_140503A10;
  if ( !ExAcquireRundownProtection_0(&RunRef) )
    goto LABEL_10;
  Alignment_low = LOWORD(ListHead.Alignment);
  if ( LOWORD(ListHead.Alignment) >= (unsigned int)dword_1405039E8 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_140467910, 0x64u);
    v3 = 0;
  }
  else
  {
    RtlpInterlockedPushEntrySList(&ListHead, P);
    if ( Alignment_low >= 8 && !Event.Header.SignalState )
      KeSetEvent(&Event, 0, 0);
    v3 = 1;
  }
  ExReleaseRundownProtection_0(&RunRef);
  if ( !v3 )
LABEL_10:
    MmFreeAccessPfnBuffer(P, 1);
}
