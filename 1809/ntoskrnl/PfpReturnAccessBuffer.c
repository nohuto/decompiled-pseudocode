/*
 * XREFs of PfpReturnAccessBuffer @ 0x1400E281C
 * Callers:
 *     PfpFlushBuffers @ 0x14066B030 (PfpFlushBuffers.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     MmFreeAccessPfnBuffer @ 0x1400E269C (MmFreeAccessPfnBuffer.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C5570 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall PfpReturnAccessBuffer(_SLIST_ENTRY *P)
{
  unsigned int Alignment_low; // ebx
  int v3; // ebx

  if ( !ExAcquireRundownProtection_0(&RunRef) )
    goto LABEL_8;
  Alignment_low = LOWORD(stru_1404D8600.Alignment);
  if ( LOWORD(stru_1404D8600.Alignment) >= (unsigned int)dword_1404D85E8 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_14043CF10, 0x64u);
    v3 = 0;
  }
  else
  {
    RtlpInterlockedPushEntrySList(&stru_1404D8600, P);
    if ( !Event.Header.SignalState && Alignment_low >= 8 )
      KeSetEvent(&Event, 0, 0);
    v3 = 1;
  }
  ExReleaseRundownProtection_0(&RunRef);
  if ( !v3 )
LABEL_8:
    MmFreeAccessPfnBuffer(P, 0);
}
