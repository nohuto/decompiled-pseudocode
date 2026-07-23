/*
 * XREFs of MiQueuePageAccessLog @ 0x140088970
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x14006D570 (MiTrimOrAgeWorkingSet.c)
 *     MiEmptyPageAccessLog @ 0x140088570 (MiEmptyPageAccessLog.c)
 *     MiReturnCcAccessLog @ 0x1400DFAEC (MiReturnCcAccessLog.c)
 *     MiCheckAndProcessCcAccessLog @ 0x14013B948 (MiCheckAndProcessCcAccessLog.c)
 *     MiGetCcAccessLog @ 0x140663C28 (MiGetCcAccessLog.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     MmFreeAccessPfnBuffer @ 0x1400E269C (MmFreeAccessPfnBuffer.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C5570 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall MiQueuePageAccessLog(_SLIST_ENTRY *P)
{
  unsigned int Alignment_low; // ebx
  int v3; // ebx

  *((_QWORD *)&P[1].Next + 1) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)&P->Next + 3) = dword_1404D8610;
  if ( !ExAcquireRundownProtection_0(&RunRef) )
    goto LABEL_9;
  Alignment_low = LOWORD(stru_1404D8600.Alignment);
  if ( LOWORD(stru_1404D8600.Alignment) >= (unsigned int)dword_1404D85E8 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_14043CF10, 0x64u);
    v3 = 0;
  }
  else
  {
    RtlpInterlockedPushEntrySList(&stru_1404D8600, P);
    if ( Alignment_low >= 8 && !Event.Header.SignalState )
      KeSetEvent(&Event, 0, 0);
    v3 = 1;
  }
  ExReleaseRundownProtection_0(&RunRef);
  if ( !v3 )
LABEL_9:
    MmFreeAccessPfnBuffer(P);
}
